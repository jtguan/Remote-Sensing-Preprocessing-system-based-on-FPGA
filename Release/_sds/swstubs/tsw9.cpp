#include <stdio.h>
#include "new.h"
#include "stdlib.h"
#include "math.h"
#include "ff.h"
//#include "ff1.h"
#include <iostream>
#include <fstream>
#include "sds_utils.h"
#include "ap_fixed.h"


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

void conv2d_or(ap_fixed<16,2> *CON_IN, ap_fixed<16,2> *KER, ap_fixed<16,2> *CON_OUT, ap_fixed<16,2> *bias, int width, int height, int ksize, int dim_in, int dim_out)
{
    int W = width;
    int H = height;
    int N = ksize;
    int CW = W-2;
    int CH = H-2;

    for(int order=0; order<dim_out; order++){
        for(int j=0; j<CH; j++){
            for(int m=0; m<CW; m++){
                ap_fixed<16,2> result = 0.0;
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

void relu(ap_fixed<16,2> *RE, int cwidth, int cheight, int dim){
    int pixnum = cwidth * cheight * dim;
    int pix=0;
    for(pix; pix<pixnum; pix++){
        if((*(RE + pix))<0)
            (*(RE + pix))=0;
    }
}

void p_0_conv2d_1_1_async_1(ap_fixed<16, 2> CON_IN2[42240], ap_fixed<16, 2> KER2[36864], ap_fixed<16, 2> CON_OUT2[32768], ap_fixed<16, 2> BIA2[64], ap_fixed<16, 2> CON_IN3[42240], ap_fixed<16, 2> KER3[36864], ap_fixed<16, 2> CON_OUT3[32768], ap_fixed<16, 2> BIA3[64], ap_fixed<16, 2> CON_IN4[42240], ap_fixed<16, 2> KER4[36864], ap_fixed<16, 2> CON_OUT4[32768], ap_fixed<16, 2> BIA4[64], ap_fixed<16, 2> CON_IN5[42240], ap_fixed<16, 2> KER5[36864], ap_fixed<16, 2> CON_OUT5[32768], ap_fixed<16, 2> BIA5[64], int re_en);
void sync_conv(ap_fixed<16,2> *inputdata31, ap_fixed<16,2> *inputdata41, ap_fixed<16,2> *inputdata32, ap_fixed<16,2> *inputdata42, ap_fixed<16,2> *outdata31, ap_fixed<16,2> *outdata41, ap_fixed<16,2> *outdata32, ap_fixed<16,2> *outdata42,
               ap_fixed<16,2> *inputdata11, ap_fixed<16,2> *inputdata21, ap_fixed<16,2> *inputdata12, ap_fixed<16,2> *inputdata22, ap_fixed<16,2> *outdata11, ap_fixed<16,2> *outdata21, ap_fixed<16,2> *outdata12, ap_fixed<16,2> *outdata22,
               ap_fixed<16,2> *kerneldata2, ap_fixed<16,2> *kerbias2, ap_fixed<16,2> *con2_in, ap_fixed<16,2> *con2_out, int order1, int en_re)
{
	#pragma SDS async(1)
    p_0_conv2d_1_1_async_1(inputdata31, kerneldata2, outdata31, kerbias2, inputdata32, kerneldata2, outdata32, kerbias2,
             inputdata41, kerneldata2, outdata41, kerbias2, inputdata42, kerneldata2, outdata42, kerbias2, en_re);


	for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-2))+(i*16384)+j))=(*(outdata11+(i*4096)+j));
		}
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-2))+(i*16384)+4096+j))=(*(outdata12+(i*4096)+j));
		}
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-2))+(i*16384)+8192+j))=(*(outdata21+(i*4096)+j));
		}
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-2))+(i*16384)+12288+j))=(*(outdata22+(i*4096)+j));
		}
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<4224; j++){
			(*(inputdata11+(i*4224)+j))=(*(con2_in+132096*order1+(i*16512)+j));
		}
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<4224; j++){
			(*(inputdata12+(i*4224)+j))=(*(con2_in+132096*order1+(i*16512)+4096+j));
		}
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<4224; j++){
			(*(inputdata21+(i*4224)+j))=(*(con2_in+132096*order1+(i*16512)+8192+j));
		}
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<4224; j++){
			(*(inputdata22+(i*4224)+j))=(*(con2_in+132096*order1+(i*16512)+12288+j));
		}
	}

sds_wait(1);
	#pragma SDS wait(1)
    #pragma SDS async(1)
    p_0_conv2d_1_1_async_1(inputdata11, kerneldata2, outdata11, kerbias2, inputdata12, kerneldata2, outdata12, kerbias2,
             inputdata21, kerneldata2, outdata21, kerbias2, inputdata22, kerneldata2, outdata22, kerbias2, en_re);

    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*(order1-1))+(i*16384)+j))=(*(outdata31+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-1))+(i*16384)+4096+j))=(*(outdata32+(i*4096)+j));
		}
	}
    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*(order1-1))+(i*16384)+8192+j))=(*(outdata41+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*(order1-1))+(i*16384)+12288+j))=(*(outdata42+(i*4096)+j));
		}
	}
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata31+(i*4224)+j))=(*(con2_in+132096*(order1+1)+(i*16512)+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata32+(i*4224)+j))=(*(con2_in+132096*(order1+1)+(i*16512)+4096+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata41+(i*4224)+j))=(*(con2_in+132096*(order1+1)+(i*16512)+8192+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata42+(i*4224)+j))=(*(con2_in+132096*(order1+1)+(i*16512)+12288+j));
        }
    }


sds_wait(1);
    #pragma SDS wait(1)
}

void p_0_conv2d_1_1_async_1(ap_fixed<16, 2> CON_IN2[42240], ap_fixed<16, 2> KER2[36864], ap_fixed<16, 2> CON_OUT2[32768], ap_fixed<16, 2> BIA2[64], ap_fixed<16, 2> CON_IN3[42240], ap_fixed<16, 2> KER3[36864], ap_fixed<16, 2> CON_OUT3[32768], ap_fixed<16, 2> BIA3[64], ap_fixed<16, 2> CON_IN4[42240], ap_fixed<16, 2> KER4[36864], ap_fixed<16, 2> CON_OUT4[32768], ap_fixed<16, 2> BIA4[64], ap_fixed<16, 2> CON_IN5[42240], ap_fixed<16, 2> KER5[36864], ap_fixed<16, 2> CON_OUT5[32768], ap_fixed<16, 2> BIA5[64], int re_en);
void split(ap_fixed<16,2> *con2_in, ap_fixed<16,2> *con2_out, ap_fixed<16,2> *kerneldata2, ap_fixed<16,2> *kerbias2, int height, int width, int cwidth, int condim2, int en_re)
{
    ap_fixed<16,2> *inputdata11 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata12 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata11 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata12 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata21 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata22 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata21 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata22 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));

    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata11+(i*4224)+j))=(*(con2_in+(i*16512)+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata12+(i*4224)+j))=(*(con2_in+(i*16512)+4096+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata21+(i*4224)+j))=(*(con2_in+(i*16512)+8192+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata22+(i*4224)+j))=(*(con2_in+(i*16512)+12288+j));
        }
    }

    #pragma SDS async(1)
    p_0_conv2d_1_1_async_1(inputdata11, kerneldata2, outdata11, kerbias2, inputdata12, kerneldata2, outdata12, kerbias2,
             inputdata21, kerneldata2, outdata21, kerbias2, inputdata22, kerneldata2, outdata22, kerbias2, en_re);

    ap_fixed<16,2> *inputdata31 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata32 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata41 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *inputdata42 = (ap_fixed<16,2>*)sds_alloc(((width/4)+2) * ((height/32)+2) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata31 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata32 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata41 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));
    ap_fixed<16,2> *outdata42 = (ap_fixed<16,2>*)sds_alloc((width/4) * (height/32) * condim2 * sizeof(ap_fixed<16,2>));

    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata31+(i*4224)+j))=(*(con2_in+132096+(i*16512)+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata32+(i*4224)+j))=(*(con2_in+132096+(i*16512)+4096+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata41+(i*4224)+j))=(*(con2_in+132096+(i*16512)+8192+j));
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<4224; j++){
            (*(inputdata42+(i*4224)+j))=(*(con2_in+132096+(i*16512)+12288+j));
        }
    }

sds_wait(1);
    #pragma SDS wait(1)

    for(int order1=2; order1<31; order1=order1+2){
    	sync_conv(inputdata31, inputdata41, inputdata32, inputdata42, outdata31, outdata41, outdata32, outdata42, inputdata11, inputdata21, inputdata12, inputdata22,
                 outdata11, outdata21, outdata12, outdata22, kerneldata2, kerbias2, con2_in, con2_out, order1, en_re);
    }

    #pragma SDS async(1)
    p_0_conv2d_1_1_async_1(inputdata31, kerneldata2, outdata31, kerbias2, inputdata32, kerneldata2, outdata32, kerbias2,
             inputdata41, kerneldata2, outdata41, kerbias2, inputdata42, kerneldata2, outdata42, kerbias2, en_re);

    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*30)+(i*16384)+j))=(*(outdata11+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*30)+(i*16384)+4096+j))=(*(outdata12+(i*4096)+j));
		}
	}
    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*30)+(i*16384)+8192+j))=(*(outdata21+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*30)+(i*16384)+12288+j))=(*(outdata22+(i*4096)+j));
		}
	}

    sds_free(outdata11);
    sds_free(outdata12);
    sds_free(inputdata11);
    sds_free(inputdata12);
    sds_free(outdata21);
    sds_free(outdata22);
    sds_free(inputdata21);
    sds_free(inputdata22);


sds_wait(1);
    #pragma SDS wait(1)

    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*31)+(i*16384)+j))=(*(outdata31+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*31)+(i*16384)+4096+j))=(*(outdata32+(i*4096)+j));
		}
	}
    for(int i=0; i<8; i++){
        for(int j=0; j<4096; j++){
        (*(con2_out+(131072*31)+(i*16384)+8192+j))=(*(outdata41+(i*4096)+j));
        }
    }
    for(int i=0; i<8; i++){
		for(int j=0; j<4096; j++){
		(*(con2_out+(131072*31)+(i*16384)+12288+j))=(*(outdata42+(i*4096)+j));
		}
	}
    sds_free(outdata31);
    sds_free(outdata32);
    sds_free(inputdata31);
    sds_free(inputdata32);
    sds_free(outdata41);
    sds_free(outdata42);
    sds_free(inputdata41);
    sds_free(inputdata42);
}


int main() {
	char strFile[] = "test.bmp";//bmp文件名
	BYTE *imagedata = NULL;//动态分配存储原图片的像素信息的二维数组
	BYTE *offset = NULL;
	ap_fixed<16,2> *inputdata = NULL;
	ap_fixed<16,2> *kerneldata1 = NULL;
	ap_fixed<16,2> *kerneldata2 = NULL;
	ap_fixed<16,2> *kerneldata3 = NULL;
	ap_fixed<16,2> *kerneldata4 = NULL;
	ap_fixed<16,2> *kerneldata5 = NULL;
	ap_fixed<16,2> *kerneldata6 = NULL;
	ap_fixed<16,2> *kerneldata7 = NULL;
	ap_fixed<16,2> *kerneldata8 = NULL;
	ap_fixed<16,2> *kerneldata9 = NULL;
	ap_fixed<16,2> *kerneldata10 = NULL;
	ap_fixed<16,2> *kerbias1 = NULL;
	ap_fixed<16,2> *kerbias2 = NULL;
	ap_fixed<16,2> *kerbias3 = NULL;
	ap_fixed<16,2> *kerbias4 = NULL;
	ap_fixed<16,2> *kerbias5 = NULL;
	ap_fixed<16,2> *kerbias6 = NULL;
	ap_fixed<16,2> *kerbias7 = NULL;
	ap_fixed<16,2> *kerbias8 = NULL;
	ap_fixed<16,2> *kerbias9 = NULL;
	ap_fixed<16,2> *kerbias10 = NULL;

	ap_fixed<16,2> a=0.11;
	float b;
	b=a;

	int width, height, cwidth, cheight;//图片的宽度和高度
	int ksize = 3;
	int condim1 = 1;
	int condim2 = 64;
	int condim3 = 1;
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
		offset = (BYTE*)sds_alloc(offnum * sizeof(BYTE));
		for(int of=0; of<offnum; of++){
            (*(offset + of)) = 0;
		}
		for(int o=0; o<offnum; o++){
            fread(&offtemp, sizeof(BYTE), 1, fpi);
            (*(offset + o))=offtemp;
            }
        cout<<"end"<<endl;
//        sds_free(offset);

		width = strInfo.biWidth1;
		height = strInfo.biHeight1;
		cwidth = width+2;
		cheight = height+2;
		imagedata = (BYTE*)sds_alloc(width * height * sizeof(BYTE));
        inputdata = (ap_fixed<16,2>*)sds_alloc(width * height * sizeof(ap_fixed<16,2>));
//        kerneldata1 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim1 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata1 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata2 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata3 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata4 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata5 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata6 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata7 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata8 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata9 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerneldata10 = (ap_fixed<16,2>*)sds_alloc(ksize * ksize * condim2 * condim2 * sizeof(ap_fixed<16,2>));
        kerbias1 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias2 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias3 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias4 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias5 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias6 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias7 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias8 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias9 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));
        kerbias10 = (ap_fixed<16,2>*)sds_alloc(condim2 * sizeof(ap_fixed<16,2>));

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

		ap_fixed<16,2> a;
		float b=0.11;
		b=a;

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
		sds_free(imagedata);

		//读入权重
		//conv_1权重
        ifstream fpt;
        fpt.open("conv1/conv1_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        char strtbias[100];
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias1 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char strcon[100];
        char connum[] = "conv1/conv1.txt";
        cout<<connum<<endl;
        fpt.open(connum);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize * ksize * condim2 * condim2; ti++){
        	if(ti%64==0){
				fpt.getline(strcon, 100);
				(*(kerneldata1 + ti)) = atof(strcon);}
        	else{
        		(*(kerneldata1 + ti)) = 0;
        	}
        }
        fpt.close();
        fpt.clear();

        //conv_2权重
        fpt.open("conv2/conv2_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias2 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum2[] = "conv2/conv2.txt";
        cout<<connum2<<endl;
        fpt.open(connum2);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata2 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_3权重
        fpt.open("conv3/conv3_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias3 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum3[] = "conv3/conv3.txt";
        cout<<connum3<<endl;
        fpt.open(connum3);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata3 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_4权重
        fpt.open("conv4/conv4_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias4 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum4[] = "conv4/conv4.txt";
        cout<<connum4<<endl;
        fpt.open(connum4);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata4 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_5权重
        fpt.open("conv5/conv5_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias5 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum5[] = "conv5/conv5.txt";
        cout<<connum5<<endl;
        fpt.open(connum5);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata5 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_6权重
        fpt.open("conv6/conv6_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias6 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum6[] = "conv6/conv6.txt";
        cout<<connum6<<endl;
        fpt.open(connum6);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata6 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_7权重
        fpt.open("conv7/conv7_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias7 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum7[] = "conv7/conv7.txt";
        cout<<connum7<<endl;
        fpt.open(connum7);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata7 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_8权重
        fpt.open("conv8/conv8_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias8 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum8[] = "conv8/conv8.txt";
        cout<<connum8<<endl;
        fpt.open(connum8);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata8 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_9权重
        fpt.open("conv9/conv9_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
            fpt.getline(strtbias,100);
            (*(kerbias9 + ti)) = atof(strtbias);
        }
        fpt.close();
        fpt.clear();

        char connum9[] = "conv9/conv9.txt";
        cout<<connum9<<endl;
        fpt.open(connum9);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize*ksize*condim2*condim2; ti++){
            fpt.getline(strcon, 100);
            (*(kerneldata9 + ti)) = atof(strcon);
        }
        fpt.close();
        fpt.clear();

        //conv_10权重
        fpt.open("conv10/conv10_bias.txt");
        if (! fpt.is_open()){
            cout << "Error opening file"<<endl;
        }
        for(int ti=0; ti<condim2; ti++){
        	if(ti==0){
            fpt.getline(strtbias,100);
            (*(kerbias10 + ti)) = atof(strtbias);}
        	else{
        	(*(kerbias10 + ti)) = 0;
        	}
        }
        fpt.close();
        fpt.clear();

        char connum10[] = "conv10/conv10.txt";
        cout<<connum10<<endl;
        fpt.open(connum10);
        if (! fpt.is_open()){
                cout << "Error opening file"<<endl;
            }
        for(int ti=0; ti<ksize * ksize * condim2 * condim2; ti++){
        	if(ti<576){
				fpt.getline(strcon, 100);
				(*(kerneldata10 + ti)) = atof(strcon);}
        	else{
        		(*(kerneldata10 + ti)) = 0;
        	}
        }
        fpt.close();
        fpt.clear();

        //卷积开始
      sds_utils::perf_counter hw_ctr, total_ctr, inner_ctr;
//
      total_ctr.start();
      hw_ctr.start();
//        conv_1
      	ap_fixed<16,2> *con1_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con1_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con2_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
		for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con1_in+i))=0;
		}
//		for(int i=0; i<height; i++){
//			int oid=(i+1)*(width+2)*condim1+condim1;
//			int jid=i*width*condim1;
//			for(int j=0; j<width; j++){
//				for(int k=0; k<condim1; k++)
//					(*(con1_in+oid+(j*condim1)+k))=(*(inputdata+jid+(j*condim1)+k));
//			}
//		}
		int k=0;
		for(int i=1;i<257;i++){
			for(int j=1;j<257;j++){
				(*(con1_in+(i*258+j)*64))=(*(inputdata+k));
				++k;
			}
		}
		hw_ctr.stop();

		uint64_t hw_cycles_alloc1_1 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

        hw_ctr.start();
        split(con1_in, con1_out, kerneldata1, kerbias1, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv1 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

		hw_ctr.start();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con2_in+i))=0;
		}
        for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con2_in+oid+(j*condim2)+k))=(*(con1_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata1);
		sds_free(kerbias1);
		sds_free(con1_in);
		sds_free(con1_out);
		hw_ctr.stop();

		uint64_t hw_cycles_alloc1_2 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

//		relu(con2_in, cwidth, cheight, condim2);

		//conv_2
		hw_ctr.start();
		ap_fixed<16,2> *con3_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con2_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));
        hw_ctr.stop();

		uint64_t hw_cycles_alloc2_1 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

        hw_ctr.start();
        split(con2_in, con2_out, kerneldata2, kerbias2, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv2 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

		hw_ctr.start();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con3_in+i))=0;
		}
        for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con3_in+oid+(j*condim2)+k))=(*(con2_out+jid+(j*condim2)+k));
			}
		}

        sds_free(kerneldata2);
        sds_free(kerbias2);
		sds_free(con2_in);
		sds_free(con2_out);
		hw_ctr.stop();

		uint64_t hw_cycles_alloc2_2 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

//		hw_ctr.start();
//		relu(con3_in, cwidth, cheight, condim2);
//		hw_ctr.stop();
//
//		uint64_t hw_cycles_relu2 = hw_ctr.avg_cpu_cycles();
//		hw_ctr.reset();

		//conv_3
		ap_fixed<16,2> *con4_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con3_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con3_in, con3_out, kerneldata3, kerbias3, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv3 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con4_in+i))=0;
		}
        for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con4_in+oid+(j*condim2)+k))=(*(con3_out+jid+(j*condim2)+k));
			}
		}

        sds_free(kerneldata3);
        sds_free(kerbias3);
		sds_free(con3_in);
		sds_free(con3_out);

//		relu(con4_in, cwidth, cheight, condim2);

		//conv_4
		ap_fixed<16,2> *con5_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con4_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con4_in, con4_out, kerneldata4, kerbias4, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

        uint64_t hw_cycles_conv4 = hw_ctr.avg_cpu_cycles();
        hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con5_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con5_in+oid+(j*condim2)+k))=(*(con4_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata4);
		sds_free(kerbias4);
		sds_free(con4_in);
		sds_free(con4_out);

//		relu(con5_in, cwidth, cheight, condim2);

		//conv_5
		ap_fixed<16,2> *con6_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con5_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con5_in, con5_out, kerneldata5, kerbias5, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv5 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con6_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con6_in+oid+(j*condim2)+k))=(*(con5_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata5);
		sds_free(kerbias5);
		sds_free(con5_in);
		sds_free(con5_out);

//		relu(con6_in, cwidth, cheight, condim2);

		//conv_6
		ap_fixed<16,2> *con7_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con6_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con6_in, con6_out, kerneldata6, kerbias6, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv6 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con7_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con7_in+oid+(j*condim2)+k))=(*(con6_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata6);
		sds_free(kerbias6);
		sds_free(con6_in);
		sds_free(con6_out);

//		relu(con7_in, cwidth, cheight, condim2);

		//conv_7
		ap_fixed<16,2> *con8_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con7_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con7_in, con7_out, kerneldata7, kerbias7, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv7 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con8_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con8_in+oid+(j*condim2)+k))=(*(con7_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata7);
		sds_free(kerbias7);
		sds_free(con7_in);
		sds_free(con7_out);

//		relu(con8_in, cwidth, cheight, condim2);

		//conv_8
		ap_fixed<16,2> *con9_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con8_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con8_in, con8_out, kerneldata8, kerbias8, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv8 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con9_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con9_in+oid+(j*condim2)+k))=(*(con8_out+jid+(j*condim2)+k));
			}
		}
		sds_free(kerneldata8);
		sds_free(kerbias8);
		sds_free(con8_in);
		sds_free(con8_out);

//		relu(con9_in, cwidth, cheight, condim2);

		//conv_9
		ap_fixed<16,2> *con10_in = (ap_fixed<16,2>*)sds_alloc(cwidth * cheight * condim2 * sizeof(ap_fixed<16,2>));
        ap_fixed<16,2> *con9_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
        split(con9_in, con9_out, kerneldata9, kerbias9, height, width, cwidth, condim2, 1);
        hw_ctr.stop();

		uint64_t hw_cycles_conv9 = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();
        for(int i=0; i<(width+2) * (height+2) * condim2; i++){
			(*(con10_in+i))=0;
		}
		for(int i=0; i<height; i++){
			int oid=(i+1)*(width+2)*condim2+condim2;
			int jid=i*width*condim2;
			for(int j=0; j<width; j++){
				for(int k=0; k<condim2; k++)
					(*(con10_in+oid+(j*condim2)+k))=(*(con9_out+jid+(j*condim2)+k));
			}
		}

		sds_free(kerneldata9);
		sds_free(kerbias9);
		sds_free(con9_in);
		sds_free(con9_out);

//		relu(con10_in, cwidth, cheight, condim2);

		//conv_10
//        ap_fixed<16,2> *con10_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim3 * sizeof(ap_fixed<16,2>));
		ap_fixed<16,2> *con10_out = (ap_fixed<16,2>*)sds_alloc(width * height * condim2 * sizeof(ap_fixed<16,2>));

        hw_ctr.start();
//        conv2d_or(con10_in, kerneldata10, con10_out, kerbias10, cwidth, cheight, ksize, condim2, condim3);
        split(con10_in, con10_out, kerneldata10, kerbias10, height, width, cwidth, condim2, 0);
        hw_ctr.stop();

        uint64_t hw_cycles_conv10 = hw_ctr.avg_cpu_cycles();
        hw_ctr.reset();

        sds_free(kerneldata10);
        sds_free(kerbias10);
		sds_free(con10_in);

		//结果相减
		hw_ctr.start();
		ap_fixed<16,2> *res_out = (ap_fixed<16,2>*)sds_alloc(width * height * sizeof(ap_fixed<16,2>));
		BYTE *fin_out = (BYTE*)sds_alloc(width * height * sizeof(BYTE));
		int finsize=width * height;
		float pix;
		for(int i=0; i<finsize; i++){
            (*(res_out+i))=(*(inputdata+i))-(*(con10_out+i*64));
		}
		for(int i=0; i<finsize; i++){
            pix=(*(res_out+i))*255;
            (*(fin_out+i))=(BYTE)pix;

		}
		sds_free(inputdata);
		sds_free(con10_out);
		sds_free(res_out);
		hw_ctr.stop();

		uint64_t subtract_cycles = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

		//写出图片
		hw_ctr.start();
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
        hw_ctr.stop();

		uint64_t sw_cycles_savebmp = hw_ctr.avg_cpu_cycles();
		hw_ctr.reset();

        //释放内存
        sds_free(offset);
        sds_free(fin_out);


        total_ctr.stop();
        uint64_t hw_cycles_total = total_ctr.avg_cpu_cycles();

        cout<<"conv1_cycles: "<<hw_cycles_conv1<<endl;
		cout<<"conv2_cycles: "<<hw_cycles_conv2<<endl;
		cout<<"conv3_cycles: "<<hw_cycles_conv3<<endl;
		cout<<"conv4_cycles: "<<hw_cycles_conv4<<endl;
		cout<<"conv5_cycles: "<<hw_cycles_conv5<<endl;
		cout<<"conv6_cycles: "<<hw_cycles_conv6<<endl;
		cout<<"conv7_cycles: "<<hw_cycles_conv7<<endl;
		cout<<"conv8_cycles: "<<hw_cycles_conv8<<endl;
		cout<<"conv9_cycles: "<<hw_cycles_conv9<<endl;
		cout<<"conv10_cycles: "<<hw_cycles_conv10<<endl;
		cout<<"alloc1_1_cycles: "<<hw_cycles_alloc1_1<<endl;
		cout<<"alloc1_2_cycles: "<<hw_cycles_alloc1_2<<endl;
		cout<<"alloc2_1_cycles: "<<hw_cycles_alloc2_1<<endl;
		cout<<"alloc2_2_cycles: "<<hw_cycles_alloc2_2<<endl;
//		cout<<"relu2_cycles: "<<hw_cycles_relu2<<endl;
		cout<<"subtract_cycles: "<<subtract_cycles<<endl;
		cout<<"savebmp_cycles: "<<sw_cycles_savebmp<<endl;
		cout<<"total_cycles: "<<hw_cycles_total<<endl;
	}
	else
	{
		cout << "file open error!" << endl;
		return NULL;
	}
}

