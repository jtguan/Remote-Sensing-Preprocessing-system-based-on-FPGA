typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef long LONG;

//位图文件头定义;
//其中不包含文件类型信息（由于结构体的内存结构决定，
//要是加了的话将不能正确读取文件信息）
typedef struct  tagBITMAPFILEHEADER{
	//WORD bfType;//文件类型，必须是0x424D，即字符“BM”
	WORD bfSize1;//文件大小
	WORD bfSize2;
	WORD bfReserved1;//保留字
	WORD bfReserved2;//保留字
	WORD bfOffBits1;
	WORD bfOffBits2;//从文件头到实际位图数据的偏移字节数
}BITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER{
	WORD biSize1;//信息头大小
	WORD biSize2;
	WORD biWidth1;//图像宽度
	WORD biWidth2;
	WORD biHeight1;
	WORD biHeight2;//图像高度
	WORD biPlanes;//位平面数，必须为1
	WORD biBitCount;//每像素位数
	WORD  biCompression1; //压缩类型
	WORD  biCompression2;
	WORD  biSizeImage1; //压缩图像大小字节数
	WORD  biSizeImage2;
	WORD  biXPelsPerMeter1;
	WORD  biXPelsPerMeter2; //水平分辨率
	WORD  biYPelsPerMeter1; //垂直分辨率
	WORD  biYPelsPerMeter2;
	WORD  biClrUsed1; //位图实际用到的色彩数
	WORD  biClrUsed2;
	WORD  biClrImportant1; //本位图中重要的色彩数
	WORD  biClrImportant2;
}BITMAPINFOHEADER; //位图信息头定义

typedef struct tagRGBQUAD{
	BYTE rgbBlue; //该颜色的蓝色分量
	BYTE rgbGreen; //该颜色的绿色分量
	BYTE rgbRed; //该颜色的红色分量
	BYTE rgbReserved; //保留值
}RGBQUAD;//调色板定义

//像素信息
typedef struct tagIMAGEDATA
{
	BYTE red;
	BYTE green;
	BYTE blue;
}IMAGEDATA;

typedef struct tagKERDATA
{
	float red;
	float green;
	float blue;
}KERDATA;

