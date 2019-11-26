#include "a0_conv2d_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void a0_conv2d_1::thread_tmp2327_fu_168795_p2() {
    tmp2327_fu_168795_p2 = (!tmp2322_fu_168724_p2.read().is_01() || !tmp2326_fu_168778_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2322_fu_168724_p2.read()) + sc_biguint<16>(tmp2326_fu_168778_p2.read()));
}

void a0_conv2d_1::thread_tmp2328_fu_170898_p2() {
    tmp2328_fu_170898_p2 = (!tmp2319_reg_228411.read().is_01() || !tmp2327_reg_228416.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2319_reg_228411.read()) + sc_biguint<16>(tmp2327_reg_228416.read()));
}

void a0_conv2d_1::thread_tmp2329_fu_170906_p2() {
    tmp2329_fu_170906_p2 = (!tmp2311_reg_228406.read().is_01() || !tmp2328_fu_170898_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2311_reg_228406.read()) + sc_biguint<16>(tmp2328_fu_170898_p2.read()));
}

void a0_conv2d_1::thread_tmp232_fu_141449_p2() {
    tmp232_fu_141449_p2 = (!result9_V_36_fu_129429_p4.read().is_01() || !result1_V_37_reg_217866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_36_fu_129429_p4.read()) + sc_biguint<16>(result1_V_37_reg_217866.read()));
}

void a0_conv2d_1::thread_tmp2330_fu_170920_p2() {
    tmp2330_fu_170920_p2 = (!tmp2294_fu_170893_p2.read().is_01() || !tmp2329_fu_170906_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2294_fu_170893_p2.read()) + sc_biguint<16>(tmp2329_fu_170906_p2.read()));
}

void a0_conv2d_1::thread_tmp2331_fu_170936_p2() {
    tmp2331_fu_170936_p2 = (!tmp2259_fu_170883_p2.read().is_01() || !tmp2330_fu_170920_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2259_fu_170883_p2.read()) + sc_biguint<16>(tmp2330_fu_170920_p2.read()));
}

void a0_conv2d_1::thread_tmp2332_fu_170954_p2() {
    tmp2332_fu_170954_p2 = (!tmp2188_fu_170864_p2.read().is_01() || !tmp2331_fu_170936_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2188_fu_170864_p2.read()) + sc_biguint<16>(tmp2331_fu_170936_p2.read()));
}

void a0_conv2d_1::thread_tmp233_fu_141463_p2() {
    tmp233_fu_141463_p2 = (!result2_V_37_reg_217871.read().is_01() || !result3_V_37_fu_129559_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_37_reg_217871.read()) + sc_biguint<16>(result3_V_37_fu_129559_p4.read()));
}

void a0_conv2d_1::thread_tmp234_fu_141478_p2() {
    tmp234_fu_141478_p2 = (!tmp232_fu_141449_p2.read().is_01() || !tmp233_fu_141463_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp232_fu_141449_p2.read()) + sc_biguint<16>(tmp233_fu_141463_p2.read()));
}

void a0_conv2d_1::thread_tmp235_fu_105411_p2() {
    tmp235_fu_105411_p2 = (!result4_V_37_fu_100142_p4.read().is_01() || !result5_V_37_fu_100155_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_37_fu_100142_p4.read()) + sc_biguint<16>(result5_V_37_fu_100155_p4.read()));
}

void a0_conv2d_1::thread_tmp236_fu_141484_p2() {
    tmp236_fu_141484_p2 = (!result7_V_37_reg_217886.read().is_01() || !result8_V_37_reg_217891.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_37_reg_217886.read()) + sc_biguint<16>(result8_V_37_reg_217891.read()));
}

void a0_conv2d_1::thread_tmp237_fu_141501_p2() {
    tmp237_fu_141501_p2 = (!result6_V_37_fu_129572_p4.read().is_01() || !tmp236_fu_141484_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_37_fu_129572_p4.read()) + sc_biguint<16>(tmp236_fu_141484_p2.read()));
}

void a0_conv2d_1::thread_tmp238_fu_141517_p2() {
    tmp238_fu_141517_p2 = (!tmp235_reg_222091.read().is_01() || !tmp237_fu_141501_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp235_reg_222091.read()) + sc_biguint<16>(tmp237_fu_141501_p2.read()));
}

void a0_conv2d_1::thread_tmp239_fu_141534_p2() {
    tmp239_fu_141534_p2 = (!tmp234_fu_141478_p2.read().is_01() || !tmp238_fu_141517_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp234_fu_141478_p2.read()) + sc_biguint<16>(tmp238_fu_141517_p2.read()));
}

void a0_conv2d_1::thread_tmp240_fu_141549_p2() {
    tmp240_fu_141549_p2 = (!result9_V_37_fu_129585_p4.read().is_01() || !result1_V_38_reg_218006.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_37_fu_129585_p4.read()) + sc_biguint<16>(result1_V_38_reg_218006.read()));
}

void a0_conv2d_1::thread_tmp241_fu_141563_p2() {
    tmp241_fu_141563_p2 = (!result2_V_38_reg_218011.read().is_01() || !result3_V_38_fu_129715_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_38_reg_218011.read()) + sc_biguint<16>(result3_V_38_fu_129715_p4.read()));
}

void a0_conv2d_1::thread_tmp242_fu_141578_p2() {
    tmp242_fu_141578_p2 = (!tmp240_fu_141549_p2.read().is_01() || !tmp241_fu_141563_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp240_fu_141549_p2.read()) + sc_biguint<16>(tmp241_fu_141563_p2.read()));
}

void a0_conv2d_1::thread_tmp243_fu_105471_p2() {
    tmp243_fu_105471_p2 = (!result4_V_38_fu_100523_p4.read().is_01() || !result5_V_38_fu_100536_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_38_fu_100523_p4.read()) + sc_biguint<16>(result5_V_38_fu_100536_p4.read()));
}

void a0_conv2d_1::thread_tmp244_fu_105495_p2() {
    tmp244_fu_105495_p2 = (!result7_V_38_fu_100572_p4.read().is_01() || !result8_V_38_fu_100585_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_38_fu_100572_p4.read()) + sc_biguint<16>(result8_V_38_fu_100585_p4.read()));
}

void a0_conv2d_1::thread_tmp245_fu_141597_p2() {
    tmp245_fu_141597_p2 = (!result6_V_38_fu_129728_p4.read().is_01() || !tmp244_reg_222141.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_38_fu_129728_p4.read()) + sc_biguint<16>(tmp244_reg_222141.read()));
}

void a0_conv2d_1::thread_tmp246_fu_141612_p2() {
    tmp246_fu_141612_p2 = (!tmp243_reg_222126.read().is_01() || !tmp245_fu_141597_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp243_reg_222126.read()) + sc_biguint<16>(tmp245_fu_141597_p2.read()));
}

void a0_conv2d_1::thread_tmp247_fu_141629_p2() {
    tmp247_fu_141629_p2 = (!tmp242_fu_141578_p2.read().is_01() || !tmp246_fu_141612_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp242_fu_141578_p2.read()) + sc_biguint<16>(tmp246_fu_141612_p2.read()));
}

void a0_conv2d_1::thread_tmp248_fu_141647_p2() {
    tmp248_fu_141647_p2 = (!tmp239_fu_141534_p2.read().is_01() || !tmp247_fu_141629_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp239_fu_141534_p2.read()) + sc_biguint<16>(tmp247_fu_141629_p2.read()));
}

void a0_conv2d_1::thread_tmp249_fu_169681_p2() {
    tmp249_fu_169681_p2 = (!tmp231_reg_227101.read().is_01() || !tmp248_reg_227106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp231_reg_227101.read()) + sc_biguint<16>(tmp248_reg_227106.read()));
}

void a0_conv2d_1::thread_tmp250_fu_169695_p2() {
    tmp250_fu_169695_p2 = (!tmp214_fu_169672_p2.read().is_01() || !tmp249_fu_169681_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp214_fu_169672_p2.read()) + sc_biguint<16>(tmp249_fu_169681_p2.read()));
}

void a0_conv2d_1::thread_tmp251_fu_141668_p2() {
    tmp251_fu_141668_p2 = (!result9_V_38_fu_129741_p4.read().is_01() || !result1_V_39_reg_218106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_38_fu_129741_p4.read()) + sc_biguint<16>(result1_V_39_reg_218106.read()));
}

void a0_conv2d_1::thread_tmp252_fu_141682_p2() {
    tmp252_fu_141682_p2 = (!result2_V_39_reg_218111.read().is_01() || !result3_V_39_fu_129871_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_39_reg_218111.read()) + sc_biguint<16>(result3_V_39_fu_129871_p4.read()));
}

void a0_conv2d_1::thread_tmp253_fu_141697_p2() {
    tmp253_fu_141697_p2 = (!tmp251_fu_141668_p2.read().is_01() || !tmp252_fu_141682_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp251_fu_141668_p2.read()) + sc_biguint<16>(tmp252_fu_141682_p2.read()));
}

void a0_conv2d_1::thread_tmp254_fu_105537_p2() {
    tmp254_fu_105537_p2 = (!result4_V_39_fu_100904_p4.read().is_01() || !result5_V_39_fu_100917_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_39_fu_100904_p4.read()) + sc_biguint<16>(result5_V_39_fu_100917_p4.read()));
}

void a0_conv2d_1::thread_tmp255_fu_141703_p2() {
    tmp255_fu_141703_p2 = (!result7_V_39_reg_218126.read().is_01() || !result8_V_39_reg_218131.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_39_reg_218126.read()) + sc_biguint<16>(result8_V_39_reg_218131.read()));
}

void a0_conv2d_1::thread_tmp256_fu_141720_p2() {
    tmp256_fu_141720_p2 = (!result6_V_39_fu_129884_p4.read().is_01() || !tmp255_fu_141703_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_39_fu_129884_p4.read()) + sc_biguint<16>(tmp255_fu_141703_p2.read()));
}

void a0_conv2d_1::thread_tmp257_cast_fu_69956_p1() {
    tmp257_cast_fu_69956_p1 = esl_zext<10,8>(tmp18_fu_69950_p2.read());
}

void a0_conv2d_1::thread_tmp257_cast_mid1_fu_70444_p1() {
    tmp257_cast_mid1_fu_70444_p1 = esl_zext<10,8>(tmp19_mid1_fu_70438_p2.read());
}

void a0_conv2d_1::thread_tmp257_fu_141736_p2() {
    tmp257_fu_141736_p2 = (!tmp254_reg_222166.read().is_01() || !tmp256_fu_141720_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp254_reg_222166.read()) + sc_biguint<16>(tmp256_fu_141720_p2.read()));
}

void a0_conv2d_1::thread_tmp258_cast_fu_69980_p1() {
    tmp258_cast_fu_69980_p1 = esl_zext<10,8>(tmp19_fu_69974_p2.read());
}

void a0_conv2d_1::thread_tmp258_cast_mid1_fu_70468_p1() {
    tmp258_cast_mid1_fu_70468_p1 = esl_zext<10,8>(tmp20_mid1_fu_70462_p2.read());
}

void a0_conv2d_1::thread_tmp258_fu_141753_p2() {
    tmp258_fu_141753_p2 = (!tmp253_fu_141697_p2.read().is_01() || !tmp257_fu_141736_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp253_fu_141697_p2.read()) + sc_biguint<16>(tmp257_fu_141736_p2.read()));
}

void a0_conv2d_1::thread_tmp259_fu_141768_p2() {
    tmp259_fu_141768_p2 = (!result9_V_39_fu_129897_p4.read().is_01() || !result1_V_40_reg_218246.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_39_fu_129897_p4.read()) + sc_biguint<16>(result1_V_40_reg_218246.read()));
}

void a0_conv2d_1::thread_tmp260_fu_141782_p2() {
    tmp260_fu_141782_p2 = (!result2_V_40_reg_218251.read().is_01() || !result3_V_40_fu_130027_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_40_reg_218251.read()) + sc_biguint<16>(result3_V_40_fu_130027_p4.read()));
}

void a0_conv2d_1::thread_tmp261_fu_141797_p2() {
    tmp261_fu_141797_p2 = (!tmp259_fu_141768_p2.read().is_01() || !tmp260_fu_141782_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp259_fu_141768_p2.read()) + sc_biguint<16>(tmp260_fu_141782_p2.read()));
}

void a0_conv2d_1::thread_tmp262_fu_105597_p2() {
    tmp262_fu_105597_p2 = (!result4_V_40_fu_101285_p4.read().is_01() || !result5_V_40_fu_101298_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_40_fu_101285_p4.read()) + sc_biguint<16>(result5_V_40_fu_101298_p4.read()));
}

void a0_conv2d_1::thread_tmp263_fu_105621_p2() {
    tmp263_fu_105621_p2 = (!result7_V_40_fu_101334_p4.read().is_01() || !result8_V_40_fu_101347_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_40_fu_101334_p4.read()) + sc_biguint<16>(result8_V_40_fu_101347_p4.read()));
}

void a0_conv2d_1::thread_tmp264_fu_141816_p2() {
    tmp264_fu_141816_p2 = (!result6_V_40_fu_130040_p4.read().is_01() || !tmp263_reg_222216.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_40_fu_130040_p4.read()) + sc_biguint<16>(tmp263_reg_222216.read()));
}

void a0_conv2d_1::thread_tmp265_fu_141831_p2() {
    tmp265_fu_141831_p2 = (!tmp262_reg_222201.read().is_01() || !tmp264_fu_141816_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp262_reg_222201.read()) + sc_biguint<16>(tmp264_fu_141816_p2.read()));
}

void a0_conv2d_1::thread_tmp266_fu_141848_p2() {
    tmp266_fu_141848_p2 = (!tmp261_fu_141797_p2.read().is_01() || !tmp265_fu_141831_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp261_fu_141797_p2.read()) + sc_biguint<16>(tmp265_fu_141831_p2.read()));
}

void a0_conv2d_1::thread_tmp267_fu_141866_p2() {
    tmp267_fu_141866_p2 = (!tmp258_fu_141753_p2.read().is_01() || !tmp266_fu_141848_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp258_fu_141753_p2.read()) + sc_biguint<16>(tmp266_fu_141848_p2.read()));
}

void a0_conv2d_1::thread_tmp268_fu_141881_p2() {
    tmp268_fu_141881_p2 = (!result9_V_40_fu_130053_p4.read().is_01() || !result1_V_41_reg_218346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_40_fu_130053_p4.read()) + sc_biguint<16>(result1_V_41_reg_218346.read()));
}

void a0_conv2d_1::thread_tmp269_fu_141895_p2() {
    tmp269_fu_141895_p2 = (!result2_V_41_reg_218351.read().is_01() || !result3_V_41_fu_130183_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_41_reg_218351.read()) + sc_biguint<16>(result3_V_41_fu_130183_p4.read()));
}

void a0_conv2d_1::thread_tmp270_fu_141910_p2() {
    tmp270_fu_141910_p2 = (!tmp268_fu_141881_p2.read().is_01() || !tmp269_fu_141895_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp268_fu_141881_p2.read()) + sc_biguint<16>(tmp269_fu_141895_p2.read()));
}

void a0_conv2d_1::thread_tmp271_fu_105663_p2() {
    tmp271_fu_105663_p2 = (!result4_V_41_fu_101666_p4.read().is_01() || !result5_V_41_fu_101679_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_41_fu_101666_p4.read()) + sc_biguint<16>(result5_V_41_fu_101679_p4.read()));
}

void a0_conv2d_1::thread_tmp272_fu_141916_p2() {
    tmp272_fu_141916_p2 = (!result7_V_41_reg_218366.read().is_01() || !result8_V_41_reg_218371.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_41_reg_218366.read()) + sc_biguint<16>(result8_V_41_reg_218371.read()));
}

void a0_conv2d_1::thread_tmp273_fu_141933_p2() {
    tmp273_fu_141933_p2 = (!result6_V_41_fu_130196_p4.read().is_01() || !tmp272_fu_141916_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_41_fu_130196_p4.read()) + sc_biguint<16>(tmp272_fu_141916_p2.read()));
}

void a0_conv2d_1::thread_tmp274_fu_141949_p2() {
    tmp274_fu_141949_p2 = (!tmp271_reg_222241.read().is_01() || !tmp273_fu_141933_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp271_reg_222241.read()) + sc_biguint<16>(tmp273_fu_141933_p2.read()));
}

void a0_conv2d_1::thread_tmp275_fu_141966_p2() {
    tmp275_fu_141966_p2 = (!tmp270_fu_141910_p2.read().is_01() || !tmp274_fu_141949_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp270_fu_141910_p2.read()) + sc_biguint<16>(tmp274_fu_141949_p2.read()));
}

void a0_conv2d_1::thread_tmp276_fu_141981_p2() {
    tmp276_fu_141981_p2 = (!result9_V_41_fu_130209_p4.read().is_01() || !result1_V_42_reg_218486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_41_fu_130209_p4.read()) + sc_biguint<16>(result1_V_42_reg_218486.read()));
}

void a0_conv2d_1::thread_tmp277_fu_141995_p2() {
    tmp277_fu_141995_p2 = (!result2_V_42_reg_218491.read().is_01() || !result3_V_42_fu_130339_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_42_reg_218491.read()) + sc_biguint<16>(result3_V_42_fu_130339_p4.read()));
}

void a0_conv2d_1::thread_tmp278_fu_142010_p2() {
    tmp278_fu_142010_p2 = (!tmp276_fu_141981_p2.read().is_01() || !tmp277_fu_141995_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp276_fu_141981_p2.read()) + sc_biguint<16>(tmp277_fu_141995_p2.read()));
}

void a0_conv2d_1::thread_tmp279_fu_105723_p2() {
    tmp279_fu_105723_p2 = (!result4_V_42_fu_102047_p4.read().is_01() || !result5_V_42_fu_102060_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_42_fu_102047_p4.read()) + sc_biguint<16>(result5_V_42_fu_102060_p4.read()));
}

void a0_conv2d_1::thread_tmp280_fu_142016_p2() {
    tmp280_fu_142016_p2 = (!result7_V_42_reg_218506.read().is_01() || !result8_V_42_reg_218511.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_42_reg_218506.read()) + sc_biguint<16>(result8_V_42_reg_218511.read()));
}

void a0_conv2d_1::thread_tmp281_fu_142033_p2() {
    tmp281_fu_142033_p2 = (!result6_V_42_fu_130352_p4.read().is_01() || !tmp280_fu_142016_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_42_fu_130352_p4.read()) + sc_biguint<16>(tmp280_fu_142016_p2.read()));
}

void a0_conv2d_1::thread_tmp282_fu_142049_p2() {
    tmp282_fu_142049_p2 = (!tmp279_reg_222276.read().is_01() || !tmp281_fu_142033_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp279_reg_222276.read()) + sc_biguint<16>(tmp281_fu_142033_p2.read()));
}

void a0_conv2d_1::thread_tmp283_fu_142066_p2() {
    tmp283_fu_142066_p2 = (!tmp278_fu_142010_p2.read().is_01() || !tmp282_fu_142049_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp278_fu_142010_p2.read()) + sc_biguint<16>(tmp282_fu_142049_p2.read()));
}

void a0_conv2d_1::thread_tmp284_fu_169701_p2() {
    tmp284_fu_169701_p2 = (!tmp275_reg_227121.read().is_01() || !tmp283_reg_227126.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp275_reg_227121.read()) + sc_biguint<16>(tmp283_reg_227126.read()));
}

void a0_conv2d_1::thread_tmp285_fu_169705_p2() {
    tmp285_fu_169705_p2 = (!tmp267_reg_227116.read().is_01() || !tmp284_fu_169701_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp267_reg_227116.read()) + sc_biguint<16>(tmp284_fu_169701_p2.read()));
}

void a0_conv2d_1::thread_tmp286_fu_142105_p2() {
    tmp286_fu_142105_p2 = (!result9_V_42_fu_130365_p4.read().is_01() || !result1_V_43_reg_218626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_42_fu_130365_p4.read()) + sc_biguint<16>(result1_V_43_reg_218626.read()));
}

void a0_conv2d_1::thread_tmp287_fu_142119_p2() {
    tmp287_fu_142119_p2 = (!result2_V_43_reg_218631.read().is_01() || !result3_V_43_fu_130495_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_43_reg_218631.read()) + sc_biguint<16>(result3_V_43_fu_130495_p4.read()));
}

void a0_conv2d_1::thread_tmp288_fu_142134_p2() {
    tmp288_fu_142134_p2 = (!tmp286_fu_142105_p2.read().is_01() || !tmp287_fu_142119_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp286_fu_142105_p2.read()) + sc_biguint<16>(tmp287_fu_142119_p2.read()));
}

void a0_conv2d_1::thread_tmp289_fu_105783_p2() {
    tmp289_fu_105783_p2 = (!result4_V_43_fu_102428_p4.read().is_01() || !result5_V_43_fu_102441_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_43_fu_102428_p4.read()) + sc_biguint<16>(result5_V_43_fu_102441_p4.read()));
}

void a0_conv2d_1::thread_tmp290_fu_142140_p2() {
    tmp290_fu_142140_p2 = (!result7_V_43_reg_218646.read().is_01() || !result8_V_43_reg_218651.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_43_reg_218646.read()) + sc_biguint<16>(result8_V_43_reg_218651.read()));
}

void a0_conv2d_1::thread_tmp291_fu_142157_p2() {
    tmp291_fu_142157_p2 = (!result6_V_43_fu_130508_p4.read().is_01() || !tmp290_fu_142140_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_43_fu_130508_p4.read()) + sc_biguint<16>(tmp290_fu_142140_p2.read()));
}

void a0_conv2d_1::thread_tmp292_fu_142173_p2() {
    tmp292_fu_142173_p2 = (!tmp289_reg_222311.read().is_01() || !tmp291_fu_142157_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp289_reg_222311.read()) + sc_biguint<16>(tmp291_fu_142157_p2.read()));
}

void a0_conv2d_1::thread_tmp293_fu_142190_p2() {
    tmp293_fu_142190_p2 = (!tmp288_fu_142134_p2.read().is_01() || !tmp292_fu_142173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp288_fu_142134_p2.read()) + sc_biguint<16>(tmp292_fu_142173_p2.read()));
}

void a0_conv2d_1::thread_tmp294_fu_142205_p2() {
    tmp294_fu_142205_p2 = (!result9_V_43_fu_130521_p4.read().is_01() || !result1_V_44_reg_218766.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_43_fu_130521_p4.read()) + sc_biguint<16>(result1_V_44_reg_218766.read()));
}

void a0_conv2d_1::thread_tmp295_fu_142219_p2() {
    tmp295_fu_142219_p2 = (!result2_V_44_reg_218771.read().is_01() || !result3_V_44_fu_130651_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_44_reg_218771.read()) + sc_biguint<16>(result3_V_44_fu_130651_p4.read()));
}

void a0_conv2d_1::thread_tmp296_fu_142234_p2() {
    tmp296_fu_142234_p2 = (!tmp294_fu_142205_p2.read().is_01() || !tmp295_fu_142219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp294_fu_142205_p2.read()) + sc_biguint<16>(tmp295_fu_142219_p2.read()));
}

void a0_conv2d_1::thread_tmp297_fu_105843_p2() {
    tmp297_fu_105843_p2 = (!result4_V_44_fu_102809_p4.read().is_01() || !result5_V_44_fu_102822_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_44_fu_102809_p4.read()) + sc_biguint<16>(result5_V_44_fu_102822_p4.read()));
}

void a0_conv2d_1::thread_tmp298_fu_105867_p2() {
    tmp298_fu_105867_p2 = (!result7_V_44_fu_102858_p4.read().is_01() || !result8_V_44_fu_102871_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_44_fu_102858_p4.read()) + sc_biguint<16>(result8_V_44_fu_102871_p4.read()));
}

void a0_conv2d_1::thread_tmp299_fu_142253_p2() {
    tmp299_fu_142253_p2 = (!result6_V_44_fu_130664_p4.read().is_01() || !tmp298_reg_222361.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_44_fu_130664_p4.read()) + sc_biguint<16>(tmp298_reg_222361.read()));
}

void a0_conv2d_1::thread_tmp300_fu_142268_p2() {
    tmp300_fu_142268_p2 = (!tmp297_reg_222346.read().is_01() || !tmp299_fu_142253_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp297_reg_222346.read()) + sc_biguint<16>(tmp299_fu_142253_p2.read()));
}

void a0_conv2d_1::thread_tmp301_fu_142285_p2() {
    tmp301_fu_142285_p2 = (!tmp296_fu_142234_p2.read().is_01() || !tmp300_fu_142268_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp296_fu_142234_p2.read()) + sc_biguint<16>(tmp300_fu_142268_p2.read()));
}

void a0_conv2d_1::thread_tmp302_fu_142303_p2() {
    tmp302_fu_142303_p2 = (!tmp293_fu_142190_p2.read().is_01() || !tmp301_fu_142285_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp293_fu_142190_p2.read()) + sc_biguint<16>(tmp301_fu_142285_p2.read()));
}

void a0_conv2d_1::thread_tmp303_fu_142318_p2() {
    tmp303_fu_142318_p2 = (!result9_V_44_fu_130677_p4.read().is_01() || !result1_V_45_reg_218866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_44_fu_130677_p4.read()) + sc_biguint<16>(result1_V_45_reg_218866.read()));
}

void a0_conv2d_1::thread_tmp304_fu_142332_p2() {
    tmp304_fu_142332_p2 = (!result2_V_45_reg_218871.read().is_01() || !result3_V_45_fu_130807_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_45_reg_218871.read()) + sc_biguint<16>(result3_V_45_fu_130807_p4.read()));
}

void a0_conv2d_1::thread_tmp305_fu_142347_p2() {
    tmp305_fu_142347_p2 = (!tmp303_fu_142318_p2.read().is_01() || !tmp304_fu_142332_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp303_fu_142318_p2.read()) + sc_biguint<16>(tmp304_fu_142332_p2.read()));
}

void a0_conv2d_1::thread_tmp306_fu_105909_p2() {
    tmp306_fu_105909_p2 = (!result4_V_45_fu_103190_p4.read().is_01() || !result5_V_45_fu_103203_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_45_fu_103190_p4.read()) + sc_biguint<16>(result5_V_45_fu_103203_p4.read()));
}

void a0_conv2d_1::thread_tmp307_fu_142353_p2() {
    tmp307_fu_142353_p2 = (!result7_V_45_reg_218886.read().is_01() || !result8_V_45_reg_218891.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_45_reg_218886.read()) + sc_biguint<16>(result8_V_45_reg_218891.read()));
}

void a0_conv2d_1::thread_tmp308_fu_142370_p2() {
    tmp308_fu_142370_p2 = (!result6_V_45_fu_130820_p4.read().is_01() || !tmp307_fu_142353_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_45_fu_130820_p4.read()) + sc_biguint<16>(tmp307_fu_142353_p2.read()));
}

void a0_conv2d_1::thread_tmp309_fu_142386_p2() {
    tmp309_fu_142386_p2 = (!tmp306_reg_222386.read().is_01() || !tmp308_fu_142370_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp306_reg_222386.read()) + sc_biguint<16>(tmp308_fu_142370_p2.read()));
}

void a0_conv2d_1::thread_tmp310_fu_142403_p2() {
    tmp310_fu_142403_p2 = (!tmp305_fu_142347_p2.read().is_01() || !tmp309_fu_142386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp305_fu_142347_p2.read()) + sc_biguint<16>(tmp309_fu_142386_p2.read()));
}

void a0_conv2d_1::thread_tmp311_fu_142418_p2() {
    tmp311_fu_142418_p2 = (!result9_V_45_fu_130833_p4.read().is_01() || !result1_V_46_reg_219006.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_45_fu_130833_p4.read()) + sc_biguint<16>(result1_V_46_reg_219006.read()));
}

void a0_conv2d_1::thread_tmp312_fu_142432_p2() {
    tmp312_fu_142432_p2 = (!result2_V_46_reg_219011.read().is_01() || !result3_V_46_fu_130963_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_46_reg_219011.read()) + sc_biguint<16>(result3_V_46_fu_130963_p4.read()));
}

void a0_conv2d_1::thread_tmp313_fu_142447_p2() {
    tmp313_fu_142447_p2 = (!tmp311_fu_142418_p2.read().is_01() || !tmp312_fu_142432_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp311_fu_142418_p2.read()) + sc_biguint<16>(tmp312_fu_142432_p2.read()));
}

void a0_conv2d_1::thread_tmp314_fu_105969_p2() {
    tmp314_fu_105969_p2 = (!result4_V_46_fu_103571_p4.read().is_01() || !result5_V_46_fu_103584_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_46_fu_103571_p4.read()) + sc_biguint<16>(result5_V_46_fu_103584_p4.read()));
}

void a0_conv2d_1::thread_tmp315_fu_105993_p2() {
    tmp315_fu_105993_p2 = (!result7_V_46_fu_103620_p4.read().is_01() || !result8_V_46_fu_103633_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_46_fu_103620_p4.read()) + sc_biguint<16>(result8_V_46_fu_103633_p4.read()));
}

void a0_conv2d_1::thread_tmp316_fu_142466_p2() {
    tmp316_fu_142466_p2 = (!result6_V_46_fu_130976_p4.read().is_01() || !tmp315_reg_222436.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_46_fu_130976_p4.read()) + sc_biguint<16>(tmp315_reg_222436.read()));
}

void a0_conv2d_1::thread_tmp317_fu_142481_p2() {
    tmp317_fu_142481_p2 = (!tmp314_reg_222421.read().is_01() || !tmp316_fu_142466_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp314_reg_222421.read()) + sc_biguint<16>(tmp316_fu_142466_p2.read()));
}

void a0_conv2d_1::thread_tmp318_fu_142498_p2() {
    tmp318_fu_142498_p2 = (!tmp313_fu_142447_p2.read().is_01() || !tmp317_fu_142481_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp313_fu_142447_p2.read()) + sc_biguint<16>(tmp317_fu_142481_p2.read()));
}

void a0_conv2d_1::thread_tmp319_fu_142516_p2() {
    tmp319_fu_142516_p2 = (!tmp310_fu_142403_p2.read().is_01() || !tmp318_fu_142498_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp310_fu_142403_p2.read()) + sc_biguint<16>(tmp318_fu_142498_p2.read()));
}

void a0_conv2d_1::thread_tmp320_fu_169714_p2() {
    tmp320_fu_169714_p2 = (!tmp302_reg_227151.read().is_01() || !tmp319_reg_227156.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp302_reg_227151.read()) + sc_biguint<16>(tmp319_reg_227156.read()));
}

void a0_conv2d_1::thread_tmp321_fu_169727_p2() {
    tmp321_fu_169727_p2 = (!tmp285_fu_169705_p2.read().is_01() || !tmp320_fu_169714_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp285_fu_169705_p2.read()) + sc_biguint<16>(tmp320_fu_169714_p2.read()));
}

void a0_conv2d_1::thread_tmp322_fu_169745_p2() {
    tmp322_fu_169745_p2 = (!tmp250_fu_169695_p2.read().is_01() || !tmp321_fu_169727_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp250_fu_169695_p2.read()) + sc_biguint<16>(tmp321_fu_169727_p2.read()));
}

void a0_conv2d_1::thread_tmp323_fu_169763_p2() {
    tmp323_fu_169763_p2 = (!tmp179_fu_169658_p2.read().is_01() || !tmp322_fu_169745_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp179_fu_169658_p2.read()) + sc_biguint<16>(tmp322_fu_169745_p2.read()));
}

void a0_conv2d_1::thread_tmp324_fu_106017_p2() {
    tmp324_fu_106017_p2 = (!result1_V_fu_85615_p4.read().is_01() || !result2_V_fu_85628_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_fu_85615_p4.read()) + sc_biguint<16>(result2_V_fu_85628_p4.read()));
}

void a0_conv2d_1::thread_tmp325_fu_142537_p2() {
    tmp325_fu_142537_p2 = (!result3_V_fu_123631_p4.read().is_01() || !result4_V_reg_213051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_fu_123631_p4.read()) + sc_biguint<16>(result4_V_reg_213051.read()));
}

void a0_conv2d_1::thread_tmp326_fu_142551_p2() {
    tmp326_fu_142551_p2 = (!tmp324_reg_222451.read().is_01() || !tmp325_fu_142537_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp324_reg_222451.read()) + sc_biguint<16>(tmp325_fu_142537_p2.read()));
}

void a0_conv2d_1::thread_tmp327_fu_142565_p2() {
    tmp327_fu_142565_p2 = (!result5_V_reg_213056.read().is_01() || !result6_V_fu_123644_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_reg_213056.read()) + sc_biguint<16>(result6_V_fu_123644_p4.read()));
}

void a0_conv2d_1::thread_tmp328_fu_106059_p2() {
    tmp328_fu_106059_p2 = (!result1_V_1_fu_85996_p4.read().is_01() || !result7_V_fu_85713_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_1_fu_85996_p4.read()) + sc_biguint<16>(result7_V_fu_85713_p4.read()));
}

void a0_conv2d_1::thread_tmp329_fu_106080_p2() {
    tmp329_fu_106080_p2 = (!result8_V_fu_85726_p4.read().is_01() || !tmp328_fu_106059_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_fu_85726_p4.read()) + sc_biguint<16>(tmp328_fu_106059_p2.read()));
}

void a0_conv2d_1::thread_tmp330_fu_142575_p2() {
    tmp330_fu_142575_p2 = (!tmp327_fu_142565_p2.read().is_01() || !tmp329_reg_222466.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp327_fu_142565_p2.read()) + sc_biguint<16>(tmp329_reg_222466.read()));
}

void a0_conv2d_1::thread_tmp331_fu_142591_p2() {
    tmp331_fu_142591_p2 = (!tmp326_fu_142551_p2.read().is_01() || !tmp330_fu_142575_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp326_fu_142551_p2.read()) + sc_biguint<16>(tmp330_fu_142575_p2.read()));
}

void a0_conv2d_1::thread_tmp332_fu_142615_p2() {
    tmp332_fu_142615_p2 = (!result3_V_1_fu_123787_p4.read().is_01() || !result9_V_fu_123657_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_1_fu_123787_p4.read()) + sc_biguint<16>(result9_V_fu_123657_p4.read()));
}

void a0_conv2d_1::thread_tmp333_fu_142621_p2() {
    tmp333_fu_142621_p2 = (!result5_V_1_reg_213161.read().is_01() || !result2_V_1_reg_213146.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_1_reg_213161.read()) + sc_biguint<16>(result2_V_1_reg_213146.read()));
}

void a0_conv2d_1::thread_tmp334_fu_142631_p2() {
    tmp334_fu_142631_p2 = (!tmp332_fu_142615_p2.read().is_01() || !tmp333_fu_142621_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp332_fu_142615_p2.read()) + sc_biguint<16>(tmp333_fu_142621_p2.read()));
}

void a0_conv2d_1::thread_tmp335_fu_142646_p2() {
    tmp335_fu_142646_p2 = (!result6_V_1_fu_123800_p4.read().is_01() || !result4_V_1_reg_213156.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_1_fu_123800_p4.read()) + sc_biguint<16>(result4_V_1_reg_213156.read()));
}

void a0_conv2d_1::thread_tmp336_fu_106143_p2() {
    tmp336_fu_106143_p2 = (!result1_V_2_fu_86377_p4.read().is_01() || !result7_V_1_fu_86094_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_2_fu_86377_p4.read()) + sc_biguint<16>(result7_V_1_fu_86094_p4.read()));
}

void a0_conv2d_1::thread_tmp337_fu_142651_p2() {
    tmp337_fu_142651_p2 = (!result8_V_1_reg_213171.read().is_01() || !tmp336_reg_222486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_1_reg_213171.read()) + sc_biguint<16>(tmp336_reg_222486.read()));
}

void a0_conv2d_1::thread_tmp338_fu_142660_p2() {
    tmp338_fu_142660_p2 = (!tmp335_fu_142646_p2.read().is_01() || !tmp337_fu_142651_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp335_fu_142646_p2.read()) + sc_biguint<16>(tmp337_fu_142651_p2.read()));
}

void a0_conv2d_1::thread_tmp339_fu_142676_p2() {
    tmp339_fu_142676_p2 = (!tmp334_fu_142631_p2.read().is_01() || !tmp338_fu_142660_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp334_fu_142631_p2.read()) + sc_biguint<16>(tmp338_fu_142660_p2.read()));
}

void a0_conv2d_1::thread_tmp340_fu_142694_p2() {
    tmp340_fu_142694_p2 = (!tmp331_fu_142591_p2.read().is_01() || !tmp339_fu_142676_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp331_fu_142591_p2.read()) + sc_biguint<16>(tmp339_fu_142676_p2.read()));
}

void a0_conv2d_1::thread_tmp341_fu_142718_p2() {
    tmp341_fu_142718_p2 = (!result3_V_2_fu_123943_p4.read().is_01() || !result9_V_1_fu_123813_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_2_fu_123943_p4.read()) + sc_biguint<16>(result9_V_1_fu_123813_p4.read()));
}

void a0_conv2d_1::thread_tmp342_fu_142724_p2() {
    tmp342_fu_142724_p2 = (!result5_V_2_reg_213301.read().is_01() || !result2_V_2_reg_213286.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_2_reg_213301.read()) + sc_biguint<16>(result2_V_2_reg_213286.read()));
}

void a0_conv2d_1::thread_tmp343_fu_142734_p2() {
    tmp343_fu_142734_p2 = (!tmp341_fu_142718_p2.read().is_01() || !tmp342_fu_142724_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp341_fu_142718_p2.read()) + sc_biguint<16>(tmp342_fu_142724_p2.read()));
}

void a0_conv2d_1::thread_tmp344_fu_142749_p2() {
    tmp344_fu_142749_p2 = (!result6_V_2_fu_123956_p4.read().is_01() || !result4_V_2_reg_213296.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_2_fu_123956_p4.read()) + sc_biguint<16>(result4_V_2_reg_213296.read()));
}

void a0_conv2d_1::thread_tmp345_fu_106221_p2() {
    tmp345_fu_106221_p2 = (!result1_V_3_fu_86758_p4.read().is_01() || !result7_V_2_fu_86475_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_3_fu_86758_p4.read()) + sc_biguint<16>(result7_V_2_fu_86475_p4.read()));
}

void a0_conv2d_1::thread_tmp346_fu_106242_p2() {
    tmp346_fu_106242_p2 = (!result8_V_2_fu_86488_p4.read().is_01() || !tmp345_fu_106221_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_2_fu_86488_p4.read()) + sc_biguint<16>(tmp345_fu_106221_p2.read()));
}

void a0_conv2d_1::thread_tmp347_fu_142759_p2() {
    tmp347_fu_142759_p2 = (!tmp344_fu_142749_p2.read().is_01() || !tmp346_reg_222506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp344_fu_142749_p2.read()) + sc_biguint<16>(tmp346_reg_222506.read()));
}

void a0_conv2d_1::thread_tmp348_fu_142774_p2() {
    tmp348_fu_142774_p2 = (!tmp343_fu_142734_p2.read().is_01() || !tmp347_fu_142759_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp343_fu_142734_p2.read()) + sc_biguint<16>(tmp347_fu_142759_p2.read()));
}

void a0_conv2d_1::thread_tmp349_fu_142798_p2() {
    tmp349_fu_142798_p2 = (!result3_V_3_fu_124099_p4.read().is_01() || !result9_V_2_fu_123969_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_3_fu_124099_p4.read()) + sc_biguint<16>(result9_V_2_fu_123969_p4.read()));
}

void a0_conv2d_1::thread_tmp350_fu_142804_p2() {
    tmp350_fu_142804_p2 = (!result5_V_3_reg_213421.read().is_01() || !result2_V_3_reg_213406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_3_reg_213421.read()) + sc_biguint<16>(result2_V_3_reg_213406.read()));
}

void a0_conv2d_1::thread_tmp351_fu_142814_p2() {
    tmp351_fu_142814_p2 = (!tmp349_fu_142798_p2.read().is_01() || !tmp350_fu_142804_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp349_fu_142798_p2.read()) + sc_biguint<16>(tmp350_fu_142804_p2.read()));
}

void a0_conv2d_1::thread_tmp352_fu_142829_p2() {
    tmp352_fu_142829_p2 = (!result6_V_3_fu_124112_p4.read().is_01() || !result4_V_3_reg_213416.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_3_fu_124112_p4.read()) + sc_biguint<16>(result4_V_3_reg_213416.read()));
}

void a0_conv2d_1::thread_tmp353_fu_106305_p2() {
    tmp353_fu_106305_p2 = (!result1_V_4_fu_87139_p4.read().is_01() || !result7_V_3_fu_86856_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_4_fu_87139_p4.read()) + sc_biguint<16>(result7_V_3_fu_86856_p4.read()));
}

void a0_conv2d_1::thread_tmp354_fu_106326_p2() {
    tmp354_fu_106326_p2 = (!result8_V_3_fu_86869_p4.read().is_01() || !tmp353_fu_106305_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_3_fu_86869_p4.read()) + sc_biguint<16>(tmp353_fu_106305_p2.read()));
}

void a0_conv2d_1::thread_tmp355_fu_142839_p2() {
    tmp355_fu_142839_p2 = (!tmp352_fu_142829_p2.read().is_01() || !tmp354_reg_222526.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp352_fu_142829_p2.read()) + sc_biguint<16>(tmp354_reg_222526.read()));
}

void a0_conv2d_1::thread_tmp356_fu_142854_p2() {
    tmp356_fu_142854_p2 = (!tmp351_fu_142814_p2.read().is_01() || !tmp355_fu_142839_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp351_fu_142814_p2.read()) + sc_biguint<16>(tmp355_fu_142839_p2.read()));
}

void a0_conv2d_1::thread_tmp357_fu_142872_p2() {
    tmp357_fu_142872_p2 = (!tmp348_fu_142774_p2.read().is_01() || !tmp356_fu_142854_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp348_fu_142774_p2.read()) + sc_biguint<16>(tmp356_fu_142854_p2.read()));
}

void a0_conv2d_1::thread_tmp358_fu_142890_p2() {
    tmp358_fu_142890_p2 = (!tmp340_fu_142694_p2.read().is_01() || !tmp357_fu_142872_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp340_fu_142694_p2.read()) + sc_biguint<16>(tmp357_fu_142872_p2.read()));
}

void a0_conv2d_1::thread_tmp359_fu_142914_p2() {
    tmp359_fu_142914_p2 = (!result3_V_4_fu_124255_p4.read().is_01() || !result9_V_3_fu_124125_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_4_fu_124255_p4.read()) + sc_biguint<16>(result9_V_3_fu_124125_p4.read()));
}

void a0_conv2d_1::thread_tmp360_fu_142920_p2() {
    tmp360_fu_142920_p2 = (!result5_V_4_reg_213541.read().is_01() || !result2_V_4_reg_213526.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_4_reg_213541.read()) + sc_biguint<16>(result2_V_4_reg_213526.read()));
}

void a0_conv2d_1::thread_tmp361_fu_142930_p2() {
    tmp361_fu_142930_p2 = (!tmp359_fu_142914_p2.read().is_01() || !tmp360_fu_142920_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp359_fu_142914_p2.read()) + sc_biguint<16>(tmp360_fu_142920_p2.read()));
}

void a0_conv2d_1::thread_tmp362_fu_142945_p2() {
    tmp362_fu_142945_p2 = (!result6_V_4_fu_124268_p4.read().is_01() || !result4_V_4_reg_213536.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_4_fu_124268_p4.read()) + sc_biguint<16>(result4_V_4_reg_213536.read()));
}

void a0_conv2d_1::thread_tmp363_fu_106389_p2() {
    tmp363_fu_106389_p2 = (!result1_V_5_fu_87520_p4.read().is_01() || !result7_V_4_fu_87237_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_5_fu_87520_p4.read()) + sc_biguint<16>(result7_V_4_fu_87237_p4.read()));
}

void a0_conv2d_1::thread_tmp364_fu_106410_p2() {
    tmp364_fu_106410_p2 = (!result8_V_4_fu_87250_p4.read().is_01() || !tmp363_fu_106389_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_4_fu_87250_p4.read()) + sc_biguint<16>(tmp363_fu_106389_p2.read()));
}

void a0_conv2d_1::thread_tmp365_fu_142955_p2() {
    tmp365_fu_142955_p2 = (!tmp362_fu_142945_p2.read().is_01() || !tmp364_reg_222546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp362_fu_142945_p2.read()) + sc_biguint<16>(tmp364_reg_222546.read()));
}

void a0_conv2d_1::thread_tmp366_fu_142970_p2() {
    tmp366_fu_142970_p2 = (!tmp361_fu_142930_p2.read().is_01() || !tmp365_fu_142955_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp361_fu_142930_p2.read()) + sc_biguint<16>(tmp365_fu_142955_p2.read()));
}

void a0_conv2d_1::thread_tmp367_fu_142994_p2() {
    tmp367_fu_142994_p2 = (!result3_V_5_fu_124411_p4.read().is_01() || !result9_V_4_fu_124281_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_5_fu_124411_p4.read()) + sc_biguint<16>(result9_V_4_fu_124281_p4.read()));
}

void a0_conv2d_1::thread_tmp368_fu_143000_p2() {
    tmp368_fu_143000_p2 = (!result5_V_5_reg_213661.read().is_01() || !result2_V_5_reg_213646.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_5_reg_213661.read()) + sc_biguint<16>(result2_V_5_reg_213646.read()));
}

void a0_conv2d_1::thread_tmp369_fu_143010_p2() {
    tmp369_fu_143010_p2 = (!tmp367_fu_142994_p2.read().is_01() || !tmp368_fu_143000_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp367_fu_142994_p2.read()) + sc_biguint<16>(tmp368_fu_143000_p2.read()));
}

void a0_conv2d_1::thread_tmp370_fu_143025_p2() {
    tmp370_fu_143025_p2 = (!result6_V_5_fu_124424_p4.read().is_01() || !result4_V_5_reg_213656.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_5_fu_124424_p4.read()) + sc_biguint<16>(result4_V_5_reg_213656.read()));
}

void a0_conv2d_1::thread_tmp371_fu_106473_p2() {
    tmp371_fu_106473_p2 = (!result1_V_6_fu_87901_p4.read().is_01() || !result7_V_5_fu_87618_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_6_fu_87901_p4.read()) + sc_biguint<16>(result7_V_5_fu_87618_p4.read()));
}

void a0_conv2d_1::thread_tmp372_fu_143030_p2() {
    tmp372_fu_143030_p2 = (!result8_V_5_reg_213671.read().is_01() || !tmp371_reg_222566.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_5_reg_213671.read()) + sc_biguint<16>(tmp371_reg_222566.read()));
}

void a0_conv2d_1::thread_tmp373_fu_143039_p2() {
    tmp373_fu_143039_p2 = (!tmp370_fu_143025_p2.read().is_01() || !tmp372_fu_143030_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp370_fu_143025_p2.read()) + sc_biguint<16>(tmp372_fu_143030_p2.read()));
}

void a0_conv2d_1::thread_tmp374_fu_143055_p2() {
    tmp374_fu_143055_p2 = (!tmp369_fu_143010_p2.read().is_01() || !tmp373_fu_143039_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp369_fu_143010_p2.read()) + sc_biguint<16>(tmp373_fu_143039_p2.read()));
}

void a0_conv2d_1::thread_tmp375_fu_143073_p2() {
    tmp375_fu_143073_p2 = (!tmp366_fu_142970_p2.read().is_01() || !tmp374_fu_143055_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp366_fu_142970_p2.read()) + sc_biguint<16>(tmp374_fu_143055_p2.read()));
}

void a0_conv2d_1::thread_tmp376_fu_143097_p2() {
    tmp376_fu_143097_p2 = (!result3_V_6_fu_124567_p4.read().is_01() || !result9_V_5_fu_124437_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_6_fu_124567_p4.read()) + sc_biguint<16>(result9_V_5_fu_124437_p4.read()));
}

void a0_conv2d_1::thread_tmp377_fu_143103_p2() {
    tmp377_fu_143103_p2 = (!result5_V_6_reg_213801.read().is_01() || !result2_V_6_reg_213786.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_6_reg_213801.read()) + sc_biguint<16>(result2_V_6_reg_213786.read()));
}

void a0_conv2d_1::thread_tmp378_fu_143113_p2() {
    tmp378_fu_143113_p2 = (!tmp376_fu_143097_p2.read().is_01() || !tmp377_fu_143103_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp376_fu_143097_p2.read()) + sc_biguint<16>(tmp377_fu_143103_p2.read()));
}

void a0_conv2d_1::thread_tmp379_fu_143128_p2() {
    tmp379_fu_143128_p2 = (!result6_V_6_fu_124580_p4.read().is_01() || !result4_V_6_reg_213796.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_6_fu_124580_p4.read()) + sc_biguint<16>(result4_V_6_reg_213796.read()));
}

void a0_conv2d_1::thread_tmp37_fu_137904_p2() {
    tmp37_fu_137904_p2 = (!result8_V_62_fu_137864_p4.read().is_01() || !result7_V_62_fu_137852_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_62_fu_137864_p4.read()) + sc_biguint<16>(result7_V_62_fu_137852_p4.read()));
}

void a0_conv2d_1::thread_tmp380_fu_106551_p2() {
    tmp380_fu_106551_p2 = (!result1_V_7_fu_88282_p4.read().is_01() || !result7_V_6_fu_87999_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_7_fu_88282_p4.read()) + sc_biguint<16>(result7_V_6_fu_87999_p4.read()));
}

void a0_conv2d_1::thread_tmp381_fu_106572_p2() {
    tmp381_fu_106572_p2 = (!result8_V_6_fu_88012_p4.read().is_01() || !tmp380_fu_106551_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_6_fu_88012_p4.read()) + sc_biguint<16>(tmp380_fu_106551_p2.read()));
}

void a0_conv2d_1::thread_tmp382_fu_143138_p2() {
    tmp382_fu_143138_p2 = (!tmp379_fu_143128_p2.read().is_01() || !tmp381_reg_222586.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp379_fu_143128_p2.read()) + sc_biguint<16>(tmp381_reg_222586.read()));
}

void a0_conv2d_1::thread_tmp383_fu_143153_p2() {
    tmp383_fu_143153_p2 = (!tmp378_fu_143113_p2.read().is_01() || !tmp382_fu_143138_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp378_fu_143113_p2.read()) + sc_biguint<16>(tmp382_fu_143138_p2.read()));
}

void a0_conv2d_1::thread_tmp384_fu_143177_p2() {
    tmp384_fu_143177_p2 = (!result3_V_7_fu_124723_p4.read().is_01() || !result9_V_6_fu_124593_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_7_fu_124723_p4.read()) + sc_biguint<16>(result9_V_6_fu_124593_p4.read()));
}

void a0_conv2d_1::thread_tmp385_fu_143183_p2() {
    tmp385_fu_143183_p2 = (!result5_V_7_reg_213921.read().is_01() || !result2_V_7_reg_213906.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_7_reg_213921.read()) + sc_biguint<16>(result2_V_7_reg_213906.read()));
}

void a0_conv2d_1::thread_tmp386_fu_143193_p2() {
    tmp386_fu_143193_p2 = (!tmp384_fu_143177_p2.read().is_01() || !tmp385_fu_143183_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp384_fu_143177_p2.read()) + sc_biguint<16>(tmp385_fu_143183_p2.read()));
}

void a0_conv2d_1::thread_tmp387_fu_143208_p2() {
    tmp387_fu_143208_p2 = (!result6_V_7_fu_124736_p4.read().is_01() || !result4_V_7_reg_213916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_7_fu_124736_p4.read()) + sc_biguint<16>(result4_V_7_reg_213916.read()));
}

void a0_conv2d_1::thread_tmp388_fu_106635_p2() {
    tmp388_fu_106635_p2 = (!result1_V_8_fu_88663_p4.read().is_01() || !result7_V_7_fu_88380_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_8_fu_88663_p4.read()) + sc_biguint<16>(result7_V_7_fu_88380_p4.read()));
}

void a0_conv2d_1::thread_tmp389_fu_143213_p2() {
    tmp389_fu_143213_p2 = (!result8_V_7_reg_213931.read().is_01() || !tmp388_reg_222606.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_7_reg_213931.read()) + sc_biguint<16>(tmp388_reg_222606.read()));
}

void a0_conv2d_1::thread_tmp38_fu_137928_p2() {
    tmp38_fu_137928_p2 = (!result5_V_62_fu_137827_p4.read().is_01() || !result6_V_62_fu_137840_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_62_fu_137827_p4.read()) + sc_biguint<16>(result6_V_62_fu_137840_p4.read()));
}

void a0_conv2d_1::thread_tmp390_fu_143222_p2() {
    tmp390_fu_143222_p2 = (!tmp387_fu_143208_p2.read().is_01() || !tmp389_fu_143213_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp387_fu_143208_p2.read()) + sc_biguint<16>(tmp389_fu_143213_p2.read()));
}

void a0_conv2d_1::thread_tmp391_fu_143238_p2() {
    tmp391_fu_143238_p2 = (!tmp386_fu_143193_p2.read().is_01() || !tmp390_fu_143222_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp386_fu_143193_p2.read()) + sc_biguint<16>(tmp390_fu_143222_p2.read()));
}

void a0_conv2d_1::thread_tmp392_fu_143256_p2() {
    tmp392_fu_143256_p2 = (!tmp383_fu_143153_p2.read().is_01() || !tmp391_fu_143238_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp383_fu_143153_p2.read()) + sc_biguint<16>(tmp391_fu_143238_p2.read()));
}

void a0_conv2d_1::thread_tmp393_fu_169769_p2() {
    tmp393_fu_169769_p2 = (!tmp375_reg_227181.read().is_01() || !tmp392_reg_227186.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp375_reg_227181.read()) + sc_biguint<16>(tmp392_reg_227186.read()));
}

void a0_conv2d_1::thread_tmp394_fu_169777_p2() {
    tmp394_fu_169777_p2 = (!tmp358_reg_227176.read().is_01() || !tmp393_fu_169769_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp358_reg_227176.read()) + sc_biguint<16>(tmp393_fu_169769_p2.read()));
}

void a0_conv2d_1::thread_tmp395_fu_143298_p2() {
    tmp395_fu_143298_p2 = (!result3_V_8_fu_124879_p4.read().is_01() || !result9_V_7_fu_124749_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_8_fu_124879_p4.read()) + sc_biguint<16>(result9_V_7_fu_124749_p4.read()));
}

void a0_conv2d_1::thread_tmp396_fu_143304_p2() {
    tmp396_fu_143304_p2 = (!result5_V_8_reg_214061.read().is_01() || !result2_V_8_reg_214046.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_8_reg_214061.read()) + sc_biguint<16>(result2_V_8_reg_214046.read()));
}

void a0_conv2d_1::thread_tmp397_fu_143314_p2() {
    tmp397_fu_143314_p2 = (!tmp395_fu_143298_p2.read().is_01() || !tmp396_fu_143304_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp395_fu_143298_p2.read()) + sc_biguint<16>(tmp396_fu_143304_p2.read()));
}

void a0_conv2d_1::thread_tmp398_fu_143329_p2() {
    tmp398_fu_143329_p2 = (!result6_V_8_fu_124892_p4.read().is_01() || !result4_V_8_reg_214056.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_8_fu_124892_p4.read()) + sc_biguint<16>(result4_V_8_reg_214056.read()));
}

void a0_conv2d_1::thread_tmp399_fu_106713_p2() {
    tmp399_fu_106713_p2 = (!result1_V_9_fu_89044_p4.read().is_01() || !result7_V_8_fu_88761_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_9_fu_89044_p4.read()) + sc_biguint<16>(result7_V_8_fu_88761_p4.read()));
}

void a0_conv2d_1::thread_tmp39_fu_137946_p2() {
    tmp39_fu_137946_p2 = (!tmp37_fu_137904_p2.read().is_01() || !tmp38_fu_137928_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp37_fu_137904_p2.read()) + sc_biguint<16>(tmp38_fu_137928_p2.read()));
}

void a0_conv2d_1::thread_tmp400_fu_106734_p2() {
    tmp400_fu_106734_p2 = (!result8_V_8_fu_88774_p4.read().is_01() || !tmp399_fu_106713_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_8_fu_88774_p4.read()) + sc_biguint<16>(tmp399_fu_106713_p2.read()));
}

void a0_conv2d_1::thread_tmp401_fu_143339_p2() {
    tmp401_fu_143339_p2 = (!tmp398_fu_143329_p2.read().is_01() || !tmp400_reg_222626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp398_fu_143329_p2.read()) + sc_biguint<16>(tmp400_reg_222626.read()));
}

void a0_conv2d_1::thread_tmp402_fu_143354_p2() {
    tmp402_fu_143354_p2 = (!tmp397_fu_143314_p2.read().is_01() || !tmp401_fu_143339_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp397_fu_143314_p2.read()) + sc_biguint<16>(tmp401_fu_143339_p2.read()));
}

void a0_conv2d_1::thread_tmp403_fu_143378_p2() {
    tmp403_fu_143378_p2 = (!result3_V_9_fu_125035_p4.read().is_01() || !result9_V_8_fu_124905_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_9_fu_125035_p4.read()) + sc_biguint<16>(result9_V_8_fu_124905_p4.read()));
}

void a0_conv2d_1::thread_tmp404_fu_143384_p2() {
    tmp404_fu_143384_p2 = (!result5_V_9_reg_214181.read().is_01() || !result2_V_9_reg_214166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_9_reg_214181.read()) + sc_biguint<16>(result2_V_9_reg_214166.read()));
}

void a0_conv2d_1::thread_tmp405_fu_143394_p2() {
    tmp405_fu_143394_p2 = (!tmp403_fu_143378_p2.read().is_01() || !tmp404_fu_143384_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp403_fu_143378_p2.read()) + sc_biguint<16>(tmp404_fu_143384_p2.read()));
}

void a0_conv2d_1::thread_tmp406_fu_143409_p2() {
    tmp406_fu_143409_p2 = (!result6_V_9_fu_125048_p4.read().is_01() || !result4_V_9_reg_214176.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_9_fu_125048_p4.read()) + sc_biguint<16>(result4_V_9_reg_214176.read()));
}

void a0_conv2d_1::thread_tmp407_fu_106797_p2() {
    tmp407_fu_106797_p2 = (!result1_V_s_fu_89425_p4.read().is_01() || !result7_V_9_fu_89142_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_s_fu_89425_p4.read()) + sc_biguint<16>(result7_V_9_fu_89142_p4.read()));
}

void a0_conv2d_1::thread_tmp408_fu_143414_p2() {
    tmp408_fu_143414_p2 = (!result8_V_9_reg_214191.read().is_01() || !tmp407_reg_222646.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_9_reg_214191.read()) + sc_biguint<16>(tmp407_reg_222646.read()));
}

void a0_conv2d_1::thread_tmp409_fu_143423_p2() {
    tmp409_fu_143423_p2 = (!tmp406_fu_143409_p2.read().is_01() || !tmp408_fu_143414_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp406_fu_143409_p2.read()) + sc_biguint<16>(tmp408_fu_143414_p2.read()));
}

void a0_conv2d_1::thread_tmp40_fu_137970_p2() {
    tmp40_fu_137970_p2 = (!result1_V_62_fu_137778_p4.read().is_01() || !result4_V_62_fu_137815_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_62_fu_137778_p4.read()) + sc_biguint<16>(result4_V_62_fu_137815_p4.read()));
}

void a0_conv2d_1::thread_tmp410_fu_143439_p2() {
    tmp410_fu_143439_p2 = (!tmp405_fu_143394_p2.read().is_01() || !tmp409_fu_143423_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp405_fu_143394_p2.read()) + sc_biguint<16>(tmp409_fu_143423_p2.read()));
}

void a0_conv2d_1::thread_tmp411_fu_143457_p2() {
    tmp411_fu_143457_p2 = (!tmp402_fu_143354_p2.read().is_01() || !tmp410_fu_143439_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp402_fu_143354_p2.read()) + sc_biguint<16>(tmp410_fu_143439_p2.read()));
}

void a0_conv2d_1::thread_tmp412_fu_143481_p2() {
    tmp412_fu_143481_p2 = (!result3_V_s_fu_125191_p4.read().is_01() || !result9_V_9_fu_125061_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_s_fu_125191_p4.read()) + sc_biguint<16>(result9_V_9_fu_125061_p4.read()));
}

void a0_conv2d_1::thread_tmp413_fu_143487_p2() {
    tmp413_fu_143487_p2 = (!result5_V_s_reg_214321.read().is_01() || !result2_V_s_reg_214306.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_s_reg_214321.read()) + sc_biguint<16>(result2_V_s_reg_214306.read()));
}

void a0_conv2d_1::thread_tmp414_fu_143497_p2() {
    tmp414_fu_143497_p2 = (!tmp412_fu_143481_p2.read().is_01() || !tmp413_fu_143487_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp412_fu_143481_p2.read()) + sc_biguint<16>(tmp413_fu_143487_p2.read()));
}

void a0_conv2d_1::thread_tmp415_fu_143512_p2() {
    tmp415_fu_143512_p2 = (!result6_V_s_fu_125204_p4.read().is_01() || !result4_V_s_reg_214316.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_s_fu_125204_p4.read()) + sc_biguint<16>(result4_V_s_reg_214316.read()));
}

void a0_conv2d_1::thread_tmp416_fu_106875_p2() {
    tmp416_fu_106875_p2 = (!result1_V_10_fu_89806_p4.read().is_01() || !result7_V_s_fu_89523_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_10_fu_89806_p4.read()) + sc_biguint<16>(result7_V_s_fu_89523_p4.read()));
}

void a0_conv2d_1::thread_tmp417_fu_106896_p2() {
    tmp417_fu_106896_p2 = (!result8_V_s_fu_89536_p4.read().is_01() || !tmp416_fu_106875_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_s_fu_89536_p4.read()) + sc_biguint<16>(tmp416_fu_106875_p2.read()));
}

void a0_conv2d_1::thread_tmp418_fu_143522_p2() {
    tmp418_fu_143522_p2 = (!tmp415_fu_143512_p2.read().is_01() || !tmp417_reg_222666.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp415_fu_143512_p2.read()) + sc_biguint<16>(tmp417_reg_222666.read()));
}

void a0_conv2d_1::thread_tmp419_fu_143537_p2() {
    tmp419_fu_143537_p2 = (!tmp414_fu_143497_p2.read().is_01() || !tmp418_fu_143522_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp414_fu_143497_p2.read()) + sc_biguint<16>(tmp418_fu_143522_p2.read()));
}

void a0_conv2d_1::thread_tmp41_fu_137994_p2() {
    tmp41_fu_137994_p2 = (!result2_V_62_fu_137790_p4.read().is_01() || !result3_V_62_fu_137803_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_62_fu_137790_p4.read()) + sc_biguint<16>(result3_V_62_fu_137803_p4.read()));
}

void a0_conv2d_1::thread_tmp420_fu_143561_p2() {
    tmp420_fu_143561_p2 = (!result3_V_10_fu_125347_p4.read().is_01() || !result9_V_s_fu_125217_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_10_fu_125347_p4.read()) + sc_biguint<16>(result9_V_s_fu_125217_p4.read()));
}

void a0_conv2d_1::thread_tmp421_fu_143567_p2() {
    tmp421_fu_143567_p2 = (!result5_V_10_reg_214441.read().is_01() || !result2_V_10_reg_214426.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_10_reg_214441.read()) + sc_biguint<16>(result2_V_10_reg_214426.read()));
}

void a0_conv2d_1::thread_tmp422_fu_143577_p2() {
    tmp422_fu_143577_p2 = (!tmp420_fu_143561_p2.read().is_01() || !tmp421_fu_143567_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp420_fu_143561_p2.read()) + sc_biguint<16>(tmp421_fu_143567_p2.read()));
}

void a0_conv2d_1::thread_tmp423_fu_143592_p2() {
    tmp423_fu_143592_p2 = (!result6_V_10_fu_125360_p4.read().is_01() || !result4_V_10_reg_214436.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_10_fu_125360_p4.read()) + sc_biguint<16>(result4_V_10_reg_214436.read()));
}

void a0_conv2d_1::thread_tmp424_fu_106959_p2() {
    tmp424_fu_106959_p2 = (!result1_V_11_fu_90187_p4.read().is_01() || !result7_V_10_fu_89904_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_11_fu_90187_p4.read()) + sc_biguint<16>(result7_V_10_fu_89904_p4.read()));
}

void a0_conv2d_1::thread_tmp425_fu_106980_p2() {
    tmp425_fu_106980_p2 = (!result8_V_10_fu_89917_p4.read().is_01() || !tmp424_fu_106959_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_10_fu_89917_p4.read()) + sc_biguint<16>(tmp424_fu_106959_p2.read()));
}

void a0_conv2d_1::thread_tmp426_fu_143602_p2() {
    tmp426_fu_143602_p2 = (!tmp423_fu_143592_p2.read().is_01() || !tmp425_reg_222686.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp423_fu_143592_p2.read()) + sc_biguint<16>(tmp425_reg_222686.read()));
}

void a0_conv2d_1::thread_tmp427_fu_143617_p2() {
    tmp427_fu_143617_p2 = (!tmp422_fu_143577_p2.read().is_01() || !tmp426_fu_143602_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp422_fu_143577_p2.read()) + sc_biguint<16>(tmp426_fu_143602_p2.read()));
}

void a0_conv2d_1::thread_tmp428_fu_169782_p2() {
    tmp428_fu_169782_p2 = (!tmp419_reg_227201.read().is_01() || !tmp427_reg_227206.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp419_reg_227201.read()) + sc_biguint<16>(tmp427_reg_227206.read()));
}

void a0_conv2d_1::thread_tmp429_fu_169786_p2() {
    tmp429_fu_169786_p2 = (!tmp411_reg_227196.read().is_01() || !tmp428_fu_169782_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp411_reg_227196.read()) + sc_biguint<16>(tmp428_fu_169782_p2.read()));
}

void a0_conv2d_1::thread_tmp42_fu_138015_p2() {
    tmp42_fu_138015_p2 = (!result9_V_61_fu_137433_p4.read().is_01() || !tmp41_fu_137994_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_61_fu_137433_p4.read()) + sc_biguint<16>(tmp41_fu_137994_p2.read()));
}

void a0_conv2d_1::thread_tmp430_fu_143665_p2() {
    tmp430_fu_143665_p2 = (!result3_V_11_fu_125503_p4.read().is_01() || !result9_V_10_fu_125373_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_11_fu_125503_p4.read()) + sc_biguint<16>(result9_V_10_fu_125373_p4.read()));
}

void a0_conv2d_1::thread_tmp431_fu_143671_p2() {
    tmp431_fu_143671_p2 = (!result5_V_11_reg_214561.read().is_01() || !result2_V_11_reg_214546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_11_reg_214561.read()) + sc_biguint<16>(result2_V_11_reg_214546.read()));
}

void a0_conv2d_1::thread_tmp432_fu_143681_p2() {
    tmp432_fu_143681_p2 = (!tmp430_fu_143665_p2.read().is_01() || !tmp431_fu_143671_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp430_fu_143665_p2.read()) + sc_biguint<16>(tmp431_fu_143671_p2.read()));
}

void a0_conv2d_1::thread_tmp433_fu_143696_p2() {
    tmp433_fu_143696_p2 = (!result6_V_11_fu_125516_p4.read().is_01() || !result4_V_11_reg_214556.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_11_fu_125516_p4.read()) + sc_biguint<16>(result4_V_11_reg_214556.read()));
}

void a0_conv2d_1::thread_tmp434_fu_107043_p2() {
    tmp434_fu_107043_p2 = (!result1_V_12_fu_90568_p4.read().is_01() || !result7_V_11_fu_90285_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_12_fu_90568_p4.read()) + sc_biguint<16>(result7_V_11_fu_90285_p4.read()));
}

void a0_conv2d_1::thread_tmp435_fu_107064_p2() {
    tmp435_fu_107064_p2 = (!result8_V_11_fu_90298_p4.read().is_01() || !tmp434_fu_107043_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_11_fu_90298_p4.read()) + sc_biguint<16>(tmp434_fu_107043_p2.read()));
}

void a0_conv2d_1::thread_tmp436_fu_143706_p2() {
    tmp436_fu_143706_p2 = (!tmp433_fu_143696_p2.read().is_01() || !tmp435_reg_222706.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp433_fu_143696_p2.read()) + sc_biguint<16>(tmp435_reg_222706.read()));
}

void a0_conv2d_1::thread_tmp437_fu_143721_p2() {
    tmp437_fu_143721_p2 = (!tmp432_fu_143681_p2.read().is_01() || !tmp436_fu_143706_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp432_fu_143681_p2.read()) + sc_biguint<16>(tmp436_fu_143706_p2.read()));
}

void a0_conv2d_1::thread_tmp438_fu_143745_p2() {
    tmp438_fu_143745_p2 = (!result3_V_12_fu_125659_p4.read().is_01() || !result9_V_11_fu_125529_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_12_fu_125659_p4.read()) + sc_biguint<16>(result9_V_11_fu_125529_p4.read()));
}

void a0_conv2d_1::thread_tmp439_fu_143751_p2() {
    tmp439_fu_143751_p2 = (!result5_V_12_reg_214681.read().is_01() || !result2_V_12_reg_214666.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_12_reg_214681.read()) + sc_biguint<16>(result2_V_12_reg_214666.read()));
}

void a0_conv2d_1::thread_tmp43_fu_138033_p2() {
    tmp43_fu_138033_p2 = (!tmp40_fu_137970_p2.read().is_01() || !tmp42_fu_138015_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp40_fu_137970_p2.read()) + sc_biguint<16>(tmp42_fu_138015_p2.read()));
}

void a0_conv2d_1::thread_tmp440_fu_143761_p2() {
    tmp440_fu_143761_p2 = (!tmp438_fu_143745_p2.read().is_01() || !tmp439_fu_143751_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp438_fu_143745_p2.read()) + sc_biguint<16>(tmp439_fu_143751_p2.read()));
}

void a0_conv2d_1::thread_tmp441_fu_143776_p2() {
    tmp441_fu_143776_p2 = (!result6_V_12_fu_125672_p4.read().is_01() || !result4_V_12_reg_214676.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_12_fu_125672_p4.read()) + sc_biguint<16>(result4_V_12_reg_214676.read()));
}

void a0_conv2d_1::thread_tmp442_fu_107127_p2() {
    tmp442_fu_107127_p2 = (!result1_V_13_fu_90949_p4.read().is_01() || !result7_V_12_fu_90666_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_13_fu_90949_p4.read()) + sc_biguint<16>(result7_V_12_fu_90666_p4.read()));
}

void a0_conv2d_1::thread_tmp443_fu_143781_p2() {
    tmp443_fu_143781_p2 = (!result8_V_12_reg_214691.read().is_01() || !tmp442_reg_222726.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_12_reg_214691.read()) + sc_biguint<16>(tmp442_reg_222726.read()));
}

void a0_conv2d_1::thread_tmp444_fu_143790_p2() {
    tmp444_fu_143790_p2 = (!tmp441_fu_143776_p2.read().is_01() || !tmp443_fu_143781_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp441_fu_143776_p2.read()) + sc_biguint<16>(tmp443_fu_143781_p2.read()));
}

void a0_conv2d_1::thread_tmp445_fu_143806_p2() {
    tmp445_fu_143806_p2 = (!tmp440_fu_143761_p2.read().is_01() || !tmp444_fu_143790_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp440_fu_143761_p2.read()) + sc_biguint<16>(tmp444_fu_143790_p2.read()));
}

void a0_conv2d_1::thread_tmp446_fu_143824_p2() {
    tmp446_fu_143824_p2 = (!tmp437_fu_143721_p2.read().is_01() || !tmp445_fu_143806_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp437_fu_143721_p2.read()) + sc_biguint<16>(tmp445_fu_143806_p2.read()));
}

void a0_conv2d_1::thread_tmp447_fu_143848_p2() {
    tmp447_fu_143848_p2 = (!result3_V_13_fu_125815_p4.read().is_01() || !result9_V_12_fu_125685_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_13_fu_125815_p4.read()) + sc_biguint<16>(result9_V_12_fu_125685_p4.read()));
}

void a0_conv2d_1::thread_tmp448_fu_143854_p2() {
    tmp448_fu_143854_p2 = (!result5_V_13_reg_214821.read().is_01() || !result2_V_13_reg_214806.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_13_reg_214821.read()) + sc_biguint<16>(result2_V_13_reg_214806.read()));
}

void a0_conv2d_1::thread_tmp449_fu_143864_p2() {
    tmp449_fu_143864_p2 = (!tmp447_fu_143848_p2.read().is_01() || !tmp448_fu_143854_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp447_fu_143848_p2.read()) + sc_biguint<16>(tmp448_fu_143854_p2.read()));
}

void a0_conv2d_1::thread_tmp44_fu_138051_p2() {
    tmp44_fu_138051_p2 = (!tmp39_fu_137946_p2.read().is_01() || !tmp43_fu_138033_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp39_fu_137946_p2.read()) + sc_biguint<16>(tmp43_fu_138033_p2.read()));
}

void a0_conv2d_1::thread_tmp450_fu_143879_p2() {
    tmp450_fu_143879_p2 = (!result6_V_13_fu_125828_p4.read().is_01() || !result4_V_13_reg_214816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_13_fu_125828_p4.read()) + sc_biguint<16>(result4_V_13_reg_214816.read()));
}

void a0_conv2d_1::thread_tmp451_fu_107205_p2() {
    tmp451_fu_107205_p2 = (!result1_V_14_fu_91330_p4.read().is_01() || !result7_V_13_fu_91047_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_14_fu_91330_p4.read()) + sc_biguint<16>(result7_V_13_fu_91047_p4.read()));
}

void a0_conv2d_1::thread_tmp452_fu_107226_p2() {
    tmp452_fu_107226_p2 = (!result8_V_13_fu_91060_p4.read().is_01() || !tmp451_fu_107205_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_13_fu_91060_p4.read()) + sc_biguint<16>(tmp451_fu_107205_p2.read()));
}

void a0_conv2d_1::thread_tmp453_fu_143889_p2() {
    tmp453_fu_143889_p2 = (!tmp450_fu_143879_p2.read().is_01() || !tmp452_reg_222746.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp450_fu_143879_p2.read()) + sc_biguint<16>(tmp452_reg_222746.read()));
}

void a0_conv2d_1::thread_tmp454_fu_143904_p2() {
    tmp454_fu_143904_p2 = (!tmp449_fu_143864_p2.read().is_01() || !tmp453_fu_143889_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp449_fu_143864_p2.read()) + sc_biguint<16>(tmp453_fu_143889_p2.read()));
}

void a0_conv2d_1::thread_tmp455_fu_143928_p2() {
    tmp455_fu_143928_p2 = (!result3_V_14_fu_125971_p4.read().is_01() || !result9_V_13_fu_125841_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_14_fu_125971_p4.read()) + sc_biguint<16>(result9_V_13_fu_125841_p4.read()));
}

void a0_conv2d_1::thread_tmp456_fu_143934_p2() {
    tmp456_fu_143934_p2 = (!result5_V_14_reg_214941.read().is_01() || !result2_V_14_reg_214926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_14_reg_214941.read()) + sc_biguint<16>(result2_V_14_reg_214926.read()));
}

void a0_conv2d_1::thread_tmp457_fu_143944_p2() {
    tmp457_fu_143944_p2 = (!tmp455_fu_143928_p2.read().is_01() || !tmp456_fu_143934_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp455_fu_143928_p2.read()) + sc_biguint<16>(tmp456_fu_143934_p2.read()));
}

void a0_conv2d_1::thread_tmp458_fu_143959_p2() {
    tmp458_fu_143959_p2 = (!result6_V_14_fu_125984_p4.read().is_01() || !result4_V_14_reg_214936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_14_fu_125984_p4.read()) + sc_biguint<16>(result4_V_14_reg_214936.read()));
}

void a0_conv2d_1::thread_tmp459_fu_107289_p2() {
    tmp459_fu_107289_p2 = (!result1_V_15_fu_91711_p4.read().is_01() || !result7_V_14_fu_91428_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_15_fu_91711_p4.read()) + sc_biguint<16>(result7_V_14_fu_91428_p4.read()));
}

void a0_conv2d_1::thread_tmp45_fu_138075_p2() {
    tmp45_fu_138075_p2 = (!result9_V_60_fu_136989_p4.read().is_01() || !result1_V_61_fu_137334_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_60_fu_136989_p4.read()) + sc_biguint<16>(result1_V_61_fu_137334_p4.read()));
}

void a0_conv2d_1::thread_tmp460_fu_107310_p2() {
    tmp460_fu_107310_p2 = (!result8_V_14_fu_91441_p4.read().is_01() || !tmp459_fu_107289_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_14_fu_91441_p4.read()) + sc_biguint<16>(tmp459_fu_107289_p2.read()));
}

void a0_conv2d_1::thread_tmp461_fu_143969_p2() {
    tmp461_fu_143969_p2 = (!tmp458_fu_143959_p2.read().is_01() || !tmp460_reg_222766.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp458_fu_143959_p2.read()) + sc_biguint<16>(tmp460_reg_222766.read()));
}

void a0_conv2d_1::thread_tmp462_fu_143984_p2() {
    tmp462_fu_143984_p2 = (!tmp457_fu_143944_p2.read().is_01() || !tmp461_fu_143969_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp457_fu_143944_p2.read()) + sc_biguint<16>(tmp461_fu_143969_p2.read()));
}

void a0_conv2d_1::thread_tmp463_fu_169791_p2() {
    tmp463_fu_169791_p2 = (!tmp454_reg_227226.read().is_01() || !tmp462_reg_227231.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp454_reg_227226.read()) + sc_biguint<16>(tmp462_reg_227231.read()));
}

void a0_conv2d_1::thread_tmp464_fu_169795_p2() {
    tmp464_fu_169795_p2 = (!tmp446_reg_227221.read().is_01() || !tmp463_fu_169791_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp446_reg_227221.read()) + sc_biguint<16>(tmp463_fu_169791_p2.read()));
}

void a0_conv2d_1::thread_tmp465_fu_169804_p2() {
    tmp465_fu_169804_p2 = (!tmp429_fu_169786_p2.read().is_01() || !tmp464_fu_169795_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp429_fu_169786_p2.read()) + sc_biguint<16>(tmp464_fu_169795_p2.read()));
}

void a0_conv2d_1::thread_tmp466_fu_169820_p2() {
    tmp466_fu_169820_p2 = (!tmp394_fu_169777_p2.read().is_01() || !tmp465_fu_169804_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp394_fu_169777_p2.read()) + sc_biguint<16>(tmp465_fu_169804_p2.read()));
}

void a0_conv2d_1::thread_tmp467_fu_144038_p2() {
    tmp467_fu_144038_p2 = (!result3_V_15_fu_126127_p4.read().is_01() || !result9_V_14_fu_125997_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_15_fu_126127_p4.read()) + sc_biguint<16>(result9_V_14_fu_125997_p4.read()));
}

void a0_conv2d_1::thread_tmp468_fu_144044_p2() {
    tmp468_fu_144044_p2 = (!result5_V_15_reg_215061.read().is_01() || !result2_V_15_reg_215046.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_15_reg_215061.read()) + sc_biguint<16>(result2_V_15_reg_215046.read()));
}

void a0_conv2d_1::thread_tmp469_fu_144054_p2() {
    tmp469_fu_144054_p2 = (!tmp467_fu_144038_p2.read().is_01() || !tmp468_fu_144044_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp467_fu_144038_p2.read()) + sc_biguint<16>(tmp468_fu_144044_p2.read()));
}

void a0_conv2d_1::thread_tmp46_fu_138099_p2() {
    tmp46_fu_138099_p2 = (!result2_V_61_fu_137346_p4.read().is_01() || !result3_V_61_fu_137359_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_61_fu_137346_p4.read()) + sc_biguint<16>(result3_V_61_fu_137359_p4.read()));
}

void a0_conv2d_1::thread_tmp470_fu_144069_p2() {
    tmp470_fu_144069_p2 = (!result6_V_15_fu_126140_p4.read().is_01() || !result4_V_15_reg_215056.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_15_fu_126140_p4.read()) + sc_biguint<16>(result4_V_15_reg_215056.read()));
}

void a0_conv2d_1::thread_tmp471_fu_107373_p2() {
    tmp471_fu_107373_p2 = (!result1_V_16_fu_92092_p4.read().is_01() || !result7_V_15_fu_91809_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_16_fu_92092_p4.read()) + sc_biguint<16>(result7_V_15_fu_91809_p4.read()));
}

void a0_conv2d_1::thread_tmp472_fu_107394_p2() {
    tmp472_fu_107394_p2 = (!result8_V_15_fu_91822_p4.read().is_01() || !tmp471_fu_107373_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_15_fu_91822_p4.read()) + sc_biguint<16>(tmp471_fu_107373_p2.read()));
}

void a0_conv2d_1::thread_tmp473_fu_144079_p2() {
    tmp473_fu_144079_p2 = (!tmp470_fu_144069_p2.read().is_01() || !tmp472_reg_222786.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp470_fu_144069_p2.read()) + sc_biguint<16>(tmp472_reg_222786.read()));
}

void a0_conv2d_1::thread_tmp474_fu_144094_p2() {
    tmp474_fu_144094_p2 = (!tmp469_fu_144054_p2.read().is_01() || !tmp473_fu_144079_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp469_fu_144054_p2.read()) + sc_biguint<16>(tmp473_fu_144079_p2.read()));
}

void a0_conv2d_1::thread_tmp475_fu_144118_p2() {
    tmp475_fu_144118_p2 = (!result3_V_16_fu_126283_p4.read().is_01() || !result9_V_15_fu_126153_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_16_fu_126283_p4.read()) + sc_biguint<16>(result9_V_15_fu_126153_p4.read()));
}

void a0_conv2d_1::thread_tmp476_fu_144124_p2() {
    tmp476_fu_144124_p2 = (!result5_V_16_reg_215181.read().is_01() || !result2_V_16_reg_215166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_16_reg_215181.read()) + sc_biguint<16>(result2_V_16_reg_215166.read()));
}

void a0_conv2d_1::thread_tmp477_fu_144134_p2() {
    tmp477_fu_144134_p2 = (!tmp475_fu_144118_p2.read().is_01() || !tmp476_fu_144124_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp475_fu_144118_p2.read()) + sc_biguint<16>(tmp476_fu_144124_p2.read()));
}

void a0_conv2d_1::thread_tmp478_fu_144149_p2() {
    tmp478_fu_144149_p2 = (!result6_V_16_fu_126296_p4.read().is_01() || !result4_V_16_reg_215176.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_16_fu_126296_p4.read()) + sc_biguint<16>(result4_V_16_reg_215176.read()));
}

void a0_conv2d_1::thread_tmp479_fu_107457_p2() {
    tmp479_fu_107457_p2 = (!result1_V_17_fu_92473_p4.read().is_01() || !result7_V_16_fu_92190_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_17_fu_92473_p4.read()) + sc_biguint<16>(result7_V_16_fu_92190_p4.read()));
}

void a0_conv2d_1::thread_tmp47_fu_138117_p2() {
    tmp47_fu_138117_p2 = (!tmp45_fu_138075_p2.read().is_01() || !tmp46_fu_138099_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp45_fu_138075_p2.read()) + sc_biguint<16>(tmp46_fu_138099_p2.read()));
}

void a0_conv2d_1::thread_tmp480_fu_144154_p2() {
    tmp480_fu_144154_p2 = (!result8_V_16_reg_215191.read().is_01() || !tmp479_reg_222806.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_16_reg_215191.read()) + sc_biguint<16>(tmp479_reg_222806.read()));
}

void a0_conv2d_1::thread_tmp481_fu_144163_p2() {
    tmp481_fu_144163_p2 = (!tmp478_fu_144149_p2.read().is_01() || !tmp480_fu_144154_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp478_fu_144149_p2.read()) + sc_biguint<16>(tmp480_fu_144154_p2.read()));
}

void a0_conv2d_1::thread_tmp482_fu_144179_p2() {
    tmp482_fu_144179_p2 = (!tmp477_fu_144134_p2.read().is_01() || !tmp481_fu_144163_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp477_fu_144134_p2.read()) + sc_biguint<16>(tmp481_fu_144163_p2.read()));
}

void a0_conv2d_1::thread_tmp483_fu_144197_p2() {
    tmp483_fu_144197_p2 = (!tmp474_fu_144094_p2.read().is_01() || !tmp482_fu_144179_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp474_fu_144094_p2.read()) + sc_biguint<16>(tmp482_fu_144179_p2.read()));
}

void a0_conv2d_1::thread_tmp484_fu_144221_p2() {
    tmp484_fu_144221_p2 = (!result3_V_17_fu_126439_p4.read().is_01() || !result9_V_16_fu_126309_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_17_fu_126439_p4.read()) + sc_biguint<16>(result9_V_16_fu_126309_p4.read()));
}

void a0_conv2d_1::thread_tmp485_fu_144227_p2() {
    tmp485_fu_144227_p2 = (!result5_V_17_reg_215321.read().is_01() || !result2_V_17_reg_215306.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_17_reg_215321.read()) + sc_biguint<16>(result2_V_17_reg_215306.read()));
}

void a0_conv2d_1::thread_tmp486_fu_144237_p2() {
    tmp486_fu_144237_p2 = (!tmp484_fu_144221_p2.read().is_01() || !tmp485_fu_144227_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp484_fu_144221_p2.read()) + sc_biguint<16>(tmp485_fu_144227_p2.read()));
}

void a0_conv2d_1::thread_tmp487_fu_144252_p2() {
    tmp487_fu_144252_p2 = (!result6_V_17_fu_126452_p4.read().is_01() || !result4_V_17_reg_215316.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_17_fu_126452_p4.read()) + sc_biguint<16>(result4_V_17_reg_215316.read()));
}

void a0_conv2d_1::thread_tmp488_fu_107535_p2() {
    tmp488_fu_107535_p2 = (!result1_V_18_fu_92854_p4.read().is_01() || !result7_V_17_fu_92571_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_18_fu_92854_p4.read()) + sc_biguint<16>(result7_V_17_fu_92571_p4.read()));
}

void a0_conv2d_1::thread_tmp489_fu_107556_p2() {
    tmp489_fu_107556_p2 = (!result8_V_17_fu_92584_p4.read().is_01() || !tmp488_fu_107535_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_17_fu_92584_p4.read()) + sc_biguint<16>(tmp488_fu_107535_p2.read()));
}

void a0_conv2d_1::thread_tmp48_fu_138141_p2() {
    tmp48_fu_138141_p2 = (!result4_V_61_fu_137371_p4.read().is_01() || !result5_V_61_fu_137383_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_61_fu_137371_p4.read()) + sc_biguint<16>(result5_V_61_fu_137383_p4.read()));
}

void a0_conv2d_1::thread_tmp490_fu_144262_p2() {
    tmp490_fu_144262_p2 = (!tmp487_fu_144252_p2.read().is_01() || !tmp489_reg_222826.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp487_fu_144252_p2.read()) + sc_biguint<16>(tmp489_reg_222826.read()));
}

void a0_conv2d_1::thread_tmp491_fu_144277_p2() {
    tmp491_fu_144277_p2 = (!tmp486_fu_144237_p2.read().is_01() || !tmp490_fu_144262_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp486_fu_144237_p2.read()) + sc_biguint<16>(tmp490_fu_144262_p2.read()));
}

void a0_conv2d_1::thread_tmp492_fu_144301_p2() {
    tmp492_fu_144301_p2 = (!result3_V_18_fu_126595_p4.read().is_01() || !result9_V_17_fu_126465_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_18_fu_126595_p4.read()) + sc_biguint<16>(result9_V_17_fu_126465_p4.read()));
}

void a0_conv2d_1::thread_tmp493_fu_144307_p2() {
    tmp493_fu_144307_p2 = (!result5_V_18_reg_215441.read().is_01() || !result2_V_18_reg_215426.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_18_reg_215441.read()) + sc_biguint<16>(result2_V_18_reg_215426.read()));
}

void a0_conv2d_1::thread_tmp494_fu_144317_p2() {
    tmp494_fu_144317_p2 = (!tmp492_fu_144301_p2.read().is_01() || !tmp493_fu_144307_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp492_fu_144301_p2.read()) + sc_biguint<16>(tmp493_fu_144307_p2.read()));
}

void a0_conv2d_1::thread_tmp495_fu_144332_p2() {
    tmp495_fu_144332_p2 = (!result6_V_18_fu_126608_p4.read().is_01() || !result4_V_18_reg_215436.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_18_fu_126608_p4.read()) + sc_biguint<16>(result4_V_18_reg_215436.read()));
}

void a0_conv2d_1::thread_tmp496_fu_107619_p2() {
    tmp496_fu_107619_p2 = (!result1_V_19_fu_93235_p4.read().is_01() || !result7_V_18_fu_92952_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_19_fu_93235_p4.read()) + sc_biguint<16>(result7_V_18_fu_92952_p4.read()));
}

void a0_conv2d_1::thread_tmp497_fu_107640_p2() {
    tmp497_fu_107640_p2 = (!result8_V_18_fu_92965_p4.read().is_01() || !tmp496_fu_107619_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_18_fu_92965_p4.read()) + sc_biguint<16>(tmp496_fu_107619_p2.read()));
}

void a0_conv2d_1::thread_tmp498_fu_144342_p2() {
    tmp498_fu_144342_p2 = (!tmp495_fu_144332_p2.read().is_01() || !tmp497_reg_222846.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp495_fu_144332_p2.read()) + sc_biguint<16>(tmp497_reg_222846.read()));
}

void a0_conv2d_1::thread_tmp499_fu_144357_p2() {
    tmp499_fu_144357_p2 = (!tmp494_fu_144317_p2.read().is_01() || !tmp498_fu_144342_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp494_fu_144317_p2.read()) + sc_biguint<16>(tmp498_fu_144342_p2.read()));
}

void a0_conv2d_1::thread_tmp49_fu_138165_p2() {
    tmp49_fu_138165_p2 = (!result7_V_61_fu_137408_p4.read().is_01() || !result8_V_61_fu_137420_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_61_fu_137408_p4.read()) + sc_biguint<16>(result8_V_61_fu_137420_p4.read()));
}

void a0_conv2d_1::thread_tmp500_fu_169826_p2() {
    tmp500_fu_169826_p2 = (!tmp491_reg_227246.read().is_01() || !tmp499_reg_227251.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp491_reg_227246.read()) + sc_biguint<16>(tmp499_reg_227251.read()));
}

void a0_conv2d_1::thread_tmp501_fu_169830_p2() {
    tmp501_fu_169830_p2 = (!tmp483_reg_227241.read().is_01() || !tmp500_fu_169826_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp483_reg_227241.read()) + sc_biguint<16>(tmp500_fu_169826_p2.read()));
}

void a0_conv2d_1::thread_tmp502_fu_144405_p2() {
    tmp502_fu_144405_p2 = (!result3_V_19_fu_126751_p4.read().is_01() || !result9_V_18_fu_126621_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_19_fu_126751_p4.read()) + sc_biguint<16>(result9_V_18_fu_126621_p4.read()));
}

void a0_conv2d_1::thread_tmp503_fu_144411_p2() {
    tmp503_fu_144411_p2 = (!result5_V_19_reg_215561.read().is_01() || !result2_V_19_reg_215546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_19_reg_215561.read()) + sc_biguint<16>(result2_V_19_reg_215546.read()));
}

void a0_conv2d_1::thread_tmp504_fu_144421_p2() {
    tmp504_fu_144421_p2 = (!tmp502_fu_144405_p2.read().is_01() || !tmp503_fu_144411_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp502_fu_144405_p2.read()) + sc_biguint<16>(tmp503_fu_144411_p2.read()));
}

void a0_conv2d_1::thread_tmp505_fu_144436_p2() {
    tmp505_fu_144436_p2 = (!result6_V_19_fu_126764_p4.read().is_01() || !result4_V_19_reg_215556.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_19_fu_126764_p4.read()) + sc_biguint<16>(result4_V_19_reg_215556.read()));
}

void a0_conv2d_1::thread_tmp506_fu_107703_p2() {
    tmp506_fu_107703_p2 = (!result1_V_20_fu_93616_p4.read().is_01() || !result7_V_19_fu_93333_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_20_fu_93616_p4.read()) + sc_biguint<16>(result7_V_19_fu_93333_p4.read()));
}

void a0_conv2d_1::thread_tmp507_fu_107724_p2() {
    tmp507_fu_107724_p2 = (!result8_V_19_fu_93346_p4.read().is_01() || !tmp506_fu_107703_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_19_fu_93346_p4.read()) + sc_biguint<16>(tmp506_fu_107703_p2.read()));
}

void a0_conv2d_1::thread_tmp508_fu_144446_p2() {
    tmp508_fu_144446_p2 = (!tmp505_fu_144436_p2.read().is_01() || !tmp507_reg_222866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp505_fu_144436_p2.read()) + sc_biguint<16>(tmp507_reg_222866.read()));
}

void a0_conv2d_1::thread_tmp509_fu_144461_p2() {
    tmp509_fu_144461_p2 = (!tmp504_fu_144421_p2.read().is_01() || !tmp508_fu_144446_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp504_fu_144421_p2.read()) + sc_biguint<16>(tmp508_fu_144446_p2.read()));
}

void a0_conv2d_1::thread_tmp50_fu_138186_p2() {
    tmp50_fu_138186_p2 = (!result6_V_61_fu_137396_p4.read().is_01() || !tmp49_fu_138165_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_61_fu_137396_p4.read()) + sc_biguint<16>(tmp49_fu_138165_p2.read()));
}

void a0_conv2d_1::thread_tmp510_fu_144485_p2() {
    tmp510_fu_144485_p2 = (!result3_V_20_fu_126907_p4.read().is_01() || !result9_V_19_fu_126777_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_20_fu_126907_p4.read()) + sc_biguint<16>(result9_V_19_fu_126777_p4.read()));
}

void a0_conv2d_1::thread_tmp511_fu_144491_p2() {
    tmp511_fu_144491_p2 = (!result5_V_20_reg_215681.read().is_01() || !result2_V_20_reg_215666.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_20_reg_215681.read()) + sc_biguint<16>(result2_V_20_reg_215666.read()));
}

void a0_conv2d_1::thread_tmp512_fu_144501_p2() {
    tmp512_fu_144501_p2 = (!tmp510_fu_144485_p2.read().is_01() || !tmp511_fu_144491_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp510_fu_144485_p2.read()) + sc_biguint<16>(tmp511_fu_144491_p2.read()));
}

void a0_conv2d_1::thread_tmp513_fu_144516_p2() {
    tmp513_fu_144516_p2 = (!result6_V_20_fu_126920_p4.read().is_01() || !result4_V_20_reg_215676.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_20_fu_126920_p4.read()) + sc_biguint<16>(result4_V_20_reg_215676.read()));
}

void a0_conv2d_1::thread_tmp514_fu_107787_p2() {
    tmp514_fu_107787_p2 = (!result1_V_21_fu_93997_p4.read().is_01() || !result7_V_20_fu_93714_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_21_fu_93997_p4.read()) + sc_biguint<16>(result7_V_20_fu_93714_p4.read()));
}

void a0_conv2d_1::thread_tmp515_fu_144521_p2() {
    tmp515_fu_144521_p2 = (!result8_V_20_reg_215691.read().is_01() || !tmp514_reg_222886.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_20_reg_215691.read()) + sc_biguint<16>(tmp514_reg_222886.read()));
}

void a0_conv2d_1::thread_tmp516_fu_144530_p2() {
    tmp516_fu_144530_p2 = (!tmp513_fu_144516_p2.read().is_01() || !tmp515_fu_144521_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp513_fu_144516_p2.read()) + sc_biguint<16>(tmp515_fu_144521_p2.read()));
}

void a0_conv2d_1::thread_tmp517_fu_144546_p2() {
    tmp517_fu_144546_p2 = (!tmp512_fu_144501_p2.read().is_01() || !tmp516_fu_144530_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp512_fu_144501_p2.read()) + sc_biguint<16>(tmp516_fu_144530_p2.read()));
}

void a0_conv2d_1::thread_tmp518_fu_144564_p2() {
    tmp518_fu_144564_p2 = (!tmp509_fu_144461_p2.read().is_01() || !tmp517_fu_144546_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp509_fu_144461_p2.read()) + sc_biguint<16>(tmp517_fu_144546_p2.read()));
}

void a0_conv2d_1::thread_tmp519_fu_144588_p2() {
    tmp519_fu_144588_p2 = (!result3_V_21_fu_127063_p4.read().is_01() || !result9_V_20_fu_126933_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_21_fu_127063_p4.read()) + sc_biguint<16>(result9_V_20_fu_126933_p4.read()));
}

void a0_conv2d_1::thread_tmp51_fu_138204_p2() {
    tmp51_fu_138204_p2 = (!tmp48_fu_138141_p2.read().is_01() || !tmp50_fu_138186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp48_fu_138141_p2.read()) + sc_biguint<16>(tmp50_fu_138186_p2.read()));
}

void a0_conv2d_1::thread_tmp520_fu_144594_p2() {
    tmp520_fu_144594_p2 = (!result5_V_21_reg_215821.read().is_01() || !result2_V_21_reg_215806.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_21_reg_215821.read()) + sc_biguint<16>(result2_V_21_reg_215806.read()));
}

void a0_conv2d_1::thread_tmp521_fu_144604_p2() {
    tmp521_fu_144604_p2 = (!tmp519_fu_144588_p2.read().is_01() || !tmp520_fu_144594_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp519_fu_144588_p2.read()) + sc_biguint<16>(tmp520_fu_144594_p2.read()));
}

void a0_conv2d_1::thread_tmp522_fu_144619_p2() {
    tmp522_fu_144619_p2 = (!result6_V_21_fu_127076_p4.read().is_01() || !result4_V_21_reg_215816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_21_fu_127076_p4.read()) + sc_biguint<16>(result4_V_21_reg_215816.read()));
}

void a0_conv2d_1::thread_tmp523_fu_107865_p2() {
    tmp523_fu_107865_p2 = (!result1_V_22_fu_94378_p4.read().is_01() || !result7_V_21_fu_94095_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_22_fu_94378_p4.read()) + sc_biguint<16>(result7_V_21_fu_94095_p4.read()));
}

void a0_conv2d_1::thread_tmp524_fu_107886_p2() {
    tmp524_fu_107886_p2 = (!result8_V_21_fu_94108_p4.read().is_01() || !tmp523_fu_107865_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_21_fu_94108_p4.read()) + sc_biguint<16>(tmp523_fu_107865_p2.read()));
}

void a0_conv2d_1::thread_tmp525_fu_144629_p2() {
    tmp525_fu_144629_p2 = (!tmp522_fu_144619_p2.read().is_01() || !tmp524_reg_222906.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp522_fu_144619_p2.read()) + sc_biguint<16>(tmp524_reg_222906.read()));
}

void a0_conv2d_1::thread_tmp526_fu_144644_p2() {
    tmp526_fu_144644_p2 = (!tmp521_fu_144604_p2.read().is_01() || !tmp525_fu_144629_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp521_fu_144604_p2.read()) + sc_biguint<16>(tmp525_fu_144629_p2.read()));
}

void a0_conv2d_1::thread_tmp527_fu_144668_p2() {
    tmp527_fu_144668_p2 = (!result3_V_22_fu_127219_p4.read().is_01() || !result9_V_21_fu_127089_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_22_fu_127219_p4.read()) + sc_biguint<16>(result9_V_21_fu_127089_p4.read()));
}

void a0_conv2d_1::thread_tmp528_fu_144674_p2() {
    tmp528_fu_144674_p2 = (!result5_V_22_reg_215941.read().is_01() || !result2_V_22_reg_215926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_22_reg_215941.read()) + sc_biguint<16>(result2_V_22_reg_215926.read()));
}

void a0_conv2d_1::thread_tmp529_fu_144684_p2() {
    tmp529_fu_144684_p2 = (!tmp527_fu_144668_p2.read().is_01() || !tmp528_fu_144674_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp527_fu_144668_p2.read()) + sc_biguint<16>(tmp528_fu_144674_p2.read()));
}

void a0_conv2d_1::thread_tmp52_fu_138222_p2() {
    tmp52_fu_138222_p2 = (!tmp47_fu_138117_p2.read().is_01() || !tmp51_fu_138204_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp47_fu_138117_p2.read()) + sc_biguint<16>(tmp51_fu_138204_p2.read()));
}

void a0_conv2d_1::thread_tmp530_fu_144699_p2() {
    tmp530_fu_144699_p2 = (!result6_V_22_fu_127232_p4.read().is_01() || !result4_V_22_reg_215936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_22_fu_127232_p4.read()) + sc_biguint<16>(result4_V_22_reg_215936.read()));
}

void a0_conv2d_1::thread_tmp531_fu_107949_p2() {
    tmp531_fu_107949_p2 = (!result1_V_23_fu_94759_p4.read().is_01() || !result7_V_22_fu_94476_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_23_fu_94759_p4.read()) + sc_biguint<16>(result7_V_22_fu_94476_p4.read()));
}

void a0_conv2d_1::thread_tmp532_fu_144704_p2() {
    tmp532_fu_144704_p2 = (!result8_V_22_reg_215951.read().is_01() || !tmp531_reg_222926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_22_reg_215951.read()) + sc_biguint<16>(tmp531_reg_222926.read()));
}

void a0_conv2d_1::thread_tmp533_fu_144713_p2() {
    tmp533_fu_144713_p2 = (!tmp530_fu_144699_p2.read().is_01() || !tmp532_fu_144704_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp530_fu_144699_p2.read()) + sc_biguint<16>(tmp532_fu_144704_p2.read()));
}

void a0_conv2d_1::thread_tmp534_fu_144729_p2() {
    tmp534_fu_144729_p2 = (!tmp529_fu_144684_p2.read().is_01() || !tmp533_fu_144713_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp529_fu_144684_p2.read()) + sc_biguint<16>(tmp533_fu_144713_p2.read()));
}

void a0_conv2d_1::thread_tmp535_fu_144747_p2() {
    tmp535_fu_144747_p2 = (!tmp526_fu_144644_p2.read().is_01() || !tmp534_fu_144729_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp526_fu_144644_p2.read()) + sc_biguint<16>(tmp534_fu_144729_p2.read()));
}

void a0_conv2d_1::thread_tmp536_fu_169835_p2() {
    tmp536_fu_169835_p2 = (!tmp518_reg_227256.read().is_01() || !tmp535_reg_227261.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp518_reg_227256.read()) + sc_biguint<16>(tmp535_reg_227261.read()));
}

void a0_conv2d_1::thread_tmp537_fu_169839_p2() {
    tmp537_fu_169839_p2 = (!tmp501_fu_169830_p2.read().is_01() || !tmp536_fu_169835_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp501_fu_169830_p2.read()) + sc_biguint<16>(tmp536_fu_169835_p2.read()));
}

void a0_conv2d_1::thread_tmp538_fu_144795_p2() {
    tmp538_fu_144795_p2 = (!result3_V_23_fu_127375_p4.read().is_01() || !result9_V_22_fu_127245_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_23_fu_127375_p4.read()) + sc_biguint<16>(result9_V_22_fu_127245_p4.read()));
}

void a0_conv2d_1::thread_tmp539_fu_144801_p2() {
    tmp539_fu_144801_p2 = (!result5_V_23_reg_216081.read().is_01() || !result2_V_23_reg_216066.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_23_reg_216081.read()) + sc_biguint<16>(result2_V_23_reg_216066.read()));
}

void a0_conv2d_1::thread_tmp53_fu_138240_p2() {
    tmp53_fu_138240_p2 = (!tmp44_fu_138051_p2.read().is_01() || !tmp52_fu_138222_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp44_fu_138051_p2.read()) + sc_biguint<16>(tmp52_fu_138222_p2.read()));
}

void a0_conv2d_1::thread_tmp540_fu_144811_p2() {
    tmp540_fu_144811_p2 = (!tmp538_fu_144795_p2.read().is_01() || !tmp539_fu_144801_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp538_fu_144795_p2.read()) + sc_biguint<16>(tmp539_fu_144801_p2.read()));
}

void a0_conv2d_1::thread_tmp541_fu_144826_p2() {
    tmp541_fu_144826_p2 = (!result6_V_23_fu_127388_p4.read().is_01() || !result4_V_23_reg_216076.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_23_fu_127388_p4.read()) + sc_biguint<16>(result4_V_23_reg_216076.read()));
}

void a0_conv2d_1::thread_tmp542_fu_108027_p2() {
    tmp542_fu_108027_p2 = (!result1_V_24_fu_95140_p4.read().is_01() || !result7_V_23_fu_94857_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_24_fu_95140_p4.read()) + sc_biguint<16>(result7_V_23_fu_94857_p4.read()));
}

void a0_conv2d_1::thread_tmp543_fu_108048_p2() {
    tmp543_fu_108048_p2 = (!result8_V_23_fu_94870_p4.read().is_01() || !tmp542_fu_108027_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_23_fu_94870_p4.read()) + sc_biguint<16>(tmp542_fu_108027_p2.read()));
}

void a0_conv2d_1::thread_tmp544_fu_144836_p2() {
    tmp544_fu_144836_p2 = (!tmp541_fu_144826_p2.read().is_01() || !tmp543_reg_222946.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp541_fu_144826_p2.read()) + sc_biguint<16>(tmp543_reg_222946.read()));
}

void a0_conv2d_1::thread_tmp545_fu_144851_p2() {
    tmp545_fu_144851_p2 = (!tmp540_fu_144811_p2.read().is_01() || !tmp544_fu_144836_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp540_fu_144811_p2.read()) + sc_biguint<16>(tmp544_fu_144836_p2.read()));
}

void a0_conv2d_1::thread_tmp546_fu_144875_p2() {
    tmp546_fu_144875_p2 = (!result3_V_24_fu_127531_p4.read().is_01() || !result9_V_23_fu_127401_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_24_fu_127531_p4.read()) + sc_biguint<16>(result9_V_23_fu_127401_p4.read()));
}

void a0_conv2d_1::thread_tmp547_fu_144881_p2() {
    tmp547_fu_144881_p2 = (!result5_V_24_reg_216201.read().is_01() || !result2_V_24_reg_216186.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_24_reg_216201.read()) + sc_biguint<16>(result2_V_24_reg_216186.read()));
}

void a0_conv2d_1::thread_tmp548_fu_144891_p2() {
    tmp548_fu_144891_p2 = (!tmp546_fu_144875_p2.read().is_01() || !tmp547_fu_144881_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp546_fu_144875_p2.read()) + sc_biguint<16>(tmp547_fu_144881_p2.read()));
}

void a0_conv2d_1::thread_tmp549_fu_144906_p2() {
    tmp549_fu_144906_p2 = (!result6_V_24_fu_127544_p4.read().is_01() || !result4_V_24_reg_216196.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_24_fu_127544_p4.read()) + sc_biguint<16>(result4_V_24_reg_216196.read()));
}

void a0_conv2d_1::thread_tmp54_fu_138264_p2() {
    tmp54_fu_138264_p2 = (!result9_V_58_fu_136101_p4.read().is_01() || !result1_V_59_fu_136446_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_58_fu_136101_p4.read()) + sc_biguint<16>(result1_V_59_fu_136446_p4.read()));
}

void a0_conv2d_1::thread_tmp550_fu_108111_p2() {
    tmp550_fu_108111_p2 = (!result1_V_25_fu_95521_p4.read().is_01() || !result7_V_24_fu_95238_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_25_fu_95521_p4.read()) + sc_biguint<16>(result7_V_24_fu_95238_p4.read()));
}

void a0_conv2d_1::thread_tmp551_fu_144911_p2() {
    tmp551_fu_144911_p2 = (!result8_V_24_reg_216211.read().is_01() || !tmp550_reg_222966.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_24_reg_216211.read()) + sc_biguint<16>(tmp550_reg_222966.read()));
}

void a0_conv2d_1::thread_tmp552_fu_144920_p2() {
    tmp552_fu_144920_p2 = (!tmp549_fu_144906_p2.read().is_01() || !tmp551_fu_144911_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp549_fu_144906_p2.read()) + sc_biguint<16>(tmp551_fu_144911_p2.read()));
}

void a0_conv2d_1::thread_tmp553_fu_144936_p2() {
    tmp553_fu_144936_p2 = (!tmp548_fu_144891_p2.read().is_01() || !tmp552_fu_144920_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp548_fu_144891_p2.read()) + sc_biguint<16>(tmp552_fu_144920_p2.read()));
}

void a0_conv2d_1::thread_tmp554_fu_144954_p2() {
    tmp554_fu_144954_p2 = (!tmp545_fu_144851_p2.read().is_01() || !tmp553_fu_144936_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp545_fu_144851_p2.read()) + sc_biguint<16>(tmp553_fu_144936_p2.read()));
}

void a0_conv2d_1::thread_tmp555_fu_144978_p2() {
    tmp555_fu_144978_p2 = (!result3_V_25_fu_127687_p4.read().is_01() || !result9_V_24_fu_127557_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_25_fu_127687_p4.read()) + sc_biguint<16>(result9_V_24_fu_127557_p4.read()));
}

void a0_conv2d_1::thread_tmp556_fu_144984_p2() {
    tmp556_fu_144984_p2 = (!result5_V_25_reg_216341.read().is_01() || !result2_V_25_reg_216326.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_25_reg_216341.read()) + sc_biguint<16>(result2_V_25_reg_216326.read()));
}

void a0_conv2d_1::thread_tmp557_fu_144994_p2() {
    tmp557_fu_144994_p2 = (!tmp555_fu_144978_p2.read().is_01() || !tmp556_fu_144984_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp555_fu_144978_p2.read()) + sc_biguint<16>(tmp556_fu_144984_p2.read()));
}

void a0_conv2d_1::thread_tmp558_fu_145009_p2() {
    tmp558_fu_145009_p2 = (!result6_V_25_fu_127700_p4.read().is_01() || !result4_V_25_reg_216336.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_25_fu_127700_p4.read()) + sc_biguint<16>(result4_V_25_reg_216336.read()));
}

void a0_conv2d_1::thread_tmp559_fu_108189_p2() {
    tmp559_fu_108189_p2 = (!result1_V_26_fu_95902_p4.read().is_01() || !result7_V_25_fu_95619_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_26_fu_95902_p4.read()) + sc_biguint<16>(result7_V_25_fu_95619_p4.read()));
}

void a0_conv2d_1::thread_tmp55_fu_138288_p2() {
    tmp55_fu_138288_p2 = (!result2_V_59_fu_136458_p4.read().is_01() || !result3_V_59_fu_136471_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_59_fu_136458_p4.read()) + sc_biguint<16>(result3_V_59_fu_136471_p4.read()));
}

void a0_conv2d_1::thread_tmp560_fu_108210_p2() {
    tmp560_fu_108210_p2 = (!result8_V_25_fu_95632_p4.read().is_01() || !tmp559_fu_108189_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_25_fu_95632_p4.read()) + sc_biguint<16>(tmp559_fu_108189_p2.read()));
}

void a0_conv2d_1::thread_tmp561_fu_145019_p2() {
    tmp561_fu_145019_p2 = (!tmp558_fu_145009_p2.read().is_01() || !tmp560_reg_222986.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp558_fu_145009_p2.read()) + sc_biguint<16>(tmp560_reg_222986.read()));
}

void a0_conv2d_1::thread_tmp562_fu_145034_p2() {
    tmp562_fu_145034_p2 = (!tmp557_fu_144994_p2.read().is_01() || !tmp561_fu_145019_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp557_fu_144994_p2.read()) + sc_biguint<16>(tmp561_fu_145019_p2.read()));
}

void a0_conv2d_1::thread_tmp563_fu_145058_p2() {
    tmp563_fu_145058_p2 = (!result3_V_26_fu_127843_p4.read().is_01() || !result9_V_25_fu_127713_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_26_fu_127843_p4.read()) + sc_biguint<16>(result9_V_25_fu_127713_p4.read()));
}

void a0_conv2d_1::thread_tmp564_fu_145064_p2() {
    tmp564_fu_145064_p2 = (!result5_V_26_reg_216461.read().is_01() || !result2_V_26_reg_216446.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_26_reg_216461.read()) + sc_biguint<16>(result2_V_26_reg_216446.read()));
}

void a0_conv2d_1::thread_tmp565_fu_145074_p2() {
    tmp565_fu_145074_p2 = (!tmp563_fu_145058_p2.read().is_01() || !tmp564_fu_145064_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp563_fu_145058_p2.read()) + sc_biguint<16>(tmp564_fu_145064_p2.read()));
}

void a0_conv2d_1::thread_tmp566_fu_145089_p2() {
    tmp566_fu_145089_p2 = (!result6_V_26_fu_127856_p4.read().is_01() || !result4_V_26_reg_216456.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_26_fu_127856_p4.read()) + sc_biguint<16>(result4_V_26_reg_216456.read()));
}

void a0_conv2d_1::thread_tmp567_fu_108273_p2() {
    tmp567_fu_108273_p2 = (!result1_V_27_fu_96283_p4.read().is_01() || !result7_V_26_fu_96000_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_27_fu_96283_p4.read()) + sc_biguint<16>(result7_V_26_fu_96000_p4.read()));
}

void a0_conv2d_1::thread_tmp568_fu_108294_p2() {
    tmp568_fu_108294_p2 = (!result8_V_26_fu_96013_p4.read().is_01() || !tmp567_fu_108273_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_26_fu_96013_p4.read()) + sc_biguint<16>(tmp567_fu_108273_p2.read()));
}

void a0_conv2d_1::thread_tmp569_fu_145099_p2() {
    tmp569_fu_145099_p2 = (!tmp566_fu_145089_p2.read().is_01() || !tmp568_reg_223006.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp566_fu_145089_p2.read()) + sc_biguint<16>(tmp568_reg_223006.read()));
}

void a0_conv2d_1::thread_tmp56_fu_138306_p2() {
    tmp56_fu_138306_p2 = (!tmp54_fu_138264_p2.read().is_01() || !tmp55_fu_138288_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp54_fu_138264_p2.read()) + sc_biguint<16>(tmp55_fu_138288_p2.read()));
}

void a0_conv2d_1::thread_tmp570_fu_145114_p2() {
    tmp570_fu_145114_p2 = (!tmp565_fu_145074_p2.read().is_01() || !tmp569_fu_145099_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp565_fu_145074_p2.read()) + sc_biguint<16>(tmp569_fu_145099_p2.read()));
}

void a0_conv2d_1::thread_tmp571_fu_169845_p2() {
    tmp571_fu_169845_p2 = (!tmp562_reg_227281.read().is_01() || !tmp570_reg_227286.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp562_reg_227281.read()) + sc_biguint<16>(tmp570_reg_227286.read()));
}

void a0_conv2d_1::thread_tmp572_fu_169849_p2() {
    tmp572_fu_169849_p2 = (!tmp554_reg_227276.read().is_01() || !tmp571_fu_169845_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp554_reg_227276.read()) + sc_biguint<16>(tmp571_fu_169845_p2.read()));
}

void a0_conv2d_1::thread_tmp573_fu_145162_p2() {
    tmp573_fu_145162_p2 = (!result3_V_27_fu_127999_p4.read().is_01() || !result9_V_26_fu_127869_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_27_fu_127999_p4.read()) + sc_biguint<16>(result9_V_26_fu_127869_p4.read()));
}

void a0_conv2d_1::thread_tmp574_fu_145168_p2() {
    tmp574_fu_145168_p2 = (!result5_V_27_reg_216581.read().is_01() || !result2_V_27_reg_216566.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_27_reg_216581.read()) + sc_biguint<16>(result2_V_27_reg_216566.read()));
}

void a0_conv2d_1::thread_tmp575_fu_145178_p2() {
    tmp575_fu_145178_p2 = (!tmp573_fu_145162_p2.read().is_01() || !tmp574_fu_145168_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp573_fu_145162_p2.read()) + sc_biguint<16>(tmp574_fu_145168_p2.read()));
}

void a0_conv2d_1::thread_tmp576_fu_145193_p2() {
    tmp576_fu_145193_p2 = (!result6_V_27_fu_128012_p4.read().is_01() || !result4_V_27_reg_216576.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_27_fu_128012_p4.read()) + sc_biguint<16>(result4_V_27_reg_216576.read()));
}

void a0_conv2d_1::thread_tmp577_fu_108357_p2() {
    tmp577_fu_108357_p2 = (!result1_V_28_fu_96664_p4.read().is_01() || !result7_V_27_fu_96381_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_28_fu_96664_p4.read()) + sc_biguint<16>(result7_V_27_fu_96381_p4.read()));
}

void a0_conv2d_1::thread_tmp578_fu_108378_p2() {
    tmp578_fu_108378_p2 = (!result8_V_27_fu_96394_p4.read().is_01() || !tmp577_fu_108357_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_27_fu_96394_p4.read()) + sc_biguint<16>(tmp577_fu_108357_p2.read()));
}

void a0_conv2d_1::thread_tmp579_fu_145203_p2() {
    tmp579_fu_145203_p2 = (!tmp576_fu_145193_p2.read().is_01() || !tmp578_reg_223026.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp576_fu_145193_p2.read()) + sc_biguint<16>(tmp578_reg_223026.read()));
}

void a0_conv2d_1::thread_tmp57_fu_138330_p2() {
    tmp57_fu_138330_p2 = (!result4_V_59_fu_136483_p4.read().is_01() || !result5_V_59_fu_136495_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_59_fu_136483_p4.read()) + sc_biguint<16>(result5_V_59_fu_136495_p4.read()));
}

void a0_conv2d_1::thread_tmp580_fu_145218_p2() {
    tmp580_fu_145218_p2 = (!tmp575_fu_145178_p2.read().is_01() || !tmp579_fu_145203_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp575_fu_145178_p2.read()) + sc_biguint<16>(tmp579_fu_145203_p2.read()));
}

void a0_conv2d_1::thread_tmp581_fu_145242_p2() {
    tmp581_fu_145242_p2 = (!result3_V_28_fu_128155_p4.read().is_01() || !result9_V_27_fu_128025_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_28_fu_128155_p4.read()) + sc_biguint<16>(result9_V_27_fu_128025_p4.read()));
}

void a0_conv2d_1::thread_tmp582_fu_145248_p2() {
    tmp582_fu_145248_p2 = (!result5_V_28_reg_216701.read().is_01() || !result2_V_28_reg_216686.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_28_reg_216701.read()) + sc_biguint<16>(result2_V_28_reg_216686.read()));
}

void a0_conv2d_1::thread_tmp583_fu_145258_p2() {
    tmp583_fu_145258_p2 = (!tmp581_fu_145242_p2.read().is_01() || !tmp582_fu_145248_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp581_fu_145242_p2.read()) + sc_biguint<16>(tmp582_fu_145248_p2.read()));
}

void a0_conv2d_1::thread_tmp584_fu_145273_p2() {
    tmp584_fu_145273_p2 = (!result6_V_28_fu_128168_p4.read().is_01() || !result4_V_28_reg_216696.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_28_fu_128168_p4.read()) + sc_biguint<16>(result4_V_28_reg_216696.read()));
}

void a0_conv2d_1::thread_tmp585_fu_108441_p2() {
    tmp585_fu_108441_p2 = (!result1_V_29_fu_97045_p4.read().is_01() || !result7_V_28_fu_96762_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_29_fu_97045_p4.read()) + sc_biguint<16>(result7_V_28_fu_96762_p4.read()));
}

void a0_conv2d_1::thread_tmp586_fu_145278_p2() {
    tmp586_fu_145278_p2 = (!result8_V_28_reg_216711.read().is_01() || !tmp585_reg_223046.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_28_reg_216711.read()) + sc_biguint<16>(tmp585_reg_223046.read()));
}

void a0_conv2d_1::thread_tmp587_fu_145287_p2() {
    tmp587_fu_145287_p2 = (!tmp584_fu_145273_p2.read().is_01() || !tmp586_fu_145278_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp584_fu_145273_p2.read()) + sc_biguint<16>(tmp586_fu_145278_p2.read()));
}

void a0_conv2d_1::thread_tmp588_fu_145303_p2() {
    tmp588_fu_145303_p2 = (!tmp583_fu_145258_p2.read().is_01() || !tmp587_fu_145287_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp583_fu_145258_p2.read()) + sc_biguint<16>(tmp587_fu_145287_p2.read()));
}

void a0_conv2d_1::thread_tmp589_fu_145321_p2() {
    tmp589_fu_145321_p2 = (!tmp580_fu_145218_p2.read().is_01() || !tmp588_fu_145303_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp580_fu_145218_p2.read()) + sc_biguint<16>(tmp588_fu_145303_p2.read()));
}

void a0_conv2d_1::thread_tmp58_fu_138354_p2() {
    tmp58_fu_138354_p2 = (!result7_V_59_fu_136520_p4.read().is_01() || !result8_V_59_fu_136532_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_59_fu_136520_p4.read()) + sc_biguint<16>(result8_V_59_fu_136532_p4.read()));
}

void a0_conv2d_1::thread_tmp590_fu_145345_p2() {
    tmp590_fu_145345_p2 = (!result3_V_29_fu_128311_p4.read().is_01() || !result9_V_28_fu_128181_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_29_fu_128311_p4.read()) + sc_biguint<16>(result9_V_28_fu_128181_p4.read()));
}

void a0_conv2d_1::thread_tmp591_fu_145351_p2() {
    tmp591_fu_145351_p2 = (!result5_V_29_reg_216841.read().is_01() || !result2_V_29_reg_216826.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_29_reg_216841.read()) + sc_biguint<16>(result2_V_29_reg_216826.read()));
}

void a0_conv2d_1::thread_tmp592_fu_145361_p2() {
    tmp592_fu_145361_p2 = (!tmp590_fu_145345_p2.read().is_01() || !tmp591_fu_145351_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp590_fu_145345_p2.read()) + sc_biguint<16>(tmp591_fu_145351_p2.read()));
}

void a0_conv2d_1::thread_tmp593_fu_145376_p2() {
    tmp593_fu_145376_p2 = (!result6_V_29_fu_128324_p4.read().is_01() || !result4_V_29_reg_216836.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_29_fu_128324_p4.read()) + sc_biguint<16>(result4_V_29_reg_216836.read()));
}

void a0_conv2d_1::thread_tmp594_fu_108519_p2() {
    tmp594_fu_108519_p2 = (!result1_V_30_fu_97426_p4.read().is_01() || !result7_V_29_fu_97143_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result1_V_30_fu_97426_p4.read()) + sc_biguint<16>(result7_V_29_fu_97143_p4.read()));
}

void a0_conv2d_1::thread_tmp595_fu_108540_p2() {
    tmp595_fu_108540_p2 = (!result8_V_29_fu_97156_p4.read().is_01() || !tmp594_fu_108519_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_29_fu_97156_p4.read()) + sc_biguint<16>(tmp594_fu_108519_p2.read()));
}

void a0_conv2d_1::thread_tmp596_fu_145386_p2() {
    tmp596_fu_145386_p2 = (!tmp593_fu_145376_p2.read().is_01() || !tmp595_reg_223066.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp593_fu_145376_p2.read()) + sc_biguint<16>(tmp595_reg_223066.read()));
}

void a0_conv2d_1::thread_tmp597_fu_145401_p2() {
    tmp597_fu_145401_p2 = (!tmp592_fu_145361_p2.read().is_01() || !tmp596_fu_145386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp592_fu_145361_p2.read()) + sc_biguint<16>(tmp596_fu_145386_p2.read()));
}

void a0_conv2d_1::thread_tmp598_fu_145425_p2() {
    tmp598_fu_145425_p2 = (!result3_V_30_fu_128467_p4.read().is_01() || !result9_V_29_fu_128337_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result3_V_30_fu_128467_p4.read()) + sc_biguint<16>(result9_V_29_fu_128337_p4.read()));
}

void a0_conv2d_1::thread_tmp599_fu_145431_p2() {
    tmp599_fu_145431_p2 = (!result5_V_30_reg_216961.read().is_01() || !result2_V_30_reg_216946.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result5_V_30_reg_216961.read()) + sc_biguint<16>(result2_V_30_reg_216946.read()));
}

void a0_conv2d_1::thread_tmp59_fu_138375_p2() {
    tmp59_fu_138375_p2 = (!result6_V_59_fu_136508_p4.read().is_01() || !tmp58_fu_138354_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_59_fu_136508_p4.read()) + sc_biguint<16>(tmp58_fu_138354_p2.read()));
}

void a0_conv2d_1::thread_tmp600_fu_145441_p2() {
    tmp600_fu_145441_p2 = (!tmp598_fu_145425_p2.read().is_01() || !tmp599_fu_145431_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp598_fu_145425_p2.read()) + sc_biguint<16>(tmp599_fu_145431_p2.read()));
}

void a0_conv2d_1::thread_tmp601_fu_145456_p2() {
    tmp601_fu_145456_p2 = (!result6_V_30_fu_128480_p4.read().is_01() || !result4_V_30_reg_216956.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_30_fu_128480_p4.read()) + sc_biguint<16>(result4_V_30_reg_216956.read()));
}

void a0_conv2d_1::thread_tmp602_fu_145470_p2() {
    tmp602_fu_145470_p2 = (!result9_V_62_fu_137877_p4.read().is_01() || !result7_V_30_reg_216971.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_62_fu_137877_p4.read()) + sc_biguint<16>(result7_V_30_reg_216971.read()));
}

void a0_conv2d_1::thread_tmp603_fu_145480_p2() {
    tmp603_fu_145480_p2 = (!result8_V_30_reg_216976.read().is_01() || !tmp602_fu_145470_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result8_V_30_reg_216976.read()) + sc_biguint<16>(tmp602_fu_145470_p2.read()));
}

void a0_conv2d_1::thread_tmp604_fu_145495_p2() {
    tmp604_fu_145495_p2 = (!tmp601_fu_145456_p2.read().is_01() || !tmp603_fu_145480_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp601_fu_145456_p2.read()) + sc_biguint<16>(tmp603_fu_145480_p2.read()));
}

void a0_conv2d_1::thread_tmp605_fu_145512_p2() {
    tmp605_fu_145512_p2 = (!tmp600_fu_145441_p2.read().is_01() || !tmp604_fu_145495_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp600_fu_145441_p2.read()) + sc_biguint<16>(tmp604_fu_145495_p2.read()));
}

void a0_conv2d_1::thread_tmp606_fu_169854_p2() {
    tmp606_fu_169854_p2 = (!tmp597_reg_227316.read().is_01() || !tmp605_reg_227321.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp597_reg_227316.read()) + sc_biguint<16>(tmp605_reg_227321.read()));
}

void a0_conv2d_1::thread_tmp607_fu_169862_p2() {
    tmp607_fu_169862_p2 = (!tmp589_reg_227311.read().is_01() || !tmp606_fu_169854_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp589_reg_227311.read()) + sc_biguint<16>(tmp606_fu_169854_p2.read()));
}

void a0_conv2d_1::thread_tmp608_fu_169876_p2() {
    tmp608_fu_169876_p2 = (!tmp572_fu_169849_p2.read().is_01() || !tmp607_fu_169862_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp572_fu_169849_p2.read()) + sc_biguint<16>(tmp607_fu_169862_p2.read()));
}

void a0_conv2d_1::thread_tmp609_fu_169892_p2() {
    tmp609_fu_169892_p2 = (!tmp537_fu_169839_p2.read().is_01() || !tmp608_fu_169876_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp537_fu_169839_p2.read()) + sc_biguint<16>(tmp608_fu_169876_p2.read()));
}

void a0_conv2d_1::thread_tmp60_fu_138393_p2() {
    tmp60_fu_138393_p2 = (!tmp57_fu_138330_p2.read().is_01() || !tmp59_fu_138375_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp57_fu_138330_p2.read()) + sc_biguint<16>(tmp59_fu_138375_p2.read()));
}

void a0_conv2d_1::thread_tmp610_fu_169910_p2() {
    tmp610_fu_169910_p2 = (!tmp466_fu_169820_p2.read().is_01() || !tmp609_fu_169892_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp466_fu_169820_p2.read()) + sc_biguint<16>(tmp609_fu_169892_p2.read()));
}

void a0_conv2d_1::thread_tmp611_fu_145665_p2() {
    tmp611_fu_145665_p2 = (!r2esult8_V_62_fu_145625_p4.read().is_01() || !r2esult7_V_62_fu_145613_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_62_fu_145625_p4.read()) + sc_biguint<16>(r2esult7_V_62_fu_145613_p4.read()));
}

void a0_conv2d_1::thread_tmp612_fu_145689_p2() {
    tmp612_fu_145689_p2 = (!r2esult5_V_62_fu_145588_p4.read().is_01() || !r2esult6_V_62_fu_145601_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_62_fu_145588_p4.read()) + sc_biguint<16>(r2esult6_V_62_fu_145601_p4.read()));
}

void a0_conv2d_1::thread_tmp613_fu_145707_p2() {
    tmp613_fu_145707_p2 = (!tmp611_fu_145665_p2.read().is_01() || !tmp612_fu_145689_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp611_fu_145665_p2.read()) + sc_biguint<16>(tmp612_fu_145689_p2.read()));
}

void a0_conv2d_1::thread_tmp614_fu_145731_p2() {
    tmp614_fu_145731_p2 = (!r2esult1_V_62_fu_145539_p4.read().is_01() || !r2esult4_V_62_fu_145576_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_62_fu_145539_p4.read()) + sc_biguint<16>(r2esult4_V_62_fu_145576_p4.read()));
}

void a0_conv2d_1::thread_tmp615_fu_145755_p2() {
    tmp615_fu_145755_p2 = (!r2esult2_V_62_fu_145551_p4.read().is_01() || !r2esult3_V_62_fu_145564_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_62_fu_145551_p4.read()) + sc_biguint<16>(r2esult3_V_62_fu_145564_p4.read()));
}

void a0_conv2d_1::thread_tmp616_fu_145776_p2() {
    tmp616_fu_145776_p2 = (!r2esult9_V_61_fu_137544_p4.read().is_01() || !tmp615_fu_145755_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_61_fu_137544_p4.read()) + sc_biguint<16>(tmp615_fu_145755_p2.read()));
}

void a0_conv2d_1::thread_tmp617_fu_145794_p2() {
    tmp617_fu_145794_p2 = (!tmp614_fu_145731_p2.read().is_01() || !tmp616_fu_145776_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp614_fu_145731_p2.read()) + sc_biguint<16>(tmp616_fu_145776_p2.read()));
}

void a0_conv2d_1::thread_tmp618_fu_145812_p2() {
    tmp618_fu_145812_p2 = (!tmp613_fu_145707_p2.read().is_01() || !tmp617_fu_145794_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp613_fu_145707_p2.read()) + sc_biguint<16>(tmp617_fu_145794_p2.read()));
}

void a0_conv2d_1::thread_tmp619_fu_145836_p2() {
    tmp619_fu_145836_p2 = (!r2esult9_V_60_fu_137100_p4.read().is_01() || !r2esult1_V_61_fu_137445_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_60_fu_137100_p4.read()) + sc_biguint<16>(r2esult1_V_61_fu_137445_p4.read()));
}

void a0_conv2d_1::thread_tmp61_fu_138411_p2() {
    tmp61_fu_138411_p2 = (!tmp56_fu_138306_p2.read().is_01() || !tmp60_fu_138393_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp56_fu_138306_p2.read()) + sc_biguint<16>(tmp60_fu_138393_p2.read()));
}

void a0_conv2d_1::thread_tmp620_fu_145860_p2() {
    tmp620_fu_145860_p2 = (!r2esult2_V_61_fu_137457_p4.read().is_01() || !r2esult3_V_61_fu_137470_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_61_fu_137457_p4.read()) + sc_biguint<16>(r2esult3_V_61_fu_137470_p4.read()));
}

void a0_conv2d_1::thread_tmp621_fu_145878_p2() {
    tmp621_fu_145878_p2 = (!tmp619_fu_145836_p2.read().is_01() || !tmp620_fu_145860_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp619_fu_145836_p2.read()) + sc_biguint<16>(tmp620_fu_145860_p2.read()));
}

void a0_conv2d_1::thread_tmp622_fu_145902_p2() {
    tmp622_fu_145902_p2 = (!r2esult4_V_61_fu_137482_p4.read().is_01() || !r2esult5_V_61_fu_137494_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_61_fu_137482_p4.read()) + sc_biguint<16>(r2esult5_V_61_fu_137494_p4.read()));
}

void a0_conv2d_1::thread_tmp623_fu_145926_p2() {
    tmp623_fu_145926_p2 = (!r2esult7_V_61_fu_137519_p4.read().is_01() || !r2esult8_V_61_fu_137531_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_61_fu_137519_p4.read()) + sc_biguint<16>(r2esult8_V_61_fu_137531_p4.read()));
}

void a0_conv2d_1::thread_tmp624_fu_145947_p2() {
    tmp624_fu_145947_p2 = (!r2esult6_V_61_fu_137507_p4.read().is_01() || !tmp623_fu_145926_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_61_fu_137507_p4.read()) + sc_biguint<16>(tmp623_fu_145926_p2.read()));
}

void a0_conv2d_1::thread_tmp625_fu_145965_p2() {
    tmp625_fu_145965_p2 = (!tmp622_fu_145902_p2.read().is_01() || !tmp624_fu_145947_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp622_fu_145902_p2.read()) + sc_biguint<16>(tmp624_fu_145947_p2.read()));
}

void a0_conv2d_1::thread_tmp626_fu_145983_p2() {
    tmp626_fu_145983_p2 = (!tmp621_fu_145878_p2.read().is_01() || !tmp625_fu_145965_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp621_fu_145878_p2.read()) + sc_biguint<16>(tmp625_fu_145965_p2.read()));
}

void a0_conv2d_1::thread_tmp627_fu_146001_p2() {
    tmp627_fu_146001_p2 = (!tmp618_fu_145812_p2.read().is_01() || !tmp626_fu_145983_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp618_fu_145812_p2.read()) + sc_biguint<16>(tmp626_fu_145983_p2.read()));
}

void a0_conv2d_1::thread_tmp628_fu_146025_p2() {
    tmp628_fu_146025_p2 = (!r2esult9_V_58_fu_136212_p4.read().is_01() || !r2esult1_V_59_fu_136557_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_58_fu_136212_p4.read()) + sc_biguint<16>(r2esult1_V_59_fu_136557_p4.read()));
}

void a0_conv2d_1::thread_tmp629_fu_146049_p2() {
    tmp629_fu_146049_p2 = (!r2esult2_V_59_fu_136569_p4.read().is_01() || !r2esult3_V_59_fu_136582_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_59_fu_136569_p4.read()) + sc_biguint<16>(r2esult3_V_59_fu_136582_p4.read()));
}

void a0_conv2d_1::thread_tmp62_fu_138435_p2() {
    tmp62_fu_138435_p2 = (!result9_V_59_fu_136545_p4.read().is_01() || !result1_V_60_fu_136890_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_59_fu_136545_p4.read()) + sc_biguint<16>(result1_V_60_fu_136890_p4.read()));
}

void a0_conv2d_1::thread_tmp630_fu_146067_p2() {
    tmp630_fu_146067_p2 = (!tmp628_fu_146025_p2.read().is_01() || !tmp629_fu_146049_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp628_fu_146025_p2.read()) + sc_biguint<16>(tmp629_fu_146049_p2.read()));
}

void a0_conv2d_1::thread_tmp631_fu_146091_p2() {
    tmp631_fu_146091_p2 = (!r2esult4_V_59_fu_136594_p4.read().is_01() || !r2esult5_V_59_fu_136606_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_59_fu_136594_p4.read()) + sc_biguint<16>(r2esult5_V_59_fu_136606_p4.read()));
}

void a0_conv2d_1::thread_tmp632_fu_146115_p2() {
    tmp632_fu_146115_p2 = (!r2esult7_V_59_fu_136631_p4.read().is_01() || !r2esult8_V_59_fu_136643_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_59_fu_136631_p4.read()) + sc_biguint<16>(r2esult8_V_59_fu_136643_p4.read()));
}

void a0_conv2d_1::thread_tmp633_fu_146136_p2() {
    tmp633_fu_146136_p2 = (!r2esult6_V_59_fu_136619_p4.read().is_01() || !tmp632_fu_146115_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_59_fu_136619_p4.read()) + sc_biguint<16>(tmp632_fu_146115_p2.read()));
}

void a0_conv2d_1::thread_tmp634_fu_146154_p2() {
    tmp634_fu_146154_p2 = (!tmp631_fu_146091_p2.read().is_01() || !tmp633_fu_146136_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp631_fu_146091_p2.read()) + sc_biguint<16>(tmp633_fu_146136_p2.read()));
}

void a0_conv2d_1::thread_tmp635_fu_146172_p2() {
    tmp635_fu_146172_p2 = (!tmp630_fu_146067_p2.read().is_01() || !tmp634_fu_146154_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp630_fu_146067_p2.read()) + sc_biguint<16>(tmp634_fu_146154_p2.read()));
}

void a0_conv2d_1::thread_tmp636_fu_146196_p2() {
    tmp636_fu_146196_p2 = (!r2esult9_V_59_fu_136656_p4.read().is_01() || !r2esult1_V_60_fu_137001_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_59_fu_136656_p4.read()) + sc_biguint<16>(r2esult1_V_60_fu_137001_p4.read()));
}

void a0_conv2d_1::thread_tmp637_fu_146220_p2() {
    tmp637_fu_146220_p2 = (!r2esult2_V_60_fu_137013_p4.read().is_01() || !r2esult3_V_60_fu_137026_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_60_fu_137013_p4.read()) + sc_biguint<16>(r2esult3_V_60_fu_137026_p4.read()));
}

void a0_conv2d_1::thread_tmp638_fu_146238_p2() {
    tmp638_fu_146238_p2 = (!tmp636_fu_146196_p2.read().is_01() || !tmp637_fu_146220_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp636_fu_146196_p2.read()) + sc_biguint<16>(tmp637_fu_146220_p2.read()));
}

void a0_conv2d_1::thread_tmp639_fu_146262_p2() {
    tmp639_fu_146262_p2 = (!r2esult4_V_60_fu_137038_p4.read().is_01() || !r2esult5_V_60_fu_137050_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_60_fu_137038_p4.read()) + sc_biguint<16>(r2esult5_V_60_fu_137050_p4.read()));
}

void a0_conv2d_1::thread_tmp63_fu_138459_p2() {
    tmp63_fu_138459_p2 = (!result2_V_60_fu_136902_p4.read().is_01() || !result3_V_60_fu_136915_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_60_fu_136902_p4.read()) + sc_biguint<16>(result3_V_60_fu_136915_p4.read()));
}

void a0_conv2d_1::thread_tmp640_fu_146286_p2() {
    tmp640_fu_146286_p2 = (!r2esult7_V_60_fu_137075_p4.read().is_01() || !r2esult8_V_60_fu_137087_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_60_fu_137075_p4.read()) + sc_biguint<16>(r2esult8_V_60_fu_137087_p4.read()));
}

void a0_conv2d_1::thread_tmp641_fu_146307_p2() {
    tmp641_fu_146307_p2 = (!r2esult6_V_60_fu_137063_p4.read().is_01() || !tmp640_fu_146286_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_60_fu_137063_p4.read()) + sc_biguint<16>(tmp640_fu_146286_p2.read()));
}

void a0_conv2d_1::thread_tmp642_fu_146325_p2() {
    tmp642_fu_146325_p2 = (!tmp639_fu_146262_p2.read().is_01() || !tmp641_fu_146307_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp639_fu_146262_p2.read()) + sc_biguint<16>(tmp641_fu_146307_p2.read()));
}

void a0_conv2d_1::thread_tmp643_fu_146343_p2() {
    tmp643_fu_146343_p2 = (!tmp638_fu_146238_p2.read().is_01() || !tmp642_fu_146325_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp638_fu_146238_p2.read()) + sc_biguint<16>(tmp642_fu_146325_p2.read()));
}

void a0_conv2d_1::thread_tmp644_fu_146361_p2() {
    tmp644_fu_146361_p2 = (!tmp635_fu_146172_p2.read().is_01() || !tmp643_fu_146343_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp635_fu_146172_p2.read()) + sc_biguint<16>(tmp643_fu_146343_p2.read()));
}

void a0_conv2d_1::thread_tmp645_fu_146379_p2() {
    tmp645_fu_146379_p2 = (!tmp627_fu_146001_p2.read().is_01() || !tmp644_fu_146361_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp627_fu_146001_p2.read()) + sc_biguint<16>(tmp644_fu_146361_p2.read()));
}

void a0_conv2d_1::thread_tmp646_fu_146403_p2() {
    tmp646_fu_146403_p2 = (!r2esult9_V_54_fu_134436_p4.read().is_01() || !r2esult1_V_55_fu_134781_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_54_fu_134436_p4.read()) + sc_biguint<16>(r2esult1_V_55_fu_134781_p4.read()));
}

void a0_conv2d_1::thread_tmp647_fu_146427_p2() {
    tmp647_fu_146427_p2 = (!r2esult2_V_55_fu_134793_p4.read().is_01() || !r2esult3_V_55_fu_134806_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_55_fu_134793_p4.read()) + sc_biguint<16>(r2esult3_V_55_fu_134806_p4.read()));
}

void a0_conv2d_1::thread_tmp648_fu_146445_p2() {
    tmp648_fu_146445_p2 = (!tmp646_fu_146403_p2.read().is_01() || !tmp647_fu_146427_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp646_fu_146403_p2.read()) + sc_biguint<16>(tmp647_fu_146427_p2.read()));
}

void a0_conv2d_1::thread_tmp649_fu_146469_p2() {
    tmp649_fu_146469_p2 = (!r2esult4_V_55_fu_134818_p4.read().is_01() || !r2esult5_V_55_fu_134830_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_55_fu_134818_p4.read()) + sc_biguint<16>(r2esult5_V_55_fu_134830_p4.read()));
}

void a0_conv2d_1::thread_tmp64_fu_138477_p2() {
    tmp64_fu_138477_p2 = (!tmp62_fu_138435_p2.read().is_01() || !tmp63_fu_138459_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp62_fu_138435_p2.read()) + sc_biguint<16>(tmp63_fu_138459_p2.read()));
}

void a0_conv2d_1::thread_tmp650_fu_146493_p2() {
    tmp650_fu_146493_p2 = (!r2esult7_V_55_fu_134855_p4.read().is_01() || !r2esult8_V_55_fu_134867_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_55_fu_134855_p4.read()) + sc_biguint<16>(r2esult8_V_55_fu_134867_p4.read()));
}

void a0_conv2d_1::thread_tmp651_fu_146514_p2() {
    tmp651_fu_146514_p2 = (!r2esult6_V_55_fu_134843_p4.read().is_01() || !tmp650_fu_146493_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_55_fu_134843_p4.read()) + sc_biguint<16>(tmp650_fu_146493_p2.read()));
}

void a0_conv2d_1::thread_tmp652_fu_146532_p2() {
    tmp652_fu_146532_p2 = (!tmp649_fu_146469_p2.read().is_01() || !tmp651_fu_146514_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp649_fu_146469_p2.read()) + sc_biguint<16>(tmp651_fu_146514_p2.read()));
}

void a0_conv2d_1::thread_tmp653_fu_146550_p2() {
    tmp653_fu_146550_p2 = (!tmp648_fu_146445_p2.read().is_01() || !tmp652_fu_146532_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp648_fu_146445_p2.read()) + sc_biguint<16>(tmp652_fu_146532_p2.read()));
}

void a0_conv2d_1::thread_tmp654_fu_146574_p2() {
    tmp654_fu_146574_p2 = (!r2esult9_V_55_fu_134880_p4.read().is_01() || !r2esult1_V_56_fu_135225_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_55_fu_134880_p4.read()) + sc_biguint<16>(r2esult1_V_56_fu_135225_p4.read()));
}

void a0_conv2d_1::thread_tmp655_fu_146598_p2() {
    tmp655_fu_146598_p2 = (!r2esult2_V_56_fu_135237_p4.read().is_01() || !r2esult3_V_56_fu_135250_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_56_fu_135237_p4.read()) + sc_biguint<16>(r2esult3_V_56_fu_135250_p4.read()));
}

void a0_conv2d_1::thread_tmp656_fu_146616_p2() {
    tmp656_fu_146616_p2 = (!tmp654_fu_146574_p2.read().is_01() || !tmp655_fu_146598_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp654_fu_146574_p2.read()) + sc_biguint<16>(tmp655_fu_146598_p2.read()));
}

void a0_conv2d_1::thread_tmp657_fu_146640_p2() {
    tmp657_fu_146640_p2 = (!r2esult4_V_56_fu_135262_p4.read().is_01() || !r2esult5_V_56_fu_135274_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_56_fu_135262_p4.read()) + sc_biguint<16>(r2esult5_V_56_fu_135274_p4.read()));
}

void a0_conv2d_1::thread_tmp658_fu_146664_p2() {
    tmp658_fu_146664_p2 = (!r2esult7_V_56_fu_135299_p4.read().is_01() || !r2esult8_V_56_fu_135311_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_56_fu_135299_p4.read()) + sc_biguint<16>(r2esult8_V_56_fu_135311_p4.read()));
}

void a0_conv2d_1::thread_tmp659_fu_146685_p2() {
    tmp659_fu_146685_p2 = (!r2esult6_V_56_fu_135287_p4.read().is_01() || !tmp658_fu_146664_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_56_fu_135287_p4.read()) + sc_biguint<16>(tmp658_fu_146664_p2.read()));
}

void a0_conv2d_1::thread_tmp65_fu_138501_p2() {
    tmp65_fu_138501_p2 = (!result4_V_60_fu_136927_p4.read().is_01() || !result5_V_60_fu_136939_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_60_fu_136927_p4.read()) + sc_biguint<16>(result5_V_60_fu_136939_p4.read()));
}

void a0_conv2d_1::thread_tmp660_fu_146703_p2() {
    tmp660_fu_146703_p2 = (!tmp657_fu_146640_p2.read().is_01() || !tmp659_fu_146685_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp657_fu_146640_p2.read()) + sc_biguint<16>(tmp659_fu_146685_p2.read()));
}

void a0_conv2d_1::thread_tmp661_fu_146721_p2() {
    tmp661_fu_146721_p2 = (!tmp656_fu_146616_p2.read().is_01() || !tmp660_fu_146703_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp656_fu_146616_p2.read()) + sc_biguint<16>(tmp660_fu_146703_p2.read()));
}

void a0_conv2d_1::thread_tmp662_fu_146739_p2() {
    tmp662_fu_146739_p2 = (!tmp653_fu_146550_p2.read().is_01() || !tmp661_fu_146721_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp653_fu_146550_p2.read()) + sc_biguint<16>(tmp661_fu_146721_p2.read()));
}

void a0_conv2d_1::thread_tmp663_fu_146763_p2() {
    tmp663_fu_146763_p2 = (!r2esult9_V_56_fu_135324_p4.read().is_01() || !r2esult1_V_57_fu_135669_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_56_fu_135324_p4.read()) + sc_biguint<16>(r2esult1_V_57_fu_135669_p4.read()));
}

void a0_conv2d_1::thread_tmp664_fu_146787_p2() {
    tmp664_fu_146787_p2 = (!r2esult2_V_57_fu_135681_p4.read().is_01() || !r2esult3_V_57_fu_135694_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_57_fu_135681_p4.read()) + sc_biguint<16>(r2esult3_V_57_fu_135694_p4.read()));
}

void a0_conv2d_1::thread_tmp665_fu_146805_p2() {
    tmp665_fu_146805_p2 = (!tmp663_fu_146763_p2.read().is_01() || !tmp664_fu_146787_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp663_fu_146763_p2.read()) + sc_biguint<16>(tmp664_fu_146787_p2.read()));
}

void a0_conv2d_1::thread_tmp666_fu_146829_p2() {
    tmp666_fu_146829_p2 = (!r2esult4_V_57_fu_135706_p4.read().is_01() || !r2esult5_V_57_fu_135718_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_57_fu_135706_p4.read()) + sc_biguint<16>(r2esult5_V_57_fu_135718_p4.read()));
}

void a0_conv2d_1::thread_tmp667_fu_146853_p2() {
    tmp667_fu_146853_p2 = (!r2esult7_V_57_fu_135743_p4.read().is_01() || !r2esult8_V_57_fu_135755_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_57_fu_135743_p4.read()) + sc_biguint<16>(r2esult8_V_57_fu_135755_p4.read()));
}

void a0_conv2d_1::thread_tmp668_fu_146874_p2() {
    tmp668_fu_146874_p2 = (!r2esult6_V_57_fu_135731_p4.read().is_01() || !tmp667_fu_146853_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_57_fu_135731_p4.read()) + sc_biguint<16>(tmp667_fu_146853_p2.read()));
}

void a0_conv2d_1::thread_tmp669_fu_146892_p2() {
    tmp669_fu_146892_p2 = (!tmp666_fu_146829_p2.read().is_01() || !tmp668_fu_146874_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp666_fu_146829_p2.read()) + sc_biguint<16>(tmp668_fu_146874_p2.read()));
}

void a0_conv2d_1::thread_tmp66_fu_138525_p2() {
    tmp66_fu_138525_p2 = (!result7_V_60_fu_136964_p4.read().is_01() || !result8_V_60_fu_136976_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_60_fu_136964_p4.read()) + sc_biguint<16>(result8_V_60_fu_136976_p4.read()));
}

void a0_conv2d_1::thread_tmp670_fu_146910_p2() {
    tmp670_fu_146910_p2 = (!tmp665_fu_146805_p2.read().is_01() || !tmp669_fu_146892_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp665_fu_146805_p2.read()) + sc_biguint<16>(tmp669_fu_146892_p2.read()));
}

void a0_conv2d_1::thread_tmp671_fu_146934_p2() {
    tmp671_fu_146934_p2 = (!r2esult9_V_57_fu_135768_p4.read().is_01() || !r2esult1_V_58_fu_136113_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_57_fu_135768_p4.read()) + sc_biguint<16>(r2esult1_V_58_fu_136113_p4.read()));
}

void a0_conv2d_1::thread_tmp672_fu_146958_p2() {
    tmp672_fu_146958_p2 = (!r2esult2_V_58_fu_136125_p4.read().is_01() || !r2esult3_V_58_fu_136138_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_58_fu_136125_p4.read()) + sc_biguint<16>(r2esult3_V_58_fu_136138_p4.read()));
}

void a0_conv2d_1::thread_tmp673_fu_146976_p2() {
    tmp673_fu_146976_p2 = (!tmp671_fu_146934_p2.read().is_01() || !tmp672_fu_146958_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp671_fu_146934_p2.read()) + sc_biguint<16>(tmp672_fu_146958_p2.read()));
}

void a0_conv2d_1::thread_tmp674_fu_147000_p2() {
    tmp674_fu_147000_p2 = (!r2esult4_V_58_fu_136150_p4.read().is_01() || !r2esult5_V_58_fu_136162_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_58_fu_136150_p4.read()) + sc_biguint<16>(r2esult5_V_58_fu_136162_p4.read()));
}

void a0_conv2d_1::thread_tmp675_fu_147024_p2() {
    tmp675_fu_147024_p2 = (!r2esult7_V_58_fu_136187_p4.read().is_01() || !r2esult8_V_58_fu_136199_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_58_fu_136187_p4.read()) + sc_biguint<16>(r2esult8_V_58_fu_136199_p4.read()));
}

void a0_conv2d_1::thread_tmp676_fu_147045_p2() {
    tmp676_fu_147045_p2 = (!r2esult6_V_58_fu_136175_p4.read().is_01() || !tmp675_fu_147024_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_58_fu_136175_p4.read()) + sc_biguint<16>(tmp675_fu_147024_p2.read()));
}

void a0_conv2d_1::thread_tmp677_fu_147063_p2() {
    tmp677_fu_147063_p2 = (!tmp674_fu_147000_p2.read().is_01() || !tmp676_fu_147045_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp674_fu_147000_p2.read()) + sc_biguint<16>(tmp676_fu_147045_p2.read()));
}

void a0_conv2d_1::thread_tmp678_fu_147081_p2() {
    tmp678_fu_147081_p2 = (!tmp673_fu_146976_p2.read().is_01() || !tmp677_fu_147063_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp673_fu_146976_p2.read()) + sc_biguint<16>(tmp677_fu_147063_p2.read()));
}

void a0_conv2d_1::thread_tmp679_fu_147099_p2() {
    tmp679_fu_147099_p2 = (!tmp670_fu_146910_p2.read().is_01() || !tmp678_fu_147081_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp670_fu_146910_p2.read()) + sc_biguint<16>(tmp678_fu_147081_p2.read()));
}

void a0_conv2d_1::thread_tmp67_fu_138546_p2() {
    tmp67_fu_138546_p2 = (!result6_V_60_fu_136952_p4.read().is_01() || !tmp66_fu_138525_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_60_fu_136952_p4.read()) + sc_biguint<16>(tmp66_fu_138525_p2.read()));
}

void a0_conv2d_1::thread_tmp680_fu_169939_p2() {
    tmp680_fu_169939_p2 = (!tmp662_reg_227356.read().is_01() || !tmp679_reg_227361.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp662_reg_227356.read()) + sc_biguint<16>(tmp679_reg_227361.read()));
}

void a0_conv2d_1::thread_tmp681_fu_169952_p2() {
    tmp681_fu_169952_p2 = (!tmp645_reg_227341.read().is_01() || !tmp680_fu_169939_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp645_reg_227341.read()) + sc_biguint<16>(tmp680_fu_169939_p2.read()));
}

void a0_conv2d_1::thread_tmp682_fu_147129_p2() {
    tmp682_fu_147129_p2 = (!r2esult9_V_46_fu_131028_p4.read().is_01() || !r2esult1_V_47_fu_131229_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_46_fu_131028_p4.read()) + sc_biguint<16>(r2esult1_V_47_fu_131229_p4.read()));
}

void a0_conv2d_1::thread_tmp683_fu_147153_p2() {
    tmp683_fu_147153_p2 = (!r2esult2_V_47_fu_131241_p4.read().is_01() || !r2esult3_V_47_fu_131254_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_47_fu_131241_p4.read()) + sc_biguint<16>(r2esult3_V_47_fu_131254_p4.read()));
}

void a0_conv2d_1::thread_tmp684_fu_147171_p2() {
    tmp684_fu_147171_p2 = (!tmp682_fu_147129_p2.read().is_01() || !tmp683_fu_147153_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp682_fu_147129_p2.read()) + sc_biguint<16>(tmp683_fu_147153_p2.read()));
}

void a0_conv2d_1::thread_tmp685_fu_147195_p2() {
    tmp685_fu_147195_p2 = (!r2esult4_V_47_fu_131266_p4.read().is_01() || !r2esult5_V_47_fu_131278_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_47_fu_131266_p4.read()) + sc_biguint<16>(r2esult5_V_47_fu_131278_p4.read()));
}

void a0_conv2d_1::thread_tmp686_fu_147219_p2() {
    tmp686_fu_147219_p2 = (!r2esult7_V_47_fu_131303_p4.read().is_01() || !r2esult8_V_47_fu_131315_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_47_fu_131303_p4.read()) + sc_biguint<16>(r2esult8_V_47_fu_131315_p4.read()));
}

void a0_conv2d_1::thread_tmp687_fu_147240_p2() {
    tmp687_fu_147240_p2 = (!r2esult6_V_47_fu_131291_p4.read().is_01() || !tmp686_fu_147219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_47_fu_131291_p4.read()) + sc_biguint<16>(tmp686_fu_147219_p2.read()));
}

void a0_conv2d_1::thread_tmp688_fu_147258_p2() {
    tmp688_fu_147258_p2 = (!tmp685_fu_147195_p2.read().is_01() || !tmp687_fu_147240_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp685_fu_147195_p2.read()) + sc_biguint<16>(tmp687_fu_147240_p2.read()));
}

void a0_conv2d_1::thread_tmp689_fu_147276_p2() {
    tmp689_fu_147276_p2 = (!tmp684_fu_147171_p2.read().is_01() || !tmp688_fu_147258_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp684_fu_147171_p2.read()) + sc_biguint<16>(tmp688_fu_147258_p2.read()));
}

void a0_conv2d_1::thread_tmp68_fu_138564_p2() {
    tmp68_fu_138564_p2 = (!tmp65_fu_138501_p2.read().is_01() || !tmp67_fu_138546_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp65_fu_138501_p2.read()) + sc_biguint<16>(tmp67_fu_138546_p2.read()));
}

void a0_conv2d_1::thread_tmp690_fu_147300_p2() {
    tmp690_fu_147300_p2 = (!r2esult9_V_47_fu_131328_p4.read().is_01() || !r2esult1_V_48_fu_131673_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_47_fu_131328_p4.read()) + sc_biguint<16>(r2esult1_V_48_fu_131673_p4.read()));
}

void a0_conv2d_1::thread_tmp691_fu_147324_p2() {
    tmp691_fu_147324_p2 = (!r2esult2_V_48_fu_131685_p4.read().is_01() || !r2esult3_V_48_fu_131698_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_48_fu_131685_p4.read()) + sc_biguint<16>(r2esult3_V_48_fu_131698_p4.read()));
}

void a0_conv2d_1::thread_tmp692_fu_147342_p2() {
    tmp692_fu_147342_p2 = (!tmp690_fu_147300_p2.read().is_01() || !tmp691_fu_147324_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp690_fu_147300_p2.read()) + sc_biguint<16>(tmp691_fu_147324_p2.read()));
}

void a0_conv2d_1::thread_tmp693_fu_147366_p2() {
    tmp693_fu_147366_p2 = (!r2esult4_V_48_fu_131710_p4.read().is_01() || !r2esult5_V_48_fu_131722_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_48_fu_131710_p4.read()) + sc_biguint<16>(r2esult5_V_48_fu_131722_p4.read()));
}

void a0_conv2d_1::thread_tmp694_fu_147390_p2() {
    tmp694_fu_147390_p2 = (!r2esult7_V_48_fu_131747_p4.read().is_01() || !r2esult8_V_48_fu_131759_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_48_fu_131747_p4.read()) + sc_biguint<16>(r2esult8_V_48_fu_131759_p4.read()));
}

void a0_conv2d_1::thread_tmp695_fu_147411_p2() {
    tmp695_fu_147411_p2 = (!r2esult6_V_48_fu_131735_p4.read().is_01() || !tmp694_fu_147390_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_48_fu_131735_p4.read()) + sc_biguint<16>(tmp694_fu_147390_p2.read()));
}

void a0_conv2d_1::thread_tmp696_fu_147429_p2() {
    tmp696_fu_147429_p2 = (!tmp693_fu_147366_p2.read().is_01() || !tmp695_fu_147411_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp693_fu_147366_p2.read()) + sc_biguint<16>(tmp695_fu_147411_p2.read()));
}

void a0_conv2d_1::thread_tmp697_fu_147447_p2() {
    tmp697_fu_147447_p2 = (!tmp692_fu_147342_p2.read().is_01() || !tmp696_fu_147429_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp692_fu_147342_p2.read()) + sc_biguint<16>(tmp696_fu_147429_p2.read()));
}

void a0_conv2d_1::thread_tmp698_fu_147465_p2() {
    tmp698_fu_147465_p2 = (!tmp689_fu_147276_p2.read().is_01() || !tmp697_fu_147447_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp689_fu_147276_p2.read()) + sc_biguint<16>(tmp697_fu_147447_p2.read()));
}

void a0_conv2d_1::thread_tmp699_fu_147489_p2() {
    tmp699_fu_147489_p2 = (!r2esult9_V_48_fu_131772_p4.read().is_01() || !r2esult1_V_49_fu_132117_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_48_fu_131772_p4.read()) + sc_biguint<16>(r2esult1_V_49_fu_132117_p4.read()));
}

void a0_conv2d_1::thread_tmp69_fu_138582_p2() {
    tmp69_fu_138582_p2 = (!tmp64_fu_138477_p2.read().is_01() || !tmp68_fu_138564_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp64_fu_138477_p2.read()) + sc_biguint<16>(tmp68_fu_138564_p2.read()));
}

void a0_conv2d_1::thread_tmp700_fu_147513_p2() {
    tmp700_fu_147513_p2 = (!r2esult2_V_49_fu_132129_p4.read().is_01() || !r2esult3_V_49_fu_132142_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_49_fu_132129_p4.read()) + sc_biguint<16>(r2esult3_V_49_fu_132142_p4.read()));
}

void a0_conv2d_1::thread_tmp701_fu_147531_p2() {
    tmp701_fu_147531_p2 = (!tmp699_fu_147489_p2.read().is_01() || !tmp700_fu_147513_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp699_fu_147489_p2.read()) + sc_biguint<16>(tmp700_fu_147513_p2.read()));
}

void a0_conv2d_1::thread_tmp702_fu_147555_p2() {
    tmp702_fu_147555_p2 = (!r2esult4_V_49_fu_132154_p4.read().is_01() || !r2esult5_V_49_fu_132166_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_49_fu_132154_p4.read()) + sc_biguint<16>(r2esult5_V_49_fu_132166_p4.read()));
}

void a0_conv2d_1::thread_tmp703_fu_147579_p2() {
    tmp703_fu_147579_p2 = (!r2esult7_V_49_fu_132191_p4.read().is_01() || !r2esult8_V_49_fu_132203_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_49_fu_132191_p4.read()) + sc_biguint<16>(r2esult8_V_49_fu_132203_p4.read()));
}

void a0_conv2d_1::thread_tmp704_fu_147600_p2() {
    tmp704_fu_147600_p2 = (!r2esult6_V_49_fu_132179_p4.read().is_01() || !tmp703_fu_147579_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_49_fu_132179_p4.read()) + sc_biguint<16>(tmp703_fu_147579_p2.read()));
}

void a0_conv2d_1::thread_tmp705_fu_147618_p2() {
    tmp705_fu_147618_p2 = (!tmp702_fu_147555_p2.read().is_01() || !tmp704_fu_147600_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp702_fu_147555_p2.read()) + sc_biguint<16>(tmp704_fu_147600_p2.read()));
}

void a0_conv2d_1::thread_tmp706_fu_147636_p2() {
    tmp706_fu_147636_p2 = (!tmp701_fu_147531_p2.read().is_01() || !tmp705_fu_147618_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp701_fu_147531_p2.read()) + sc_biguint<16>(tmp705_fu_147618_p2.read()));
}

void a0_conv2d_1::thread_tmp707_fu_147660_p2() {
    tmp707_fu_147660_p2 = (!r2esult9_V_49_fu_132216_p4.read().is_01() || !r2esult1_V_50_fu_132561_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_49_fu_132216_p4.read()) + sc_biguint<16>(r2esult1_V_50_fu_132561_p4.read()));
}

void a0_conv2d_1::thread_tmp708_fu_147684_p2() {
    tmp708_fu_147684_p2 = (!r2esult2_V_50_fu_132573_p4.read().is_01() || !r2esult3_V_50_fu_132586_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_50_fu_132573_p4.read()) + sc_biguint<16>(r2esult3_V_50_fu_132586_p4.read()));
}

void a0_conv2d_1::thread_tmp709_fu_147702_p2() {
    tmp709_fu_147702_p2 = (!tmp707_fu_147660_p2.read().is_01() || !tmp708_fu_147684_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp707_fu_147660_p2.read()) + sc_biguint<16>(tmp708_fu_147684_p2.read()));
}

void a0_conv2d_1::thread_tmp70_fu_138600_p2() {
    tmp70_fu_138600_p2 = (!tmp61_fu_138411_p2.read().is_01() || !tmp69_fu_138582_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp61_fu_138411_p2.read()) + sc_biguint<16>(tmp69_fu_138582_p2.read()));
}

void a0_conv2d_1::thread_tmp710_fu_147726_p2() {
    tmp710_fu_147726_p2 = (!r2esult4_V_50_fu_132598_p4.read().is_01() || !r2esult5_V_50_fu_132610_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_50_fu_132598_p4.read()) + sc_biguint<16>(r2esult5_V_50_fu_132610_p4.read()));
}

void a0_conv2d_1::thread_tmp711_fu_147750_p2() {
    tmp711_fu_147750_p2 = (!r2esult7_V_50_fu_132635_p4.read().is_01() || !r2esult8_V_50_fu_132647_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_50_fu_132635_p4.read()) + sc_biguint<16>(r2esult8_V_50_fu_132647_p4.read()));
}

void a0_conv2d_1::thread_tmp712_fu_147771_p2() {
    tmp712_fu_147771_p2 = (!r2esult6_V_50_fu_132623_p4.read().is_01() || !tmp711_fu_147750_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_50_fu_132623_p4.read()) + sc_biguint<16>(tmp711_fu_147750_p2.read()));
}

void a0_conv2d_1::thread_tmp713_fu_147789_p2() {
    tmp713_fu_147789_p2 = (!tmp710_fu_147726_p2.read().is_01() || !tmp712_fu_147771_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp710_fu_147726_p2.read()) + sc_biguint<16>(tmp712_fu_147771_p2.read()));
}

void a0_conv2d_1::thread_tmp714_fu_147807_p2() {
    tmp714_fu_147807_p2 = (!tmp709_fu_147702_p2.read().is_01() || !tmp713_fu_147789_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp709_fu_147702_p2.read()) + sc_biguint<16>(tmp713_fu_147789_p2.read()));
}

void a0_conv2d_1::thread_tmp715_fu_169957_p2() {
    tmp715_fu_169957_p2 = (!tmp706_reg_227376.read().is_01() || !tmp714_reg_227381.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp706_reg_227376.read()) + sc_biguint<16>(tmp714_reg_227381.read()));
}

void a0_conv2d_1::thread_tmp716_fu_169961_p2() {
    tmp716_fu_169961_p2 = (!tmp698_reg_227371.read().is_01() || !tmp715_fu_169957_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp698_reg_227371.read()) + sc_biguint<16>(tmp715_fu_169957_p2.read()));
}

void a0_conv2d_1::thread_tmp717_fu_147855_p2() {
    tmp717_fu_147855_p2 = (!r2esult9_V_50_fu_132660_p4.read().is_01() || !r2esult1_V_51_fu_133005_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_50_fu_132660_p4.read()) + sc_biguint<16>(r2esult1_V_51_fu_133005_p4.read()));
}

void a0_conv2d_1::thread_tmp718_fu_147879_p2() {
    tmp718_fu_147879_p2 = (!r2esult2_V_51_fu_133017_p4.read().is_01() || !r2esult3_V_51_fu_133030_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_51_fu_133017_p4.read()) + sc_biguint<16>(r2esult3_V_51_fu_133030_p4.read()));
}

void a0_conv2d_1::thread_tmp719_fu_147897_p2() {
    tmp719_fu_147897_p2 = (!tmp717_fu_147855_p2.read().is_01() || !tmp718_fu_147879_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp717_fu_147855_p2.read()) + sc_biguint<16>(tmp718_fu_147879_p2.read()));
}

void a0_conv2d_1::thread_tmp71_fu_138618_p2() {
    tmp71_fu_138618_p2 = (!tmp53_fu_138240_p2.read().is_01() || !tmp70_fu_138600_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp53_fu_138240_p2.read()) + sc_biguint<16>(tmp70_fu_138600_p2.read()));
}

void a0_conv2d_1::thread_tmp720_fu_147921_p2() {
    tmp720_fu_147921_p2 = (!r2esult4_V_51_fu_133042_p4.read().is_01() || !r2esult5_V_51_fu_133054_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_51_fu_133042_p4.read()) + sc_biguint<16>(r2esult5_V_51_fu_133054_p4.read()));
}

void a0_conv2d_1::thread_tmp721_fu_147945_p2() {
    tmp721_fu_147945_p2 = (!r2esult7_V_51_fu_133079_p4.read().is_01() || !r2esult8_V_51_fu_133091_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_51_fu_133079_p4.read()) + sc_biguint<16>(r2esult8_V_51_fu_133091_p4.read()));
}

void a0_conv2d_1::thread_tmp722_fu_147966_p2() {
    tmp722_fu_147966_p2 = (!r2esult6_V_51_fu_133067_p4.read().is_01() || !tmp721_fu_147945_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_51_fu_133067_p4.read()) + sc_biguint<16>(tmp721_fu_147945_p2.read()));
}

void a0_conv2d_1::thread_tmp723_fu_147984_p2() {
    tmp723_fu_147984_p2 = (!tmp720_fu_147921_p2.read().is_01() || !tmp722_fu_147966_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp720_fu_147921_p2.read()) + sc_biguint<16>(tmp722_fu_147966_p2.read()));
}

void a0_conv2d_1::thread_tmp724_fu_148002_p2() {
    tmp724_fu_148002_p2 = (!tmp719_fu_147897_p2.read().is_01() || !tmp723_fu_147984_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp719_fu_147897_p2.read()) + sc_biguint<16>(tmp723_fu_147984_p2.read()));
}

void a0_conv2d_1::thread_tmp725_fu_148026_p2() {
    tmp725_fu_148026_p2 = (!r2esult9_V_51_fu_133104_p4.read().is_01() || !r2esult1_V_52_fu_133449_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_51_fu_133104_p4.read()) + sc_biguint<16>(r2esult1_V_52_fu_133449_p4.read()));
}

void a0_conv2d_1::thread_tmp726_fu_148050_p2() {
    tmp726_fu_148050_p2 = (!r2esult2_V_52_fu_133461_p4.read().is_01() || !r2esult3_V_52_fu_133474_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_52_fu_133461_p4.read()) + sc_biguint<16>(r2esult3_V_52_fu_133474_p4.read()));
}

void a0_conv2d_1::thread_tmp727_fu_148068_p2() {
    tmp727_fu_148068_p2 = (!tmp725_fu_148026_p2.read().is_01() || !tmp726_fu_148050_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp725_fu_148026_p2.read()) + sc_biguint<16>(tmp726_fu_148050_p2.read()));
}

void a0_conv2d_1::thread_tmp728_fu_148092_p2() {
    tmp728_fu_148092_p2 = (!r2esult4_V_52_fu_133486_p4.read().is_01() || !r2esult5_V_52_fu_133498_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_52_fu_133486_p4.read()) + sc_biguint<16>(r2esult5_V_52_fu_133498_p4.read()));
}

void a0_conv2d_1::thread_tmp729_fu_148116_p2() {
    tmp729_fu_148116_p2 = (!r2esult7_V_52_fu_133523_p4.read().is_01() || !r2esult8_V_52_fu_133535_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_52_fu_133523_p4.read()) + sc_biguint<16>(r2esult8_V_52_fu_133535_p4.read()));
}

void a0_conv2d_1::thread_tmp72_fu_138642_p2() {
    tmp72_fu_138642_p2 = (!result9_V_54_fu_134325_p4.read().is_01() || !result1_V_55_fu_134670_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_54_fu_134325_p4.read()) + sc_biguint<16>(result1_V_55_fu_134670_p4.read()));
}

void a0_conv2d_1::thread_tmp730_fu_148137_p2() {
    tmp730_fu_148137_p2 = (!r2esult6_V_52_fu_133511_p4.read().is_01() || !tmp729_fu_148116_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_52_fu_133511_p4.read()) + sc_biguint<16>(tmp729_fu_148116_p2.read()));
}

void a0_conv2d_1::thread_tmp731_fu_148155_p2() {
    tmp731_fu_148155_p2 = (!tmp728_fu_148092_p2.read().is_01() || !tmp730_fu_148137_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp728_fu_148092_p2.read()) + sc_biguint<16>(tmp730_fu_148137_p2.read()));
}

void a0_conv2d_1::thread_tmp732_fu_148173_p2() {
    tmp732_fu_148173_p2 = (!tmp727_fu_148068_p2.read().is_01() || !tmp731_fu_148155_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp727_fu_148068_p2.read()) + sc_biguint<16>(tmp731_fu_148155_p2.read()));
}

void a0_conv2d_1::thread_tmp733_fu_148191_p2() {
    tmp733_fu_148191_p2 = (!tmp724_fu_148002_p2.read().is_01() || !tmp732_fu_148173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp724_fu_148002_p2.read()) + sc_biguint<16>(tmp732_fu_148173_p2.read()));
}

void a0_conv2d_1::thread_tmp734_fu_148215_p2() {
    tmp734_fu_148215_p2 = (!r2esult9_V_52_fu_133548_p4.read().is_01() || !r2esult1_V_53_fu_133893_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_52_fu_133548_p4.read()) + sc_biguint<16>(r2esult1_V_53_fu_133893_p4.read()));
}

void a0_conv2d_1::thread_tmp735_fu_148239_p2() {
    tmp735_fu_148239_p2 = (!r2esult2_V_53_fu_133905_p4.read().is_01() || !r2esult3_V_53_fu_133918_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_53_fu_133905_p4.read()) + sc_biguint<16>(r2esult3_V_53_fu_133918_p4.read()));
}

void a0_conv2d_1::thread_tmp736_fu_148257_p2() {
    tmp736_fu_148257_p2 = (!tmp734_fu_148215_p2.read().is_01() || !tmp735_fu_148239_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp734_fu_148215_p2.read()) + sc_biguint<16>(tmp735_fu_148239_p2.read()));
}

void a0_conv2d_1::thread_tmp737_fu_148281_p2() {
    tmp737_fu_148281_p2 = (!r2esult4_V_53_fu_133930_p4.read().is_01() || !r2esult5_V_53_fu_133942_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_53_fu_133930_p4.read()) + sc_biguint<16>(r2esult5_V_53_fu_133942_p4.read()));
}

void a0_conv2d_1::thread_tmp738_fu_148305_p2() {
    tmp738_fu_148305_p2 = (!r2esult7_V_53_fu_133967_p4.read().is_01() || !r2esult8_V_53_fu_133979_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_53_fu_133967_p4.read()) + sc_biguint<16>(r2esult8_V_53_fu_133979_p4.read()));
}

void a0_conv2d_1::thread_tmp739_fu_148326_p2() {
    tmp739_fu_148326_p2 = (!r2esult6_V_53_fu_133955_p4.read().is_01() || !tmp738_fu_148305_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_53_fu_133955_p4.read()) + sc_biguint<16>(tmp738_fu_148305_p2.read()));
}

void a0_conv2d_1::thread_tmp73_fu_138666_p2() {
    tmp73_fu_138666_p2 = (!result2_V_55_fu_134682_p4.read().is_01() || !result3_V_55_fu_134695_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_55_fu_134682_p4.read()) + sc_biguint<16>(result3_V_55_fu_134695_p4.read()));
}

void a0_conv2d_1::thread_tmp740_fu_148344_p2() {
    tmp740_fu_148344_p2 = (!tmp737_fu_148281_p2.read().is_01() || !tmp739_fu_148326_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp737_fu_148281_p2.read()) + sc_biguint<16>(tmp739_fu_148326_p2.read()));
}

void a0_conv2d_1::thread_tmp741_fu_148362_p2() {
    tmp741_fu_148362_p2 = (!tmp736_fu_148257_p2.read().is_01() || !tmp740_fu_148344_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp736_fu_148257_p2.read()) + sc_biguint<16>(tmp740_fu_148344_p2.read()));
}

void a0_conv2d_1::thread_tmp742_fu_148386_p2() {
    tmp742_fu_148386_p2 = (!r2esult9_V_53_fu_133992_p4.read().is_01() || !r2esult1_V_54_fu_134337_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_53_fu_133992_p4.read()) + sc_biguint<16>(r2esult1_V_54_fu_134337_p4.read()));
}

void a0_conv2d_1::thread_tmp743_fu_148410_p2() {
    tmp743_fu_148410_p2 = (!r2esult2_V_54_fu_134349_p4.read().is_01() || !r2esult3_V_54_fu_134362_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_54_fu_134349_p4.read()) + sc_biguint<16>(r2esult3_V_54_fu_134362_p4.read()));
}

void a0_conv2d_1::thread_tmp744_fu_148428_p2() {
    tmp744_fu_148428_p2 = (!tmp742_fu_148386_p2.read().is_01() || !tmp743_fu_148410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp742_fu_148386_p2.read()) + sc_biguint<16>(tmp743_fu_148410_p2.read()));
}

void a0_conv2d_1::thread_tmp745_fu_148452_p2() {
    tmp745_fu_148452_p2 = (!r2esult4_V_54_fu_134374_p4.read().is_01() || !r2esult5_V_54_fu_134386_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_54_fu_134374_p4.read()) + sc_biguint<16>(r2esult5_V_54_fu_134386_p4.read()));
}

void a0_conv2d_1::thread_tmp746_fu_148476_p2() {
    tmp746_fu_148476_p2 = (!r2esult7_V_54_fu_134411_p4.read().is_01() || !r2esult8_V_54_fu_134423_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_54_fu_134411_p4.read()) + sc_biguint<16>(r2esult8_V_54_fu_134423_p4.read()));
}

void a0_conv2d_1::thread_tmp747_fu_148497_p2() {
    tmp747_fu_148497_p2 = (!r2esult6_V_54_fu_134399_p4.read().is_01() || !tmp746_fu_148476_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_54_fu_134399_p4.read()) + sc_biguint<16>(tmp746_fu_148476_p2.read()));
}

void a0_conv2d_1::thread_tmp748_fu_148515_p2() {
    tmp748_fu_148515_p2 = (!tmp745_fu_148452_p2.read().is_01() || !tmp747_fu_148497_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp745_fu_148452_p2.read()) + sc_biguint<16>(tmp747_fu_148497_p2.read()));
}

void a0_conv2d_1::thread_tmp749_fu_148533_p2() {
    tmp749_fu_148533_p2 = (!tmp744_fu_148428_p2.read().is_01() || !tmp748_fu_148515_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp744_fu_148428_p2.read()) + sc_biguint<16>(tmp748_fu_148515_p2.read()));
}

void a0_conv2d_1::thread_tmp74_fu_138684_p2() {
    tmp74_fu_138684_p2 = (!tmp72_fu_138642_p2.read().is_01() || !tmp73_fu_138666_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp72_fu_138642_p2.read()) + sc_biguint<16>(tmp73_fu_138666_p2.read()));
}

void a0_conv2d_1::thread_tmp750_fu_169966_p2() {
    tmp750_fu_169966_p2 = (!tmp741_reg_227411.read().is_01() || !tmp749_reg_227416.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp741_reg_227411.read()) + sc_biguint<16>(tmp749_reg_227416.read()));
}

void a0_conv2d_1::thread_tmp751_fu_169974_p2() {
    tmp751_fu_169974_p2 = (!tmp733_reg_227406.read().is_01() || !tmp750_fu_169966_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp733_reg_227406.read()) + sc_biguint<16>(tmp750_fu_169966_p2.read()));
}

void a0_conv2d_1::thread_tmp752_fu_169988_p2() {
    tmp752_fu_169988_p2 = (!tmp716_fu_169961_p2.read().is_01() || !tmp751_fu_169974_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp716_fu_169961_p2.read()) + sc_biguint<16>(tmp751_fu_169974_p2.read()));
}

void a0_conv2d_1::thread_tmp753_fu_170006_p2() {
    tmp753_fu_170006_p2 = (!tmp681_fu_169952_p2.read().is_01() || !tmp752_fu_169988_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp681_fu_169952_p2.read()) + sc_biguint<16>(tmp752_fu_169988_p2.read()));
}

void a0_conv2d_1::thread_tmp754_fu_148566_p2() {
    tmp754_fu_148566_p2 = (!r2esult9_V_30_fu_128532_p4.read().is_01() || !r2esult1_V_31_reg_217141.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_30_fu_128532_p4.read()) + sc_biguint<16>(r2esult1_V_31_reg_217141.read()));
}

void a0_conv2d_1::thread_tmp755_fu_148580_p2() {
    tmp755_fu_148580_p2 = (!r2esult2_V_31_reg_217146.read().is_01() || !r2esult3_V_31_fu_128662_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_31_reg_217146.read()) + sc_biguint<16>(r2esult3_V_31_fu_128662_p4.read()));
}

void a0_conv2d_1::thread_tmp756_fu_148595_p2() {
    tmp756_fu_148595_p2 = (!tmp754_fu_148566_p2.read().is_01() || !tmp755_fu_148580_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp754_fu_148566_p2.read()) + sc_biguint<16>(tmp755_fu_148580_p2.read()));
}

void a0_conv2d_1::thread_tmp757_fu_108639_p2() {
    tmp757_fu_108639_p2 = (!r2esult4_V_31_fu_97980_p4.read().is_01() || !r2esult5_V_31_fu_97993_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_31_fu_97980_p4.read()) + sc_biguint<16>(r2esult5_V_31_fu_97993_p4.read()));
}

void a0_conv2d_1::thread_tmp758_fu_148601_p2() {
    tmp758_fu_148601_p2 = (!r2esult7_V_31_reg_217161.read().is_01() || !r2esult8_V_31_reg_217166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_31_reg_217161.read()) + sc_biguint<16>(r2esult8_V_31_reg_217166.read()));
}

void a0_conv2d_1::thread_tmp759_fu_148618_p2() {
    tmp759_fu_148618_p2 = (!r2esult6_V_31_fu_128675_p4.read().is_01() || !tmp758_fu_148601_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_31_fu_128675_p4.read()) + sc_biguint<16>(tmp758_fu_148601_p2.read()));
}

void a0_conv2d_1::thread_tmp75_fu_138708_p2() {
    tmp75_fu_138708_p2 = (!result4_V_55_fu_134707_p4.read().is_01() || !result5_V_55_fu_134719_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_55_fu_134707_p4.read()) + sc_biguint<16>(result5_V_55_fu_134719_p4.read()));
}

void a0_conv2d_1::thread_tmp760_fu_148634_p2() {
    tmp760_fu_148634_p2 = (!tmp757_reg_223161.read().is_01() || !tmp759_fu_148618_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp757_reg_223161.read()) + sc_biguint<16>(tmp759_fu_148618_p2.read()));
}

void a0_conv2d_1::thread_tmp761_fu_148651_p2() {
    tmp761_fu_148651_p2 = (!tmp756_fu_148595_p2.read().is_01() || !tmp760_fu_148634_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp756_fu_148595_p2.read()) + sc_biguint<16>(tmp760_fu_148634_p2.read()));
}

void a0_conv2d_1::thread_tmp762_fu_148666_p2() {
    tmp762_fu_148666_p2 = (!r2esult9_V_31_fu_128688_p4.read().is_01() || !r2esult1_V_32_reg_217271.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_31_fu_128688_p4.read()) + sc_biguint<16>(r2esult1_V_32_reg_217271.read()));
}

void a0_conv2d_1::thread_tmp763_fu_148680_p2() {
    tmp763_fu_148680_p2 = (!r2esult2_V_32_reg_217276.read().is_01() || !r2esult3_V_32_fu_128818_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_32_reg_217276.read()) + sc_biguint<16>(r2esult3_V_32_fu_128818_p4.read()));
}

void a0_conv2d_1::thread_tmp764_fu_148695_p2() {
    tmp764_fu_148695_p2 = (!tmp762_fu_148666_p2.read().is_01() || !tmp763_fu_148680_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp762_fu_148666_p2.read()) + sc_biguint<16>(tmp763_fu_148680_p2.read()));
}

void a0_conv2d_1::thread_tmp765_fu_108699_p2() {
    tmp765_fu_108699_p2 = (!r2esult4_V_32_fu_98361_p4.read().is_01() || !r2esult5_V_32_fu_98374_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_32_fu_98361_p4.read()) + sc_biguint<16>(r2esult5_V_32_fu_98374_p4.read()));
}

void a0_conv2d_1::thread_tmp766_fu_108723_p2() {
    tmp766_fu_108723_p2 = (!r2esult7_V_32_fu_98387_p4.read().is_01() || !r2esult8_V_32_fu_98400_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_32_fu_98387_p4.read()) + sc_biguint<16>(r2esult8_V_32_fu_98400_p4.read()));
}

void a0_conv2d_1::thread_tmp767_fu_148714_p2() {
    tmp767_fu_148714_p2 = (!r2esult6_V_32_fu_128831_p4.read().is_01() || !tmp766_reg_223211.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_32_fu_128831_p4.read()) + sc_biguint<16>(tmp766_reg_223211.read()));
}

void a0_conv2d_1::thread_tmp768_fu_148729_p2() {
    tmp768_fu_148729_p2 = (!tmp765_reg_223196.read().is_01() || !tmp767_fu_148714_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp765_reg_223196.read()) + sc_biguint<16>(tmp767_fu_148714_p2.read()));
}

void a0_conv2d_1::thread_tmp769_fu_148746_p2() {
    tmp769_fu_148746_p2 = (!tmp764_fu_148695_p2.read().is_01() || !tmp768_fu_148729_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp764_fu_148695_p2.read()) + sc_biguint<16>(tmp768_fu_148729_p2.read()));
}

void a0_conv2d_1::thread_tmp76_fu_138732_p2() {
    tmp76_fu_138732_p2 = (!result7_V_55_fu_134744_p4.read().is_01() || !result8_V_55_fu_134756_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_55_fu_134744_p4.read()) + sc_biguint<16>(result8_V_55_fu_134756_p4.read()));
}

void a0_conv2d_1::thread_tmp770_fu_148764_p2() {
    tmp770_fu_148764_p2 = (!tmp761_fu_148651_p2.read().is_01() || !tmp769_fu_148746_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp761_fu_148651_p2.read()) + sc_biguint<16>(tmp769_fu_148746_p2.read()));
}

void a0_conv2d_1::thread_tmp771_fu_148779_p2() {
    tmp771_fu_148779_p2 = (!r2esult9_V_32_fu_128844_p4.read().is_01() || !r2esult1_V_33_reg_217381.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_32_fu_128844_p4.read()) + sc_biguint<16>(r2esult1_V_33_reg_217381.read()));
}

void a0_conv2d_1::thread_tmp772_fu_148793_p2() {
    tmp772_fu_148793_p2 = (!r2esult2_V_33_reg_217386.read().is_01() || !r2esult3_V_33_fu_128974_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_33_reg_217386.read()) + sc_biguint<16>(r2esult3_V_33_fu_128974_p4.read()));
}

void a0_conv2d_1::thread_tmp773_fu_148808_p2() {
    tmp773_fu_148808_p2 = (!tmp771_fu_148779_p2.read().is_01() || !tmp772_fu_148793_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp771_fu_148779_p2.read()) + sc_biguint<16>(tmp772_fu_148793_p2.read()));
}

void a0_conv2d_1::thread_tmp774_fu_108765_p2() {
    tmp774_fu_108765_p2 = (!r2esult4_V_33_fu_98742_p4.read().is_01() || !r2esult5_V_33_fu_98755_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_33_fu_98742_p4.read()) + sc_biguint<16>(r2esult5_V_33_fu_98755_p4.read()));
}

void a0_conv2d_1::thread_tmp775_fu_148814_p2() {
    tmp775_fu_148814_p2 = (!r2esult7_V_33_reg_217401.read().is_01() || !r2esult8_V_33_reg_217406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_33_reg_217401.read()) + sc_biguint<16>(r2esult8_V_33_reg_217406.read()));
}

void a0_conv2d_1::thread_tmp776_fu_148831_p2() {
    tmp776_fu_148831_p2 = (!r2esult6_V_33_fu_128987_p4.read().is_01() || !tmp775_fu_148814_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_33_fu_128987_p4.read()) + sc_biguint<16>(tmp775_fu_148814_p2.read()));
}

void a0_conv2d_1::thread_tmp777_fu_148847_p2() {
    tmp777_fu_148847_p2 = (!tmp774_reg_223236.read().is_01() || !tmp776_fu_148831_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp774_reg_223236.read()) + sc_biguint<16>(tmp776_fu_148831_p2.read()));
}

void a0_conv2d_1::thread_tmp778_fu_148864_p2() {
    tmp778_fu_148864_p2 = (!tmp773_fu_148808_p2.read().is_01() || !tmp777_fu_148847_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp773_fu_148808_p2.read()) + sc_biguint<16>(tmp777_fu_148847_p2.read()));
}

void a0_conv2d_1::thread_tmp779_fu_148879_p2() {
    tmp779_fu_148879_p2 = (!r2esult9_V_33_fu_129000_p4.read().is_01() || !r2esult1_V_34_reg_217521.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_33_fu_129000_p4.read()) + sc_biguint<16>(r2esult1_V_34_reg_217521.read()));
}

void a0_conv2d_1::thread_tmp77_fu_138753_p2() {
    tmp77_fu_138753_p2 = (!result6_V_55_fu_134732_p4.read().is_01() || !tmp76_fu_138732_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_55_fu_134732_p4.read()) + sc_biguint<16>(tmp76_fu_138732_p2.read()));
}

void a0_conv2d_1::thread_tmp780_fu_148893_p2() {
    tmp780_fu_148893_p2 = (!r2esult2_V_34_reg_217526.read().is_01() || !r2esult3_V_34_fu_129130_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_34_reg_217526.read()) + sc_biguint<16>(r2esult3_V_34_fu_129130_p4.read()));
}

void a0_conv2d_1::thread_tmp781_fu_148908_p2() {
    tmp781_fu_148908_p2 = (!tmp779_fu_148879_p2.read().is_01() || !tmp780_fu_148893_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp779_fu_148879_p2.read()) + sc_biguint<16>(tmp780_fu_148893_p2.read()));
}

void a0_conv2d_1::thread_tmp782_fu_108825_p2() {
    tmp782_fu_108825_p2 = (!r2esult4_V_34_fu_99123_p4.read().is_01() || !r2esult5_V_34_fu_99136_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_34_fu_99123_p4.read()) + sc_biguint<16>(r2esult5_V_34_fu_99136_p4.read()));
}

void a0_conv2d_1::thread_tmp783_fu_148914_p2() {
    tmp783_fu_148914_p2 = (!r2esult7_V_34_reg_217541.read().is_01() || !r2esult8_V_34_reg_217546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_34_reg_217541.read()) + sc_biguint<16>(r2esult8_V_34_reg_217546.read()));
}

void a0_conv2d_1::thread_tmp784_fu_148931_p2() {
    tmp784_fu_148931_p2 = (!r2esult6_V_34_fu_129143_p4.read().is_01() || !tmp783_fu_148914_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_34_fu_129143_p4.read()) + sc_biguint<16>(tmp783_fu_148914_p2.read()));
}

void a0_conv2d_1::thread_tmp785_fu_148947_p2() {
    tmp785_fu_148947_p2 = (!tmp782_reg_223271.read().is_01() || !tmp784_fu_148931_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp782_reg_223271.read()) + sc_biguint<16>(tmp784_fu_148931_p2.read()));
}

void a0_conv2d_1::thread_tmp786_fu_148964_p2() {
    tmp786_fu_148964_p2 = (!tmp781_fu_148908_p2.read().is_01() || !tmp785_fu_148947_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp781_fu_148908_p2.read()) + sc_biguint<16>(tmp785_fu_148947_p2.read()));
}

void a0_conv2d_1::thread_tmp787_fu_170012_p2() {
    tmp787_fu_170012_p2 = (!tmp778_reg_227441.read().is_01() || !tmp786_reg_227446.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp778_reg_227441.read()) + sc_biguint<16>(tmp786_reg_227446.read()));
}

void a0_conv2d_1::thread_tmp788_fu_170020_p2() {
    tmp788_fu_170020_p2 = (!tmp770_reg_227436.read().is_01() || !tmp787_fu_170012_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp770_reg_227436.read()) + sc_biguint<16>(tmp787_fu_170012_p2.read()));
}

void a0_conv2d_1::thread_tmp789_fu_148997_p2() {
    tmp789_fu_148997_p2 = (!r2esult9_V_34_fu_129156_p4.read().is_01() || !r2esult1_V_35_reg_217661.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_34_fu_129156_p4.read()) + sc_biguint<16>(r2esult1_V_35_reg_217661.read()));
}

void a0_conv2d_1::thread_tmp78_fu_138771_p2() {
    tmp78_fu_138771_p2 = (!tmp75_fu_138708_p2.read().is_01() || !tmp77_fu_138753_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp75_fu_138708_p2.read()) + sc_biguint<16>(tmp77_fu_138753_p2.read()));
}

void a0_conv2d_1::thread_tmp790_fu_149011_p2() {
    tmp790_fu_149011_p2 = (!r2esult2_V_35_reg_217666.read().is_01() || !r2esult3_V_35_fu_129286_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_35_reg_217666.read()) + sc_biguint<16>(r2esult3_V_35_fu_129286_p4.read()));
}

void a0_conv2d_1::thread_tmp791_fu_149026_p2() {
    tmp791_fu_149026_p2 = (!tmp789_fu_148997_p2.read().is_01() || !tmp790_fu_149011_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp789_fu_148997_p2.read()) + sc_biguint<16>(tmp790_fu_149011_p2.read()));
}

void a0_conv2d_1::thread_tmp792_fu_108885_p2() {
    tmp792_fu_108885_p2 = (!r2esult4_V_35_fu_99504_p4.read().is_01() || !r2esult5_V_35_fu_99517_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_35_fu_99504_p4.read()) + sc_biguint<16>(r2esult5_V_35_fu_99517_p4.read()));
}

void a0_conv2d_1::thread_tmp793_fu_149032_p2() {
    tmp793_fu_149032_p2 = (!r2esult7_V_35_reg_217681.read().is_01() || !r2esult8_V_35_reg_217686.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_35_reg_217681.read()) + sc_biguint<16>(r2esult8_V_35_reg_217686.read()));
}

void a0_conv2d_1::thread_tmp794_fu_149049_p2() {
    tmp794_fu_149049_p2 = (!r2esult6_V_35_fu_129299_p4.read().is_01() || !tmp793_fu_149032_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_35_fu_129299_p4.read()) + sc_biguint<16>(tmp793_fu_149032_p2.read()));
}

void a0_conv2d_1::thread_tmp795_fu_149065_p2() {
    tmp795_fu_149065_p2 = (!tmp792_reg_223306.read().is_01() || !tmp794_fu_149049_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp792_reg_223306.read()) + sc_biguint<16>(tmp794_fu_149049_p2.read()));
}

void a0_conv2d_1::thread_tmp796_fu_149082_p2() {
    tmp796_fu_149082_p2 = (!tmp791_fu_149026_p2.read().is_01() || !tmp795_fu_149065_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp791_fu_149026_p2.read()) + sc_biguint<16>(tmp795_fu_149065_p2.read()));
}

void a0_conv2d_1::thread_tmp797_fu_149097_p2() {
    tmp797_fu_149097_p2 = (!r2esult9_V_35_fu_129312_p4.read().is_01() || !r2esult1_V_36_reg_217791.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_35_fu_129312_p4.read()) + sc_biguint<16>(r2esult1_V_36_reg_217791.read()));
}

void a0_conv2d_1::thread_tmp798_fu_149111_p2() {
    tmp798_fu_149111_p2 = (!r2esult2_V_36_reg_217796.read().is_01() || !r2esult3_V_36_fu_129442_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_36_reg_217796.read()) + sc_biguint<16>(r2esult3_V_36_fu_129442_p4.read()));
}

void a0_conv2d_1::thread_tmp799_fu_149126_p2() {
    tmp799_fu_149126_p2 = (!tmp797_fu_149097_p2.read().is_01() || !tmp798_fu_149111_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp797_fu_149097_p2.read()) + sc_biguint<16>(tmp798_fu_149111_p2.read()));
}

void a0_conv2d_1::thread_tmp79_fu_138789_p2() {
    tmp79_fu_138789_p2 = (!tmp74_fu_138684_p2.read().is_01() || !tmp78_fu_138771_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp74_fu_138684_p2.read()) + sc_biguint<16>(tmp78_fu_138771_p2.read()));
}

void a0_conv2d_1::thread_tmp800_fu_108945_p2() {
    tmp800_fu_108945_p2 = (!r2esult4_V_36_fu_99885_p4.read().is_01() || !r2esult5_V_36_fu_99898_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_36_fu_99885_p4.read()) + sc_biguint<16>(r2esult5_V_36_fu_99898_p4.read()));
}

void a0_conv2d_1::thread_tmp801_fu_108969_p2() {
    tmp801_fu_108969_p2 = (!r2esult7_V_36_fu_99911_p4.read().is_01() || !r2esult8_V_36_fu_99924_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_36_fu_99911_p4.read()) + sc_biguint<16>(r2esult8_V_36_fu_99924_p4.read()));
}

void a0_conv2d_1::thread_tmp802_fu_149145_p2() {
    tmp802_fu_149145_p2 = (!r2esult6_V_36_fu_129455_p4.read().is_01() || !tmp801_reg_223356.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_36_fu_129455_p4.read()) + sc_biguint<16>(tmp801_reg_223356.read()));
}

void a0_conv2d_1::thread_tmp803_fu_149160_p2() {
    tmp803_fu_149160_p2 = (!tmp800_reg_223341.read().is_01() || !tmp802_fu_149145_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp800_reg_223341.read()) + sc_biguint<16>(tmp802_fu_149145_p2.read()));
}

void a0_conv2d_1::thread_tmp804_fu_149177_p2() {
    tmp804_fu_149177_p2 = (!tmp799_fu_149126_p2.read().is_01() || !tmp803_fu_149160_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp799_fu_149126_p2.read()) + sc_biguint<16>(tmp803_fu_149160_p2.read()));
}

void a0_conv2d_1::thread_tmp805_fu_149195_p2() {
    tmp805_fu_149195_p2 = (!tmp796_fu_149082_p2.read().is_01() || !tmp804_fu_149177_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp796_fu_149082_p2.read()) + sc_biguint<16>(tmp804_fu_149177_p2.read()));
}

void a0_conv2d_1::thread_tmp806_fu_149210_p2() {
    tmp806_fu_149210_p2 = (!r2esult9_V_36_fu_129468_p4.read().is_01() || !r2esult1_V_37_reg_217901.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_36_fu_129468_p4.read()) + sc_biguint<16>(r2esult1_V_37_reg_217901.read()));
}

void a0_conv2d_1::thread_tmp807_fu_149224_p2() {
    tmp807_fu_149224_p2 = (!r2esult2_V_37_reg_217906.read().is_01() || !r2esult3_V_37_fu_129598_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_37_reg_217906.read()) + sc_biguint<16>(r2esult3_V_37_fu_129598_p4.read()));
}

void a0_conv2d_1::thread_tmp808_fu_149239_p2() {
    tmp808_fu_149239_p2 = (!tmp806_fu_149210_p2.read().is_01() || !tmp807_fu_149224_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp806_fu_149210_p2.read()) + sc_biguint<16>(tmp807_fu_149224_p2.read()));
}

void a0_conv2d_1::thread_tmp809_fu_109011_p2() {
    tmp809_fu_109011_p2 = (!r2esult4_V_37_fu_100266_p4.read().is_01() || !r2esult5_V_37_fu_100279_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_37_fu_100266_p4.read()) + sc_biguint<16>(r2esult5_V_37_fu_100279_p4.read()));
}

void a0_conv2d_1::thread_tmp80_fu_138813_p2() {
    tmp80_fu_138813_p2 = (!result9_V_55_fu_134769_p4.read().is_01() || !result1_V_56_fu_135114_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_55_fu_134769_p4.read()) + sc_biguint<16>(result1_V_56_fu_135114_p4.read()));
}

void a0_conv2d_1::thread_tmp810_fu_149245_p2() {
    tmp810_fu_149245_p2 = (!r2esult7_V_37_reg_217921.read().is_01() || !r2esult8_V_37_reg_217926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_37_reg_217921.read()) + sc_biguint<16>(r2esult8_V_37_reg_217926.read()));
}

void a0_conv2d_1::thread_tmp811_fu_149262_p2() {
    tmp811_fu_149262_p2 = (!r2esult6_V_37_fu_129611_p4.read().is_01() || !tmp810_fu_149245_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_37_fu_129611_p4.read()) + sc_biguint<16>(tmp810_fu_149245_p2.read()));
}

void a0_conv2d_1::thread_tmp812_fu_149278_p2() {
    tmp812_fu_149278_p2 = (!tmp809_reg_223381.read().is_01() || !tmp811_fu_149262_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp809_reg_223381.read()) + sc_biguint<16>(tmp811_fu_149262_p2.read()));
}

void a0_conv2d_1::thread_tmp813_fu_149295_p2() {
    tmp813_fu_149295_p2 = (!tmp808_fu_149239_p2.read().is_01() || !tmp812_fu_149278_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp808_fu_149239_p2.read()) + sc_biguint<16>(tmp812_fu_149278_p2.read()));
}

void a0_conv2d_1::thread_tmp814_fu_149310_p2() {
    tmp814_fu_149310_p2 = (!r2esult9_V_37_fu_129624_p4.read().is_01() || !r2esult1_V_38_reg_218031.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_37_fu_129624_p4.read()) + sc_biguint<16>(r2esult1_V_38_reg_218031.read()));
}

void a0_conv2d_1::thread_tmp815_fu_149324_p2() {
    tmp815_fu_149324_p2 = (!r2esult2_V_38_reg_218036.read().is_01() || !r2esult3_V_38_fu_129754_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_38_reg_218036.read()) + sc_biguint<16>(r2esult3_V_38_fu_129754_p4.read()));
}

void a0_conv2d_1::thread_tmp816_fu_149339_p2() {
    tmp816_fu_149339_p2 = (!tmp814_fu_149310_p2.read().is_01() || !tmp815_fu_149324_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp814_fu_149310_p2.read()) + sc_biguint<16>(tmp815_fu_149324_p2.read()));
}

void a0_conv2d_1::thread_tmp817_fu_109071_p2() {
    tmp817_fu_109071_p2 = (!r2esult4_V_38_fu_100647_p4.read().is_01() || !r2esult5_V_38_fu_100660_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_38_fu_100647_p4.read()) + sc_biguint<16>(r2esult5_V_38_fu_100660_p4.read()));
}

void a0_conv2d_1::thread_tmp818_fu_109095_p2() {
    tmp818_fu_109095_p2 = (!r2esult7_V_38_fu_100673_p4.read().is_01() || !r2esult8_V_38_fu_100686_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_38_fu_100673_p4.read()) + sc_biguint<16>(r2esult8_V_38_fu_100686_p4.read()));
}

void a0_conv2d_1::thread_tmp819_fu_149358_p2() {
    tmp819_fu_149358_p2 = (!r2esult6_V_38_fu_129767_p4.read().is_01() || !tmp818_reg_223431.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_38_fu_129767_p4.read()) + sc_biguint<16>(tmp818_reg_223431.read()));
}

void a0_conv2d_1::thread_tmp81_fu_138837_p2() {
    tmp81_fu_138837_p2 = (!result2_V_56_fu_135126_p4.read().is_01() || !result3_V_56_fu_135139_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_56_fu_135126_p4.read()) + sc_biguint<16>(result3_V_56_fu_135139_p4.read()));
}

void a0_conv2d_1::thread_tmp820_fu_149373_p2() {
    tmp820_fu_149373_p2 = (!tmp817_reg_223416.read().is_01() || !tmp819_fu_149358_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp817_reg_223416.read()) + sc_biguint<16>(tmp819_fu_149358_p2.read()));
}

void a0_conv2d_1::thread_tmp821_fu_149390_p2() {
    tmp821_fu_149390_p2 = (!tmp816_fu_149339_p2.read().is_01() || !tmp820_fu_149373_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp816_fu_149339_p2.read()) + sc_biguint<16>(tmp820_fu_149373_p2.read()));
}

void a0_conv2d_1::thread_tmp822_fu_149408_p2() {
    tmp822_fu_149408_p2 = (!tmp813_fu_149295_p2.read().is_01() || !tmp821_fu_149390_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp813_fu_149295_p2.read()) + sc_biguint<16>(tmp821_fu_149390_p2.read()));
}

void a0_conv2d_1::thread_tmp823_fu_170029_p2() {
    tmp823_fu_170029_p2 = (!tmp805_reg_227466.read().is_01() || !tmp822_reg_227471.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp805_reg_227466.read()) + sc_biguint<16>(tmp822_reg_227471.read()));
}

void a0_conv2d_1::thread_tmp824_fu_170043_p2() {
    tmp824_fu_170043_p2 = (!tmp788_fu_170020_p2.read().is_01() || !tmp823_fu_170029_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp788_fu_170020_p2.read()) + sc_biguint<16>(tmp823_fu_170029_p2.read()));
}

void a0_conv2d_1::thread_tmp825_fu_149429_p2() {
    tmp825_fu_149429_p2 = (!r2esult9_V_38_fu_129780_p4.read().is_01() || !r2esult1_V_39_reg_218141.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_38_fu_129780_p4.read()) + sc_biguint<16>(r2esult1_V_39_reg_218141.read()));
}

void a0_conv2d_1::thread_tmp826_fu_149443_p2() {
    tmp826_fu_149443_p2 = (!r2esult2_V_39_reg_218146.read().is_01() || !r2esult3_V_39_fu_129910_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_39_reg_218146.read()) + sc_biguint<16>(r2esult3_V_39_fu_129910_p4.read()));
}

void a0_conv2d_1::thread_tmp827_fu_149458_p2() {
    tmp827_fu_149458_p2 = (!tmp825_fu_149429_p2.read().is_01() || !tmp826_fu_149443_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp825_fu_149429_p2.read()) + sc_biguint<16>(tmp826_fu_149443_p2.read()));
}

void a0_conv2d_1::thread_tmp828_fu_109137_p2() {
    tmp828_fu_109137_p2 = (!r2esult4_V_39_fu_101028_p4.read().is_01() || !r2esult5_V_39_fu_101041_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_39_fu_101028_p4.read()) + sc_biguint<16>(r2esult5_V_39_fu_101041_p4.read()));
}

void a0_conv2d_1::thread_tmp829_fu_149464_p2() {
    tmp829_fu_149464_p2 = (!r2esult7_V_39_reg_218161.read().is_01() || !r2esult8_V_39_reg_218166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_39_reg_218161.read()) + sc_biguint<16>(r2esult8_V_39_reg_218166.read()));
}

void a0_conv2d_1::thread_tmp82_fu_138855_p2() {
    tmp82_fu_138855_p2 = (!tmp80_fu_138813_p2.read().is_01() || !tmp81_fu_138837_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp80_fu_138813_p2.read()) + sc_biguint<16>(tmp81_fu_138837_p2.read()));
}

void a0_conv2d_1::thread_tmp830_fu_149481_p2() {
    tmp830_fu_149481_p2 = (!r2esult6_V_39_fu_129923_p4.read().is_01() || !tmp829_fu_149464_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_39_fu_129923_p4.read()) + sc_biguint<16>(tmp829_fu_149464_p2.read()));
}

void a0_conv2d_1::thread_tmp831_fu_149497_p2() {
    tmp831_fu_149497_p2 = (!tmp828_reg_223456.read().is_01() || !tmp830_fu_149481_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp828_reg_223456.read()) + sc_biguint<16>(tmp830_fu_149481_p2.read()));
}

void a0_conv2d_1::thread_tmp832_fu_149514_p2() {
    tmp832_fu_149514_p2 = (!tmp827_fu_149458_p2.read().is_01() || !tmp831_fu_149497_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp827_fu_149458_p2.read()) + sc_biguint<16>(tmp831_fu_149497_p2.read()));
}

void a0_conv2d_1::thread_tmp833_fu_149529_p2() {
    tmp833_fu_149529_p2 = (!r2esult9_V_39_fu_129936_p4.read().is_01() || !r2esult1_V_40_reg_218271.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_39_fu_129936_p4.read()) + sc_biguint<16>(r2esult1_V_40_reg_218271.read()));
}

void a0_conv2d_1::thread_tmp834_fu_149543_p2() {
    tmp834_fu_149543_p2 = (!r2esult2_V_40_reg_218276.read().is_01() || !r2esult3_V_40_fu_130066_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_40_reg_218276.read()) + sc_biguint<16>(r2esult3_V_40_fu_130066_p4.read()));
}

void a0_conv2d_1::thread_tmp835_fu_149558_p2() {
    tmp835_fu_149558_p2 = (!tmp833_fu_149529_p2.read().is_01() || !tmp834_fu_149543_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp833_fu_149529_p2.read()) + sc_biguint<16>(tmp834_fu_149543_p2.read()));
}

void a0_conv2d_1::thread_tmp836_fu_109197_p2() {
    tmp836_fu_109197_p2 = (!r2esult4_V_40_fu_101409_p4.read().is_01() || !r2esult5_V_40_fu_101422_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_40_fu_101409_p4.read()) + sc_biguint<16>(r2esult5_V_40_fu_101422_p4.read()));
}

void a0_conv2d_1::thread_tmp837_fu_109221_p2() {
    tmp837_fu_109221_p2 = (!r2esult7_V_40_fu_101435_p4.read().is_01() || !r2esult8_V_40_fu_101448_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_40_fu_101435_p4.read()) + sc_biguint<16>(r2esult8_V_40_fu_101448_p4.read()));
}

void a0_conv2d_1::thread_tmp838_fu_149577_p2() {
    tmp838_fu_149577_p2 = (!r2esult6_V_40_fu_130079_p4.read().is_01() || !tmp837_reg_223506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_40_fu_130079_p4.read()) + sc_biguint<16>(tmp837_reg_223506.read()));
}

void a0_conv2d_1::thread_tmp839_fu_149592_p2() {
    tmp839_fu_149592_p2 = (!tmp836_reg_223491.read().is_01() || !tmp838_fu_149577_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp836_reg_223491.read()) + sc_biguint<16>(tmp838_fu_149577_p2.read()));
}

void a0_conv2d_1::thread_tmp83_fu_138879_p2() {
    tmp83_fu_138879_p2 = (!result4_V_56_fu_135151_p4.read().is_01() || !result5_V_56_fu_135163_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_56_fu_135151_p4.read()) + sc_biguint<16>(result5_V_56_fu_135163_p4.read()));
}

void a0_conv2d_1::thread_tmp840_fu_149609_p2() {
    tmp840_fu_149609_p2 = (!tmp835_fu_149558_p2.read().is_01() || !tmp839_fu_149592_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp835_fu_149558_p2.read()) + sc_biguint<16>(tmp839_fu_149592_p2.read()));
}

void a0_conv2d_1::thread_tmp841_fu_149627_p2() {
    tmp841_fu_149627_p2 = (!tmp832_fu_149514_p2.read().is_01() || !tmp840_fu_149609_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp832_fu_149514_p2.read()) + sc_biguint<16>(tmp840_fu_149609_p2.read()));
}

void a0_conv2d_1::thread_tmp842_fu_149642_p2() {
    tmp842_fu_149642_p2 = (!r2esult9_V_40_fu_130092_p4.read().is_01() || !r2esult1_V_41_reg_218381.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_40_fu_130092_p4.read()) + sc_biguint<16>(r2esult1_V_41_reg_218381.read()));
}

void a0_conv2d_1::thread_tmp843_fu_149656_p2() {
    tmp843_fu_149656_p2 = (!r2esult2_V_41_reg_218386.read().is_01() || !r2esult3_V_41_fu_130222_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_41_reg_218386.read()) + sc_biguint<16>(r2esult3_V_41_fu_130222_p4.read()));
}

void a0_conv2d_1::thread_tmp844_fu_149671_p2() {
    tmp844_fu_149671_p2 = (!tmp842_fu_149642_p2.read().is_01() || !tmp843_fu_149656_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp842_fu_149642_p2.read()) + sc_biguint<16>(tmp843_fu_149656_p2.read()));
}

void a0_conv2d_1::thread_tmp845_fu_109263_p2() {
    tmp845_fu_109263_p2 = (!r2esult4_V_41_fu_101790_p4.read().is_01() || !r2esult5_V_41_fu_101803_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_41_fu_101790_p4.read()) + sc_biguint<16>(r2esult5_V_41_fu_101803_p4.read()));
}

void a0_conv2d_1::thread_tmp846_fu_149677_p2() {
    tmp846_fu_149677_p2 = (!r2esult7_V_41_reg_218401.read().is_01() || !r2esult8_V_41_reg_218406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_41_reg_218401.read()) + sc_biguint<16>(r2esult8_V_41_reg_218406.read()));
}

void a0_conv2d_1::thread_tmp847_fu_149694_p2() {
    tmp847_fu_149694_p2 = (!r2esult6_V_41_fu_130235_p4.read().is_01() || !tmp846_fu_149677_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_41_fu_130235_p4.read()) + sc_biguint<16>(tmp846_fu_149677_p2.read()));
}

void a0_conv2d_1::thread_tmp848_fu_149710_p2() {
    tmp848_fu_149710_p2 = (!tmp845_reg_223531.read().is_01() || !tmp847_fu_149694_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp845_reg_223531.read()) + sc_biguint<16>(tmp847_fu_149694_p2.read()));
}

void a0_conv2d_1::thread_tmp849_fu_149727_p2() {
    tmp849_fu_149727_p2 = (!tmp844_fu_149671_p2.read().is_01() || !tmp848_fu_149710_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp844_fu_149671_p2.read()) + sc_biguint<16>(tmp848_fu_149710_p2.read()));
}

void a0_conv2d_1::thread_tmp84_fu_138903_p2() {
    tmp84_fu_138903_p2 = (!result7_V_56_fu_135188_p4.read().is_01() || !result8_V_56_fu_135200_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_56_fu_135188_p4.read()) + sc_biguint<16>(result8_V_56_fu_135200_p4.read()));
}

void a0_conv2d_1::thread_tmp850_fu_149742_p2() {
    tmp850_fu_149742_p2 = (!r2esult9_V_41_fu_130248_p4.read().is_01() || !r2esult1_V_42_reg_218521.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_41_fu_130248_p4.read()) + sc_biguint<16>(r2esult1_V_42_reg_218521.read()));
}

void a0_conv2d_1::thread_tmp851_fu_149756_p2() {
    tmp851_fu_149756_p2 = (!r2esult2_V_42_reg_218526.read().is_01() || !r2esult3_V_42_fu_130378_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_42_reg_218526.read()) + sc_biguint<16>(r2esult3_V_42_fu_130378_p4.read()));
}

void a0_conv2d_1::thread_tmp852_fu_149771_p2() {
    tmp852_fu_149771_p2 = (!tmp850_fu_149742_p2.read().is_01() || !tmp851_fu_149756_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp850_fu_149742_p2.read()) + sc_biguint<16>(tmp851_fu_149756_p2.read()));
}

void a0_conv2d_1::thread_tmp853_fu_109323_p2() {
    tmp853_fu_109323_p2 = (!r2esult4_V_42_fu_102171_p4.read().is_01() || !r2esult5_V_42_fu_102184_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_42_fu_102171_p4.read()) + sc_biguint<16>(r2esult5_V_42_fu_102184_p4.read()));
}

void a0_conv2d_1::thread_tmp854_fu_149777_p2() {
    tmp854_fu_149777_p2 = (!r2esult7_V_42_reg_218541.read().is_01() || !r2esult8_V_42_reg_218546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_42_reg_218541.read()) + sc_biguint<16>(r2esult8_V_42_reg_218546.read()));
}

void a0_conv2d_1::thread_tmp855_fu_149794_p2() {
    tmp855_fu_149794_p2 = (!r2esult6_V_42_fu_130391_p4.read().is_01() || !tmp854_fu_149777_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_42_fu_130391_p4.read()) + sc_biguint<16>(tmp854_fu_149777_p2.read()));
}

void a0_conv2d_1::thread_tmp856_fu_149810_p2() {
    tmp856_fu_149810_p2 = (!tmp853_reg_223566.read().is_01() || !tmp855_fu_149794_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp853_reg_223566.read()) + sc_biguint<16>(tmp855_fu_149794_p2.read()));
}

void a0_conv2d_1::thread_tmp857_fu_149827_p2() {
    tmp857_fu_149827_p2 = (!tmp852_fu_149771_p2.read().is_01() || !tmp856_fu_149810_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp852_fu_149771_p2.read()) + sc_biguint<16>(tmp856_fu_149810_p2.read()));
}

void a0_conv2d_1::thread_tmp858_fu_170049_p2() {
    tmp858_fu_170049_p2 = (!tmp849_reg_227486.read().is_01() || !tmp857_reg_227491.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp849_reg_227486.read()) + sc_biguint<16>(tmp857_reg_227491.read()));
}

void a0_conv2d_1::thread_tmp859_fu_170053_p2() {
    tmp859_fu_170053_p2 = (!tmp841_reg_227481.read().is_01() || !tmp858_fu_170049_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp841_reg_227481.read()) + sc_biguint<16>(tmp858_fu_170049_p2.read()));
}

void a0_conv2d_1::thread_tmp85_fu_138924_p2() {
    tmp85_fu_138924_p2 = (!result6_V_56_fu_135176_p4.read().is_01() || !tmp84_fu_138903_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_56_fu_135176_p4.read()) + sc_biguint<16>(tmp84_fu_138903_p2.read()));
}

void a0_conv2d_1::thread_tmp860_fu_149866_p2() {
    tmp860_fu_149866_p2 = (!r2esult9_V_42_fu_130404_p4.read().is_01() || !r2esult1_V_43_reg_218661.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_42_fu_130404_p4.read()) + sc_biguint<16>(r2esult1_V_43_reg_218661.read()));
}

void a0_conv2d_1::thread_tmp861_fu_149880_p2() {
    tmp861_fu_149880_p2 = (!r2esult2_V_43_reg_218666.read().is_01() || !r2esult3_V_43_fu_130534_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_43_reg_218666.read()) + sc_biguint<16>(r2esult3_V_43_fu_130534_p4.read()));
}

void a0_conv2d_1::thread_tmp862_fu_149895_p2() {
    tmp862_fu_149895_p2 = (!tmp860_fu_149866_p2.read().is_01() || !tmp861_fu_149880_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp860_fu_149866_p2.read()) + sc_biguint<16>(tmp861_fu_149880_p2.read()));
}

void a0_conv2d_1::thread_tmp863_fu_109383_p2() {
    tmp863_fu_109383_p2 = (!r2esult4_V_43_fu_102552_p4.read().is_01() || !r2esult5_V_43_fu_102565_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_43_fu_102552_p4.read()) + sc_biguint<16>(r2esult5_V_43_fu_102565_p4.read()));
}

void a0_conv2d_1::thread_tmp864_fu_149901_p2() {
    tmp864_fu_149901_p2 = (!r2esult7_V_43_reg_218681.read().is_01() || !r2esult8_V_43_reg_218686.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_43_reg_218681.read()) + sc_biguint<16>(r2esult8_V_43_reg_218686.read()));
}

void a0_conv2d_1::thread_tmp865_fu_149918_p2() {
    tmp865_fu_149918_p2 = (!r2esult6_V_43_fu_130547_p4.read().is_01() || !tmp864_fu_149901_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_43_fu_130547_p4.read()) + sc_biguint<16>(tmp864_fu_149901_p2.read()));
}

void a0_conv2d_1::thread_tmp866_fu_149934_p2() {
    tmp866_fu_149934_p2 = (!tmp863_reg_223601.read().is_01() || !tmp865_fu_149918_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp863_reg_223601.read()) + sc_biguint<16>(tmp865_fu_149918_p2.read()));
}

void a0_conv2d_1::thread_tmp867_fu_149951_p2() {
    tmp867_fu_149951_p2 = (!tmp862_fu_149895_p2.read().is_01() || !tmp866_fu_149934_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp862_fu_149895_p2.read()) + sc_biguint<16>(tmp866_fu_149934_p2.read()));
}

void a0_conv2d_1::thread_tmp868_fu_149966_p2() {
    tmp868_fu_149966_p2 = (!r2esult9_V_43_fu_130560_p4.read().is_01() || !r2esult1_V_44_reg_218791.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_43_fu_130560_p4.read()) + sc_biguint<16>(r2esult1_V_44_reg_218791.read()));
}

void a0_conv2d_1::thread_tmp869_fu_149980_p2() {
    tmp869_fu_149980_p2 = (!r2esult2_V_44_reg_218796.read().is_01() || !r2esult3_V_44_fu_130690_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_44_reg_218796.read()) + sc_biguint<16>(r2esult3_V_44_fu_130690_p4.read()));
}

void a0_conv2d_1::thread_tmp86_fu_138942_p2() {
    tmp86_fu_138942_p2 = (!tmp83_fu_138879_p2.read().is_01() || !tmp85_fu_138924_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp83_fu_138879_p2.read()) + sc_biguint<16>(tmp85_fu_138924_p2.read()));
}

void a0_conv2d_1::thread_tmp870_fu_149995_p2() {
    tmp870_fu_149995_p2 = (!tmp868_fu_149966_p2.read().is_01() || !tmp869_fu_149980_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp868_fu_149966_p2.read()) + sc_biguint<16>(tmp869_fu_149980_p2.read()));
}

void a0_conv2d_1::thread_tmp871_fu_109443_p2() {
    tmp871_fu_109443_p2 = (!r2esult4_V_44_fu_102933_p4.read().is_01() || !r2esult5_V_44_fu_102946_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_44_fu_102933_p4.read()) + sc_biguint<16>(r2esult5_V_44_fu_102946_p4.read()));
}

void a0_conv2d_1::thread_tmp872_fu_109467_p2() {
    tmp872_fu_109467_p2 = (!r2esult7_V_44_fu_102959_p4.read().is_01() || !r2esult8_V_44_fu_102972_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_44_fu_102959_p4.read()) + sc_biguint<16>(r2esult8_V_44_fu_102972_p4.read()));
}

void a0_conv2d_1::thread_tmp873_fu_150014_p2() {
    tmp873_fu_150014_p2 = (!r2esult6_V_44_fu_130703_p4.read().is_01() || !tmp872_reg_223651.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_44_fu_130703_p4.read()) + sc_biguint<16>(tmp872_reg_223651.read()));
}

void a0_conv2d_1::thread_tmp874_fu_150029_p2() {
    tmp874_fu_150029_p2 = (!tmp871_reg_223636.read().is_01() || !tmp873_fu_150014_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp871_reg_223636.read()) + sc_biguint<16>(tmp873_fu_150014_p2.read()));
}

void a0_conv2d_1::thread_tmp875_fu_150046_p2() {
    tmp875_fu_150046_p2 = (!tmp870_fu_149995_p2.read().is_01() || !tmp874_fu_150029_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp870_fu_149995_p2.read()) + sc_biguint<16>(tmp874_fu_150029_p2.read()));
}

void a0_conv2d_1::thread_tmp876_fu_150064_p2() {
    tmp876_fu_150064_p2 = (!tmp867_fu_149951_p2.read().is_01() || !tmp875_fu_150046_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp867_fu_149951_p2.read()) + sc_biguint<16>(tmp875_fu_150046_p2.read()));
}

void a0_conv2d_1::thread_tmp877_fu_150079_p2() {
    tmp877_fu_150079_p2 = (!r2esult9_V_44_fu_130716_p4.read().is_01() || !r2esult1_V_45_reg_218901.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_44_fu_130716_p4.read()) + sc_biguint<16>(r2esult1_V_45_reg_218901.read()));
}

void a0_conv2d_1::thread_tmp878_fu_150093_p2() {
    tmp878_fu_150093_p2 = (!r2esult2_V_45_reg_218906.read().is_01() || !r2esult3_V_45_fu_130846_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_45_reg_218906.read()) + sc_biguint<16>(r2esult3_V_45_fu_130846_p4.read()));
}

void a0_conv2d_1::thread_tmp879_fu_150108_p2() {
    tmp879_fu_150108_p2 = (!tmp877_fu_150079_p2.read().is_01() || !tmp878_fu_150093_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp877_fu_150079_p2.read()) + sc_biguint<16>(tmp878_fu_150093_p2.read()));
}

void a0_conv2d_1::thread_tmp87_fu_138960_p2() {
    tmp87_fu_138960_p2 = (!tmp82_fu_138855_p2.read().is_01() || !tmp86_fu_138942_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp82_fu_138855_p2.read()) + sc_biguint<16>(tmp86_fu_138942_p2.read()));
}

void a0_conv2d_1::thread_tmp880_fu_109509_p2() {
    tmp880_fu_109509_p2 = (!r2esult4_V_45_fu_103314_p4.read().is_01() || !r2esult5_V_45_fu_103327_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_45_fu_103314_p4.read()) + sc_biguint<16>(r2esult5_V_45_fu_103327_p4.read()));
}

void a0_conv2d_1::thread_tmp881_fu_150114_p2() {
    tmp881_fu_150114_p2 = (!r2esult7_V_45_reg_218921.read().is_01() || !r2esult8_V_45_reg_218926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_45_reg_218921.read()) + sc_biguint<16>(r2esult8_V_45_reg_218926.read()));
}

void a0_conv2d_1::thread_tmp882_fu_150131_p2() {
    tmp882_fu_150131_p2 = (!r2esult6_V_45_fu_130859_p4.read().is_01() || !tmp881_fu_150114_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_45_fu_130859_p4.read()) + sc_biguint<16>(tmp881_fu_150114_p2.read()));
}

void a0_conv2d_1::thread_tmp883_fu_150147_p2() {
    tmp883_fu_150147_p2 = (!tmp880_reg_223676.read().is_01() || !tmp882_fu_150131_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp880_reg_223676.read()) + sc_biguint<16>(tmp882_fu_150131_p2.read()));
}

void a0_conv2d_1::thread_tmp884_fu_150164_p2() {
    tmp884_fu_150164_p2 = (!tmp879_fu_150108_p2.read().is_01() || !tmp883_fu_150147_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp879_fu_150108_p2.read()) + sc_biguint<16>(tmp883_fu_150147_p2.read()));
}

void a0_conv2d_1::thread_tmp885_fu_150179_p2() {
    tmp885_fu_150179_p2 = (!r2esult9_V_45_fu_130872_p4.read().is_01() || !r2esult1_V_46_reg_219031.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult9_V_45_fu_130872_p4.read()) + sc_biguint<16>(r2esult1_V_46_reg_219031.read()));
}

void a0_conv2d_1::thread_tmp886_fu_150193_p2() {
    tmp886_fu_150193_p2 = (!r2esult2_V_46_reg_219036.read().is_01() || !r2esult3_V_46_fu_131002_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult2_V_46_reg_219036.read()) + sc_biguint<16>(r2esult3_V_46_fu_131002_p4.read()));
}

void a0_conv2d_1::thread_tmp887_fu_150208_p2() {
    tmp887_fu_150208_p2 = (!tmp885_fu_150179_p2.read().is_01() || !tmp886_fu_150193_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp885_fu_150179_p2.read()) + sc_biguint<16>(tmp886_fu_150193_p2.read()));
}

void a0_conv2d_1::thread_tmp888_fu_109569_p2() {
    tmp888_fu_109569_p2 = (!r2esult4_V_46_fu_103695_p4.read().is_01() || !r2esult5_V_46_fu_103708_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult4_V_46_fu_103695_p4.read()) + sc_biguint<16>(r2esult5_V_46_fu_103708_p4.read()));
}

void a0_conv2d_1::thread_tmp889_fu_109593_p2() {
    tmp889_fu_109593_p2 = (!r2esult7_V_46_fu_103721_p4.read().is_01() || !r2esult8_V_46_fu_103734_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult7_V_46_fu_103721_p4.read()) + sc_biguint<16>(r2esult8_V_46_fu_103734_p4.read()));
}

void a0_conv2d_1::thread_tmp88_fu_138978_p2() {
    tmp88_fu_138978_p2 = (!tmp79_fu_138789_p2.read().is_01() || !tmp87_fu_138960_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp79_fu_138789_p2.read()) + sc_biguint<16>(tmp87_fu_138960_p2.read()));
}

void a0_conv2d_1::thread_tmp890_fu_150227_p2() {
    tmp890_fu_150227_p2 = (!r2esult6_V_46_fu_131015_p4.read().is_01() || !tmp889_reg_223726.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_46_fu_131015_p4.read()) + sc_biguint<16>(tmp889_reg_223726.read()));
}

void a0_conv2d_1::thread_tmp891_fu_150242_p2() {
    tmp891_fu_150242_p2 = (!tmp888_reg_223711.read().is_01() || !tmp890_fu_150227_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp888_reg_223711.read()) + sc_biguint<16>(tmp890_fu_150227_p2.read()));
}

void a0_conv2d_1::thread_tmp892_fu_150259_p2() {
    tmp892_fu_150259_p2 = (!tmp887_fu_150208_p2.read().is_01() || !tmp891_fu_150242_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp887_fu_150208_p2.read()) + sc_biguint<16>(tmp891_fu_150242_p2.read()));
}

void a0_conv2d_1::thread_tmp893_fu_150277_p2() {
    tmp893_fu_150277_p2 = (!tmp884_fu_150164_p2.read().is_01() || !tmp892_fu_150259_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp884_fu_150164_p2.read()) + sc_biguint<16>(tmp892_fu_150259_p2.read()));
}

void a0_conv2d_1::thread_tmp894_fu_170062_p2() {
    tmp894_fu_170062_p2 = (!tmp876_reg_227516.read().is_01() || !tmp893_reg_227521.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp876_reg_227516.read()) + sc_biguint<16>(tmp893_reg_227521.read()));
}

void a0_conv2d_1::thread_tmp895_fu_170075_p2() {
    tmp895_fu_170075_p2 = (!tmp859_fu_170053_p2.read().is_01() || !tmp894_fu_170062_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp859_fu_170053_p2.read()) + sc_biguint<16>(tmp894_fu_170062_p2.read()));
}

void a0_conv2d_1::thread_tmp896_fu_170093_p2() {
    tmp896_fu_170093_p2 = (!tmp824_fu_170043_p2.read().is_01() || !tmp895_fu_170075_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp824_fu_170043_p2.read()) + sc_biguint<16>(tmp895_fu_170075_p2.read()));
}

void a0_conv2d_1::thread_tmp897_fu_170111_p2() {
    tmp897_fu_170111_p2 = (!tmp753_fu_170006_p2.read().is_01() || !tmp896_fu_170093_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp753_fu_170006_p2.read()) + sc_biguint<16>(tmp896_fu_170093_p2.read()));
}

void a0_conv2d_1::thread_tmp898_fu_109617_p2() {
    tmp898_fu_109617_p2 = (!r2esult1_V_fu_85762_p4.read().is_01() || !r2esult2_V_fu_85775_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_fu_85762_p4.read()) + sc_biguint<16>(r2esult2_V_fu_85775_p4.read()));
}

void a0_conv2d_1::thread_tmp899_fu_150298_p2() {
    tmp899_fu_150298_p2 = (!r2esult3_V_fu_123670_p4.read().is_01() || !r2esult4_V_reg_213076.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_fu_123670_p4.read()) + sc_biguint<16>(r2esult4_V_reg_213076.read()));
}

void a0_conv2d_1::thread_tmp89_fu_139002_p2() {
    tmp89_fu_139002_p2 = (!result9_V_56_fu_135213_p4.read().is_01() || !result1_V_57_fu_135558_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_56_fu_135213_p4.read()) + sc_biguint<16>(result1_V_57_fu_135558_p4.read()));
}

void a0_conv2d_1::thread_tmp900_fu_150312_p2() {
    tmp900_fu_150312_p2 = (!tmp898_reg_223741.read().is_01() || !tmp899_fu_150298_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp898_reg_223741.read()) + sc_biguint<16>(tmp899_fu_150298_p2.read()));
}

void a0_conv2d_1::thread_tmp901_fu_150326_p2() {
    tmp901_fu_150326_p2 = (!r2esult5_V_reg_213081.read().is_01() || !r2esult6_V_fu_123683_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_reg_213081.read()) + sc_biguint<16>(r2esult6_V_fu_123683_p4.read()));
}

void a0_conv2d_1::thread_tmp902_fu_109659_p2() {
    tmp902_fu_109659_p2 = (!r2esult1_V_1_fu_86143_p4.read().is_01() || !r2esult7_V_fu_85814_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_1_fu_86143_p4.read()) + sc_biguint<16>(r2esult7_V_fu_85814_p4.read()));
}

void a0_conv2d_1::thread_tmp903_fu_109680_p2() {
    tmp903_fu_109680_p2 = (!r2esult8_V_fu_85827_p4.read().is_01() || !tmp902_fu_109659_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_fu_85827_p4.read()) + sc_biguint<16>(tmp902_fu_109659_p2.read()));
}

void a0_conv2d_1::thread_tmp904_fu_150336_p2() {
    tmp904_fu_150336_p2 = (!tmp901_fu_150326_p2.read().is_01() || !tmp903_reg_223756.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp901_fu_150326_p2.read()) + sc_biguint<16>(tmp903_reg_223756.read()));
}

void a0_conv2d_1::thread_tmp905_fu_150352_p2() {
    tmp905_fu_150352_p2 = (!tmp900_fu_150312_p2.read().is_01() || !tmp904_fu_150336_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp900_fu_150312_p2.read()) + sc_biguint<16>(tmp904_fu_150336_p2.read()));
}

void a0_conv2d_1::thread_tmp906_fu_150376_p2() {
    tmp906_fu_150376_p2 = (!r2esult3_V_1_fu_123826_p4.read().is_01() || !r2esult9_V_fu_123696_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_1_fu_123826_p4.read()) + sc_biguint<16>(r2esult9_V_fu_123696_p4.read()));
}

void a0_conv2d_1::thread_tmp907_fu_150382_p2() {
    tmp907_fu_150382_p2 = (!r2esult5_V_1_reg_213196.read().is_01() || !r2esult2_V_1_reg_213181.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_1_reg_213196.read()) + sc_biguint<16>(r2esult2_V_1_reg_213181.read()));
}

void a0_conv2d_1::thread_tmp908_fu_150392_p2() {
    tmp908_fu_150392_p2 = (!tmp906_fu_150376_p2.read().is_01() || !tmp907_fu_150382_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp906_fu_150376_p2.read()) + sc_biguint<16>(tmp907_fu_150382_p2.read()));
}

void a0_conv2d_1::thread_tmp909_fu_150407_p2() {
    tmp909_fu_150407_p2 = (!r2esult6_V_1_fu_123839_p4.read().is_01() || !r2esult4_V_1_reg_213191.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_1_fu_123839_p4.read()) + sc_biguint<16>(r2esult4_V_1_reg_213191.read()));
}

void a0_conv2d_1::thread_tmp90_fu_139026_p2() {
    tmp90_fu_139026_p2 = (!result2_V_57_fu_135570_p4.read().is_01() || !result3_V_57_fu_135583_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_57_fu_135570_p4.read()) + sc_biguint<16>(result3_V_57_fu_135583_p4.read()));
}

void a0_conv2d_1::thread_tmp910_fu_109743_p2() {
    tmp910_fu_109743_p2 = (!r2esult1_V_2_fu_86524_p4.read().is_01() || !r2esult7_V_1_fu_86195_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_2_fu_86524_p4.read()) + sc_biguint<16>(r2esult7_V_1_fu_86195_p4.read()));
}

void a0_conv2d_1::thread_tmp911_fu_150412_p2() {
    tmp911_fu_150412_p2 = (!r2esult8_V_1_reg_213206.read().is_01() || !tmp910_reg_223776.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_1_reg_213206.read()) + sc_biguint<16>(tmp910_reg_223776.read()));
}

void a0_conv2d_1::thread_tmp912_fu_150421_p2() {
    tmp912_fu_150421_p2 = (!tmp909_fu_150407_p2.read().is_01() || !tmp911_fu_150412_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp909_fu_150407_p2.read()) + sc_biguint<16>(tmp911_fu_150412_p2.read()));
}

void a0_conv2d_1::thread_tmp913_fu_150437_p2() {
    tmp913_fu_150437_p2 = (!tmp908_fu_150392_p2.read().is_01() || !tmp912_fu_150421_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp908_fu_150392_p2.read()) + sc_biguint<16>(tmp912_fu_150421_p2.read()));
}

void a0_conv2d_1::thread_tmp914_fu_150455_p2() {
    tmp914_fu_150455_p2 = (!tmp905_fu_150352_p2.read().is_01() || !tmp913_fu_150437_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp905_fu_150352_p2.read()) + sc_biguint<16>(tmp913_fu_150437_p2.read()));
}

void a0_conv2d_1::thread_tmp915_fu_150479_p2() {
    tmp915_fu_150479_p2 = (!r2esult3_V_2_fu_123982_p4.read().is_01() || !r2esult9_V_1_fu_123852_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_2_fu_123982_p4.read()) + sc_biguint<16>(r2esult9_V_1_fu_123852_p4.read()));
}

void a0_conv2d_1::thread_tmp916_fu_150485_p2() {
    tmp916_fu_150485_p2 = (!r2esult5_V_2_reg_213331.read().is_01() || !r2esult2_V_2_reg_213316.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_2_reg_213331.read()) + sc_biguint<16>(r2esult2_V_2_reg_213316.read()));
}

void a0_conv2d_1::thread_tmp917_fu_150495_p2() {
    tmp917_fu_150495_p2 = (!tmp915_fu_150479_p2.read().is_01() || !tmp916_fu_150485_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp915_fu_150479_p2.read()) + sc_biguint<16>(tmp916_fu_150485_p2.read()));
}

void a0_conv2d_1::thread_tmp918_fu_150510_p2() {
    tmp918_fu_150510_p2 = (!r2esult6_V_2_fu_123995_p4.read().is_01() || !r2esult4_V_2_reg_213326.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_2_fu_123995_p4.read()) + sc_biguint<16>(r2esult4_V_2_reg_213326.read()));
}

void a0_conv2d_1::thread_tmp919_fu_109821_p2() {
    tmp919_fu_109821_p2 = (!r2esult1_V_3_fu_86905_p4.read().is_01() || !r2esult7_V_2_fu_86576_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_3_fu_86905_p4.read()) + sc_biguint<16>(r2esult7_V_2_fu_86576_p4.read()));
}

void a0_conv2d_1::thread_tmp91_fu_139044_p2() {
    tmp91_fu_139044_p2 = (!tmp89_fu_139002_p2.read().is_01() || !tmp90_fu_139026_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp89_fu_139002_p2.read()) + sc_biguint<16>(tmp90_fu_139026_p2.read()));
}

void a0_conv2d_1::thread_tmp920_fu_109842_p2() {
    tmp920_fu_109842_p2 = (!r2esult8_V_2_fu_86589_p4.read().is_01() || !tmp919_fu_109821_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_2_fu_86589_p4.read()) + sc_biguint<16>(tmp919_fu_109821_p2.read()));
}

void a0_conv2d_1::thread_tmp921_fu_150520_p2() {
    tmp921_fu_150520_p2 = (!tmp918_fu_150510_p2.read().is_01() || !tmp920_reg_223796.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp918_fu_150510_p2.read()) + sc_biguint<16>(tmp920_reg_223796.read()));
}

void a0_conv2d_1::thread_tmp922_fu_150535_p2() {
    tmp922_fu_150535_p2 = (!tmp917_fu_150495_p2.read().is_01() || !tmp921_fu_150520_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp917_fu_150495_p2.read()) + sc_biguint<16>(tmp921_fu_150520_p2.read()));
}

void a0_conv2d_1::thread_tmp923_fu_150559_p2() {
    tmp923_fu_150559_p2 = (!r2esult3_V_3_fu_124138_p4.read().is_01() || !r2esult9_V_2_fu_124008_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_3_fu_124138_p4.read()) + sc_biguint<16>(r2esult9_V_2_fu_124008_p4.read()));
}

void a0_conv2d_1::thread_tmp924_fu_150565_p2() {
    tmp924_fu_150565_p2 = (!r2esult5_V_3_reg_213451.read().is_01() || !r2esult2_V_3_reg_213436.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_3_reg_213451.read()) + sc_biguint<16>(r2esult2_V_3_reg_213436.read()));
}

void a0_conv2d_1::thread_tmp925_fu_150575_p2() {
    tmp925_fu_150575_p2 = (!tmp923_fu_150559_p2.read().is_01() || !tmp924_fu_150565_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp923_fu_150559_p2.read()) + sc_biguint<16>(tmp924_fu_150565_p2.read()));
}

void a0_conv2d_1::thread_tmp926_fu_150590_p2() {
    tmp926_fu_150590_p2 = (!r2esult6_V_3_fu_124151_p4.read().is_01() || !r2esult4_V_3_reg_213446.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_3_fu_124151_p4.read()) + sc_biguint<16>(r2esult4_V_3_reg_213446.read()));
}

void a0_conv2d_1::thread_tmp927_fu_109905_p2() {
    tmp927_fu_109905_p2 = (!r2esult1_V_4_fu_87286_p4.read().is_01() || !r2esult7_V_3_fu_86957_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_4_fu_87286_p4.read()) + sc_biguint<16>(r2esult7_V_3_fu_86957_p4.read()));
}

void a0_conv2d_1::thread_tmp928_fu_109926_p2() {
    tmp928_fu_109926_p2 = (!r2esult8_V_3_fu_86970_p4.read().is_01() || !tmp927_fu_109905_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_3_fu_86970_p4.read()) + sc_biguint<16>(tmp927_fu_109905_p2.read()));
}

void a0_conv2d_1::thread_tmp929_fu_150600_p2() {
    tmp929_fu_150600_p2 = (!tmp926_fu_150590_p2.read().is_01() || !tmp928_reg_223816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp926_fu_150590_p2.read()) + sc_biguint<16>(tmp928_reg_223816.read()));
}

void a0_conv2d_1::thread_tmp92_fu_139068_p2() {
    tmp92_fu_139068_p2 = (!result4_V_57_fu_135595_p4.read().is_01() || !result5_V_57_fu_135607_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_57_fu_135595_p4.read()) + sc_biguint<16>(result5_V_57_fu_135607_p4.read()));
}

void a0_conv2d_1::thread_tmp930_fu_150615_p2() {
    tmp930_fu_150615_p2 = (!tmp925_fu_150575_p2.read().is_01() || !tmp929_fu_150600_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp925_fu_150575_p2.read()) + sc_biguint<16>(tmp929_fu_150600_p2.read()));
}

void a0_conv2d_1::thread_tmp931_fu_150633_p2() {
    tmp931_fu_150633_p2 = (!tmp922_fu_150535_p2.read().is_01() || !tmp930_fu_150615_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp922_fu_150535_p2.read()) + sc_biguint<16>(tmp930_fu_150615_p2.read()));
}

void a0_conv2d_1::thread_tmp932_fu_150651_p2() {
    tmp932_fu_150651_p2 = (!tmp914_fu_150455_p2.read().is_01() || !tmp931_fu_150633_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp914_fu_150455_p2.read()) + sc_biguint<16>(tmp931_fu_150633_p2.read()));
}

void a0_conv2d_1::thread_tmp933_fu_150675_p2() {
    tmp933_fu_150675_p2 = (!r2esult3_V_4_fu_124294_p4.read().is_01() || !r2esult9_V_3_fu_124164_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_4_fu_124294_p4.read()) + sc_biguint<16>(r2esult9_V_3_fu_124164_p4.read()));
}

void a0_conv2d_1::thread_tmp934_fu_150681_p2() {
    tmp934_fu_150681_p2 = (!r2esult5_V_4_reg_213571.read().is_01() || !r2esult2_V_4_reg_213556.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_4_reg_213571.read()) + sc_biguint<16>(r2esult2_V_4_reg_213556.read()));
}

void a0_conv2d_1::thread_tmp935_fu_150691_p2() {
    tmp935_fu_150691_p2 = (!tmp933_fu_150675_p2.read().is_01() || !tmp934_fu_150681_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp933_fu_150675_p2.read()) + sc_biguint<16>(tmp934_fu_150681_p2.read()));
}

void a0_conv2d_1::thread_tmp936_fu_150706_p2() {
    tmp936_fu_150706_p2 = (!r2esult6_V_4_fu_124307_p4.read().is_01() || !r2esult4_V_4_reg_213566.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_4_fu_124307_p4.read()) + sc_biguint<16>(r2esult4_V_4_reg_213566.read()));
}

void a0_conv2d_1::thread_tmp937_fu_109989_p2() {
    tmp937_fu_109989_p2 = (!r2esult1_V_5_fu_87667_p4.read().is_01() || !r2esult7_V_4_fu_87338_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_5_fu_87667_p4.read()) + sc_biguint<16>(r2esult7_V_4_fu_87338_p4.read()));
}

void a0_conv2d_1::thread_tmp938_fu_110010_p2() {
    tmp938_fu_110010_p2 = (!r2esult8_V_4_fu_87351_p4.read().is_01() || !tmp937_fu_109989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_4_fu_87351_p4.read()) + sc_biguint<16>(tmp937_fu_109989_p2.read()));
}

void a0_conv2d_1::thread_tmp939_fu_150716_p2() {
    tmp939_fu_150716_p2 = (!tmp936_fu_150706_p2.read().is_01() || !tmp938_reg_223836.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp936_fu_150706_p2.read()) + sc_biguint<16>(tmp938_reg_223836.read()));
}

void a0_conv2d_1::thread_tmp93_fu_139092_p2() {
    tmp93_fu_139092_p2 = (!result7_V_57_fu_135632_p4.read().is_01() || !result8_V_57_fu_135644_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_57_fu_135632_p4.read()) + sc_biguint<16>(result8_V_57_fu_135644_p4.read()));
}

void a0_conv2d_1::thread_tmp940_fu_150731_p2() {
    tmp940_fu_150731_p2 = (!tmp935_fu_150691_p2.read().is_01() || !tmp939_fu_150716_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp935_fu_150691_p2.read()) + sc_biguint<16>(tmp939_fu_150716_p2.read()));
}

void a0_conv2d_1::thread_tmp941_fu_150755_p2() {
    tmp941_fu_150755_p2 = (!r2esult3_V_5_fu_124450_p4.read().is_01() || !r2esult9_V_4_fu_124320_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_5_fu_124450_p4.read()) + sc_biguint<16>(r2esult9_V_4_fu_124320_p4.read()));
}

void a0_conv2d_1::thread_tmp942_fu_150761_p2() {
    tmp942_fu_150761_p2 = (!r2esult5_V_5_reg_213696.read().is_01() || !r2esult2_V_5_reg_213681.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_5_reg_213696.read()) + sc_biguint<16>(r2esult2_V_5_reg_213681.read()));
}

void a0_conv2d_1::thread_tmp943_fu_150771_p2() {
    tmp943_fu_150771_p2 = (!tmp941_fu_150755_p2.read().is_01() || !tmp942_fu_150761_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp941_fu_150755_p2.read()) + sc_biguint<16>(tmp942_fu_150761_p2.read()));
}

void a0_conv2d_1::thread_tmp944_fu_150786_p2() {
    tmp944_fu_150786_p2 = (!r2esult6_V_5_fu_124463_p4.read().is_01() || !r2esult4_V_5_reg_213691.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_5_fu_124463_p4.read()) + sc_biguint<16>(r2esult4_V_5_reg_213691.read()));
}

void a0_conv2d_1::thread_tmp945_fu_110073_p2() {
    tmp945_fu_110073_p2 = (!r2esult1_V_6_fu_88048_p4.read().is_01() || !r2esult7_V_5_fu_87719_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_6_fu_88048_p4.read()) + sc_biguint<16>(r2esult7_V_5_fu_87719_p4.read()));
}

void a0_conv2d_1::thread_tmp946_fu_150791_p2() {
    tmp946_fu_150791_p2 = (!r2esult8_V_5_reg_213706.read().is_01() || !tmp945_reg_223856.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_5_reg_213706.read()) + sc_biguint<16>(tmp945_reg_223856.read()));
}

void a0_conv2d_1::thread_tmp947_fu_150800_p2() {
    tmp947_fu_150800_p2 = (!tmp944_fu_150786_p2.read().is_01() || !tmp946_fu_150791_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp944_fu_150786_p2.read()) + sc_biguint<16>(tmp946_fu_150791_p2.read()));
}

void a0_conv2d_1::thread_tmp948_fu_150816_p2() {
    tmp948_fu_150816_p2 = (!tmp943_fu_150771_p2.read().is_01() || !tmp947_fu_150800_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp943_fu_150771_p2.read()) + sc_biguint<16>(tmp947_fu_150800_p2.read()));
}

void a0_conv2d_1::thread_tmp949_fu_150834_p2() {
    tmp949_fu_150834_p2 = (!tmp940_fu_150731_p2.read().is_01() || !tmp948_fu_150816_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp940_fu_150731_p2.read()) + sc_biguint<16>(tmp948_fu_150816_p2.read()));
}

void a0_conv2d_1::thread_tmp94_fu_139113_p2() {
    tmp94_fu_139113_p2 = (!result6_V_57_fu_135620_p4.read().is_01() || !tmp93_fu_139092_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_57_fu_135620_p4.read()) + sc_biguint<16>(tmp93_fu_139092_p2.read()));
}

void a0_conv2d_1::thread_tmp950_fu_150858_p2() {
    tmp950_fu_150858_p2 = (!r2esult3_V_6_fu_124606_p4.read().is_01() || !r2esult9_V_5_fu_124476_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_6_fu_124606_p4.read()) + sc_biguint<16>(r2esult9_V_5_fu_124476_p4.read()));
}

void a0_conv2d_1::thread_tmp951_fu_150864_p2() {
    tmp951_fu_150864_p2 = (!r2esult5_V_6_reg_213831.read().is_01() || !r2esult2_V_6_reg_213816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_6_reg_213831.read()) + sc_biguint<16>(r2esult2_V_6_reg_213816.read()));
}

void a0_conv2d_1::thread_tmp952_fu_150874_p2() {
    tmp952_fu_150874_p2 = (!tmp950_fu_150858_p2.read().is_01() || !tmp951_fu_150864_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp950_fu_150858_p2.read()) + sc_biguint<16>(tmp951_fu_150864_p2.read()));
}

void a0_conv2d_1::thread_tmp953_fu_150889_p2() {
    tmp953_fu_150889_p2 = (!r2esult6_V_6_fu_124619_p4.read().is_01() || !r2esult4_V_6_reg_213826.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_6_fu_124619_p4.read()) + sc_biguint<16>(r2esult4_V_6_reg_213826.read()));
}

void a0_conv2d_1::thread_tmp954_fu_110151_p2() {
    tmp954_fu_110151_p2 = (!r2esult1_V_7_fu_88429_p4.read().is_01() || !r2esult7_V_6_fu_88100_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_7_fu_88429_p4.read()) + sc_biguint<16>(r2esult7_V_6_fu_88100_p4.read()));
}

void a0_conv2d_1::thread_tmp955_fu_110172_p2() {
    tmp955_fu_110172_p2 = (!r2esult8_V_6_fu_88113_p4.read().is_01() || !tmp954_fu_110151_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_6_fu_88113_p4.read()) + sc_biguint<16>(tmp954_fu_110151_p2.read()));
}

void a0_conv2d_1::thread_tmp956_fu_150899_p2() {
    tmp956_fu_150899_p2 = (!tmp953_fu_150889_p2.read().is_01() || !tmp955_reg_223876.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp953_fu_150889_p2.read()) + sc_biguint<16>(tmp955_reg_223876.read()));
}

void a0_conv2d_1::thread_tmp957_fu_150914_p2() {
    tmp957_fu_150914_p2 = (!tmp952_fu_150874_p2.read().is_01() || !tmp956_fu_150899_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp952_fu_150874_p2.read()) + sc_biguint<16>(tmp956_fu_150899_p2.read()));
}

void a0_conv2d_1::thread_tmp958_fu_150938_p2() {
    tmp958_fu_150938_p2 = (!r2esult3_V_7_fu_124762_p4.read().is_01() || !r2esult9_V_6_fu_124632_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_7_fu_124762_p4.read()) + sc_biguint<16>(r2esult9_V_6_fu_124632_p4.read()));
}

void a0_conv2d_1::thread_tmp959_fu_150944_p2() {
    tmp959_fu_150944_p2 = (!r2esult5_V_7_reg_213956.read().is_01() || !r2esult2_V_7_reg_213941.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_7_reg_213956.read()) + sc_biguint<16>(r2esult2_V_7_reg_213941.read()));
}

void a0_conv2d_1::thread_tmp95_fu_139131_p2() {
    tmp95_fu_139131_p2 = (!tmp92_fu_139068_p2.read().is_01() || !tmp94_fu_139113_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp92_fu_139068_p2.read()) + sc_biguint<16>(tmp94_fu_139113_p2.read()));
}

void a0_conv2d_1::thread_tmp960_fu_150954_p2() {
    tmp960_fu_150954_p2 = (!tmp958_fu_150938_p2.read().is_01() || !tmp959_fu_150944_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp958_fu_150938_p2.read()) + sc_biguint<16>(tmp959_fu_150944_p2.read()));
}

void a0_conv2d_1::thread_tmp961_fu_150969_p2() {
    tmp961_fu_150969_p2 = (!r2esult6_V_7_fu_124775_p4.read().is_01() || !r2esult4_V_7_reg_213951.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_7_fu_124775_p4.read()) + sc_biguint<16>(r2esult4_V_7_reg_213951.read()));
}

void a0_conv2d_1::thread_tmp962_fu_110235_p2() {
    tmp962_fu_110235_p2 = (!r2esult1_V_8_fu_88810_p4.read().is_01() || !r2esult7_V_7_fu_88481_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_8_fu_88810_p4.read()) + sc_biguint<16>(r2esult7_V_7_fu_88481_p4.read()));
}

void a0_conv2d_1::thread_tmp963_fu_150974_p2() {
    tmp963_fu_150974_p2 = (!r2esult8_V_7_reg_213966.read().is_01() || !tmp962_reg_223896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_7_reg_213966.read()) + sc_biguint<16>(tmp962_reg_223896.read()));
}

void a0_conv2d_1::thread_tmp964_fu_150983_p2() {
    tmp964_fu_150983_p2 = (!tmp961_fu_150969_p2.read().is_01() || !tmp963_fu_150974_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp961_fu_150969_p2.read()) + sc_biguint<16>(tmp963_fu_150974_p2.read()));
}

void a0_conv2d_1::thread_tmp965_fu_150999_p2() {
    tmp965_fu_150999_p2 = (!tmp960_fu_150954_p2.read().is_01() || !tmp964_fu_150983_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp960_fu_150954_p2.read()) + sc_biguint<16>(tmp964_fu_150983_p2.read()));
}

void a0_conv2d_1::thread_tmp966_fu_151017_p2() {
    tmp966_fu_151017_p2 = (!tmp957_fu_150914_p2.read().is_01() || !tmp965_fu_150999_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp957_fu_150914_p2.read()) + sc_biguint<16>(tmp965_fu_150999_p2.read()));
}

void a0_conv2d_1::thread_tmp967_fu_170117_p2() {
    tmp967_fu_170117_p2 = (!tmp949_reg_227546.read().is_01() || !tmp966_reg_227551.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp949_reg_227546.read()) + sc_biguint<16>(tmp966_reg_227551.read()));
}

void a0_conv2d_1::thread_tmp968_fu_170125_p2() {
    tmp968_fu_170125_p2 = (!tmp932_reg_227541.read().is_01() || !tmp967_fu_170117_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp932_reg_227541.read()) + sc_biguint<16>(tmp967_fu_170117_p2.read()));
}

void a0_conv2d_1::thread_tmp969_fu_151059_p2() {
    tmp969_fu_151059_p2 = (!r2esult3_V_8_fu_124918_p4.read().is_01() || !r2esult9_V_7_fu_124788_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_8_fu_124918_p4.read()) + sc_biguint<16>(r2esult9_V_7_fu_124788_p4.read()));
}

void a0_conv2d_1::thread_tmp96_fu_139149_p2() {
    tmp96_fu_139149_p2 = (!tmp91_fu_139044_p2.read().is_01() || !tmp95_fu_139131_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp91_fu_139044_p2.read()) + sc_biguint<16>(tmp95_fu_139131_p2.read()));
}

void a0_conv2d_1::thread_tmp970_fu_151065_p2() {
    tmp970_fu_151065_p2 = (!r2esult5_V_8_reg_214091.read().is_01() || !r2esult2_V_8_reg_214076.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_8_reg_214091.read()) + sc_biguint<16>(r2esult2_V_8_reg_214076.read()));
}

void a0_conv2d_1::thread_tmp971_fu_151075_p2() {
    tmp971_fu_151075_p2 = (!tmp969_fu_151059_p2.read().is_01() || !tmp970_fu_151065_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp969_fu_151059_p2.read()) + sc_biguint<16>(tmp970_fu_151065_p2.read()));
}

void a0_conv2d_1::thread_tmp972_fu_151090_p2() {
    tmp972_fu_151090_p2 = (!r2esult6_V_8_fu_124931_p4.read().is_01() || !r2esult4_V_8_reg_214086.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_8_fu_124931_p4.read()) + sc_biguint<16>(r2esult4_V_8_reg_214086.read()));
}

void a0_conv2d_1::thread_tmp973_fu_110313_p2() {
    tmp973_fu_110313_p2 = (!r2esult1_V_9_fu_89191_p4.read().is_01() || !r2esult7_V_8_fu_88862_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_9_fu_89191_p4.read()) + sc_biguint<16>(r2esult7_V_8_fu_88862_p4.read()));
}

void a0_conv2d_1::thread_tmp974_fu_110334_p2() {
    tmp974_fu_110334_p2 = (!r2esult8_V_8_fu_88875_p4.read().is_01() || !tmp973_fu_110313_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_8_fu_88875_p4.read()) + sc_biguint<16>(tmp973_fu_110313_p2.read()));
}

void a0_conv2d_1::thread_tmp975_fu_151100_p2() {
    tmp975_fu_151100_p2 = (!tmp972_fu_151090_p2.read().is_01() || !tmp974_reg_223916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp972_fu_151090_p2.read()) + sc_biguint<16>(tmp974_reg_223916.read()));
}

void a0_conv2d_1::thread_tmp976_fu_151115_p2() {
    tmp976_fu_151115_p2 = (!tmp971_fu_151075_p2.read().is_01() || !tmp975_fu_151100_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp971_fu_151075_p2.read()) + sc_biguint<16>(tmp975_fu_151100_p2.read()));
}

void a0_conv2d_1::thread_tmp977_fu_151139_p2() {
    tmp977_fu_151139_p2 = (!r2esult3_V_9_fu_125074_p4.read().is_01() || !r2esult9_V_8_fu_124944_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_9_fu_125074_p4.read()) + sc_biguint<16>(r2esult9_V_8_fu_124944_p4.read()));
}

void a0_conv2d_1::thread_tmp978_fu_151145_p2() {
    tmp978_fu_151145_p2 = (!r2esult5_V_9_reg_214216.read().is_01() || !r2esult2_V_9_reg_214201.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_9_reg_214216.read()) + sc_biguint<16>(r2esult2_V_9_reg_214201.read()));
}

void a0_conv2d_1::thread_tmp979_fu_151155_p2() {
    tmp979_fu_151155_p2 = (!tmp977_fu_151139_p2.read().is_01() || !tmp978_fu_151145_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp977_fu_151139_p2.read()) + sc_biguint<16>(tmp978_fu_151145_p2.read()));
}

void a0_conv2d_1::thread_tmp97_fu_139173_p2() {
    tmp97_fu_139173_p2 = (!result9_V_57_fu_135657_p4.read().is_01() || !result1_V_58_fu_136002_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_57_fu_135657_p4.read()) + sc_biguint<16>(result1_V_58_fu_136002_p4.read()));
}

void a0_conv2d_1::thread_tmp980_fu_151170_p2() {
    tmp980_fu_151170_p2 = (!r2esult6_V_9_fu_125087_p4.read().is_01() || !r2esult4_V_9_reg_214211.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_9_fu_125087_p4.read()) + sc_biguint<16>(r2esult4_V_9_reg_214211.read()));
}

void a0_conv2d_1::thread_tmp981_fu_110397_p2() {
    tmp981_fu_110397_p2 = (!r2esult1_V_s_fu_89572_p4.read().is_01() || !r2esult7_V_9_fu_89243_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_s_fu_89572_p4.read()) + sc_biguint<16>(r2esult7_V_9_fu_89243_p4.read()));
}

void a0_conv2d_1::thread_tmp982_fu_151175_p2() {
    tmp982_fu_151175_p2 = (!r2esult8_V_9_reg_214226.read().is_01() || !tmp981_reg_223936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_9_reg_214226.read()) + sc_biguint<16>(tmp981_reg_223936.read()));
}

void a0_conv2d_1::thread_tmp983_fu_151184_p2() {
    tmp983_fu_151184_p2 = (!tmp980_fu_151170_p2.read().is_01() || !tmp982_fu_151175_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp980_fu_151170_p2.read()) + sc_biguint<16>(tmp982_fu_151175_p2.read()));
}

void a0_conv2d_1::thread_tmp984_fu_151200_p2() {
    tmp984_fu_151200_p2 = (!tmp979_fu_151155_p2.read().is_01() || !tmp983_fu_151184_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp979_fu_151155_p2.read()) + sc_biguint<16>(tmp983_fu_151184_p2.read()));
}

void a0_conv2d_1::thread_tmp985_fu_151218_p2() {
    tmp985_fu_151218_p2 = (!tmp976_fu_151115_p2.read().is_01() || !tmp984_fu_151200_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp976_fu_151115_p2.read()) + sc_biguint<16>(tmp984_fu_151200_p2.read()));
}

void a0_conv2d_1::thread_tmp986_fu_151242_p2() {
    tmp986_fu_151242_p2 = (!r2esult3_V_s_fu_125230_p4.read().is_01() || !r2esult9_V_9_fu_125100_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_s_fu_125230_p4.read()) + sc_biguint<16>(r2esult9_V_9_fu_125100_p4.read()));
}

void a0_conv2d_1::thread_tmp987_fu_151248_p2() {
    tmp987_fu_151248_p2 = (!r2esult5_V_s_reg_214351.read().is_01() || !r2esult2_V_s_reg_214336.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_s_reg_214351.read()) + sc_biguint<16>(r2esult2_V_s_reg_214336.read()));
}

void a0_conv2d_1::thread_tmp988_fu_151258_p2() {
    tmp988_fu_151258_p2 = (!tmp986_fu_151242_p2.read().is_01() || !tmp987_fu_151248_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp986_fu_151242_p2.read()) + sc_biguint<16>(tmp987_fu_151248_p2.read()));
}

void a0_conv2d_1::thread_tmp989_fu_151273_p2() {
    tmp989_fu_151273_p2 = (!r2esult6_V_s_fu_125243_p4.read().is_01() || !r2esult4_V_s_reg_214346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_s_fu_125243_p4.read()) + sc_biguint<16>(r2esult4_V_s_reg_214346.read()));
}

void a0_conv2d_1::thread_tmp98_fu_139197_p2() {
    tmp98_fu_139197_p2 = (!result2_V_58_fu_136014_p4.read().is_01() || !result3_V_58_fu_136027_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_58_fu_136014_p4.read()) + sc_biguint<16>(result3_V_58_fu_136027_p4.read()));
}

void a0_conv2d_1::thread_tmp990_fu_110475_p2() {
    tmp990_fu_110475_p2 = (!r2esult1_V_10_fu_89953_p4.read().is_01() || !r2esult7_V_s_fu_89624_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_10_fu_89953_p4.read()) + sc_biguint<16>(r2esult7_V_s_fu_89624_p4.read()));
}

void a0_conv2d_1::thread_tmp991_fu_110496_p2() {
    tmp991_fu_110496_p2 = (!r2esult8_V_s_fu_89637_p4.read().is_01() || !tmp990_fu_110475_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_s_fu_89637_p4.read()) + sc_biguint<16>(tmp990_fu_110475_p2.read()));
}

void a0_conv2d_1::thread_tmp992_fu_151283_p2() {
    tmp992_fu_151283_p2 = (!tmp989_fu_151273_p2.read().is_01() || !tmp991_reg_223956.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp989_fu_151273_p2.read()) + sc_biguint<16>(tmp991_reg_223956.read()));
}

void a0_conv2d_1::thread_tmp993_fu_151298_p2() {
    tmp993_fu_151298_p2 = (!tmp988_fu_151258_p2.read().is_01() || !tmp992_fu_151283_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp988_fu_151258_p2.read()) + sc_biguint<16>(tmp992_fu_151283_p2.read()));
}

void a0_conv2d_1::thread_tmp994_fu_151322_p2() {
    tmp994_fu_151322_p2 = (!r2esult3_V_10_fu_125386_p4.read().is_01() || !r2esult9_V_s_fu_125256_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult3_V_10_fu_125386_p4.read()) + sc_biguint<16>(r2esult9_V_s_fu_125256_p4.read()));
}

void a0_conv2d_1::thread_tmp995_fu_151328_p2() {
    tmp995_fu_151328_p2 = (!r2esult5_V_10_reg_214471.read().is_01() || !r2esult2_V_10_reg_214456.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult5_V_10_reg_214471.read()) + sc_biguint<16>(r2esult2_V_10_reg_214456.read()));
}

void a0_conv2d_1::thread_tmp996_fu_151338_p2() {
    tmp996_fu_151338_p2 = (!tmp994_fu_151322_p2.read().is_01() || !tmp995_fu_151328_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp994_fu_151322_p2.read()) + sc_biguint<16>(tmp995_fu_151328_p2.read()));
}

void a0_conv2d_1::thread_tmp997_fu_151353_p2() {
    tmp997_fu_151353_p2 = (!r2esult6_V_10_fu_125399_p4.read().is_01() || !r2esult4_V_10_reg_214466.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult6_V_10_fu_125399_p4.read()) + sc_biguint<16>(r2esult4_V_10_reg_214466.read()));
}

void a0_conv2d_1::thread_tmp998_fu_110559_p2() {
    tmp998_fu_110559_p2 = (!r2esult1_V_11_fu_90334_p4.read().is_01() || !r2esult7_V_10_fu_90005_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult1_V_11_fu_90334_p4.read()) + sc_biguint<16>(r2esult7_V_10_fu_90005_p4.read()));
}

void a0_conv2d_1::thread_tmp999_fu_110580_p2() {
    tmp999_fu_110580_p2 = (!r2esult8_V_10_fu_90018_p4.read().is_01() || !tmp998_fu_110559_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r2esult8_V_10_fu_90018_p4.read()) + sc_biguint<16>(tmp998_fu_110559_p2.read()));
}

void a0_conv2d_1::thread_tmp99_fu_139215_p2() {
    tmp99_fu_139215_p2 = (!tmp97_fu_139173_p2.read().is_01() || !tmp98_fu_139197_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp97_fu_139173_p2.read()) + sc_biguint<16>(tmp98_fu_139197_p2.read()));
}

void a0_conv2d_1::thread_tmp_1000_fu_107769_p4() {
    tmp_1000_fu_107769_p4 = r_V_72_21_fu_175899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1001_fu_107778_p4() {
    tmp_1001_fu_107778_p4 = r_V_78_20_fu_175739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1002_fu_107793_p2() {
    tmp_1002_fu_107793_p2 = (!tmp_1001_fu_107778_p4.read().is_01() || !tmp_1000_fu_107769_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1001_fu_107778_p4.read()) + sc_biguint<15>(tmp_1000_fu_107769_p4.read()));
}

void a0_conv2d_1::thread_tmp_1003_fu_107799_p4() {
    tmp_1003_fu_107799_p4 = r_V_79_20_fu_175747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1004_fu_144525_p2() {
    tmp_1004_fu_144525_p2 = (!tmp_998_reg_222881.read().is_01() || !tmp_999_fu_144507_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_998_reg_222881.read()) + sc_biguint<15>(tmp_999_fu_144507_p4.read()));
}

void a0_conv2d_1::thread_tmp_1005_fu_107808_p2() {
    tmp_1005_fu_107808_p2 = (!tmp_1002_fu_107793_p2.read().is_01() || !tmp_1003_fu_107799_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1002_fu_107793_p2.read()) + sc_biguint<15>(tmp_1003_fu_107799_p4.read()));
}

void a0_conv2d_1::thread_tmp_1006_fu_144536_p2() {
    tmp_1006_fu_144536_p2 = (!tmp_1005_reg_222891.read().is_01() || !tmp_1004_fu_144525_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1005_reg_222891.read()) + sc_biguint<15>(tmp_1004_fu_144525_p2.read()));
}

void a0_conv2d_1::thread_tmp_1007_fu_144541_p2() {
    tmp_1007_fu_144541_p2 = (!tmp_997_reg_222876.read().is_01() || !tmp_996_fu_144495_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_997_reg_222876.read()) + sc_biguint<15>(tmp_996_fu_144495_p2.read()));
}

void a0_conv2d_1::thread_tmp_1008_fu_144552_p2() {
    tmp_1008_fu_144552_p2 = (!tmp_990_fu_144451_p2.read().is_01() || !tmp_991_fu_144456_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_990_fu_144451_p2.read()) + sc_biguint<15>(tmp_991_fu_144456_p2.read()));
}

void a0_conv2d_1::thread_tmp_1009_fu_144558_p2() {
    tmp_1009_fu_144558_p2 = (!tmp_1006_fu_144536_p2.read().is_01() || !tmp_1007_fu_144541_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1006_fu_144536_p2.read()) + sc_biguint<15>(tmp_1007_fu_144541_p2.read()));
}

void a0_conv2d_1::thread_tmp_100_fu_138465_p2() {
    tmp_100_fu_138465_p2 = (!tmp_96_fu_138417_p4.read().is_01() || !tmp_97_fu_138426_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_96_fu_138417_p4.read()) + sc_biguint<15>(tmp_97_fu_138426_p4.read()));
}

void a0_conv2d_1::thread_tmp_1010_fu_144570_p4() {
    tmp_1010_fu_144570_p4 = r_V_80_20_fu_182923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1011_fu_144579_p4() {
    tmp_1011_fu_144579_p4 = r_V_74_21_fu_183003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1012_fu_107814_p4() {
    tmp_1012_fu_107814_p4 = r_V_73_21_fu_175907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1013_fu_107823_p4() {
    tmp_1013_fu_107823_p4 = r_V_76_21_fu_175923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1014_fu_144598_p2() {
    tmp_1014_fu_144598_p2 = (!tmp_1010_fu_144570_p4.read().is_01() || !tmp_1011_fu_144579_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1010_fu_144570_p4.read()) + sc_biguint<15>(tmp_1011_fu_144579_p4.read()));
}

void a0_conv2d_1::thread_tmp_1015_fu_107832_p2() {
    tmp_1015_fu_107832_p2 = (!tmp_1012_fu_107814_p4.read().is_01() || !tmp_1013_fu_107823_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1012_fu_107814_p4.read()) + sc_biguint<15>(tmp_1013_fu_107823_p4.read()));
}

void a0_conv2d_1::thread_tmp_1017_fu_144610_p4() {
    tmp_1017_fu_144610_p4 = r_V_77_21_fu_183011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1018_fu_107847_p4() {
    tmp_1018_fu_107847_p4 = r_V_72_22_fu_176091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1019_fu_107856_p4() {
    tmp_1019_fu_107856_p4 = r_V_78_21_fu_175931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_101_fu_138471_p2() {
    tmp_101_fu_138471_p2 = (!tmp_98_fu_138441_p4.read().is_01() || !tmp_99_fu_138450_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_98_fu_138441_p4.read()) + sc_biguint<15>(tmp_99_fu_138450_p4.read()));
}

void a0_conv2d_1::thread_tmp_1020_fu_107871_p2() {
    tmp_1020_fu_107871_p2 = (!tmp_1019_fu_107856_p4.read().is_01() || !tmp_1018_fu_107847_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1019_fu_107856_p4.read()) + sc_biguint<15>(tmp_1018_fu_107847_p4.read()));
}

void a0_conv2d_1::thread_tmp_1021_fu_107877_p4() {
    tmp_1021_fu_107877_p4 = r_V_79_21_fu_175939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1022_fu_144624_p2() {
    tmp_1022_fu_144624_p2 = (!tmp_1016_reg_222901.read().is_01() || !tmp_1017_fu_144610_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1016_reg_222901.read()) + sc_biguint<15>(tmp_1017_fu_144610_p4.read()));
}

void a0_conv2d_1::thread_tmp_1023_fu_107892_p2() {
    tmp_1023_fu_107892_p2 = (!tmp_1020_fu_107871_p2.read().is_01() || !tmp_1021_fu_107877_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1020_fu_107871_p2.read()) + sc_biguint<15>(tmp_1021_fu_107877_p4.read()));
}

void a0_conv2d_1::thread_tmp_1024_fu_144634_p2() {
    tmp_1024_fu_144634_p2 = (!tmp_1023_reg_222911.read().is_01() || !tmp_1022_fu_144624_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1023_reg_222911.read()) + sc_biguint<15>(tmp_1022_fu_144624_p2.read()));
}

void a0_conv2d_1::thread_tmp_1025_fu_144639_p2() {
    tmp_1025_fu_144639_p2 = (!tmp_1015_reg_222896.read().is_01() || !tmp_1014_fu_144598_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1015_reg_222896.read()) + sc_biguint<15>(tmp_1014_fu_144598_p2.read()));
}

void a0_conv2d_1::thread_tmp_1026_fu_144650_p4() {
    tmp_1026_fu_144650_p4 = r_V_80_21_fu_183019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1027_fu_144659_p4() {
    tmp_1027_fu_144659_p4 = r_V_74_22_fu_183099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1028_fu_107898_p4() {
    tmp_1028_fu_107898_p4 = r_V_73_22_fu_176099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1029_fu_107907_p4() {
    tmp_1029_fu_107907_p4 = r_V_76_22_fu_176115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_102_fu_138483_p4() {
    tmp_102_fu_138483_p4 = r_V_76_60_fu_189275_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1030_fu_144678_p2() {
    tmp_1030_fu_144678_p2 = (!tmp_1026_fu_144650_p4.read().is_01() || !tmp_1027_fu_144659_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1026_fu_144650_p4.read()) + sc_biguint<15>(tmp_1027_fu_144659_p4.read()));
}

void a0_conv2d_1::thread_tmp_1031_fu_107916_p2() {
    tmp_1031_fu_107916_p2 = (!tmp_1028_fu_107898_p4.read().is_01() || !tmp_1029_fu_107907_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1028_fu_107898_p4.read()) + sc_biguint<15>(tmp_1029_fu_107907_p4.read()));
}

void a0_conv2d_1::thread_tmp_1033_fu_144690_p4() {
    tmp_1033_fu_144690_p4 = r_V_77_22_fu_183107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1034_fu_107931_p4() {
    tmp_1034_fu_107931_p4 = r_V_72_23_fu_176283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1035_fu_107940_p4() {
    tmp_1035_fu_107940_p4 = r_V_78_22_fu_176123_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1036_fu_107955_p2() {
    tmp_1036_fu_107955_p2 = (!tmp_1035_fu_107940_p4.read().is_01() || !tmp_1034_fu_107931_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1035_fu_107940_p4.read()) + sc_biguint<15>(tmp_1034_fu_107931_p4.read()));
}

void a0_conv2d_1::thread_tmp_1037_fu_107961_p4() {
    tmp_1037_fu_107961_p4 = r_V_79_22_fu_176131_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1038_fu_144708_p2() {
    tmp_1038_fu_144708_p2 = (!tmp_1032_reg_222921.read().is_01() || !tmp_1033_fu_144690_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1032_reg_222921.read()) + sc_biguint<15>(tmp_1033_fu_144690_p4.read()));
}

void a0_conv2d_1::thread_tmp_1039_fu_107970_p2() {
    tmp_1039_fu_107970_p2 = (!tmp_1036_fu_107955_p2.read().is_01() || !tmp_1037_fu_107961_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1036_fu_107955_p2.read()) + sc_biguint<15>(tmp_1037_fu_107961_p4.read()));
}

void a0_conv2d_1::thread_tmp_103_fu_138492_p4() {
    tmp_103_fu_138492_p4 = r_V_75_60_fu_189267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1040_fu_144719_p2() {
    tmp_1040_fu_144719_p2 = (!tmp_1039_reg_222931.read().is_01() || !tmp_1038_fu_144708_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1039_reg_222931.read()) + sc_biguint<15>(tmp_1038_fu_144708_p2.read()));
}

void a0_conv2d_1::thread_tmp_1041_fu_144724_p2() {
    tmp_1041_fu_144724_p2 = (!tmp_1031_reg_222916.read().is_01() || !tmp_1030_fu_144678_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1031_reg_222916.read()) + sc_biguint<15>(tmp_1030_fu_144678_p2.read()));
}

void a0_conv2d_1::thread_tmp_1042_fu_144735_p2() {
    tmp_1042_fu_144735_p2 = (!tmp_1024_fu_144634_p2.read().is_01() || !tmp_1025_fu_144639_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1024_fu_144634_p2.read()) + sc_biguint<15>(tmp_1025_fu_144639_p2.read()));
}

void a0_conv2d_1::thread_tmp_1043_fu_144741_p2() {
    tmp_1043_fu_144741_p2 = (!tmp_1040_fu_144719_p2.read().is_01() || !tmp_1041_fu_144724_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1040_fu_144719_p2.read()) + sc_biguint<15>(tmp_1041_fu_144724_p2.read()));
}

void a0_conv2d_1::thread_tmp_1044_fu_144753_p2() {
    tmp_1044_fu_144753_p2 = (!tmp_1043_fu_144741_p2.read().is_01() || !tmp_1042_fu_144735_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1043_fu_144741_p2.read()) + sc_biguint<15>(tmp_1042_fu_144735_p2.read()));
}

void a0_conv2d_1::thread_tmp_1045_fu_144759_p2() {
    tmp_1045_fu_144759_p2 = (!tmp_1009_fu_144558_p2.read().is_01() || !tmp_1008_fu_144552_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1009_fu_144558_p2.read()) + sc_biguint<15>(tmp_1008_fu_144552_p2.read()));
}

void a0_conv2d_1::thread_tmp_1046_fu_144765_p2() {
    tmp_1046_fu_144765_p2 = (!tmp_974_fu_144375_p2.read().is_01() || !tmp_975_fu_144381_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_974_fu_144375_p2.read()) + sc_biguint<15>(tmp_975_fu_144381_p2.read()));
}

void a0_conv2d_1::thread_tmp_1047_fu_144771_p2() {
    tmp_1047_fu_144771_p2 = (!tmp_1044_fu_144753_p2.read().is_01() || !tmp_1045_fu_144759_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1044_fu_144753_p2.read()) + sc_biguint<15>(tmp_1045_fu_144759_p2.read()));
}

void a0_conv2d_1::thread_tmp_1048_fu_144777_p4() {
    tmp_1048_fu_144777_p4 = r_V_80_22_fu_183115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1049_fu_144786_p4() {
    tmp_1049_fu_144786_p4 = r_V_74_23_fu_183195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_104_fu_138507_p4() {
    tmp_104_fu_138507_p4 = r_V_78_60_fu_189291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1050_fu_107976_p4() {
    tmp_1050_fu_107976_p4 = r_V_73_23_fu_176291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1051_fu_107985_p4() {
    tmp_1051_fu_107985_p4 = r_V_76_23_fu_176307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1052_fu_144805_p2() {
    tmp_1052_fu_144805_p2 = (!tmp_1048_fu_144777_p4.read().is_01() || !tmp_1049_fu_144786_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1048_fu_144777_p4.read()) + sc_biguint<15>(tmp_1049_fu_144786_p4.read()));
}

void a0_conv2d_1::thread_tmp_1053_fu_107994_p2() {
    tmp_1053_fu_107994_p2 = (!tmp_1050_fu_107976_p4.read().is_01() || !tmp_1051_fu_107985_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1050_fu_107976_p4.read()) + sc_biguint<15>(tmp_1051_fu_107985_p4.read()));
}

void a0_conv2d_1::thread_tmp_1055_fu_144817_p4() {
    tmp_1055_fu_144817_p4 = r_V_77_23_fu_183203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1056_fu_108009_p4() {
    tmp_1056_fu_108009_p4 = r_V_72_24_fu_176475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1057_fu_108018_p4() {
    tmp_1057_fu_108018_p4 = r_V_78_23_fu_176315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1058_fu_108033_p2() {
    tmp_1058_fu_108033_p2 = (!tmp_1057_fu_108018_p4.read().is_01() || !tmp_1056_fu_108009_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1057_fu_108018_p4.read()) + sc_biguint<15>(tmp_1056_fu_108009_p4.read()));
}

void a0_conv2d_1::thread_tmp_1059_fu_108039_p4() {
    tmp_1059_fu_108039_p4 = r_V_79_23_fu_176323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_105_fu_138516_p4() {
    tmp_105_fu_138516_p4 = r_V_79_60_fu_189299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1060_fu_144831_p2() {
    tmp_1060_fu_144831_p2 = (!tmp_1054_reg_222941.read().is_01() || !tmp_1055_fu_144817_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1054_reg_222941.read()) + sc_biguint<15>(tmp_1055_fu_144817_p4.read()));
}

void a0_conv2d_1::thread_tmp_1061_fu_108054_p2() {
    tmp_1061_fu_108054_p2 = (!tmp_1058_fu_108033_p2.read().is_01() || !tmp_1059_fu_108039_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1058_fu_108033_p2.read()) + sc_biguint<15>(tmp_1059_fu_108039_p4.read()));
}

void a0_conv2d_1::thread_tmp_1062_fu_144841_p2() {
    tmp_1062_fu_144841_p2 = (!tmp_1061_reg_222951.read().is_01() || !tmp_1060_fu_144831_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1061_reg_222951.read()) + sc_biguint<15>(tmp_1060_fu_144831_p2.read()));
}

void a0_conv2d_1::thread_tmp_1063_fu_144846_p2() {
    tmp_1063_fu_144846_p2 = (!tmp_1053_reg_222936.read().is_01() || !tmp_1052_fu_144805_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1053_reg_222936.read()) + sc_biguint<15>(tmp_1052_fu_144805_p2.read()));
}

void a0_conv2d_1::thread_tmp_1064_fu_144857_p4() {
    tmp_1064_fu_144857_p4 = r_V_80_23_fu_183211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1065_fu_144866_p4() {
    tmp_1065_fu_144866_p4 = r_V_74_24_fu_183291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1066_fu_108060_p4() {
    tmp_1066_fu_108060_p4 = r_V_73_24_fu_176483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1067_fu_108069_p4() {
    tmp_1067_fu_108069_p4 = r_V_76_24_fu_176499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1068_fu_144885_p2() {
    tmp_1068_fu_144885_p2 = (!tmp_1064_fu_144857_p4.read().is_01() || !tmp_1065_fu_144866_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1064_fu_144857_p4.read()) + sc_biguint<15>(tmp_1065_fu_144866_p4.read()));
}

void a0_conv2d_1::thread_tmp_1069_fu_108078_p2() {
    tmp_1069_fu_108078_p2 = (!tmp_1066_fu_108060_p4.read().is_01() || !tmp_1067_fu_108069_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1066_fu_108060_p4.read()) + sc_biguint<15>(tmp_1067_fu_108069_p4.read()));
}

void a0_conv2d_1::thread_tmp_106_fu_138531_p2() {
    tmp_106_fu_138531_p2 = (!tmp_105_fu_138516_p4.read().is_01() || !tmp_104_fu_138507_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_105_fu_138516_p4.read()) + sc_biguint<15>(tmp_104_fu_138507_p4.read()));
}

void a0_conv2d_1::thread_tmp_1071_fu_144897_p4() {
    tmp_1071_fu_144897_p4 = r_V_77_24_fu_183299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1072_fu_108093_p4() {
    tmp_1072_fu_108093_p4 = r_V_72_25_fu_176667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1073_fu_108102_p4() {
    tmp_1073_fu_108102_p4 = r_V_78_24_fu_176507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1074_fu_108117_p2() {
    tmp_1074_fu_108117_p2 = (!tmp_1073_fu_108102_p4.read().is_01() || !tmp_1072_fu_108093_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1073_fu_108102_p4.read()) + sc_biguint<15>(tmp_1072_fu_108093_p4.read()));
}

void a0_conv2d_1::thread_tmp_1075_fu_108123_p4() {
    tmp_1075_fu_108123_p4 = r_V_79_24_fu_176515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1076_fu_144915_p2() {
    tmp_1076_fu_144915_p2 = (!tmp_1070_reg_222961.read().is_01() || !tmp_1071_fu_144897_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1070_reg_222961.read()) + sc_biguint<15>(tmp_1071_fu_144897_p4.read()));
}

void a0_conv2d_1::thread_tmp_1077_fu_108132_p2() {
    tmp_1077_fu_108132_p2 = (!tmp_1074_fu_108117_p2.read().is_01() || !tmp_1075_fu_108123_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1074_fu_108117_p2.read()) + sc_biguint<15>(tmp_1075_fu_108123_p4.read()));
}

void a0_conv2d_1::thread_tmp_1078_fu_144926_p2() {
    tmp_1078_fu_144926_p2 = (!tmp_1077_reg_222971.read().is_01() || !tmp_1076_fu_144915_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1077_reg_222971.read()) + sc_biguint<15>(tmp_1076_fu_144915_p2.read()));
}

void a0_conv2d_1::thread_tmp_1079_fu_144931_p2() {
    tmp_1079_fu_144931_p2 = (!tmp_1069_reg_222956.read().is_01() || !tmp_1068_fu_144885_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1069_reg_222956.read()) + sc_biguint<15>(tmp_1068_fu_144885_p2.read()));
}

void a0_conv2d_1::thread_tmp_107_fu_138537_p4() {
    tmp_107_fu_138537_p4 = r_V_77_60_fu_189283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1080_fu_144942_p2() {
    tmp_1080_fu_144942_p2 = (!tmp_1062_fu_144841_p2.read().is_01() || !tmp_1063_fu_144846_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1062_fu_144841_p2.read()) + sc_biguint<15>(tmp_1063_fu_144846_p2.read()));
}

void a0_conv2d_1::thread_tmp_1081_fu_144948_p2() {
    tmp_1081_fu_144948_p2 = (!tmp_1078_fu_144926_p2.read().is_01() || !tmp_1079_fu_144931_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1078_fu_144926_p2.read()) + sc_biguint<15>(tmp_1079_fu_144931_p2.read()));
}

void a0_conv2d_1::thread_tmp_1082_fu_144960_p4() {
    tmp_1082_fu_144960_p4 = r_V_80_24_fu_183307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1083_fu_144969_p4() {
    tmp_1083_fu_144969_p4 = r_V_74_25_fu_183387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1084_fu_108138_p4() {
    tmp_1084_fu_108138_p4 = r_V_73_25_fu_176675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1085_fu_108147_p4() {
    tmp_1085_fu_108147_p4 = r_V_76_25_fu_176691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1086_fu_144988_p2() {
    tmp_1086_fu_144988_p2 = (!tmp_1082_fu_144960_p4.read().is_01() || !tmp_1083_fu_144969_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1082_fu_144960_p4.read()) + sc_biguint<15>(tmp_1083_fu_144969_p4.read()));
}

void a0_conv2d_1::thread_tmp_1087_fu_108156_p2() {
    tmp_1087_fu_108156_p2 = (!tmp_1084_fu_108138_p4.read().is_01() || !tmp_1085_fu_108147_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1084_fu_108138_p4.read()) + sc_biguint<15>(tmp_1085_fu_108147_p4.read()));
}

void a0_conv2d_1::thread_tmp_1089_fu_145000_p4() {
    tmp_1089_fu_145000_p4 = r_V_77_25_fu_183395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_108_fu_138552_p2() {
    tmp_108_fu_138552_p2 = (!tmp_102_fu_138483_p4.read().is_01() || !tmp_103_fu_138492_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_102_fu_138483_p4.read()) + sc_biguint<15>(tmp_103_fu_138492_p4.read()));
}

void a0_conv2d_1::thread_tmp_1090_fu_108171_p4() {
    tmp_1090_fu_108171_p4 = r_V_72_26_fu_176859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1091_fu_108180_p4() {
    tmp_1091_fu_108180_p4 = r_V_78_25_fu_176699_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1092_fu_108195_p2() {
    tmp_1092_fu_108195_p2 = (!tmp_1091_fu_108180_p4.read().is_01() || !tmp_1090_fu_108171_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1091_fu_108180_p4.read()) + sc_biguint<15>(tmp_1090_fu_108171_p4.read()));
}

void a0_conv2d_1::thread_tmp_1093_fu_108201_p4() {
    tmp_1093_fu_108201_p4 = r_V_79_25_fu_176707_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1094_fu_145014_p2() {
    tmp_1094_fu_145014_p2 = (!tmp_1088_reg_222981.read().is_01() || !tmp_1089_fu_145000_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1088_reg_222981.read()) + sc_biguint<15>(tmp_1089_fu_145000_p4.read()));
}

void a0_conv2d_1::thread_tmp_1095_fu_108216_p2() {
    tmp_1095_fu_108216_p2 = (!tmp_1092_fu_108195_p2.read().is_01() || !tmp_1093_fu_108201_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1092_fu_108195_p2.read()) + sc_biguint<15>(tmp_1093_fu_108201_p4.read()));
}

void a0_conv2d_1::thread_tmp_1096_fu_145024_p2() {
    tmp_1096_fu_145024_p2 = (!tmp_1095_reg_222991.read().is_01() || !tmp_1094_fu_145014_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1095_reg_222991.read()) + sc_biguint<15>(tmp_1094_fu_145014_p2.read()));
}

void a0_conv2d_1::thread_tmp_1097_fu_145029_p2() {
    tmp_1097_fu_145029_p2 = (!tmp_1087_reg_222976.read().is_01() || !tmp_1086_fu_144988_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1087_reg_222976.read()) + sc_biguint<15>(tmp_1086_fu_144988_p2.read()));
}

void a0_conv2d_1::thread_tmp_1098_fu_145040_p4() {
    tmp_1098_fu_145040_p4 = r_V_80_25_fu_183403_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1099_fu_145049_p4() {
    tmp_1099_fu_145049_p4 = r_V_74_26_fu_183483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_109_fu_138558_p2() {
    tmp_109_fu_138558_p2 = (!tmp_106_fu_138531_p2.read().is_01() || !tmp_107_fu_138537_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_106_fu_138531_p2.read()) + sc_biguint<15>(tmp_107_fu_138537_p4.read()));
}

void a0_conv2d_1::thread_tmp_10_fu_69990_p3() {
    tmp_10_fu_69990_p3 = esl_concat<10,6>(tmp_22_fu_69984_p2.read(), ap_const_lv6_0);
}

void a0_conv2d_1::thread_tmp_10_mid1_fu_70478_p3() {
    tmp_10_mid1_fu_70478_p3 = esl_concat<10,6>(tmp_22_mid1_fu_70472_p2.read(), ap_const_lv6_0);
}

void a0_conv2d_1::thread_tmp_10_mid_fu_70194_p3() {
    tmp_10_mid_fu_70194_p3 = esl_concat<10,6>(tmp_22_mid_fu_70188_p2.read(), ap_const_lv6_0);
}

void a0_conv2d_1::thread_tmp_1100_fu_108222_p4() {
    tmp_1100_fu_108222_p4 = r_V_73_26_fu_176867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1101_fu_108231_p4() {
    tmp_1101_fu_108231_p4 = r_V_76_26_fu_176883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1102_fu_145068_p2() {
    tmp_1102_fu_145068_p2 = (!tmp_1098_fu_145040_p4.read().is_01() || !tmp_1099_fu_145049_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1098_fu_145040_p4.read()) + sc_biguint<15>(tmp_1099_fu_145049_p4.read()));
}

void a0_conv2d_1::thread_tmp_1103_fu_108240_p2() {
    tmp_1103_fu_108240_p2 = (!tmp_1100_fu_108222_p4.read().is_01() || !tmp_1101_fu_108231_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1100_fu_108222_p4.read()) + sc_biguint<15>(tmp_1101_fu_108231_p4.read()));
}

void a0_conv2d_1::thread_tmp_1105_fu_145080_p4() {
    tmp_1105_fu_145080_p4 = r_V_77_26_fu_183491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1106_fu_108255_p4() {
    tmp_1106_fu_108255_p4 = r_V_72_27_fu_177051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1107_fu_108264_p4() {
    tmp_1107_fu_108264_p4 = r_V_78_26_fu_176891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1108_fu_108279_p2() {
    tmp_1108_fu_108279_p2 = (!tmp_1107_fu_108264_p4.read().is_01() || !tmp_1106_fu_108255_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1107_fu_108264_p4.read()) + sc_biguint<15>(tmp_1106_fu_108255_p4.read()));
}

void a0_conv2d_1::thread_tmp_1109_fu_108285_p4() {
    tmp_1109_fu_108285_p4 = r_V_79_26_fu_176899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_110_fu_138570_p2() {
    tmp_110_fu_138570_p2 = (!tmp_109_fu_138558_p2.read().is_01() || !tmp_108_fu_138552_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_109_fu_138558_p2.read()) + sc_biguint<15>(tmp_108_fu_138552_p2.read()));
}

void a0_conv2d_1::thread_tmp_1110_fu_145094_p2() {
    tmp_1110_fu_145094_p2 = (!tmp_1104_reg_223001.read().is_01() || !tmp_1105_fu_145080_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1104_reg_223001.read()) + sc_biguint<15>(tmp_1105_fu_145080_p4.read()));
}

void a0_conv2d_1::thread_tmp_1111_fu_108300_p2() {
    tmp_1111_fu_108300_p2 = (!tmp_1108_fu_108279_p2.read().is_01() || !tmp_1109_fu_108285_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1108_fu_108279_p2.read()) + sc_biguint<15>(tmp_1109_fu_108285_p4.read()));
}

void a0_conv2d_1::thread_tmp_1112_fu_145104_p2() {
    tmp_1112_fu_145104_p2 = (!tmp_1111_reg_223011.read().is_01() || !tmp_1110_fu_145094_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1111_reg_223011.read()) + sc_biguint<15>(tmp_1110_fu_145094_p2.read()));
}

void a0_conv2d_1::thread_tmp_1113_fu_145109_p2() {
    tmp_1113_fu_145109_p2 = (!tmp_1103_reg_222996.read().is_01() || !tmp_1102_fu_145068_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1103_reg_222996.read()) + sc_biguint<15>(tmp_1102_fu_145068_p2.read()));
}

void a0_conv2d_1::thread_tmp_1114_fu_145120_p2() {
    tmp_1114_fu_145120_p2 = (!tmp_1096_fu_145024_p2.read().is_01() || !tmp_1097_fu_145029_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1096_fu_145024_p2.read()) + sc_biguint<15>(tmp_1097_fu_145029_p2.read()));
}

void a0_conv2d_1::thread_tmp_1115_fu_145126_p2() {
    tmp_1115_fu_145126_p2 = (!tmp_1112_fu_145104_p2.read().is_01() || !tmp_1113_fu_145109_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1112_fu_145104_p2.read()) + sc_biguint<15>(tmp_1113_fu_145109_p2.read()));
}

void a0_conv2d_1::thread_tmp_1116_fu_145132_p2() {
    tmp_1116_fu_145132_p2 = (!tmp_1115_fu_145126_p2.read().is_01() || !tmp_1114_fu_145120_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1115_fu_145126_p2.read()) + sc_biguint<15>(tmp_1114_fu_145120_p2.read()));
}

void a0_conv2d_1::thread_tmp_1117_fu_145138_p2() {
    tmp_1117_fu_145138_p2 = (!tmp_1081_fu_144948_p2.read().is_01() || !tmp_1080_fu_144942_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1081_fu_144948_p2.read()) + sc_biguint<15>(tmp_1080_fu_144942_p2.read()));
}

void a0_conv2d_1::thread_tmp_1118_fu_145144_p4() {
    tmp_1118_fu_145144_p4 = r_V_80_26_fu_183499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1119_fu_145153_p4() {
    tmp_1119_fu_145153_p4 = r_V_74_27_fu_183579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_111_fu_138576_p2() {
    tmp_111_fu_138576_p2 = (!tmp_101_fu_138471_p2.read().is_01() || !tmp_100_fu_138465_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_101_fu_138471_p2.read()) + sc_biguint<15>(tmp_100_fu_138465_p2.read()));
}

void a0_conv2d_1::thread_tmp_1120_fu_108306_p4() {
    tmp_1120_fu_108306_p4 = r_V_73_27_fu_177059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1121_fu_108315_p4() {
    tmp_1121_fu_108315_p4 = r_V_76_27_fu_177075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1122_fu_145172_p2() {
    tmp_1122_fu_145172_p2 = (!tmp_1118_fu_145144_p4.read().is_01() || !tmp_1119_fu_145153_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1118_fu_145144_p4.read()) + sc_biguint<15>(tmp_1119_fu_145153_p4.read()));
}

void a0_conv2d_1::thread_tmp_1123_fu_108324_p2() {
    tmp_1123_fu_108324_p2 = (!tmp_1120_fu_108306_p4.read().is_01() || !tmp_1121_fu_108315_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1120_fu_108306_p4.read()) + sc_biguint<15>(tmp_1121_fu_108315_p4.read()));
}

void a0_conv2d_1::thread_tmp_1125_fu_145184_p4() {
    tmp_1125_fu_145184_p4 = r_V_77_27_fu_183587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1126_fu_108339_p4() {
    tmp_1126_fu_108339_p4 = r_V_72_28_fu_177243_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1127_fu_108348_p4() {
    tmp_1127_fu_108348_p4 = r_V_78_27_fu_177083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1128_fu_108363_p2() {
    tmp_1128_fu_108363_p2 = (!tmp_1127_fu_108348_p4.read().is_01() || !tmp_1126_fu_108339_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1127_fu_108348_p4.read()) + sc_biguint<15>(tmp_1126_fu_108339_p4.read()));
}

void a0_conv2d_1::thread_tmp_1129_fu_108369_p4() {
    tmp_1129_fu_108369_p4 = r_V_79_27_fu_177091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_112_fu_138588_p2() {
    tmp_112_fu_138588_p2 = (!tmp_94_fu_138399_p2.read().is_01() || !tmp_95_fu_138405_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_94_fu_138399_p2.read()) + sc_biguint<15>(tmp_95_fu_138405_p2.read()));
}

void a0_conv2d_1::thread_tmp_1130_fu_145198_p2() {
    tmp_1130_fu_145198_p2 = (!tmp_1124_reg_223021.read().is_01() || !tmp_1125_fu_145184_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1124_reg_223021.read()) + sc_biguint<15>(tmp_1125_fu_145184_p4.read()));
}

void a0_conv2d_1::thread_tmp_1131_fu_108384_p2() {
    tmp_1131_fu_108384_p2 = (!tmp_1128_fu_108363_p2.read().is_01() || !tmp_1129_fu_108369_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1128_fu_108363_p2.read()) + sc_biguint<15>(tmp_1129_fu_108369_p4.read()));
}

void a0_conv2d_1::thread_tmp_1132_fu_145208_p2() {
    tmp_1132_fu_145208_p2 = (!tmp_1131_reg_223031.read().is_01() || !tmp_1130_fu_145198_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1131_reg_223031.read()) + sc_biguint<15>(tmp_1130_fu_145198_p2.read()));
}

void a0_conv2d_1::thread_tmp_1133_fu_145213_p2() {
    tmp_1133_fu_145213_p2 = (!tmp_1123_reg_223016.read().is_01() || !tmp_1122_fu_145172_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1123_reg_223016.read()) + sc_biguint<15>(tmp_1122_fu_145172_p2.read()));
}

void a0_conv2d_1::thread_tmp_1134_fu_145224_p4() {
    tmp_1134_fu_145224_p4 = r_V_80_27_fu_183595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1135_fu_145233_p4() {
    tmp_1135_fu_145233_p4 = r_V_74_28_fu_183675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1136_fu_108390_p4() {
    tmp_1136_fu_108390_p4 = r_V_73_28_fu_177251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1137_fu_108399_p4() {
    tmp_1137_fu_108399_p4 = r_V_76_28_fu_177267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1138_fu_145252_p2() {
    tmp_1138_fu_145252_p2 = (!tmp_1134_fu_145224_p4.read().is_01() || !tmp_1135_fu_145233_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1134_fu_145224_p4.read()) + sc_biguint<15>(tmp_1135_fu_145233_p4.read()));
}

void a0_conv2d_1::thread_tmp_1139_fu_108408_p2() {
    tmp_1139_fu_108408_p2 = (!tmp_1136_fu_108390_p4.read().is_01() || !tmp_1137_fu_108399_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1136_fu_108390_p4.read()) + sc_biguint<15>(tmp_1137_fu_108399_p4.read()));
}

void a0_conv2d_1::thread_tmp_113_fu_138594_p2() {
    tmp_113_fu_138594_p2 = (!tmp_110_fu_138570_p2.read().is_01() || !tmp_111_fu_138576_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_110_fu_138570_p2.read()) + sc_biguint<15>(tmp_111_fu_138576_p2.read()));
}

void a0_conv2d_1::thread_tmp_1141_fu_145264_p4() {
    tmp_1141_fu_145264_p4 = r_V_77_28_fu_183683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1142_fu_108423_p4() {
    tmp_1142_fu_108423_p4 = r_V_72_29_fu_177435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1143_fu_108432_p4() {
    tmp_1143_fu_108432_p4 = r_V_78_28_fu_177275_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1144_fu_108447_p2() {
    tmp_1144_fu_108447_p2 = (!tmp_1143_fu_108432_p4.read().is_01() || !tmp_1142_fu_108423_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1143_fu_108432_p4.read()) + sc_biguint<15>(tmp_1142_fu_108423_p4.read()));
}

void a0_conv2d_1::thread_tmp_1145_fu_108453_p4() {
    tmp_1145_fu_108453_p4 = r_V_79_28_fu_177283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1146_fu_145282_p2() {
    tmp_1146_fu_145282_p2 = (!tmp_1140_reg_223041.read().is_01() || !tmp_1141_fu_145264_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1140_reg_223041.read()) + sc_biguint<15>(tmp_1141_fu_145264_p4.read()));
}

void a0_conv2d_1::thread_tmp_1147_fu_108462_p2() {
    tmp_1147_fu_108462_p2 = (!tmp_1144_fu_108447_p2.read().is_01() || !tmp_1145_fu_108453_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1144_fu_108447_p2.read()) + sc_biguint<15>(tmp_1145_fu_108453_p4.read()));
}

void a0_conv2d_1::thread_tmp_1148_fu_145293_p2() {
    tmp_1148_fu_145293_p2 = (!tmp_1147_reg_223051.read().is_01() || !tmp_1146_fu_145282_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1147_reg_223051.read()) + sc_biguint<15>(tmp_1146_fu_145282_p2.read()));
}

void a0_conv2d_1::thread_tmp_1149_fu_145298_p2() {
    tmp_1149_fu_145298_p2 = (!tmp_1139_reg_223036.read().is_01() || !tmp_1138_fu_145252_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1139_reg_223036.read()) + sc_biguint<15>(tmp_1138_fu_145252_p2.read()));
}

}

