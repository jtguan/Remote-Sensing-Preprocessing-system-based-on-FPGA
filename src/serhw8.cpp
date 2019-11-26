//#include "ap_fixed.h"
#include "ff.h"
#include "math.h"
//#include "ff1.h"

void conv2d_1(float CON_IN2[38148], float KER2[2448], float CON_OUT2[32768], float BIA2[16], float CON_IN3[38148], float KER3[2448], float CON_OUT3[32768], float BIA3[16],
              float CON_IN4[38148], float KER4[2448], float CON_OUT4[32768], float BIA4[16], float CON_IN5[38148], float KER5[2448], float CON_OUT5[32768], float BIA5[16], int re_en, int ta_en)
{
    float input[38148];
    float kernel[2448];
    float inpu2t[38148];
	float kerne2l[2448];
	float inpu3t[38148];
	float kerne3l[2448];
    float output[32768];
    float bias[16];

    float input2[38148];
    float kernel2[2448];
    float inpu2t2[38148];
	float kerne2l2[2448];
	float inpu3t2[38148];
	float kerne3l2[2448];
    float output2[32768];
    float bias2[16];

    float input3[38148];
    float kernel3[2448];
    float inpu2t3[38148];
	float kerne2l3[2448];
	float inpu3t3[38148];
	float kerne3l3[2448];
    float output3[32768];
    float bias3[16];

    float input4[38148];
    float kernel4[2448];
    float inpu2t4[38148];
	float kerne2l4[2448];
	float inpu3t4[38148];
	float kerne3l4[2448];
    float output4[32768];
    float bias4[16];

    #pragma HLS array_partition variable=input cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kernel cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu2t cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne2l cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu3t cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne3l cyclic factor=17 dim=1
    #pragma HLS array_partition variable=bias complete dim=1
    #pragma HLS array_partition variable=input2 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kernel2 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu2t2 cyclic factor=17 dim=1
   	#pragma HLS array_partition variable=kerne2l2 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu3t2 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne3l2 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=bias2 complete dim=1
    #pragma HLS array_partition variable=input3 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kernel3 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu2t3 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne2l3 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu3t3 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne3l3 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=bias3 complete dim=1
    #pragma HLS array_partition variable=input4 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kernel4 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu2t4 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne2l4 cyclic factor=17 dim=1
	#pragma HLS array_partition variable=inpu3t4 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=kerne3l4 cyclic factor=17 dim=1
    #pragma HLS array_partition variable=bias4 complete dim=1

    for(int lm=0; lm<1; lm++){
    	#pragma HLS loop_merge
        for(int i=0; i<38148; i++){
            #pragma HLS PIPELINE
            input[i]=CON_IN2[i];
        	inpu2t[i]=CON_IN2[i];
        	inpu3t[i]=CON_IN2[i];
        }

        for(int i=0; i<2448; i++){
            #pragma HLS PIPELINE
            kernel[i]=KER2[i];
        	kerne2l[i]=KER2[i];
        	kerne3l[i]=KER2[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias[i]=BIA2[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output[i]=0;

        for(int i=0; i<38148; i++){
            #pragma HLS PIPELINE
            input2[i]=CON_IN3[i];
        	inpu2t2[i]=CON_IN3[i];
        	inpu3t2[i]=CON_IN3[i];
        }

        for(int i=0; i<2448; i++){
            #pragma HLS PIPELINE
            kernel2[i]=KER3[i];
        	kerne2l2[i]=KER3[i];
        	kerne3l2[i]=KER3[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias2[i]=BIA3[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output2[i]=0;

        for(int i=0; i<38148; i++){
            #pragma HLS PIPELINE
            input3[i]=CON_IN4[i];
        	inpu2t3[i]=CON_IN4[i];
        	inpu3t3[i]=CON_IN4[i];
        }

        for(int i=0; i<2448; i++){
            #pragma HLS PIPELINE
            kernel3[i]=KER4[i];
        	kerne2l3[i]=KER4[i];
        	kerne3l3[i]=KER4[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias3[i]=BIA4[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output3[i]=0;

        for(int i=0; i<38148; i++){
            #pragma HLS PIPELINE
            input4[i]=CON_IN5[i];
        	inpu2t4[i]=CON_IN5[i];
        	inpu3t4[i]=CON_IN5[i];
        }

        for(int i=0; i<2448; i++){
            #pragma HLS PIPELINE
            kernel4[i]=KER5[i];
        	kerne2l4[i]=KER5[i];
        	kerne3l4[i]=KER5[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias4[i]=BIA5[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output4[i]=0;
        }


    float res1, res2, res3, res4,re1,re2,r1;
	float result1,result2,result3,result4,result5,result6,result7,result8,result9;

	float r2es1, r2es2, r2es3, r2es4,r2e1,r2e2,r21;
	float r2esult1,r2esult2,r2esult3,r2esult4,r2esult5,r2esult6,r2esult7,r2esult8,r2esult9;

	float r3es1, r3es2, r3es3, r3es4,r3e1,r3e2,r31;
	float r3esult1,r3esult2,r3esult3,r3esult4,r3esult5,r3esult6,r3esult7,r3esult8,r3esult9;

	float r4es1, r4es2, r4es3, r4es4,r4e1,r4e2,r41;
	float r4esult1,r4esult2,r4esult3,r4esult4,r4esult5,r4esult6,r4esult7,r4esult8,r4esult9;

	for(int j=0; j<64; j++){
		for(int m=0; m<32; m++){
			for(int order=0; order<16; order++){
				#pragma HLS PIPELINE II=1
				float result = 0;
				float r2esult = 0;
				float r3esult = 0;
				float r4esult = 0;
				float fresult = 0;
				float fr2esult = 0;
				float fr3esult = 0;
				float fr4esult = 0;
				for(int di=0; di<17; di++){
					result1 = input[((j)*34+m)*17+di] * kernel[(((order*3)*3)*17)+di];
					result2 = input[((j)*34+m+1)*17+di] * kernel[(((order*3)*3+1)*17)+di];
					res1=result1+result2;
					result3 = input[((j)*34+m+2)*17+di] * kernel[(((order*3)*3+2)*17)+di];
					result4 = inpu2t[((j+1)*34+m)*17+di] * kerne2l[(((order*3+1)*3)*17)+di];
					res2=result3+result4;
					re1=res1+res2;
					result5 = inpu2t[((j+1)*34+m+1)*17+di] * kerne2l[(((order*3+1)*3+1)*17)+di];
					result6 = inpu2t[((j+1)*34+m+2)*17+di] * kerne2l[(((order*3+1)*3+2)*17)+di];
					res3=result5+result6;
					result7 = inpu3t[((j+2)*34+m)*17+di] * kerne3l[(((order*3+2)*3)*17)+di];
					result8 = inpu3t[((j+2)*34+m+1)*17+di] * kerne3l[(((order*3+2)*3+1)*17)+di];
					res4=result7+result8;
					re2=res3+res4;
					r1=re1+re2;
					result9 = inpu3t[((j+2)*34+m+2)*17+di] * kerne3l[(((order*3+2)*3+2)*17)+di];
					result += r1+result9;

					r2esult1 = input2[((j)*34+m)*17+di] * kernel2[(((order*3)*3)*17)+di];
					r2esult2 = input2[((j)*34+m+1)*17+di] * kernel2[(((order*3)*3+1)*17)+di];
					r2es1=r2esult1+r2esult2;
					r2esult3 = input2[((j)*34+m+2)*17+di] * kernel2[(((order*3)*3+2)*17)+di];
					r2esult4 = inpu2t2[((j+1)*34+m)*17+di] * kerne2l2[(((order*3+1)*3)*17)+di];
					r2es2=r2esult3+r2esult4;
					r2e1=r2es1+r2es2;
					r2esult5 = inpu2t2[((j+1)*34+m+1)*17+di] * kerne2l2[(((order*3+1)*3+1)*17)+di];
					r2esult6 = inpu2t2[((j+1)*34+m+2)*17+di] * kerne2l2[(((order*3+1)*3+2)*17)+di];
					r2es3=r2esult5+r2esult6;
					r2esult7 = inpu3t2[((j+2)*34+m)*17+di] * kerne3l2[(((order*3+2)*3)*17)+di];
					r2esult8 = inpu3t2[((j+2)*34+m+1)*17+di] * kerne3l2[(((order*3+2)*3+1)*17)+di];
					r2es4=r2esult7+r2esult8;
					r2e2=r2es3+r2es4;
					r21=r2e1+r2e2;
					r2esult9 = inpu3t2[((j+2)*34+m+2)*17+di] * kerne3l2[(((order*3+2)*3+2)*17)+di];
					r2esult += r21+r2esult9;

					r3esult1 = input3[((j)*34+m)*17+di] * kernel3[(((order*3)*3)*17)+di];
					r3esult2 = input3[((j)*34+m+1)*17+di] * kernel3[(((order*3)*3+1)*17)+di];
					r3es1=r3esult1+r3esult2;
					r3esult3 = input3[((j)*34+m+2)*17+di] * kernel3[(((order*3)*3+2)*17)+di];
					r3esult4 = inpu2t3[((j+1)*34+m)*17+di] * kerne2l3[(((order*3+1)*3)*17)+di];
					r3es2=r3esult3+r3esult4;
					r3e1=r3es1+r3es2;
					r3esult5 = inpu2t3[((j+1)*34+m+1)*17+di] * kerne2l3[(((order*3+1)*3+1)*17)+di];
					r3esult6 = inpu2t3[((j+1)*6+m+2)*17+di] * kerne2l3[(((order*3+1)*3+2)*17)+di];
					r3es3=r3esult5+r3esult6;
					r3esult7 = inpu3t3[((j+2)*34+m)*17+di] * kerne3l3[(((order*3+2)*3)*17)+di];
					r3esult8 = inpu3t3[((j+2)*34+m+1)*17+di] * kerne3l3[(((order*3+2)*3+1)*17)+di];
					r3es4=r3esult7+r3esult8;
					r3e2=r3es3+r3es4;
					r31=r3e1+r3e2;
					r3esult9 = inpu3t3[((j+2)*34+m+2)*17+di] * kerne3l3[(((order*3+2)*3+2)*17)+di];
					r3esult += r31+r3esult9;

					r4esult1 = input4[((j)*34+m)*17+di] * kernel4[(((order*3)*3)*17)+di];
					r4esult2 = input4[((j)*34+m+1)*17+di] * kernel4[(((order*3)*3+1)*17)+di];
					r4es1=r4esult1+r4esult2;
					r4esult3 = input4[((j)*34+m+2)*17+di] * kernel4[(((order*3)*3+2)*17)+di];
					r4esult4 = inpu2t4[((j+1)*34+m)*17+di] * kerne2l4[(((order*3+1)*3)*17)+di];
					r4es2=r4esult3+r4esult4;
					r4e1=r4es1+r4es2;
					r4esult5 = inpu2t4[((j+1)*34+m+1)*17+di] * kerne2l4[(((order*3+1)*3+1)*17)+di];
					r4esult6 = inpu2t4[((j+1)*34+m+2)*17+di] * kerne2l4[(((order*3+1)*3+2)*17)+di];
					r4es3=r4esult5+r4esult6;
					r4esult7 = inpu3t4[((j+2)*34+m)*17+di] * kerne3l4[(((order*3+2)*3)*17)+di];
					r4esult8 = inpu3t4[((j+2)*34+m+1)*17+di] * kerne3l4[(((order*3+2)*3+1)*17)+di];
					r4es4=r4esult7+r4esult8;
					r4e2=r4es3+r4es4;
					r41=r4e1+r4e2;
					r4esult9 = inpu3t4[((j+2)*34+m+2)*17+di] * kerne3l4[(((order*3+2)*3+2)*17)+di];
					r4esult += r41+r4esult9;
				}
				fresult = result + bias[order];
				fr2esult = r2esult + bias2[order];
				fr3esult = r3esult + bias3[order];
				fr4esult = r4esult + bias4[order];
				if(re_en==1){
					if(fresult>0)
						CON_OUT2[order+((j*32+m)*16)] = fresult;
					else
						CON_OUT2[order+((j*32+m)*16)] = 0;
					if(fr2esult>0)
						CON_OUT3[order+((j*32+m)*16)] = fr2esult;
					else
						CON_OUT3[order+((j*32+m)*16)] = 0;
					if(fr3esult>0)
						CON_OUT4[order+((j*32+m)*16)] = fr3esult;
					else
						CON_OUT4[order+((j*32+m)*16)] = 0;
					if(fr4esult>0)
						CON_OUT5[order+((j*32+m)*16)] = fr4esult;
					else
						CON_OUT5[order+((j*32+m)*16)] = 0;
				}
				else if(ta_en=1){
                    CON_OUT2[order+((j*32+m)*16)] = (exp(fresult)-1/exp(fresult))/(exp(fresult)+1/exp(fresult));
                    CON_OUT3[order+((j*32+m)*16)] = (exp(fr2esult)-1/exp(fr2esult))/(exp(fr2esult)+1/exp(fr2esult));
                    CON_OUT4[order+((j*32+m)*16)] = (exp(fr3esult)-1/exp(fr3esult))/(exp(fr3esult)+1/exp(fr3esult));
                    CON_OUT5[order+((j*32+m)*16)] = (exp(fr4esult)-1/exp(fr4esult))/(exp(fr4esult)+1/exp(fr4esult));
				}
				else{
					CON_OUT2[order+((j*32+m)*16)] = fresult;
					CON_OUT3[order+((j*32+m)*16)] = fr2esult;
					CON_OUT4[order+((j*32+m)*16)] = fr3esult;
					CON_OUT5[order+((j*32+m)*16)] = fr4esult;
				}
			}
		}
	}
}

void conv2d_148(float CON_IN2[107712], float KER2[6912], float CON_OUT2[32768], float BIA2[16], float CON_IN3[107712], float KER3[6912], float CON_OUT3[32768], float BIA3[16],
                float CON_IN4[107712], float KER4[6912], float CON_OUT4[32768], float BIA4[16], float CON_IN5[107712], float KER5[6912], float CON_OUT5[32768], float BIA5[16], int re_en, int ta_en)
{
    float input[107712];
    float kernel[6912];
    float inpu2t[107712];
	float kerne2l[6912];
	float inpu3t[107712];
	float kerne3l[6912];
    float output[32768];
    float bias[16];

    float input2[107712];
    float kernel2[6912];
    float inpu2t2[107712];
	float kerne2l2[6912];
	float inpu3t2[107712];
	float kerne3l2[6912];
    float output2[32768];
    float bias2[16];

    float input3[107712];
    float kernel3[6912];
    float inpu2t3[107712];
	float kerne2l3[6912];
	float inpu3t3[107712];
	float kerne3l3[6912];
    float output3[32768];
    float bias3[16];

    float input4[107712];
    float kernel4[6912];
    float inpu2t4[107712];
	float kerne2l4[6912];
	float inpu3t4[107712];
	float kerne3l4[6912];
    float output4[32768];
    float bias4[16];

    #pragma HLS array_partition variable=input cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kernel cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu2t cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne2l cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu3t cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne3l cyclic factor=48 dim=1
    #pragma HLS array_partition variable=bias complete dim=1
    #pragma HLS array_partition variable=input2 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kernel2 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu2t2 cyclic factor=48 dim=1
   	#pragma HLS array_partition variable=kerne2l2 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu3t2 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne3l2 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=bias2 complete dim=1
    #pragma HLS array_partition variable=input3 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kernel3 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu2t3 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne2l3 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu3t3 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne3l3 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=bias3 complete dim=1
    #pragma HLS array_partition variable=input4 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kernel4 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu2t4 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne2l4 cyclic factor=48 dim=1
	#pragma HLS array_partition variable=inpu3t4 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=kerne3l4 cyclic factor=48 dim=1
    #pragma HLS array_partition variable=bias4 complete dim=1

    for(int lm=0; lm<1; lm++){
    	#pragma HLS loop_merge
        for(int i=0; i<107712; i++){
            #pragma HLS PIPELINE
            input[i]=CON_IN2[i];
        	inpu2t[i]=CON_IN2[i];
        	inpu3t[i]=CON_IN2[i];
        }

        for(int i=0; i<6912; i++){
            #pragma HLS PIPELINE
            kernel[i]=KER2[i];
        	kerne2l[i]=KER2[i];
        	kerne3l[i]=KER2[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias[i]=BIA2[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output[i]=0;

        for(int i=0; i<107712; i++){
            #pragma HLS PIPELINE
            input2[i]=CON_IN3[i];
        	inpu2t2[i]=CON_IN3[i];
        	inpu3t2[i]=CON_IN3[i];
        }

        for(int i=0; i<6912; i++){
            #pragma HLS PIPELINE
            kernel2[i]=KER3[i];
        	kerne2l2[i]=KER3[i];
        	kerne3l2[i]=KER3[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias2[i]=BIA3[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output2[i]=0;

        for(int i=0; i<107712; i++){
            #pragma HLS PIPELINE
            input3[i]=CON_IN4[i];
        	inpu2t3[i]=CON_IN4[i];
        	inpu3t3[i]=CON_IN4[i];
        }

        for(int i=0; i<6912; i++){
            #pragma HLS PIPELINE
            kernel3[i]=KER4[i];
        	kerne2l3[i]=KER4[i];
        	kerne3l3[i]=KER4[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias3[i]=BIA4[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output3[i]=0;

        for(int i=0; i<107712; i++){
            #pragma HLS PIPELINE
            input4[i]=CON_IN5[i];
        	inpu2t4[i]=CON_IN5[i];
        	inpu3t4[i]=CON_IN5[i];
        }

        for(int i=0; i<6912; i++){
            #pragma HLS PIPELINE
            kernel4[i]=KER5[i];
        	kerne2l4[i]=KER5[i];
        	kerne3l4[i]=KER5[i];
        }

        for(int i=0; i<16; i++)
            #pragma HLS PIPELINE
            bias4[i]=BIA5[i];

        for(int i=0; i<32768; i++)
			#pragma HLS PIPELINE
			output4[i]=0;
        }


    float res1, res2, res3, res4,re1,re2,r1;
	float result1,result2,result3,result4,result5,result6,result7,result8,result9;

	float r2es1, r2es2, r2es3, r2es4,r2e1,r2e2,r21;
	float r2esult1,r2esult2,r2esult3,r2esult4,r2esult5,r2esult6,r2esult7,r2esult8,r2esult9;

	float r3es1, r3es2, r3es3, r3es4,r3e1,r3e2,r31;
	float r3esult1,r3esult2,r3esult3,r3esult4,r3esult5,r3esult6,r3esult7,r3esult8,r3esult9;

	float r4es1, r4es2, r4es3, r4es4,r4e1,r4e2,r41;
	float r4esult1,r4esult2,r4esult3,r4esult4,r4esult5,r4esult6,r4esult7,r4esult8,r4esult9;

	for(int j=0; j<64; j++){
		for(int m=0; m<32; m++){
			for(int order=0; order<16; order++){
				#pragma HLS PIPELINE II=1
				float result = 0;
				float r2esult = 0;
				float r3esult = 0;
				float r4esult = 0;
				float fresult = 0;
				float fr2esult = 0;
				float fr3esult = 0;
				float fr4esult = 0;
				for(int di=0; di<48; di++){
					result1 = input[((j)*34+m)*48+di] * kernel[(((order*3)*3)*48)+di];
					result2 = input[((j)*34+m+1)*48+di] * kernel[(((order*3)*3+1)*48)+di];
					res1=result1+result2;
					result3 = input[((j)*34+m+2)*48+di] * kernel[(((order*3)*3+2)*48)+di];
					result4 = inpu2t[((j+1)*34+m)*48+di] * kerne2l[(((order*3+1)*3)*48)+di];
					res2=result3+result4;
					re1=res1+res2;
					result5 = inpu2t[((j+1)*34+m+1)*48+di] * kerne2l[(((order*3+1)*3+1)*48)+di];
					result6 = inpu2t[((j+1)*34+m+2)*48+di] * kerne2l[(((order*3+1)*3+2)*48)+di];
					res3=result5+result6;
					result7 = inpu3t[((j+2)*34+m)*48+di] * kerne3l[(((order*3+2)*3)*48)+di];
					result8 = inpu3t[((j+2)*34+m+1)*48+di] * kerne3l[(((order*3+2)*3+1)*48)+di];
					res4=result7+result8;
					re2=res3+res4;
					r1=re1+re2;
					result9 = inpu3t[((j+2)*34+m+2)*48+di] * kerne3l[(((order*3+2)*3+2)*48)+di];
					result += r1+result9;

					r2esult1 = input2[((j)*34+m)*48+di] * kernel2[(((order*3)*3)*48)+di];
					r2esult2 = input2[((j)*34+m+1)*48+di] * kernel2[(((order*3)*3+1)*48)+di];
					r2es1=r2esult1+r2esult2;
					r2esult3 = input2[((j)*34+m+2)*48+di] * kernel2[(((order*3)*3+2)*48)+di];
					r2esult4 = inpu2t2[((j+1)*34+m)*48+di] * kerne2l2[(((order*3+1)*3)*48)+di];
					r2es2=r2esult3+r2esult4;
					r2e1=r2es1+r2es2;
					r2esult5 = inpu2t2[((j+1)*34+m+1)*48+di] * kerne2l2[(((order*3+1)*3+1)*48)+di];
					r2esult6 = inpu2t2[((j+1)*34+m+2)*48+di] * kerne2l2[(((order*3+1)*3+2)*48)+di];
					r2es3=r2esult5+r2esult6;
					r2esult7 = inpu3t2[((j+2)*34+m)*48+di] * kerne3l2[(((order*3+2)*3)*48)+di];
					r2esult8 = inpu3t2[((j+2)*34+m+1)*48+di] * kerne3l2[(((order*3+2)*3+1)*48)+di];
					r2es4=r2esult7+r2esult8;
					r2e2=r2es3+r2es4;
					r21=r2e1+r2e2;
					r2esult9 = inpu3t2[((j+2)*34+m+2)*48+di] * kerne3l2[(((order*3+2)*3+2)*48)+di];
					r2esult += r21+r2esult9;

					r3esult1 = input3[((j)*34+m)*48+di] * kernel3[(((order*3)*3)*48)+di];
					r3esult2 = input3[((j)*34+m+1)*48+di] * kernel3[(((order*3)*3+1)*48)+di];
					r3es1=r3esult1+r3esult2;
					r3esult3 = input3[((j)*34+m+2)*48+di] * kernel3[(((order*3)*3+2)*48)+di];
					r3esult4 = inpu2t3[((j+1)*34+m)*48+di] * kerne2l3[(((order*3+1)*3)*48)+di];
					r3es2=r3esult3+r3esult4;
					r3e1=r3es1+r3es2;
					r3esult5 = inpu2t3[((j+1)*34+m+1)*48+di] * kerne2l3[(((order*3+1)*3+1)*48)+di];
					r3esult6 = inpu2t3[((j+1)*6+m+2)*48+di] * kerne2l3[(((order*3+1)*3+2)*48)+di];
					r3es3=r3esult5+r3esult6;
					r3esult7 = inpu3t3[((j+2)*34+m)*48+di] * kerne3l3[(((order*3+2)*3)*48)+di];
					r3esult8 = inpu3t3[((j+2)*34+m+1)*48+di] * kerne3l3[(((order*3+2)*3+1)*48)+di];
					r3es4=r3esult7+r3esult8;
					r3e2=r3es3+r3es4;
					r31=r3e1+r3e2;
					r3esult9 = inpu3t3[((j+2)*34+m+2)*48+di] * kerne3l3[(((order*3+2)*3+2)*48)+di];
					r3esult += r31+r3esult9;

					r4esult1 = input4[((j)*34+m)*48+di] * kernel4[(((order*3)*3)*48)+di];
					r4esult2 = input4[((j)*34+m+1)*48+di] * kernel4[(((order*3)*3+1)*48)+di];
					r4es1=r4esult1+r4esult2;
					r4esult3 = input4[((j)*34+m+2)*48+di] * kernel4[(((order*3)*3+2)*48)+di];
					r4esult4 = inpu2t4[((j+1)*34+m)*48+di] * kerne2l4[(((order*3+1)*3)*48)+di];
					r4es2=r4esult3+r4esult4;
					r4e1=r4es1+r4es2;
					r4esult5 = inpu2t4[((j+1)*34+m+1)*48+di] * kerne2l4[(((order*3+1)*3+1)*48)+di];
					r4esult6 = inpu2t4[((j+1)*34+m+2)*48+di] * kerne2l4[(((order*3+1)*3+2)*48)+di];
					r4es3=r4esult5+r4esult6;
					r4esult7 = inpu3t4[((j+2)*34+m)*48+di] * kerne3l4[(((order*3+2)*3)*48)+di];
					r4esult8 = inpu3t4[((j+2)*34+m+1)*48+di] * kerne3l4[(((order*3+2)*3+1)*48)+di];
					r4es4=r4esult7+r4esult8;
					r4e2=r4es3+r4es4;
					r41=r4e1+r4e2;
					r4esult9 = inpu3t4[((j+2)*34+m+2)*48+di] * kerne3l4[(((order*3+2)*3+2)*48)+di];
					r4esult += r41+r4esult9;
				}
				fresult = result + bias[order];
				fr2esult = r2esult + bias2[order];
				fr3esult = r3esult + bias3[order];
				fr4esult = r4esult + bias4[order];
				if(re_en==1){
					if(fresult>0)
						CON_OUT2[order+((j*32+m)*16)] = fresult;
					else
						CON_OUT2[order+((j*32+m)*16)] = 0;
					if(fr2esult>0)
						CON_OUT3[order+((j*32+m)*16)] = fr2esult;
					else
						CON_OUT3[order+((j*32+m)*16)] = 0;
					if(fr3esult>0)
						CON_OUT4[order+((j*32+m)*16)] = fr3esult;
					else
						CON_OUT4[order+((j*32+m)*16)] = 0;
					if(fr4esult>0)
						CON_OUT5[order+((j*32+m)*16)] = fr4esult;
					else
						CON_OUT5[order+((j*32+m)*16)] = 0;
				}
				else if(ta_en=1){
                    CON_OUT2[order+((j*32+m)*16)] = (exp(fresult)-1/exp(fresult))/(exp(fresult)+1/exp(fresult));
                    CON_OUT3[order+((j*32+m)*16)] = (exp(fr2esult)-1/exp(fr2esult))/(exp(fr2esult)+1/exp(fr2esult));
                    CON_OUT4[order+((j*32+m)*16)] = (exp(fr3esult)-1/exp(fr3esult))/(exp(fr3esult)+1/exp(fr3esult));
                    CON_OUT5[order+((j*32+m)*16)] = (exp(fr4esult)-1/exp(fr4esult))/(exp(fr4esult)+1/exp(fr4esult));
				}
				else{
					CON_OUT2[order+((j*32+m)*16)] = fresult;
					CON_OUT3[order+((j*32+m)*16)] = fr2esult;
					CON_OUT4[order+((j*32+m)*16)] = fr3esult;
					CON_OUT5[order+((j*32+m)*16)] = fr4esult;
				}
			}
		}
	}
}

void multiply(float INPUT11[8192],float INPUT12[8192],float OUTPUT1[8192], float INPUT21[8192],float INPUT22[8192],float OUTPUT2[8192], float INPUT31[8192],float INPUT32[8192],float OUTPUT3[8192],
              float INPUT41[8192],float INPUT42[8192],float OUTPUT4[8192], float INPUT51[8192],float INPUT52[8192],float OUTPUT5[8192], float INPUT61[8192],float INPUT62[8192],float OUTPUT6[8192],
              float INPUT71[8192],float INPUT72[8192],float OUTPUT7[8192], float INPUT81[8192],float INPUT82[8192],float OUTPUT8[8192]){
	float result, result2, result3, result4, result5, result6, result7, result8;
	for(int i=0;i<2;i++){
		for(int j=0;j<256;j++){
		#pragma HLS PIPELINE
		for(int di=0;di<16;di++){
			result=INPUT11[(i*256+j)*16+di]*INPUT12[(i*256+j)*16+di];
			result2=INPUT21[(i*256+j)*16+di]*INPUT22[(i*256+j)*16+di];
			result3=INPUT31[(i*256+j)*16+di]*INPUT32[(i*256+j)*16+di];
			result4=INPUT51[(i*256+j)*16+di]*INPUT42[(i*256+j)*16+di];
			result5=INPUT51[(i*256+j)*16+di]*INPUT52[(i*256+j)*16+di];
			result6=INPUT61[(i*256+j)*16+di]*INPUT62[(i*256+j)*16+di];
			result7=INPUT71[(i*256+j)*16+di]*INPUT72[(i*256+j)*16+di];
			result8=INPUT81[(i*256+j)*16+di]*INPUT82[(i*256+j)*16+di];
			OUTPUT1[(i*256+j)*16+di]=result;
			OUTPUT2[(i*256+j)*16+di]=result2;
			OUTPUT3[(i*256+j)*16+di]=result3;
			OUTPUT4[(i*256+j)*16+di]=result4;
			OUTPUT5[(i*256+j)*16+di]=result5;
			OUTPUT6[(i*256+j)*16+di]=result6;
			OUTPUT7[(i*256+j)*16+di]=result7;
			OUTPUT8[(i*256+j)*16+di]=result8;
			}
		}
	}
}
