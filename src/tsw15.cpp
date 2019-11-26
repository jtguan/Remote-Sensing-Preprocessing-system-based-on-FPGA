#include <stdio.h>
#include "new.h"
#include "stdlib.h"
#include "math.h"
#include "ff.h"
//#include "ff1.h"
#include <iostream>
#include <fstream>
//#include "sds_utils.h"
//#include "hls_half.h"


#define PI 3.14159//圆周率宏定义
#define LENGTH_NAME_BMP 30//bmp图片文件名的最大长度

using namespace std;

//变量定义
BITMAPFILEHEADER strHead;
RGBQUAD strPla[256];//256色调色板
BITMAPINFOHEADER strInfo;

//显示位图文件头信息
//void showBmpHead(BITMAPFILEHEADER pBmpHead) {
//	cout << "位图文件头:" << endl;
//	cout << "文件大小:" << pBmpHead.bfSize << endl;
//	cout << "保留字_1:" << pBmpHead.bfReserved1 << endl;
//	cout << "保留字_2:" << pBmpHead.bfReserved2 << endl;
//	cout << "实际位图数据的偏移字节数:" << pBmpHead.bfOffBits << endl << endl;
//}

//void showBmpInforHead(tagBITMAPINFOHEADER pBmpInforHead) {
//	cout << "位图信息头:" << endl;
//	cout << "结构体的长度:" << pBmpInforHead.biSize << endl;
//	cout << "位图宽:" << pBmpInforHead.biWidth << endl;
//	cout << "位图高:" << pBmpInforHead.biHeight << endl;
//	cout << "biPlanes平面数:" << pBmpInforHead.biPlanes << endl;
//	cout << "biBitCount采用颜色位数:" << pBmpInforHead.biBitCount << endl;
//	cout << "压缩方式:" << pBmpInforHead.biCompression << endl;
//	cout << "biSizeImage实际位图数据占用的字节数:" << pBmpInforHead.biSizeImage << endl;
//	cout << "X方向分辨率:" << pBmpInforHead.biXPelsPerMeter << endl;
//	cout << "Y方向分辨率:" << pBmpInforHead.biYPelsPerMeter << endl;
//	cout << "使用的颜色数:" << pBmpInforHead.biClrUsed1 << endl;
//	cout << "重要颜色数:" << pBmpInforHead.biClrImportant << endl;
//}

void conv2d_or(float *CON_IN, float *KER, float *CON_OUT, float *bias, int width, int height, int ksize, int dim_in, int dim_out)
{
    int W = width;
    int H = height;
    int N = ksize;
    int CW = W-2;
    int CH = H-2;

    for(int order=0; order<dim_out; order++){
        for(int j=0; j<CH; j++){
            for(int m=0; m<CW; m++){
                float result = 0.0;
                for(int i=0; i<N; i++){
                    for(int k=0; k<N; k++){
                        for(int di=0; di<dim_in; di++){
                            result += CON_IN[(j*W+i*W+m+k)*dim_in+di] * KER[(order*ksize*ksize*dim_in)+(i*N+k)*dim_in+di];
                        }
                    }
                }
                (*(CON_OUT+order+((j*CW+m)*dim_out))) = result + bias[order];
            }
        }
    }
}

void relu(float *RE, int cwidth, int cheight, int dim){
    int pixnum = cwidth * cheight * dim;
    int pix=0;
    for(pix; pix<pixnum; pix++){
        if((*(RE + pix))<0)
            (*(RE + pix))=0;
    }
}

void split(float *con2_in, float *con2_out, float *kerneldata2, float *kerbias2, int height, int width, int condim2, int en_re)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * height * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * height * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * height * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * height * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata11+(i*544)+j))=(*(con2_in+(i*4128)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata12+(i*544)+j))=(*(con2_in+(i*4128)+512+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata21+(i*544)+j))=(*(con2_in+(i*4128)+512*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata22+(i*544)+j))=(*(con2_in+(i*4128)+512*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_1(inputdata11, kerneldata2, outdata11, kerbias2, inputdata12, kerneldata2, outdata12, kerbias2,
             inputdata21, kerneldata2, outdata21, kerbias2, inputdata22, kerneldata2, outdata22, kerbias2, en_re, 0);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim2 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata31+(i*544)+j))=(*(con2_in+(i*4128)+512*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata32+(i*544)+j))=(*(con2_in+(i*4128)+512*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata41+(i*544)+j))=(*(con2_in+(i*4128)+512*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<544; j++){
            (*(inputdata42+(i*544)+j))=(*(con2_in+(i*4128)+512*7+j));
        }
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_1(inputdata31, kerneldata2, outdata31, kerbias2, inputdata32, kerneldata2, outdata32, kerbias2,
             inputdata41, kerneldata2, outdata41, kerbias2, inputdata42, kerneldata2, outdata42, kerbias2, en_re, 0);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(con2_out+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(con2_out+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(con2_out+(i*4096)+8192+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(con2_out+(i*4096)+12288+j))=(*(outdata22+(i*512)+j));
		}
	}

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(con2_out+(i*4096)+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(con2_out+(i*4096)+512+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(con2_out+(i*4096)+8192+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(con2_out+(i*4096)+12288+j))=(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_spl(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));//66*34*17
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));//64*32*16
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata11+(i*578)+j))=(*(merin+(i*4386)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata12+(i*578)+j))=(*(merin+(i*4386)+544+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata21+(i*578)+j))=(*(merin+(i*4386)+544*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata22+(i*578)+j))=(*(merin+(i*4386)+544*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_1(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
             inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata31+(i*578)+j))=(*(merin+(i*4386)+544*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata32+(i*578)+j))=(*(merin+(i*4386)+544*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata41+(i*578)+j))=(*(merin+(i*4386)+544*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata42+(i*578)+j))=(*(merin+(i*4386)+544*7+j));
        }
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_1(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_spl48(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata11+(i*1632)+j))=(*(merin+(i*12384)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata12+(i*1632)+j))=(*(merin+(i*12384)+1536+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata21+(i*1632)+j))=(*(merin+(i*12384)+1536*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata22+(i*1632)+j))=(*(merin+(i*12384)+1536*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_148(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
             inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata31+(i*1632)+j))=(*(merin+(i*12384)+1536*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata32+(i*1632)+j))=(*(merin+(i*12384)+1536*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata41+(i*1632)+j))=(*(merin+(i*12384)+1536*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata42+(i*1632)+j))=(*(merin+(i*12384)+1536*7+j));
        }
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_148(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_mul_sub_spl(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan,
                      float *rtin, float *fhtin, float *rt1fht, float *subrt1fht)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    float *muldata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata21 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata22 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata23 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata24 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata25 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata26 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata27 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata28 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*7+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*7+i));
    }

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata11+(i*578)+j))=(*(merin+(i*4386)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata12+(i*578)+j))=(*(merin+(i*4386)+544+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata21+(i*578)+j))=(*(merin+(i*4386)+544*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata22+(i*578)+j))=(*(merin+(i*4386)+544*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_148(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
             inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata31+(i*578)+j))=(*(merin+(i*4386)+544*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata32+(i*578)+j))=(*(merin+(i*4386)+544*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata41+(i*578)+j))=(*(merin+(i*4386)+544*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata42+(i*578)+j))=(*(merin+(i*4386)+544*7+j));
        }
    }

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    float *muldata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata41 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata42 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata43 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata44 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata45 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata46 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata47 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata48 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*15+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*15+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*2+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*3+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*4+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*5+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*6+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*7+j))=(*(mresdata18+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*23+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*23+i));
    }
    #pragma SDS wait(3)

    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_148(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}
	for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+j))=1-(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512+j))=1-(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*2+j))=1-(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*3+j))=1-(*(outdata22+(i*512)+j));
		}
	}

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*8+j))=(*(mresdata31+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*9+j))=(*(mresdata32+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*10+j))=(*(mresdata33+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*11+j))=(*(mresdata34+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*12+j))=(*(mresdata35+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*13+j))=(*(mresdata36+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*14+j))=(*(mresdata37+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*15+j))=(*(mresdata38+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*31+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*31+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*16+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*17+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*18+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*19+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*20+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*21+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*22+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*23+j))=(*(mresdata18+j));
    }
    #pragma SDS wait(3)

    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*24+j))=(*(mresdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*25+j))=(*(mresdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*26+j))=(*(mresdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*27+j))=(*(mresdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*28+j))=(*(mresdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*29+j))=(*(mresdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*30+j))=(*(mresdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*31+j))=(*(mresdata38+j));
    }
    free(muldata11);
    free(muldata12);
    free(muldata13);
    free(muldata14);
    free(muldata15);
    free(muldata16);
    free(muldata17);
    free(muldata18);
    free(muldata21);
    free(muldata22);
    free(muldata23);
    free(muldata24);
    free(muldata25);
    free(muldata26);
    free(muldata27);
    free(muldata28);
    free(mresdata11);
    free(mresdata12);
    free(mresdata13);
    free(mresdata14);
    free(mresdata15);
    free(mresdata16);
    free(mresdata17);
    free(mresdata18);
    free(muldata31);
    free(muldata32);
    free(muldata33);
    free(muldata34);
    free(muldata35);
    free(muldata36);
    free(muldata37);
    free(muldata38);
    free(muldata41);
    free(muldata42);
    free(muldata43);
    free(muldata44);
    free(muldata45);
    free(muldata46);
    free(muldata47);
    free(muldata48);
    free(mresdata31);
    free(mresdata32);
    free(mresdata33);
    free(mresdata34);
    free(mresdata35);
    free(mresdata36);
    free(mresdata37);
    free(mresdata38);

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}

	for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*4+j))=1-(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*5+j))=1-(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*6+j))=1-(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*7+j))=1-(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_mul_sub_spl48(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan,
                      float *rtin, float *fhtin, float *rt1fht, float *subrt1fht)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    float *muldata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata21 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata22 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata23 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata24 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata25 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata26 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata27 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata28 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*7+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*7+i));
    }

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata11+(i*1632)+j))=(*(merin+(i*12384)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata12+(i*1632)+j))=(*(merin+(i*12384)+1536+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata21+(i*1632)+j))=(*(merin+(i*12384)+1536*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata22+(i*1632)+j))=(*(merin+(i*12384)+1536*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_148(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
             inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata31+(i*1632)+j))=(*(merin+(i*12384)+1536*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata32+(i*1632)+j))=(*(merin+(i*12384)+1536*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata41+(i*1632)+j))=(*(merin+(i*12384)+1536*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata42+(i*1632)+j))=(*(merin+(i*12384)+1536*7+j));
        }
    }

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    float *muldata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata41 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata42 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata43 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata44 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata45 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata46 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata47 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata48 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*15+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*15+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*2+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*3+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*4+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*5+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*6+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*7+j))=(*(mresdata18+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*23+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*23+i));
    }
    #pragma SDS wait(3)

    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_148(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}
	for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+j))=1-(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512+j))=1-(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*2+j))=1-(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*3+j))=1-(*(outdata22+(i*512)+j));
		}
	}

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*8+j))=(*(mresdata31+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*9+j))=(*(mresdata32+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*10+j))=(*(mresdata33+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*11+j))=(*(mresdata34+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*12+j))=(*(mresdata35+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*13+j))=(*(mresdata36+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*14+j))=(*(mresdata37+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*15+j))=(*(mresdata38+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*31+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*31+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*16+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*17+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*18+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*19+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*20+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*21+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*22+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*23+j))=(*(mresdata18+j));
    }
    #pragma SDS wait(3)

    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*24+j))=(*(mresdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*25+j))=(*(mresdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*26+j))=(*(mresdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*27+j))=(*(mresdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*28+j))=(*(mresdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*29+j))=(*(mresdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*30+j))=(*(mresdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*31+j))=(*(mresdata38+j));
    }
    free(muldata11);
    free(muldata12);
    free(muldata13);
    free(muldata14);
    free(muldata15);
    free(muldata16);
    free(muldata17);
    free(muldata18);
    free(muldata21);
    free(muldata22);
    free(muldata23);
    free(muldata24);
    free(muldata25);
    free(muldata26);
    free(muldata27);
    free(muldata28);
    free(mresdata11);
    free(mresdata12);
    free(mresdata13);
    free(mresdata14);
    free(mresdata15);
    free(mresdata16);
    free(mresdata17);
    free(mresdata18);
    free(muldata31);
    free(muldata32);
    free(muldata33);
    free(muldata34);
    free(muldata35);
    free(muldata36);
    free(muldata37);
    free(muldata38);
    free(muldata41);
    free(muldata42);
    free(muldata43);
    free(muldata44);
    free(muldata45);
    free(muldata46);
    free(muldata47);
    free(muldata48);
    free(mresdata31);
    free(mresdata32);
    free(mresdata33);
    free(mresdata34);
    free(mresdata35);
    free(mresdata36);
    free(mresdata37);
    free(mresdata38);

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}

	for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*4+j))=1-(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*5+j))=1-(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(subrt1fht+(i*4096)+512*6+j))=1-(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(subrt1fht+(i*4096)+512*7+j))=1-(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_mul_spl48(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan,
                  float *rtin, float *fhtin, float *rt1fht)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    float *muldata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata21 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata22 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata23 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata24 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata25 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata26 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata27 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata28 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*7+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*7+i));
    }

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata11+(i*1632)+j))=(*(merin+(i*12384)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata12+(i*1632)+j))=(*(merin+(i*12384)+1536+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata21+(i*1632)+j))=(*(merin+(i*12384)+1536*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata22+(i*1632)+j))=(*(merin+(i*12384)+1536*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_148(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
             inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata31+(i*1632)+j))=(*(merin+(i*12384)+1536*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata32+(i*1632)+j))=(*(merin+(i*12384)+1536*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata41+(i*1632)+j))=(*(merin+(i*12384)+1536*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<1632; j++){
            (*(inputdata42+(i*1632)+j))=(*(merin+(i*12384)+1536*7+j));
        }
    }

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    float *muldata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata41 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata42 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata43 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata44 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata45 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata46 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata47 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata48 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*15+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*15+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*2+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*3+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*4+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*5+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*6+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*7+j))=(*(mresdata18+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*23+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*23+i));
    }
    #pragma SDS wait(3)

    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_148(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}
    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*8+j))=(*(mresdata31+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*9+j))=(*(mresdata32+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*10+j))=(*(mresdata33+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*11+j))=(*(mresdata34+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*12+j))=(*(mresdata35+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*13+j))=(*(mresdata36+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*14+j))=(*(mresdata37+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*15+j))=(*(mresdata38+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*31+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*31+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*16+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*17+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*18+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*19+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*20+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*21+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*22+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*23+j))=(*(mresdata18+j));
    }
    #pragma SDS wait(3)

    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*24+j))=(*(mresdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*25+j))=(*(mresdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*26+j))=(*(mresdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*27+j))=(*(mresdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*28+j))=(*(mresdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*29+j))=(*(mresdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*30+j))=(*(mresdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*31+j))=(*(mresdata38+j));
    }
    free(muldata11);
    free(muldata12);
    free(muldata13);
    free(muldata14);
    free(muldata15);
    free(muldata16);
    free(muldata17);
    free(muldata18);
    free(muldata21);
    free(muldata22);
    free(muldata23);
    free(muldata24);
    free(muldata25);
    free(muldata26);
    free(muldata27);
    free(muldata28);
    free(mresdata11);
    free(mresdata12);
    free(mresdata13);
    free(mresdata14);
    free(mresdata15);
    free(mresdata16);
    free(mresdata17);
    free(mresdata18);
    free(muldata31);
    free(muldata32);
    free(muldata33);
    free(muldata34);
    free(muldata35);
    free(muldata36);
    free(muldata37);
    free(muldata38);
    free(muldata41);
    free(muldata42);
    free(muldata43);
    free(muldata44);
    free(muldata45);
    free(muldata46);
    free(muldata47);
    free(muldata48);
    free(mresdata31);
    free(mresdata32);
    free(mresdata33);
    free(mresdata34);
    free(mresdata35);
    free(mresdata36);
    free(mresdata37);
    free(mresdata38);

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void conv_mul_spl(float *merin, float *conout, float *kerr, float *kerrbias, int height, int width, int condim3, int condim2, int en_re, int en_tan,
                  float *rtin, float *fhtin, float *rt1fht)
{
    float *inputdata11 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata12 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata11 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata22 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata21 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata22 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    float *muldata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata21 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata22 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata23 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata24 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata25 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata26 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata27 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata28 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*7+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*7+i));
    }

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata11+(i*578)+j))=(*(merin+(i*4386)+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata12+(i*578)+j))=(*(merin+(i*4386)+544+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata21+(i*578)+j))=(*(merin+(i*4386)+544*2+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata22+(i*578)+j))=(*(merin+(i*4386)+544*3+j));
        }
    }

    #pragma SDS async(1)
    conv2d_148(inputdata11, kerr, outdata11, kerrbias, inputdata12, kerr, outdata12, kerrbias,
               inputdata21, kerr, outdata21, kerrbias, inputdata22, kerr, outdata22, kerrbias, en_re, en_tan);

    float *inputdata31 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata32 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata41 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *inputdata42 = (float*)malloc(((width/8)+2) * (height+2) * condim3 * sizeof(float));
    float *outdata31 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata41 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));
    float *outdata42 = (float*)malloc((width/8) * (height) * condim2 * sizeof(float));

    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata31+(i*578)+j))=(*(merin+(i*4386)+544*4+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata32+(i*578)+j))=(*(merin+(i*4386)+544*5+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata41+(i*578)+j))=(*(merin+(i*4386)+544*6+j));
        }
    }
    for(int i=0; i<66; i++){
        for(int j=0; j<578; j++){
            (*(inputdata42+(i*578)+j))=(*(merin+(i*4386)+544*7+j));
        }
    }

    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    float *muldata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata41 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata42 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata43 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata44 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata45 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata46 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata47 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *muldata48 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *mresdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*15+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*8+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*9+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*10+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*11+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*12+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*13+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*14+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*15+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*2+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*3+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*4+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*5+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*6+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*7+j))=(*(mresdata18+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata11+i))=(*(rtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata12+i))=(*(rtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata13+i))=(*(rtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata14+i))=(*(rtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata15+i))=(*(rtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata16+i))=(*(rtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata17+i))=(*(rtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata18+i))=(*(rtin+8192*23+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata21+i))=(*(fhtin+8192*16+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata22+i))=(*(fhtin+8192*17+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata23+i))=(*(fhtin+8192*18+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata24+i))=(*(fhtin+8192*19+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata25+i))=(*(fhtin+8192*20+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata26+i))=(*(fhtin+8192*21+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata27+i))=(*(fhtin+8192*22+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata28+i))=(*(fhtin+8192*23+i));
    }
    #pragma SDS wait(3)

    #pragma SDS wait(1)

    #pragma SDS async(1)
    conv2d_148(inputdata31, kerr, outdata31, kerrbias, inputdata32, kerr, outdata32, kerrbias,
             inputdata41, kerr, outdata41, kerrbias, inputdata42, kerr, outdata42, kerrbias, en_re, en_tan);

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+j))=(*(outdata11+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512+j))=(*(outdata12+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*2+j))=(*(outdata21+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*3+j))=(*(outdata22+(i*512)+j));
		}
	}
    #pragma SDS async(2)
    multiply(muldata11, muldata21, mresdata11, muldata12, muldata22, mresdata12, muldata13, muldata23, mresdata13, muldata14, muldata24, mresdata14,
             muldata15, muldata25, mresdata15, muldata16, muldata26, mresdata16, muldata17, muldata27, mresdata17, muldata18, muldata28, mresdata18);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*8+j))=(*(mresdata31+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*9+j))=(*(mresdata32+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*10+j))=(*(mresdata33+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*11+j))=(*(mresdata34+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*12+j))=(*(mresdata35+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*13+j))=(*(mresdata36+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*14+j))=(*(mresdata37+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*15+j))=(*(mresdata38+j));
    }

    for(int i=0; i<8192; i++){
        (*(muldata31+i))=(*(rtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata32+i))=(*(rtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata33+i))=(*(rtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata34+i))=(*(rtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata35+i))=(*(rtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata36+i))=(*(rtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata37+i))=(*(rtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata38+i))=(*(rtin+8192*31+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata41+i))=(*(fhtin+8192*24+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata42+i))=(*(fhtin+8192*25+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata43+i))=(*(fhtin+8192*26+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata44+i))=(*(fhtin+8192*27+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata45+i))=(*(fhtin+8192*28+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata46+i))=(*(fhtin+8192*29+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata47+i))=(*(fhtin+8192*30+i));
    }
    for(int i=0; i<8192; i++){
        (*(muldata48+i))=(*(fhtin+8192*31+i));
    }
    #pragma SDS wait(2)

    #pragma SDS async(3)
    multiply(muldata31, muldata41, mresdata31, muldata32, muldata42, mresdata32, muldata33, muldata43, mresdata33, muldata34, muldata44, mresdata34,
             muldata35, muldata45, mresdata35, muldata36, muldata46, mresdata36, muldata37, muldata47, mresdata37, muldata38, muldata48, mresdata38);

    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*16+j))=(*(mresdata11+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*17+j))=(*(mresdata12+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*18+j))=(*(mresdata13+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*19+j))=(*(mresdata14+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*20+j))=(*(mresdata15+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*21+j))=(*(mresdata16+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*22+j))=(*(mresdata17+j));
    }
    for(int j=0; j<8192; j++){
        (*(rt1fht+8192*23+j))=(*(mresdata18+j));
    }
    #pragma SDS wait(3)

    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*24+j))=(*(mresdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*25+j))=(*(mresdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*26+j))=(*(mresdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*27+j))=(*(mresdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*28+j))=(*(mresdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*29+j))=(*(mresdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*30+j))=(*(mresdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(rt1fht+4096*31+j))=(*(mresdata38+j));
    }
    free(muldata11);
    free(muldata12);
    free(muldata13);
    free(muldata14);
    free(muldata15);
    free(muldata16);
    free(muldata17);
    free(muldata18);
    free(muldata21);
    free(muldata22);
    free(muldata23);
    free(muldata24);
    free(muldata25);
    free(muldata26);
    free(muldata27);
    free(muldata28);
    free(mresdata11);
    free(mresdata12);
    free(mresdata13);
    free(mresdata14);
    free(mresdata15);
    free(mresdata16);
    free(mresdata17);
    free(mresdata18);
    free(muldata31);
    free(muldata32);
    free(muldata33);
    free(muldata34);
    free(muldata35);
    free(muldata36);
    free(muldata37);
    free(muldata38);
    free(muldata41);
    free(muldata42);
    free(muldata43);
    free(muldata44);
    free(muldata45);
    free(muldata46);
    free(muldata47);
    free(muldata48);
    free(mresdata31);
    free(mresdata32);
    free(mresdata33);
    free(mresdata34);
    free(mresdata35);
    free(mresdata36);
    free(mresdata37);
    free(mresdata38);

    free(outdata11);
    free(outdata12);
    free(inputdata11);
    free(inputdata12);
    free(outdata21);
    free(outdata22);
    free(inputdata21);
    free(inputdata22);

    #pragma SDS wait(1)

    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*4+j))=(*(outdata31+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*5+j))=(*(outdata32+(i*512)+j));
		}
	}
    for(int i=0; i<64; i++){
        for(int j=0; j<512; j++){
        (*(conout+(i*4096)+512*6+j))=(*(outdata41+(i*512)+j));
        }
    }
    for(int i=0; i<64; i++){
		for(int j=0; j<512; j++){
		(*(conout+(i*4096)+512*7+j))=(*(outdata42+(i*512)+j));
		}
	}
    free(outdata31);
    free(outdata32);
    free(inputdata31);
    free(inputdata32);
    free(outdata41);
    free(outdata42);
    free(inputdata41);
    free(inputdata42);
}

void mul_spl(float *ut0, float *ht0, float *fht0, int width, int height, int condim2){
    float *inputdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata21 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata22 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata23 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata24 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata25 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata26 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata27 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata28 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata11 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata12 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata13 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata14 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata15 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata16 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata17 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata18 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));

    for(int i=0; i<8192; i++){
        (*(inputdata11+i))=(*(ut0+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata12+i))=(*(ut0+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata13+i))=(*(ut0+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata14+i))=(*(ut0+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata15+i))=(*(ut0+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata16+i))=(*(ut0+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata17+i))=(*(ut0+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata18+i))=(*(ut0+8192*7+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata21+i))=(*(ht0+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata22+i))=(*(ht0+8192+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata23+i))=(*(ht0+8192*2+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata24+i))=(*(ht0+8192*3+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata25+i))=(*(ht0+8192*4+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata26+i))=(*(ht0+8192*5+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata27+i))=(*(ht0+8192*6+i));
    }
    for(int i=0; i<8192; i++){
        (*(inputdata28+i))=(*(ht0+8192*7+i));
    }
    #pragma SDS async(1)
    multiply(inputdata11, inputdata21, outdata11, inputdata12, inputdata22, outdata12, inputdata13, inputdata23, outdata13, inputdata14, inputdata24, outdata14,
             inputdata15, inputdata25, outdata15, inputdata16, inputdata26, outdata16, inputdata17, inputdata27, outdata17, inputdata18, inputdata28, outdata18);

    float *inputdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata41 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata42 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata43 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata44 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata45 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata46 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata47 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *inputdata48 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata31 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata32 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata33 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata34 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata35 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata36 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata37 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    float *outdata38 = (float*)malloc(width * (height/32) * condim2 * sizeof(float));
    for(int i=0; i<4096; i++){
        (*(inputdata31+i))=(*(ut0+4096*8+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata32+i))=(*(ut0+4096*9+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata33+i))=(*(ut0+4096*10+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata34+i))=(*(ut0+4096*11+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata35+i))=(*(ut0+4096*12+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata36+i))=(*(ut0+4096*13+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata37+i))=(*(ut0+4096*14+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata38+i))=(*(ut0+4096*15+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata41+i))=(*(ht0+4096*8+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata42+i))=(*(ht0+4096*9+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata43+i))=(*(ht0+4096*10+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata44+i))=(*(ht0+4096*11+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata45+i))=(*(ht0+4096*12+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata46+i))=(*(ht0+4096*13+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata47+i))=(*(ht0+4096*14+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata48+i))=(*(ht0+4096*15+i));
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    multiply(inputdata31, inputdata41, outdata31, inputdata32, inputdata42, outdata32, inputdata33, inputdata43, outdata33, inputdata34, inputdata44, outdata34,
             inputdata35, inputdata45, outdata35, inputdata36, inputdata46, outdata36, inputdata37, inputdata47, outdata37, inputdata38, inputdata48, outdata38);

    for(int j=0; j<4096; j++){
        (*(fht0+j))=(*(outdata11+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096+j))=(*(outdata12+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*2+j))=(*(outdata13+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*3+j))=(*(outdata14+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*4+j))=(*(outdata15+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*5+j))=(*(outdata16+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*6+j))=(*(outdata17+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*7+j))=(*(outdata18+j));
    }

    for(int i=0; i<4096; i++){
        (*(inputdata11+i))=(*(ut0+4096*16+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata12+i))=(*(ut0+4096*17+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata13+i))=(*(ut0+4096*18+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata14+i))=(*(ut0+4096*19+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata15+i))=(*(ut0+4096*20+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata16+i))=(*(ut0+4096*21+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata17+i))=(*(ut0+4096*22+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata18+i))=(*(ut0+4096*23+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata21+i))=(*(ht0+4096*16+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata22+i))=(*(ht0+4096*17+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata23+i))=(*(ht0+4096*18+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata24+i))=(*(ht0+4096*19+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata25+i))=(*(ht0+4096*20+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata26+i))=(*(ht0+4096*21+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata27+i))=(*(ht0+4096*22+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata28+i))=(*(ht0+4096*23+i));
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    multiply(inputdata11, inputdata21, outdata11, inputdata12, inputdata22, outdata12, inputdata13, inputdata23, outdata13, inputdata14, inputdata24, outdata14,
             inputdata15, inputdata25, outdata15, inputdata16, inputdata26, outdata16, inputdata17, inputdata27, outdata17, inputdata18, inputdata28, outdata18);

    for(int j=0; j<4096; j++){
        (*(fht0+4096*8+j))=(*(outdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*9+j))=(*(outdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*10+j))=(*(outdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*11+j))=(*(outdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*12+j))=(*(outdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*13+j))=(*(outdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*14+j))=(*(outdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*15+j))=(*(outdata38+j));
    }

    for(int i=0; i<4096; i++){
        (*(inputdata31+i))=(*(ut0+4096*24+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata32+i))=(*(ut0+4096*25+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata33+i))=(*(ut0+4096*26+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata34+i))=(*(ut0+4096*27+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata35+i))=(*(ut0+4096*28+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata36+i))=(*(ut0+4096*29+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata37+i))=(*(ut0+4096*30+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata38+i))=(*(ut0+4096*31+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata41+i))=(*(ht0+4096*24+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata42+i))=(*(ht0+4096*25+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata43+i))=(*(ht0+4096*26+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata44+i))=(*(ht0+4096*27+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata45+i))=(*(ht0+4096*28+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata46+i))=(*(ht0+4096*29+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata47+i))=(*(ht0+4096*30+i));
    }
    for(int i=0; i<4096; i++){
        (*(inputdata48+i))=(*(ht0+4096*31+i));
    }
    #pragma SDS wait(1)

    #pragma SDS async(1)
    multiply(inputdata31, inputdata41, outdata31, inputdata32, inputdata42, outdata32, inputdata33, inputdata43, outdata33, inputdata34, inputdata44, outdata34,
             inputdata35, inputdata45, outdata35, inputdata36, inputdata46, outdata36, inputdata37, inputdata47, outdata37, inputdata38, inputdata48, outdata38);

    for(int j=0; j<4096; j++){
        (*(fht0+4096*16+j))=(*(outdata11+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*17+j))=(*(outdata12+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*18+j))=(*(outdata13+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*19+j))=(*(outdata14+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*20+j))=(*(outdata15+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*21+j))=(*(outdata16+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*22+j))=(*(outdata17+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*23+j))=(*(outdata18+j));
    }
    free(inputdata11);
    free(inputdata12);
    free(inputdata13);
    free(inputdata14);
    free(inputdata15);
    free(inputdata16);
    free(inputdata17);
    free(inputdata18);
    free(inputdata21);
    free(inputdata22);
    free(inputdata23);
    free(inputdata24);
    free(inputdata25);
    free(inputdata26);
    free(inputdata27);
    free(inputdata28);
    free(outdata11);
    free(outdata12);
    free(outdata13);
    free(outdata14);
    free(outdata15);
    free(outdata16);
    free(outdata17);
    free(outdata18);
    #pragma SDS wait(1)

    for(int j=0; j<4096; j++){
        (*(fht0+4096*24+j))=(*(outdata31+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*25+j))=(*(outdata32+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*26+j))=(*(outdata33+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*27+j))=(*(outdata34+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*28+j))=(*(outdata35+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*29+j))=(*(outdata36+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*30+j))=(*(outdata37+j));
    }
    for(int j=0; j<4096; j++){
        (*(fht0+4096*31+j))=(*(outdata38+j));
    }

    free(inputdata31);
    free(inputdata32);
    free(inputdata33);
    free(inputdata34);
    free(inputdata35);
    free(inputdata36);
    free(inputdata37);
    free(inputdata38);
    free(inputdata41);
    free(inputdata42);
    free(inputdata43);
    free(inputdata44);
    free(inputdata45);
    free(inputdata46);
    free(inputdata47);
    free(inputdata48);
    free(outdata31);
    free(outdata32);
    free(outdata33);
    free(outdata34);
    free(outdata35);
    free(outdata36);
    free(outdata37);
    free(outdata38);
}

//    for(int order1=2; order1<31; order1=order1+2){
//    	sync_conv(inputdata31, inputdata41, inputdata32, inputdata42, outdata31, outdata41, outdata32, outdata42, inputdata11, inputdata21, inputdata12, inputdata22,
//                 outdata11, outdata21, outdata12, outdata22, kerneldata2, kerbias2, con2_in, con2_out, order1, en_re);
//    }
//
//    #pragma SDS async(1)
//    conv2d_1(inputdata31, kerneldata2, outdata31, kerbias2, inputdata32, kerneldata2, outdata32, kerbias2,
//             inputdata41, kerneldata2, outdata41, kerbias2, inputdata42, kerneldata2, outdata42, kerbias2, en_re);
//
//    for(int i=0; i<8; i++){
//        for(int j=0; j<4096; j++){
//        (*(con2_out+(131072*30)+(i*16384)+j))=(*(outdata11+(i*4096)+j));
//        }
//    }
//    for(int i=0; i<8; i++){
//		for(int j=0; j<4096; j++){
//		(*(con2_out+(131072*30)+(i*16384)+4096+j))=(*(outdata12+(i*4096)+j));
//		}
//	}
//    for(int i=0; i<8; i++){
//        for(int j=0; j<4096; j++){
//        (*(con2_out+(131072*30)+(i*16384)+8192+j))=(*(outdata21+(i*4096)+j));
//        }
//    }
//    for(int i=0; i<8; i++){
//		for(int j=0; j<4096; j++){
//		(*(con2_out+(131072*30)+(i*16384)+12288+j))=(*(outdata22+(i*4096)+j));
//		}
//	}
//
//    free(outdata11);
//    free(outdata12);
//    free(inputdata11);
//    free(inputdata12);
//    free(outdata21);
//    free(outdata22);
//    free(inputdata21);
//    free(inputdata22);
//
//    #pragma SDS wait(1)
//
//    for(int i=0; i<8; i++){
//        for(int j=0; j<4096; j++){
//        (*(con2_out+(131072*31)+(i*16384)+j))=(*(outdata31+(i*4096)+j));
//        }
//    }
//    for(int i=0; i<8; i++){
//		for(int j=0; j<4096; j++){
//		(*(con2_out+(131072*31)+(i*16384)+4096+j))=(*(outdata32+(i*4096)+j));
//		}
//	}
//    for(int i=0; i<8; i++){
//        for(int j=0; j<4096; j++){
//        (*(con2_out+(131072*31)+(i*16384)+8192+j))=(*(outdata41+(i*4096)+j));
//        }
//    }
//    for(int i=0; i<8; i++){
//		for(int j=0; j<4096; j++){
//		(*(con2_out+(131072*31)+(i*16384)+12288+j))=(*(outdata42+(i*4096)+j));
//		}
//	}
//    free(outdata31);
//    free(outdata32);
//    free(inputdata31);
//    free(inputdata32);
//    free(outdata41);
//    free(outdata42);
//    free(inputdata41);
//    free(inputdata42);
//}

//gcur1
void bicgru_0(float *x0in, float *kerr0, float *kerr0bias, float *keru0, float *keru0bias, float *kerh0, float *kerh0bias, float *fht0, int height, int width, int condim2, int condim3){
//        float *x0in = (float*)malloc(cheight * cwidth * sizeof(float));
    int cheight=height+2;
    int cwidth=width+2;
    float *mer0rt = (float*)malloc(cheight * cwidth * condim3 * sizeof(float));
    float *rt0 = (float*)malloc(height * width * condim2 * sizeof(float));
    float *ut0 = (float*)malloc(height * width * condim2 * sizeof(float));
    float *ht0 = (float*)malloc(height * width * condim2 * sizeof(float));

    for(int i=0; i<cheight * cwidth * (condim3); i++){
        (*(mer0rt+i))=0;
    }
    //17通道仅第17通道有数 其余通道为0
//    for(int i=0; i<height; i++){
//        int oid=(i+1)*cwidth*(condim3)+(condim3);
//        for(int j=0; j<width; j++){
//            (*(mer0rt+oid+(j*condim3)+condim2))=(*(x0in+i*width+j));
//        }
//    }

    int k=0;
    for(int i=1;i<65;i++){
        for(int j=1;j<257;j++){
            (*(mer0rt+(i*258+j)*17+16))=(*(x0in+k));
            ++k;
        }
    }

    conv_spl(mer0rt, rt0, kerr0, kerr0bias, height, width, condim3, condim2, 1, 0);
    conv_spl(mer0rt, ut0, keru0, keru0bias, height, width, condim3, condim2, 1, 0);
//    float *mer0ht = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));

//    for(int i=0; i<cheight * cwidth * condim3; i++){
//        (*(mer0ht++))=0;
//    }
//    for(int i=0; i<height; i++){
//        int oid=(i+1)*cwidth*(condim3)+(condim3);
//        for(int j=0; j<width; j++){
//            (*(mer0ht+oid+(j*condim3)+condim2))=(*(x0in+i*width+j));
//        }
//    }


    conv_spl(mer0rt, ht0, kerh0, kerh0bias, height, width, condim3, condim2, 0, 1);
//        float fht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    mul_spl(ut0, ht0, fht0, width, height, condim2);
    free(x0in);
    free(mer0rt);
    free(rt0);
    free(ut0);
//    free(mer0ht);
    free(ht0);
}

//gcur2
void bicgru_1(float *x1in, float *kerr1, float *kerr1bias, float *keru1, float *keru1bias, float *kerh1, float *kerh1bias, float *fht0, float *fht1, int height, int width, int condim2, int condim3){
//        float *x1in = (float*)malloc(cheight * cwidth * sizeof(float));
    int cheight=height+2;
    int cwidth=width+2;
    float *mer1rt = (float*)malloc(cheight * cwidth * condim3 * sizeof(float));
    float *rt1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *ut1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *ht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));

    for(int i=0; i<cheight * cwidth * (condim3); i++){
        (*(mer1rt++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim3)+(condim3);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim2; k++){
                (*(mer1rt+oid+(j*condim3)+k))=(*(fht0+(i*width+j)*condim2+k));
            }
            (*(mer1rt+oid+(j*condim3)+condim2))=(*(x1in+i*width+j));
        }
    }

    float *rt1fht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *subut1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    conv_spl(mer1rt, rt1, kerr1, kerr1bias, height, width, condim3, condim2, 1, 0);
    conv_mul_sub_spl(mer1rt, ut1, keru1, keru1bias, height, width, condim3, condim2, 1, 0, rt1, fht0, rt1fht0, subut1);
    float *xt1rt1fht0 = (float*)malloc(cheight * cwidth * condim3 * sizeof(float));
    float *subut1ht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *mht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    for(int i=0; i<cheight * cwidth * condim3; i++){
        (*(xt1rt1fht0++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim3)+(condim3);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim2; k++){
                (*(xt1rt1fht0+oid+(j*condim3)+k))=(*(rt1fht0+k));
            }
            (*(xt1rt1fht0+oid+(j*condim3)+condim2))=(*(x1in+i*width+j));
        }
    }
    conv_mul_spl(xt1rt1fht0, ht1, kerh1, kerh1bias, height, width, condim3, condim2, 0, 1, subut1, fht0, subut1ht0);
    mul_spl(ht1, ut1, mht1, width, height, condim2);
//        float fht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    for(int i=0; i<cheight * cwidth * condim2; i++){
        (*(fht1++))=(*(subut1ht0++)) * (*(mht1++));
    }

    free(x1in);
    free(mer1rt);
    free(rt1);
    free(ht1);
    free(ut1);
    free(rt1fht0);
    free(subut1);
    free(xt1rt1fht0);
    free(subut1ht0);
    free(mht1);
}

void cgru_0(float *x0in, float *kerr0, float *kerr0bias, float *keru0, float *keru0bias, float *kerh0, float *kerh0bias, float *fht0, int height, int width, int condim2, int condim4, int condim5){
//        float *x0in = (float*)malloc(cheight * cwidth * sizeof(float));
    int cheight=height+2;
    int cwidth=width+2;
    float *mer0rt = (float*)malloc(cheight * cwidth * condim4 * sizeof(float));
    float *rt0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *ut0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));

    for(int i=0; i<(cheight * cwidth * condim4); i++){
        (*(mer0rt++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim4)+(condim4);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim5; k++){
                (*(mer0rt+oid+(j*condim4)+condim2+k))=(*(x0in+(i*width+j)*condim5+k));
            }
        }
    }

    conv_spl48(mer0rt, rt0, kerr0, kerr0bias, height, width, condim4, condim2, 1, 0);
    conv_spl48(mer0rt, ut0, keru0, keru0bias, height, width, condim4, condim2, 1, 0);
    float *mer0ht = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));

    for(int i=0; i<cheight * cwidth * condim4; i++){
        (*(mer0ht++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim4)+(condim4);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim5; k++){
                (*(mer0ht+oid+(j*condim4)+condim2+k))=(*(x0in+(i*width+j)*condim5+k));
            }
        }
    }

    float *ht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    conv_spl48(mer0rt, ht0, kerh0, kerh0bias, height, width, condim4, condim2, 0, 1);
//        float fht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    mul_spl(ut0, ht0, fht0, width, height, condim2);
    free(x0in);
    free(mer0rt);
    free(rt0);
    free(ut0);
    free(mer0ht);
    free(ht0);
}

//gcur2
void cgru_1(float *x1in, float *kerr1, float *kerr1bias, float *keru1, float *keru1bias, float *kerh1, float *kerh1bias, float *fht0, float *fht1, int height, int width, int condim2, int condim4, int condim5){
//        float *x1in = (float*)malloc(cheight * cwidth * sizeof(float));
    int cheight=height+2;
    int cwidth=width+2;
    float *mer1rt = (float*)malloc(cheight * cwidth * condim4 * sizeof(float));
    float *rt1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *ut1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *ht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));

    for(int i=0; i<cheight * cwidth * (condim4); i++){
        (*(mer1rt++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim4)+(condim4);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim2; k++){
                (*(mer1rt+oid+(j*condim4)+k))=(*(fht0+(i*width+j)*condim2+k));
            }
            for(int k=0; k<condim5; k++){
                (*(mer1rt+oid+(j*condim4)+condim2+k))=(*(x1in+(i*width+j)*condim5+k));
            }
        }
    }

    float *rt1fht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *subut1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    conv_spl48(mer1rt, rt1, kerr1, kerr1bias, height, width, condim4, condim2, 1, 0);
    conv_mul_sub_spl48(mer1rt, ut1, keru1, keru1bias, height, width, condim4, condim2, 1, 0, rt1, fht0, rt1fht0, subut1);
    float *xt1rt1fht0 = (float*)malloc(cheight * cwidth * condim4 * sizeof(float));
    float *mer0ht = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *subut1ht0 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    float *mht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    for(int i=0; i<cheight * cwidth * condim4; i++){
        (*(xt1rt1fht0++))=0;
    }
    for(int i=0; i<height; i++){
        int oid=(i+1)*cwidth*(condim4)+(condim4);
        for(int j=0; j<width; j++){
            for(int k=0; k<condim2; k++){
                (*(xt1rt1fht0+oid+(j*condim4)+k))=(*(rt1fht0+k));
            }
            for(int k=0; k<condim5; k++){
                (*(xt1rt1fht0+oid+(j*condim4)+condim2+k))=(*(x1in+(i*width+j)*condim5+k));
            }
        }
    }
    conv_mul_spl48(xt1rt1fht0, ht1, kerh1, kerh1bias, height, width, condim4, condim2, 0, 1, subut1, fht0, subut1ht0);
    mul_spl(ht1, ut1, mht1, width, height, condim2);
//        float fht1 = (float*)malloc(cheight * cwidth * condim2 * sizeof(float));
    for(int i=0; i<cheight * cwidth * condim2; i++){
        (*(fht1++))=(*(subut1ht0++)) * (*(mht1++));
    }

    free(x1in);
    free(mer1rt);
    free(rt1);
    free(ht1);
    free(ut1);
    free(rt1fht0);
    free(subut1);
    free(xt1rt1fht0);
    free(mer0ht);
    free(subut1ht0);
    free(mht1);
}


int main() {
	char strFile[] = "test.bmp";//bmp文件名
	BYTE *imagedata = NULL;//动态分配存储原图片的像素信息的二维数组
	BYTE *offset = NULL;
	float *inputdata = NULL;
	int width, height, cwidth, cheight;//图片的宽度和高度
	int ksize = 3;
	int condim1 = 1;
	int condim2 = 16;
	int condim3 = 17;
	int condim4 = 48;
	int condim5 = 32;
	int offnum;
    FILE *fpi,*fpw;
	fpi = fopen(strFile, "rb");
	if (fpi != NULL) {
		//先读取文件类型
		WORD bfType;
		fread(&bfType, sizeof(WORD), 1, fpi);
		if (0x4d42 != bfType)
		{
			cout << "the file is not a bmp file!" << endl;
			return NULL;
		}
		fread(&strHead, sizeof(tagBITMAPFILEHEADER), 1, fpi);
//		showBmpHead(strHead);//显示文件头
		fread(&strInfo, sizeof(tagBITMAPINFOHEADER), 1, fpi);
//		showBmpInforHead(strInfo);//显示文件信息头
        cout<<"大小:"<<strHead.bfSize1<<endl;
        cout << "实际位图数据的偏移字节数:" << strHead.bfOffBits1 << endl << endl;
        offnum = strHead.bfOffBits1-54;
        cout<<"offnum: "<<offnum<<endl;
        BYTE offtemp;
		offset = (BYTE*)malloc(offnum * sizeof(BYTE));
		for(int of=0; of<offnum; of++){
            (*(offset + of)) = 0;
		}
		for(int o=0; o<offnum; o++){
            fread(&offtemp, sizeof(BYTE), 1, fpi);
            (*(offset + o))=offtemp;
            }
        cout<<"end"<<endl;
//        free(offset);

		width = strInfo.biWidth1;
		height = strInfo.biHeight1;
		height = height/4;
		cwidth = width+2;
		cheight = height+2;
		imagedata = (BYTE*)malloc(width * height * sizeof(BYTE));
        inputdata = (float*)malloc(width * height*4 * sizeof(float));
//        kerneldata1 = (float*)malloc(ksize * ksize * condim1 * condim2 * sizeof(float));
        float *bikerr = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *bikeru = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *bikerh = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *bikerr2 = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *bikeru2 = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *bikerh2 = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *kerr = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *keru = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *kerh = (float*)malloc(ksize * ksize * condim3 * condim2 * sizeof(float));
        float *kercon1 = (float*)malloc(ksize * ksize * condim2 * condim2 * sizeof(float));
        float *kercon2 = (float*)malloc(ksize * ksize * condim2 * condim2 * sizeof(float));
        float *bikerrbias = (float*)malloc(condim2 * sizeof(float));
        float *bikerubias = (float*)malloc(condim2 * sizeof(float));
        float *bikerhbias = (float*)malloc(condim2 * sizeof(float));
        float *bikerrbias2 = (float*)malloc(condim2 * sizeof(float));
        float *bikerubias2 = (float*)malloc(condim2 * sizeof(float));
        float *bikerhbias2 = (float*)malloc(condim2 * sizeof(float));
        float *kerrbias = (float*)malloc(condim2 * sizeof(float));
        float *kerubias = (float*)malloc(condim2 * sizeof(float));
        float *kerhbias = (float*)malloc(condim2 * sizeof(float));
        float *kercon1bias = (float*)malloc(condim2 * sizeof(float));
        float *kercon2bias = (float*)malloc(condim2 * sizeof(float));

		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
                (*(imagedata + i * width + j)) = 0;
			}
		}
		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
                (*(inputdata + i * width + j)) = 0;
			}
		}

        //读出图片的像素数据
		int temp_Width = (width + 3) / 4;
		temp_Width = temp_Width * 4;
		BYTE temp;
		BYTE useless;
		float ftem;
		for (int h = height; h>0; --h) {
            for(int w=0; w<width; ++w){
                fread(&temp, sizeof(BYTE), 1, fpi);
                imagedata[(h-1)*width+w] = temp;
                ftem = (float)temp;
                inputdata[(h-1)*width+w] = ftem/255;
                if ((w+1) % (width) == 0)
                {
                    fread(&useless, sizeof(BYTE), temp_Width - width, fpi);
                }
			}
		}

		fclose(fpi);
		free(imagedata);

		float *inputdata0 = (float*)malloc((width * height) * sizeof(float));
        float *inputdata1 = (float*)malloc((width * height) * sizeof(float));
        float *inputdata2 = (float*)malloc((width * height) * sizeof(float));
        float *inputdata3 = (float*)malloc((width * height) * sizeof(float));

        for(int i=0;i<256*64;i++){
            (*(inputdata0+i))=(*(inputdata+i));
        }
        for(int i=0;i<256*64;i++){
            (*(inputdata1+i))=(*(inputdata+i+256*64));
        }
        for(int i=0;i<256*64;i++){
            (*(inputdata2+i))=(*(inputdata+i+256*64*2));
        }
        for(int i=0;i<256*64;i++){
            (*(inputdata3+i))=(*(inputdata+i+256*64*3));
        }

		//读入权重
		//conv_1权重
        ifstream fpt;
        fpt.open("bikerr/bikerrbias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        char strtbias[100];
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerrbias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char strcon[100];
        char connum[] = "bikerr/bikerr.txt";
        cout<<connum<<endl;
        fpt.open(connum);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize * ksize * condim2 * condim3; ti++){
        	fpt.getline(strcon, 100);
            (*(bikerr + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_2权重
        fpt.open("bikeru/bikerubias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerubias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum2[] = "bikeru/bikeru.txt";
        cout<<connum2<<endl;
        fpt.open(connum2);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            fpt.getline(strcon, 100);
            (*(bikeru + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_3权重
        fpt.open("bikerh/bikerhbias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerhbias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum3[] = "bikerh/bikerh.txt";
        cout<<connum3<<endl;
        fpt.open(connum3);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            fpt.getline(strcon, 100);
            (*(bikerh + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_4权重
        fpt.open("bikerr2/bikerrbias2.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerrbias2 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum4[] = "bikerr2/bikerr2.txt";
        cout<<connum4<<endl;
        fpt.open(connum4);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            fpt.getline(strcon, 100);
            (*(bikerr2 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_5权重
        fpt.open("bikeru2/bikerubias2.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerubias2 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum5[] = "bikeru2/bikeru2.txt";
        cout<<connum5<<endl;
        fpt.open(connum5);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            fpt.getline(strcon, 100);
            (*(bikeru2 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_6权重
        fpt.open("bikerh2/bikerhbias2.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(bikerhbias2 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum6[] = "bikerh2/bikerh2.txt";
        cout<<connum6<<endl;
        fpt.open(connum6);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            fpt.getline(strcon, 100);
            (*(bikerh2 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_7权重
        fpt.open("kerr/kerrbias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerrbias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum7[] = "kerr/kerr.txt";
        cout<<connum7<<endl;
        fpt.open(connum7);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim4; ti++){
            fpt.getline(strcon, 100);
            (*(kerr + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_8权重
        fpt.open("keru/kerubias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerubias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum8[] = "keru/keru.txt";
        cout<<connum8<<endl;
        fpt.open(connum8);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim4; ti++){
            fpt.getline(strcon, 100);
            (*(keru + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_8权重
        fpt.open("kerh/kerhbias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerhbias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum82[] = "kerh/kerh.txt";
        cout<<connum82<<endl;
        fpt.open(connum82);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim4; ti++){
            fpt.getline(strcon, 100);
            (*(kerh + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_9权重
        fpt.open("kercon1/kercon1bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kercon1bias + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum9[] = "kercon1/kercon1.txt";
        cout<<connum9<<endl;
        fpt.open(connum9);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim3; ti++){
            if((ti+1)%17==0){
                (*(kercon1 + ti)) = 0;
            }
            else{
                fpt.getline(strcon, 100);
                (*(kercon1 + ti)) = atof(strcon);
            }
        }
        fpt.close();
        fpt.clear();

        //conv_10权重
        fpt.open("kercon2/kercon2bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
        	if(ti==0){
            fpt.getline(strtbias,100);
            (*(kercon2bias + ti)) = atof(strtbias);}
        	else{
        	(*(kercon2bias + ti)) = 0;
        	}
        }
        fpt.close();
        fpt.clear();

        char connum10[] = "kercon2/kercon2.txt";
        cout<<connum10<<endl;
        fpt.open(connum10);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize * ksize * condim2 * condim3; ti++){
        	if(ti<153){
                if((ti+1)%17==0){
                    (*(kercon1 + ti)) = 0;
                }
                else{
                    fpt.getline(strcon, 100);
                    (*(kercon1 + ti)) = atof(strcon);
                }
        	}
        	else{
        		(*(kercon2 + ti)) = 0;
        	}
        }
        fpt.close();
        fpt.clear();

        float *bifht0=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht1=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht2=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht3=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht02=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht12=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht22=(float*)malloc(height * width * condim2 * sizeof(float));
        float *bifht32=(float*)malloc(height * width * condim2 * sizeof(float));
        bicgru_0(inputdata0, bikerr, bikerrbias, bikeru, bikerubias, bikerh, bikerhbias, bifht0, height, width, condim2, condim3);
        bicgru_1(inputdata1, bikerr, bikerrbias, bikeru, bikerubias, bikerh, bikerhbias, bifht0, bifht1, height, width, condim2, condim3);
        bicgru_1(inputdata2, bikerr, bikerrbias, bikeru, bikerubias, bikerh, bikerhbias, bifht1, bifht2, height, width, condim2, condim3);
        bicgru_1(inputdata3, bikerr, bikerrbias, bikeru, bikerubias, bikerh, bikerhbias, bifht2, bifht3, height, width, condim2, condim3);

        bicgru_0(inputdata3, bikerr2, bikerrbias2, bikeru2, bikerubias2, bikerh2, bikerhbias2, bifht02, height, width, condim2, condim3);
        bicgru_1(inputdata2, bikerr2, bikerrbias2, bikeru2, bikerubias2, bikerh2, bikerhbias2, bifht02, bifht12, height, width, condim2, condim3);
        bicgru_1(inputdata1, bikerr2, bikerrbias2, bikeru2, bikerubias2, bikerh2, bikerhbias2, bifht12, bifht22, height, width, condim2, condim3);
        bicgru_1(inputdata0, bikerr2, bikerrbias2, bikeru2, bikerubias2, bikerh2, bikerhbias2, bifht22, bifht32, height, width, condim2, condim3);

        float *fbih0=(float*)malloc(cheight * cwidth * condim4 * sizeof(float));
        float *fbih1=(float*)malloc(cheight * cwidth * condim4 * sizeof(float));
        float *fbih2=(float*)malloc(cheight * cwidth * condim4 * sizeof(float));
        float *fbih3=(float*)malloc(cheight * cwidth * condim4 * sizeof(float));
        for(int i=0; i<height; i++){
            int oid=i*width*condim4;
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(fbih0+oid+(j*condim4)+k))=(*(bifht0+(i*width+j)*condim2+k));
                    (*(fbih0+oid+(j*condim4)+condim2+k))=(*(bifht02+(i*width+j)*condim2+k));
                }
            }
        }
        for(int i=0; i<height; i++){
            int oid=i*width*condim4;
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(fbih1+oid+(j*condim4)+k))=(*(bifht1+(i*width+j)*condim2+k));
                    (*(fbih1+oid+(j*condim4)+condim2+k))=(*(bifht12+(i*width+j)*condim2+k));
                }
            }
        }
        for(int i=0; i<height; i++){
            int oid=i*width*condim4;
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(fbih2+oid+(j*condim4)+k))=(*(bifht2+(i*width+j)*condim2+k));
                    (*(fbih2+oid+(j*condim4)+condim2+k))=(*(bifht22+(i*width+j)*condim2+k));
                }
            }
        }
        for(int i=0; i<height; i++){
            int oid=i*width*condim4;
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(fbih3+oid+(j*condim4)+k))=(*(bifht3+(i*width+j)*condim2+k));
                    (*(fbih3+oid+(j*condim4)+condim2+k))=(*(bifht32+(i*width+j)*condim2+k));
                }
            }
        }
        free(bifht0);
        free(bifht1);
        free(bifht2);
        free(bifht3);
        free(bifht02);
        free(bifht12);
        free(bifht22);
        free(bifht32);
        free(bikerr);
        free(bikerrbias);
        free(bikeru);
        free(bikerubias);
        free(bikerh);
        free(bikerhbias);
        free(bikerr2);
        free(bikerrbias2);
        free(bikeru2);
        free(bikerubias2);
        free(bikerh2);
        free(bikerhbias2);

        float *fht0=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        float *fht1=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        float *fht2=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        float *fht3=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        cgru_0(fbih0, kerr, kerrbias, keru, kerubias, kerh, kerhbias, fht0, height, width, condim2, condim4, condim5);
        cgru_1(fbih1, kerr, kerrbias, keru, kerubias, kerh, kerhbias, fht0, fht1, height, width, condim2, condim4, condim5);
        cgru_1(fbih2, kerr, kerrbias, keru, kerubias, kerh, kerhbias, fht1, fht2, height, width, condim2, condim4, condim5);
        cgru_1(fbih3, kerr, kerrbias, keru, kerubias, kerh, kerhbias, fht2, fht3, height, width, condim2, condim4, condim5);

        free(fbih0);
        free(fbih1);
        free(fbih2);
        free(fbih3);
        free(fht0);
        free(fht1);
        free(fht2);
        free(kerr);
        free(kerrbias);
        free(keru);
        free(kerubias);
        free(kerh);
        free(kerhbias);

        float *conv1out=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        float *conv1in=(float*)malloc(cheight * cwidth * condim3 * sizeof(float));

        for(int i=0; i<height; i++){
            int oid=(i+1)*cwidth*(condim3)+(condim3);
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(conv1in+oid+(j*condim3)+k))=(*(fht3+(i*width+j)*condim2+k));
                }
                (*(conv1in+oid+(j*condim3)+condim2))=0;
            }
        }

        split(conv1in, conv1out, kercon1, kercon1bias, height, width, condim2, 1);
        free(conv1in);
        free(fht3);
        free(kercon1);
        free(kercon1bias);

        float *conv2out=(float*)malloc(cheight * cwidth * condim2 * sizeof(float));
        float *conv2in=(float*)malloc(cheight * cwidth * condim3 * sizeof(float));
        for(int i=0; i<height; i++){
            int oid=(i+1)*cwidth*(condim3)+(condim3);
            for(int j=0; j<width; j++){
                for(int k=0; k<condim2; k++){
                    (*(conv2in+oid+(j*condim3)+k))=(*(conv1out+(i*width+j)*condim2+k));
                }
                (*(conv2in+oid+(j*condim3)+condim2))=0;
            }
        }

        split(conv2in, conv2out, kercon2, kercon2bias, height, width, condim2, 1);
        free(conv1out);
        free(conv2in);
        free(kercon2);
        free(kercon2bias);

		//结果相减
//		hw_ctr.start();
		float *res_out = (float*)malloc(width * height * 4 * sizeof(float));
		BYTE *fin_out = (BYTE*)malloc(width * height * 4 * sizeof(BYTE));
		int finsize=width * height;
		float pix;
		for(int i=0; i<finsize; i++){
            (*(res_out+i))=(*(inputdata+i))-(*(conv2out+i*16));
            (*(res_out+i+256*64))=(*(inputdata+i+256*64))-(*(conv2out+i*16));
            (*(res_out+i+256*64*2))=(*(inputdata+i+256*64*2))-(*(conv2out+i*16));
            (*(res_out+i+256*64*3))=(*(inputdata+i+256*64*3))-(*(conv2out+i*16));
		}

		for(int i=0; i<finsize*4; i++){
            pix=(*(res_out+i))*255;
            (*(fin_out+i))=(BYTE)pix;

		}
		free(inputdata);
		free(conv2out);
		free(res_out);
//		hw_ctr.stop();
//
//		uint64_t subtract_cycles = hw_ctr.avg_cpu_cycles();
//		hw_ctr.reset();

		//写出图片
//		hw_ctr.start();
        if((fpw=fopen("e.bmp","wb"))==NULL)
        {
            cout<<"create the bmp file error!"<<endl;
            return NULL;
        }
        WORD bfType_w=0x4d42;
        fwrite(&bfType_w,1,sizeof(WORD),fpw);
        //fpw +=2;
        fwrite(&strHead,1,sizeof(tagBITMAPFILEHEADER),fpw);
        strInfo.biWidth1 = width;
        strInfo.biHeight1 = height;
        fwrite(&strInfo,1,sizeof(tagBITMAPINFOHEADER),fpw);

        for(int o=0; o<offnum; o++){
            fwrite(&(*(offset + o)), sizeof(BYTE), 1, fpw);
            }

        //保存像素数据
        useless = 0;
        for(int i =height;i >0 ;--i)
        {
            for(int j = 0;j < width;++j)
            {
                fwrite( &(*(fin_out + (i-1) * width + j)),1,sizeof(BYTE),fpw);
                if ((j+1) % width == 0)
                {
                    fwrite(&useless, (temp_Width - width), sizeof(BYTE), fpw);
                }
            }
        }

        fclose(fpw);
//        hw_ctr.stop();
//
//		uint64_t sw_cycles_savebmp = hw_ctr.avg_cpu_cycles();
//		hw_ctr.reset();

        //释放内存
        free(offset);
        free(fin_out);


//        total_ctr.stop();
//        uint64_t hw_cycles_total = total_ctr.avg_cpu_cycles();
//
//        cout<<"conv1_cycles: "<<hw_cycles_conv1<<endl;
//		cout<<"conv2_cycles: "<<hw_cycles_conv2<<endl;
//		cout<<"conv3_cycles: "<<hw_cycles_conv3<<endl;
//		cout<<"conv4_cycles: "<<hw_cycles_conv4<<endl;
//		cout<<"conv5_cycles: "<<hw_cycles_conv5<<endl;
//		cout<<"conv6_cycles: "<<hw_cycles_conv6<<endl;
//		cout<<"conv7_cycles: "<<hw_cycles_conv7<<endl;
//		cout<<"conv8_cycles: "<<hw_cycles_conv8<<endl;
//		cout<<"conv9_cycles: "<<hw_cycles_conv9<<endl;
//		cout<<"conv10_cycles: "<<hw_cycles_conv10<<endl;
//		cout<<"alloc1_1_cycles: "<<hw_cycles_alloc1_1<<endl;
//		cout<<"alloc1_2_cycles: "<<hw_cycles_alloc1_2<<endl;
//		cout<<"alloc2_1_cycles: "<<hw_cycles_alloc2_1<<endl;
//		cout<<"alloc2_2_cycles: "<<hw_cycles_alloc2_2<<endl;
////		cout<<"relu2_cycles: "<<hw_cycles_relu2<<endl;
//		cout<<"subtract_cycles: "<<subtract_cycles<<endl;
//		cout<<"savebmp_cycles: "<<sw_cycles_savebmp<<endl;
//		cout<<"total_cycles: "<<hw_cycles_total<<endl;
	}
	else
	{
		cout << "file open error!" << endl;
		return NULL;
	}
}

