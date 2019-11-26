#include "ap_fixed.h"
#include "ff.h"
//#include "ff1.h"

void conv2d_1(ap_fixed<16,2> CON_IN2[42240], ap_fixed<16,2> KER2[36864], ap_fixed<16,2> CON_OUT2[32768], ap_fixed<16,2> BIA2[64], ap_fixed<16,2> CON_IN3[42240], ap_fixed<16,2> KER3[36864], ap_fixed<16,2> CON_OUT3[32768], ap_fixed<16,2> BIA3[64],
              ap_fixed<16,2> CON_IN4[42240], ap_fixed<16,2> KER4[36864], ap_fixed<16,2> CON_OUT4[32768], ap_fixed<16,2> BIA4[64], ap_fixed<16,2> CON_IN5[42240], ap_fixed<16,2> KER5[36864], ap_fixed<16,2> CON_OUT5[32768], ap_fixed<16,2> BIA5[64], int re_en)
{
    ap_fixed<16,2> input[42240];
    ap_fixed<16,2> kernel[36864];
    ap_fixed<16,2> i2nput[42240];
	ap_fixed<16,2> k2ernel[36864];
	ap_fixed<16,2> i3nput[42240];
	ap_fixed<16,2> k3ernel[36864];
    ap_fixed<16,2> bias[64];

    ap_fixed<16,2> input2[42240];
    ap_fixed<16,2> kernel2[36864];
    ap_fixed<16,2> i2nput2[42240];
	ap_fixed<16,2> k2ernel2[36864];
	ap_fixed<16,2> i3nput2[42240];
	ap_fixed<16,2> k3ernel2[36864];
    ap_fixed<16,2> bias2[64];

    ap_fixed<16,2> input3[42240];
    ap_fixed<16,2> kernel3[36864];
    ap_fixed<16,2> i2nput3[42240];
	ap_fixed<16,2> k2ernel3[36864];
	ap_fixed<16,2> i3nput3[42240];
	ap_fixed<16,2> k3ernel3[36864];
    ap_fixed<16,2> bias3[64];

    ap_fixed<16,2> input4[42240];
    ap_fixed<16,2> kernel4[36864];
    ap_fixed<16,2> i2nput4[42240];
	ap_fixed<16,2> k2ernel4[36864];
	ap_fixed<16,2> i3nput4[42240];
	ap_fixed<16,2> k3ernel4[36864];
    ap_fixed<16,2> bias4[64];

    #pragma HLS array_partition variable=input cyclic factor=64 dim=1
    #pragma HLS array_partition variable=kernel cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i2nput cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k2ernel cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i3nput cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k3ernel cyclic factor=64 dim=1
    #pragma HLS array_partition variable=bias complete dim=1
    #pragma HLS array_partition variable=input2 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=kernel2 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i2nput2 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k2ernel2 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i3nput2 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k3ernel2 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=bias2 complete dim=1
    #pragma HLS array_partition variable=input3 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=kernel3 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i2nput3 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k2ernel3 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i3nput3 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k3ernel3 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=bias3 complete dim=1
    #pragma HLS array_partition variable=input4 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=kernel4 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i2nput4 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k2ernel4 cyclic factor=64 dim=1
	#pragma HLS array_partition variable=i3nput4 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=k3ernel4 cyclic factor=64 dim=1
    #pragma HLS array_partition variable=bias4 complete dim=1

    for(int lm=0; lm<1; lm++){
    	#pragma HLS loop_merge
        for(int i=0; i<42240; i++){
            #pragma HLS PIPELINE
            input[i]=CON_IN2[i];
        	i2nput[i]=CON_IN2[i];
        	i3nput[i]=CON_IN2[i];
        }

        for(int i=0; i<36864; i++){
            #pragma HLS PIPELINE
            kernel[i]=KER2[i];
        	k2ernel[i]=KER2[i];
        	k3ernel[i]=KER2[i];
        }

        for(int i=0; i<64; i++)
            #pragma HLS PIPELINE
            bias[i]=BIA2[i];

        for(int i=0; i<42240; i++){
            #pragma HLS PIPELINE
            input2[i]=CON_IN3[i];
        	i2nput2[i]=CON_IN3[i];
        	i3nput2[i]=CON_IN3[i];
        }

        for(int i=0; i<36864; i++){
            #pragma HLS PIPELINE
            kernel2[i]=KER3[i];
        	k2ernel2[i]=KER3[i];
        	k3ernel2[i]=KER3[i];
        }

        for(int i=0; i<64; i++)
            #pragma HLS PIPELINE
            bias2[i]=BIA3[i];

        for(int i=0; i<42240; i++){
            #pragma HLS PIPELINE
            input3[i]=CON_IN4[i];
        	i2nput3[i]=CON_IN4[i];
        	i3nput3[i]=CON_IN4[i];
        }

        for(int i=0; i<36864; i++){
            #pragma HLS PIPELINE
            kernel3[i]=KER4[i];
        	k2ernel3[i]=KER4[i];
        	k3ernel3[i]=KER4[i];
        }

        for(int i=0; i<64; i++)
            #pragma HLS PIPELINE
            bias3[i]=BIA4[i];

        for(int i=0; i<42240; i++){
            #pragma HLS PIPELINE
            input4[i]=CON_IN5[i];
        	i2nput4[i]=CON_IN5[i];
        	i3nput4[i]=CON_IN5[i];
        }

        for(int i=0; i<36864; i++){
            #pragma HLS PIPELINE
            kernel4[i]=KER5[i];
        	k2ernel4[i]=KER5[i];
        	k3ernel4[i]=KER5[i];
        }

        for(int i=0; i<64; i++)
            #pragma HLS PIPELINE
            bias4[i]=BIA5[i];
        }


    ap_fixed<16,2> res1, res2, res3, res4,re1,re2,r1;
	ap_fixed<16,2> result1,result2,result3,result4,result5,result6,result7,result8,result9;

	ap_fixed<16,2> r2es1, r2es2, r2es3, r2es4,r2e1,r2e2,r21;
	ap_fixed<16,2> r2esult1,r2esult2,r2esult3,r2esult4,r2esult5,r2esult6,r2esult7,r2esult8,r2esult9;

	ap_fixed<16,2> r3es1, r3es2, r3es3, r3es4,r3e1,r3e2,r31;
	ap_fixed<16,2> r3esult1,r3esult2,r3esult3,r3esult4,r3esult5,r3esult6,r3esult7,r3esult8,r3esult9;

	ap_fixed<16,2> r4es1, r4es2, r4es3, r4es4,r4e1,r4e2,r41;
	ap_fixed<16,2> r4esult1,r4esult2,r4esult3,r4esult4,r4esult5,r4esult6,r4esult7,r4esult8,r4esult9;

	for(int j=0; j<8; j++){
		for(int m=0; m<64; m++){
			for(int order=0; order<64; order++){
				#pragma HLS PIPELINE II=1
				ap_fixed<16,2> result = 0;
				ap_fixed<16,2> r2esult = 0;
				ap_fixed<16,2> r3esult = 0;
				ap_fixed<16,2> r4esult = 0;
				ap_fixed<16,2> fresult = 0;
				ap_fixed<16,2> fr2esult = 0;
				ap_fixed<16,2> fr3esult = 0;
				ap_fixed<16,2> fr4esult = 0;
				for(int di=0; di<64; di++){
//					#pragma HLS unroll
					result1 = input[((j)*66+m)*64+di] * kernel[(((order*3)*3)*64)+di];
					result2 = input[((j)*66+m+1)*64+di] * kernel[(((order*3)*3+1)*64)+di];
					res1=result1+result2;
					result3 = input[((j)*66+m+2)*64+di] * kernel[(((order*3)*3+2)*64)+di];
					result4 = i2nput[((j+1)*66+m)*64+di] * k2ernel[(((order*3+1)*3)*64)+di];
					res2=result3+result4;
					re1=res1+res2;
					result5 = i2nput[((j+1)*66+m+1)*64+di] * k2ernel[(((order*3+1)*3+1)*64)+di];
					result6 = i2nput[((j+1)*66+m+2)*64+di] * k2ernel[(((order*3+1)*3+2)*64)+di];
					res3=result5+result6;
					result7 = i3nput[((j+2)*66+m)*64+di] * k3ernel[(((order*3+2)*3)*64)+di];
					result8 = i3nput[((j+2)*66+m+1)*64+di] * k3ernel[(((order*3+2)*3+1)*64)+di];
					res4=result7+result8;
					re2=res3+res4;
					r1=re1+re2;
					result9 = i3nput[((j+2)*66+m+2)*64+di] * k3ernel[(((order*3+2)*3+2)*64)+di];
					result += r1+result9;

					r2esult1 = input2[((j)*66+m)*64+di] * kernel2[(((order*3)*3)*64)+di];
					r2esult2 = input2[((j)*66+m+1)*64+di] * kernel2[(((order*3)*3+1)*64)+di];
					r2es1=r2esult1+r2esult2;
					r2esult3 = input2[((j)*66+m+2)*64+di] * kernel2[(((order*3)*3+2)*64)+di];
					r2esult4 = i2nput2[((j+1)*66+m)*64+di] * k2ernel2[(((order*3+1)*3)*64)+di];
					r2es2=r2esult3+r2esult4;
					r2e1=r2es1+r2es2;
					r2esult5 = i2nput2[((j+1)*66+m+1)*64+di] * k2ernel2[(((order*3+1)*3+1)*64)+di];
					r2esult6 = i2nput2[((j+1)*66+m+2)*64+di] * k2ernel2[(((order*3+1)*3+2)*64)+di];
					r2es3=r2esult5+r2esult6;
					r2esult7 = i3nput2[((j+2)*66+m)*64+di] * k3ernel2[(((order*3+2)*3)*64)+di];
					r2esult8 = i3nput2[((j+2)*66+m+1)*64+di] * k3ernel2[(((order*3+2)*3+1)*64)+di];
					r2es4=r2esult7+r2esult8;
					r2e2=r2es3+r2es4;
					r21=r2e1+r2e2;
					r2esult9 = i3nput2[((j+2)*66+m+2)*64+di] * k3ernel2[(((order*3+2)*3+2)*64)+di];
					r2esult += r21+r2esult9;

					r3esult1 = input3[((j)*66+m)*64+di] * kernel3[(((order*3)*3)*64)+di];
					r3esult2 = input3[((j)*66+m+1)*64+di] * kernel3[(((order*3)*3+1)*64)+di];
					r3es1=r3esult1+r3esult2;
					r3esult3 = input3[((j)*66+m+2)*64+di] * kernel3[(((order*3)*3+2)*64)+di];
					r3esult4 = i2nput3[((j+1)*66+m)*64+di] * k2ernel3[(((order*3+1)*3)*64)+di];
					r3es2=r3esult3+r3esult4;
					r3e1=r3es1+r3es2;
					r3esult5 = i2nput3[((j+1)*66+m+1)*64+di] * k2ernel3[(((order*3+1)*3+1)*64)+di];
					r3esult6 = i2nput3[((j+1)*66+m+2)*64+di] * k2ernel3[(((order*3+1)*3+2)*64)+di];
					r3es3=r3esult5+r3esult6;
					r3esult7 = i3nput3[((j+2)*66+m)*64+di] * k3ernel3[(((order*3+2)*3)*64)+di];
					r3esult8 = i3nput3[((j+2)*66+m+1)*64+di] * k3ernel3[(((order*3+2)*3+1)*64)+di];
					r3es4=r3esult7+r3esult8;
					r3e2=r3es3+r3es4;
					r31=r3e1+r3e2;
					r3esult9 = i3nput3[((j+2)*66+m+2)*64+di] * k3ernel3[(((order*3+2)*3+2)*64)+di];
					r3esult += r31+r3esult9;

					r4esult1 = input4[((j)*66+m)*64+di] * kernel4[(((order*3)*3)*64)+di];
					r4esult2 = input4[((j)*66+m+1)*64+di] * kernel4[(((order*3)*3+1)*64)+di];
					r4es1=r4esult1+r4esult2;
					r4esult3 = input4[((j)*66+m+2)*64+di] * kernel4[(((order*3)*3+2)*64)+di];
					r4esult4 = i2nput4[((j+1)*66+m)*64+di] * k2ernel4[(((order*3+1)*3)*64)+di];
					r4es2=r4esult3+r4esult4;
					r4e1=r4es1+r4es2;
					r4esult5 = i2nput4[((j+1)*66+m+1)*64+di] * k2ernel4[(((order*3+1)*3+1)*64)+di];
					r4esult6 = i2nput4[((j+1)*66+m+2)*64+di] * k2ernel4[(((order*3+1)*3+2)*64)+di];
					r4es3=r4esult5+r4esult6;
					r4esult7 = i3nput4[((j+2)*66+m)*64+di] * k3ernel4[(((order*3+2)*3)*64)+di];
					r4esult8 = i3nput4[((j+2)*66+m+1)*64+di] * k3ernel4[(((order*3+2)*3+1)*64)+di];
					r4es4=r4esult7+r4esult8;
					r4e2=r4es3+r4es4;
					r41=r4e1+r4e2;
					r4esult9 = i3nput4[((j+2)*66+m+2)*64+di] * k3ernel4[(((order*3+2)*3+2)*64)+di];
					r4esult += r41+r4esult9;
				}
				fresult = result + bias[order];
				fr2esult = r2esult + bias2[order];
				fr3esult = r3esult + bias3[order];
				fr4esult = r4esult + bias4[order];
				if(re_en==1){
					if(fresult>0)
						CON_OUT2[order+((j*64+m)*64)] = fresult;
					else
						CON_OUT2[order+((j*64+m)*64)] = 0;
					if(fr2esult>0)
						CON_OUT3[order+((j*64+m)*64)] = fr2esult;
					else
						CON_OUT3[order+((j*64+m)*64)] = 0;
					if(fr3esult>0)
						CON_OUT4[order+((j*64+m)*64)] = fr3esult;
					else
						CON_OUT4[order+((j*64+m)*64)] = 0;
					if(fr4esult>0)
						CON_OUT5[order+((j*64+m)*64)] = fr4esult;
					else
						CON_OUT5[order+((j*64+m)*64)] = 0;
				}
				else{
					CON_OUT2[order+((j*64+m)*64)] = result;
					CON_OUT3[order+((j*64+m)*64)] = r2esult;
					CON_OUT4[order+((j*64+m)*64)] = r3esult;
					CON_OUT5[order+((j*64+m)*64)] = r4esult;
				}
			}
		}
	}

//    for(int i=0; i<32768; i++){
//		#pragma HLS PIPELINE
//		CON_OUT2[i]=output[i];
//		CON_OUT3[i]=output2[i];
//		CON_OUT4[i]=output3[i];
//		CON_OUT5[i]=output4[i];
//	}
}

#include "cf_stub.h"
void p_0_conv2d_1_1_async_1(ap_fixed<16, 2> CON_IN2[42240], ap_fixed<16, 2> KER2[36864], ap_fixed<16, 2> CON_OUT2[32768], ap_fixed<16, 2> BIA2[64], ap_fixed<16, 2> CON_IN3[42240], ap_fixed<16, 2> KER3[36864], ap_fixed<16, 2> CON_OUT3[32768], ap_fixed<16, 2> BIA3[64], ap_fixed<16, 2> CON_IN4[42240], ap_fixed<16, 2> KER4[36864], ap_fixed<16, 2> CON_OUT4[32768], ap_fixed<16, 2> BIA4[64], ap_fixed<16, 2> CON_IN5[42240], ap_fixed<16, 2> KER5[36864], ap_fixed<16, 2> CON_OUT5[32768], ap_fixed<16, 2> BIA5[64], int re_en);
void p_0_conv2d_1_1_async_1(ap_fixed<16, 2> CON_IN2[42240], ap_fixed<16, 2> KER2[36864], ap_fixed<16, 2> CON_OUT2[32768], ap_fixed<16, 2> BIA2[64], ap_fixed<16, 2> CON_IN3[42240], ap_fixed<16, 2> KER3[36864], ap_fixed<16, 2> CON_OUT3[32768], ap_fixed<16, 2> BIA3[64], ap_fixed<16, 2> CON_IN4[42240], ap_fixed<16, 2> KER4[36864], ap_fixed<16, 2> CON_OUT4[32768], ap_fixed<16, 2> BIA4[64], ap_fixed<16, 2> CON_IN5[42240], ap_fixed<16, 2> KER5[36864], ap_fixed<16, 2> CON_OUT5[32768], ap_fixed<16, 2> BIA5[64], int re_en)
{
  int start_seq[1];
  start_seq[0] = 0;
  cf_request_handle_t p_0_hwinst_conv2d_1_1_cmd;
  cf_send_i(&(p_0_hwinst_conv2d_1_1.cmd_conv2d_1), start_seq, 1 * sizeof(int), &p_0_hwinst_conv2d_1_1_cmd);
  cf_wait(p_0_hwinst_conv2d_1_1_cmd);

  cf_send_i(&(p_0_hwinst_conv2d_1_1.CON_IN2_V), CON_IN2, 84480, &p_0_request_0);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.KER2_V), KER2, 73728, &p_0_request_1);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.BIA2_V), BIA2, 128, &p_0_request_3);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.CON_IN3_V), CON_IN3, 84480, &p_0_request_4);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.KER3_V), KER3, 73728, &p_0_request_5);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.BIA3_V), BIA3, 128, &p_0_request_7);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.CON_IN4_V), CON_IN4, 84480, &p_0_request_8);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.KER4_V), KER4, 73728, &p_0_request_9);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.BIA4_V), BIA4, 128, &p_0_request_11);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.CON_IN5_V), CON_IN5, 84480, &p_0_request_12);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.KER5_V), KER5, 73728, &p_0_request_13);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.BIA5_V), BIA5, 128, &p_0_request_15);
  cf_send_i(&(p_0_hwinst_conv2d_1_1.re_en), &re_en, 4, &p_0_request_16);

  cf_receive_i(&(p_0_hwinst_conv2d_1_1.CON_OUT2_V), CON_OUT2, 65536, &p_0_conv2d_1_1_async_1_num_CON_OUT2_V, &p_0_request_2);
  cf_receive_i(&(p_0_hwinst_conv2d_1_1.CON_OUT3_V), CON_OUT3, 65536, &p_0_conv2d_1_1_async_1_num_CON_OUT3_V, &p_0_request_6);
  cf_receive_i(&(p_0_hwinst_conv2d_1_1.CON_OUT4_V), CON_OUT4, 65536, &p_0_conv2d_1_1_async_1_num_CON_OUT4_V, &p_0_request_10);
  cf_receive_i(&(p_0_hwinst_conv2d_1_1.CON_OUT5_V), CON_OUT5, 65536, &p_0_conv2d_1_1_async_1_num_CON_OUT5_V, &p_0_request_14);


  cf_request_handle_t req_array[17] = {p_0_request_0, p_0_request_1, p_0_request_2, p_0_request_3, p_0_request_4, p_0_request_5, p_0_request_6, p_0_request_7, p_0_request_8, p_0_request_9, p_0_request_10, p_0_request_11, p_0_request_12, p_0_request_13, p_0_request_14, p_0_request_15, p_0_request_16};
  sds_insert_req( 1, req_array, 17);
}


