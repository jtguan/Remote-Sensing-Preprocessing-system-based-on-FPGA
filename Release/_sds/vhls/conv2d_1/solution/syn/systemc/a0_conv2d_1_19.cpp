#include "a0_conv2d_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void a0_conv2d_1::thread_tmp_3099_fu_114033_p4() {
    tmp_3099_fu_114033_p4 = r_V_94_s_fu_173715_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_309_fu_140616_p4() {
    tmp_309_fu_140616_p4 = r_V_80_53_fu_187291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_30_fu_70126_p1() {
    tmp_30_fu_70126_p1 = j_s_fu_70120_p2.read().range(3-1, 0);
}

void a0_conv2d_1::thread_tmp_3100_fu_159013_p2() {
    tmp_3100_fu_159013_p2 = (!tmp_3096_fu_158985_p4.read().is_01() || !tmp_3097_fu_158994_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3096_fu_158985_p4.read()) + sc_biguint<15>(tmp_3097_fu_158994_p4.read()));
}

void a0_conv2d_1::thread_tmp_3101_fu_114042_p2() {
    tmp_3101_fu_114042_p2 = (!tmp_3098_fu_114024_p4.read().is_01() || !tmp_3099_fu_114033_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3098_fu_114024_p4.read()) + sc_biguint<15>(tmp_3099_fu_114033_p4.read()));
}

void a0_conv2d_1::thread_tmp_3103_fu_159025_p4() {
    tmp_3103_fu_159025_p4 = r_V_95_s_fu_181907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3104_fu_114057_p4() {
    tmp_3104_fu_114057_p4 = r_V_90_10_fu_173883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3105_fu_114066_p4() {
    tmp_3105_fu_114066_p4 = r_V_96_s_fu_173723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3106_fu_114081_p2() {
    tmp_3106_fu_114081_p2 = (!tmp_3105_fu_114066_p4.read().is_01() || !tmp_3104_fu_114057_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3105_fu_114066_p4.read()) + sc_biguint<15>(tmp_3104_fu_114057_p4.read()));
}

void a0_conv2d_1::thread_tmp_3107_fu_114087_p4() {
    tmp_3107_fu_114087_p4 = r_V_97_s_fu_173731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3108_fu_159039_p2() {
    tmp_3108_fu_159039_p2 = (!tmp_3102_reg_225241.read().is_01() || !tmp_3103_fu_159025_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3102_reg_225241.read()) + sc_biguint<15>(tmp_3103_fu_159025_p4.read()));
}

void a0_conv2d_1::thread_tmp_3109_fu_114102_p2() {
    tmp_3109_fu_114102_p2 = (!tmp_3106_fu_114081_p2.read().is_01() || !tmp_3107_fu_114087_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3106_fu_114081_p2.read()) + sc_biguint<15>(tmp_3107_fu_114087_p4.read()));
}

void a0_conv2d_1::thread_tmp_310_fu_140631_p4() {
    tmp_310_fu_140631_p4 = r_V_74_54_fu_187531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3110_fu_159049_p2() {
    tmp_3110_fu_159049_p2 = (!tmp_3109_reg_225251.read().is_01() || !tmp_3108_fu_159039_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3109_reg_225251.read()) + sc_biguint<15>(tmp_3108_fu_159039_p2.read()));
}

void a0_conv2d_1::thread_tmp_3111_fu_159054_p2() {
    tmp_3111_fu_159054_p2 = (!tmp_3101_reg_225236.read().is_01() || !tmp_3100_fu_159013_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3101_reg_225236.read()) + sc_biguint<15>(tmp_3100_fu_159013_p2.read()));
}

void a0_conv2d_1::thread_tmp_3112_fu_159065_p4() {
    tmp_3112_fu_159065_p4 = r_V_98_s_fu_181915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3113_fu_159074_p4() {
    tmp_3113_fu_159074_p4 = r_V_92_10_fu_181995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3114_fu_114108_p4() {
    tmp_3114_fu_114108_p4 = r_V_91_10_fu_173891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3115_fu_114117_p4() {
    tmp_3115_fu_114117_p4 = r_V_94_10_fu_173907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3116_fu_159093_p2() {
    tmp_3116_fu_159093_p2 = (!tmp_3112_fu_159065_p4.read().is_01() || !tmp_3113_fu_159074_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3112_fu_159065_p4.read()) + sc_biguint<15>(tmp_3113_fu_159074_p4.read()));
}

void a0_conv2d_1::thread_tmp_3117_fu_114126_p2() {
    tmp_3117_fu_114126_p2 = (!tmp_3114_fu_114108_p4.read().is_01() || !tmp_3115_fu_114117_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3114_fu_114108_p4.read()) + sc_biguint<15>(tmp_3115_fu_114117_p4.read()));
}

void a0_conv2d_1::thread_tmp_3119_fu_159105_p4() {
    tmp_3119_fu_159105_p4 = r_V_95_10_fu_182003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_311_fu_140640_p4() {
    tmp_311_fu_140640_p4 = r_V_73_54_fu_187523_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3120_fu_114141_p4() {
    tmp_3120_fu_114141_p4 = r_V_90_11_fu_174075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3121_fu_114150_p4() {
    tmp_3121_fu_114150_p4 = r_V_96_10_fu_173915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3122_fu_114165_p2() {
    tmp_3122_fu_114165_p2 = (!tmp_3121_fu_114150_p4.read().is_01() || !tmp_3120_fu_114141_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3121_fu_114150_p4.read()) + sc_biguint<15>(tmp_3120_fu_114141_p4.read()));
}

void a0_conv2d_1::thread_tmp_3123_fu_114171_p4() {
    tmp_3123_fu_114171_p4 = r_V_97_10_fu_173923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3124_fu_159119_p2() {
    tmp_3124_fu_159119_p2 = (!tmp_3118_reg_225261.read().is_01() || !tmp_3119_fu_159105_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3118_reg_225261.read()) + sc_biguint<15>(tmp_3119_fu_159105_p4.read()));
}

void a0_conv2d_1::thread_tmp_3125_fu_114186_p2() {
    tmp_3125_fu_114186_p2 = (!tmp_3122_fu_114165_p2.read().is_01() || !tmp_3123_fu_114171_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3122_fu_114165_p2.read()) + sc_biguint<15>(tmp_3123_fu_114171_p4.read()));
}

void a0_conv2d_1::thread_tmp_3126_fu_159129_p2() {
    tmp_3126_fu_159129_p2 = (!tmp_3125_reg_225271.read().is_01() || !tmp_3124_fu_159119_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3125_reg_225271.read()) + sc_biguint<15>(tmp_3124_fu_159119_p2.read()));
}

void a0_conv2d_1::thread_tmp_3127_fu_159134_p2() {
    tmp_3127_fu_159134_p2 = (!tmp_3117_reg_225256.read().is_01() || !tmp_3116_fu_159093_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3117_reg_225256.read()) + sc_biguint<15>(tmp_3116_fu_159093_p2.read()));
}

void a0_conv2d_1::thread_tmp_3128_fu_159145_p2() {
    tmp_3128_fu_159145_p2 = (!tmp_3110_fu_159049_p2.read().is_01() || !tmp_3111_fu_159054_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3110_fu_159049_p2.read()) + sc_biguint<15>(tmp_3111_fu_159054_p2.read()));
}

void a0_conv2d_1::thread_tmp_3129_fu_159151_p2() {
    tmp_3129_fu_159151_p2 = (!tmp_3126_fu_159129_p2.read().is_01() || !tmp_3127_fu_159134_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3126_fu_159129_p2.read()) + sc_biguint<15>(tmp_3127_fu_159134_p2.read()));
}

void a0_conv2d_1::thread_tmp_312_fu_140655_p2() {
    tmp_312_fu_140655_p2 = (!tmp_308_fu_140607_p4.read().is_01() || !tmp_309_fu_140616_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_308_fu_140607_p4.read()) + sc_biguint<15>(tmp_309_fu_140616_p4.read()));
}

void a0_conv2d_1::thread_tmp_3130_fu_159157_p2() {
    tmp_3130_fu_159157_p2 = (!tmp_3129_fu_159151_p2.read().is_01() || !tmp_3128_fu_159145_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3129_fu_159151_p2.read()) + sc_biguint<15>(tmp_3128_fu_159145_p2.read()));
}

void a0_conv2d_1::thread_tmp_3131_fu_159163_p2() {
    tmp_3131_fu_159163_p2 = (!tmp_3095_fu_158973_p2.read().is_01() || !tmp_3094_fu_158967_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3095_fu_158973_p2.read()) + sc_biguint<15>(tmp_3094_fu_158967_p2.read()));
}

void a0_conv2d_1::thread_tmp_3132_fu_159169_p4() {
    tmp_3132_fu_159169_p4 = r_V_98_10_fu_182011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3133_fu_159178_p4() {
    tmp_3133_fu_159178_p4 = r_V_92_11_fu_182091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3134_fu_114192_p4() {
    tmp_3134_fu_114192_p4 = r_V_91_11_fu_174083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3135_fu_114201_p4() {
    tmp_3135_fu_114201_p4 = r_V_94_11_fu_174099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3136_fu_159197_p2() {
    tmp_3136_fu_159197_p2 = (!tmp_3132_fu_159169_p4.read().is_01() || !tmp_3133_fu_159178_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3132_fu_159169_p4.read()) + sc_biguint<15>(tmp_3133_fu_159178_p4.read()));
}

void a0_conv2d_1::thread_tmp_3137_fu_114210_p2() {
    tmp_3137_fu_114210_p2 = (!tmp_3134_fu_114192_p4.read().is_01() || !tmp_3135_fu_114201_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3134_fu_114192_p4.read()) + sc_biguint<15>(tmp_3135_fu_114201_p4.read()));
}

void a0_conv2d_1::thread_tmp_3139_fu_159209_p4() {
    tmp_3139_fu_159209_p4 = r_V_95_11_fu_182099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_313_fu_140661_p2() {
    tmp_313_fu_140661_p2 = (!tmp_310_fu_140631_p4.read().is_01() || !tmp_311_fu_140640_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_310_fu_140631_p4.read()) + sc_biguint<15>(tmp_311_fu_140640_p4.read()));
}

void a0_conv2d_1::thread_tmp_3140_fu_114225_p4() {
    tmp_3140_fu_114225_p4 = r_V_90_12_fu_174267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3141_fu_114234_p4() {
    tmp_3141_fu_114234_p4 = r_V_96_11_fu_174107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3142_fu_114249_p2() {
    tmp_3142_fu_114249_p2 = (!tmp_3141_fu_114234_p4.read().is_01() || !tmp_3140_fu_114225_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3141_fu_114234_p4.read()) + sc_biguint<15>(tmp_3140_fu_114225_p4.read()));
}

void a0_conv2d_1::thread_tmp_3143_fu_114255_p4() {
    tmp_3143_fu_114255_p4 = r_V_97_11_fu_174115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3144_fu_159223_p2() {
    tmp_3144_fu_159223_p2 = (!tmp_3138_reg_225281.read().is_01() || !tmp_3139_fu_159209_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3138_reg_225281.read()) + sc_biguint<15>(tmp_3139_fu_159209_p4.read()));
}

void a0_conv2d_1::thread_tmp_3145_fu_114270_p2() {
    tmp_3145_fu_114270_p2 = (!tmp_3142_fu_114249_p2.read().is_01() || !tmp_3143_fu_114255_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3142_fu_114249_p2.read()) + sc_biguint<15>(tmp_3143_fu_114255_p4.read()));
}

void a0_conv2d_1::thread_tmp_3146_fu_159233_p2() {
    tmp_3146_fu_159233_p2 = (!tmp_3145_reg_225291.read().is_01() || !tmp_3144_fu_159223_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3145_reg_225291.read()) + sc_biguint<15>(tmp_3144_fu_159223_p2.read()));
}

void a0_conv2d_1::thread_tmp_3147_fu_159238_p2() {
    tmp_3147_fu_159238_p2 = (!tmp_3137_reg_225276.read().is_01() || !tmp_3136_fu_159197_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3137_reg_225276.read()) + sc_biguint<15>(tmp_3136_fu_159197_p2.read()));
}

void a0_conv2d_1::thread_tmp_3148_fu_159249_p4() {
    tmp_3148_fu_159249_p4 = r_V_98_11_fu_182107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3149_fu_159258_p4() {
    tmp_3149_fu_159258_p4 = r_V_92_12_fu_182187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_314_fu_140673_p4() {
    tmp_314_fu_140673_p4 = r_V_76_54_fu_187547_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3150_fu_114276_p4() {
    tmp_3150_fu_114276_p4 = r_V_91_12_fu_174275_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3151_fu_114285_p4() {
    tmp_3151_fu_114285_p4 = r_V_94_12_fu_174291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3152_fu_159277_p2() {
    tmp_3152_fu_159277_p2 = (!tmp_3148_fu_159249_p4.read().is_01() || !tmp_3149_fu_159258_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3148_fu_159249_p4.read()) + sc_biguint<15>(tmp_3149_fu_159258_p4.read()));
}

void a0_conv2d_1::thread_tmp_3153_fu_114294_p2() {
    tmp_3153_fu_114294_p2 = (!tmp_3150_fu_114276_p4.read().is_01() || !tmp_3151_fu_114285_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3150_fu_114276_p4.read()) + sc_biguint<15>(tmp_3151_fu_114285_p4.read()));
}

void a0_conv2d_1::thread_tmp_3155_fu_159289_p4() {
    tmp_3155_fu_159289_p4 = r_V_95_12_fu_182195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3156_fu_114309_p4() {
    tmp_3156_fu_114309_p4 = r_V_90_13_fu_174459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3157_fu_114318_p4() {
    tmp_3157_fu_114318_p4 = r_V_96_12_fu_174299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3158_fu_114333_p2() {
    tmp_3158_fu_114333_p2 = (!tmp_3157_fu_114318_p4.read().is_01() || !tmp_3156_fu_114309_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3157_fu_114318_p4.read()) + sc_biguint<15>(tmp_3156_fu_114309_p4.read()));
}

void a0_conv2d_1::thread_tmp_3159_fu_114339_p4() {
    tmp_3159_fu_114339_p4 = r_V_97_12_fu_174307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_315_fu_140682_p4() {
    tmp_315_fu_140682_p4 = r_V_75_54_fu_187539_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3160_fu_159307_p2() {
    tmp_3160_fu_159307_p2 = (!tmp_3154_reg_225301.read().is_01() || !tmp_3155_fu_159289_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3154_reg_225301.read()) + sc_biguint<15>(tmp_3155_fu_159289_p4.read()));
}

void a0_conv2d_1::thread_tmp_3161_fu_114348_p2() {
    tmp_3161_fu_114348_p2 = (!tmp_3158_fu_114333_p2.read().is_01() || !tmp_3159_fu_114339_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3158_fu_114333_p2.read()) + sc_biguint<15>(tmp_3159_fu_114339_p4.read()));
}

void a0_conv2d_1::thread_tmp_3162_fu_159318_p2() {
    tmp_3162_fu_159318_p2 = (!tmp_3161_reg_225311.read().is_01() || !tmp_3160_fu_159307_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3161_reg_225311.read()) + sc_biguint<15>(tmp_3160_fu_159307_p2.read()));
}

void a0_conv2d_1::thread_tmp_3163_fu_159323_p2() {
    tmp_3163_fu_159323_p2 = (!tmp_3153_reg_225296.read().is_01() || !tmp_3152_fu_159277_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3153_reg_225296.read()) + sc_biguint<15>(tmp_3152_fu_159277_p2.read()));
}

void a0_conv2d_1::thread_tmp_3164_fu_159334_p2() {
    tmp_3164_fu_159334_p2 = (!tmp_3146_fu_159233_p2.read().is_01() || !tmp_3147_fu_159238_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3146_fu_159233_p2.read()) + sc_biguint<15>(tmp_3147_fu_159238_p2.read()));
}

void a0_conv2d_1::thread_tmp_3165_fu_159340_p2() {
    tmp_3165_fu_159340_p2 = (!tmp_3162_fu_159318_p2.read().is_01() || !tmp_3163_fu_159323_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3162_fu_159318_p2.read()) + sc_biguint<15>(tmp_3163_fu_159323_p2.read()));
}

void a0_conv2d_1::thread_tmp_3166_fu_159352_p4() {
    tmp_3166_fu_159352_p4 = r_V_98_12_fu_182203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3167_fu_159361_p4() {
    tmp_3167_fu_159361_p4 = r_V_92_13_fu_182283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3168_fu_114354_p4() {
    tmp_3168_fu_114354_p4 = r_V_91_13_fu_174467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3169_fu_114363_p4() {
    tmp_3169_fu_114363_p4 = r_V_94_13_fu_174483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_316_fu_140697_p4() {
    tmp_316_fu_140697_p4 = r_V_78_54_fu_187563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3170_fu_159380_p2() {
    tmp_3170_fu_159380_p2 = (!tmp_3166_fu_159352_p4.read().is_01() || !tmp_3167_fu_159361_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3166_fu_159352_p4.read()) + sc_biguint<15>(tmp_3167_fu_159361_p4.read()));
}

void a0_conv2d_1::thread_tmp_3171_fu_114372_p2() {
    tmp_3171_fu_114372_p2 = (!tmp_3168_fu_114354_p4.read().is_01() || !tmp_3169_fu_114363_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3168_fu_114354_p4.read()) + sc_biguint<15>(tmp_3169_fu_114363_p4.read()));
}

void a0_conv2d_1::thread_tmp_3173_fu_159392_p4() {
    tmp_3173_fu_159392_p4 = r_V_95_13_fu_182291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3174_fu_114387_p4() {
    tmp_3174_fu_114387_p4 = r_V_90_14_fu_174651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3175_fu_114396_p4() {
    tmp_3175_fu_114396_p4 = r_V_96_13_fu_174491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3176_fu_114411_p2() {
    tmp_3176_fu_114411_p2 = (!tmp_3175_fu_114396_p4.read().is_01() || !tmp_3174_fu_114387_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3175_fu_114396_p4.read()) + sc_biguint<15>(tmp_3174_fu_114387_p4.read()));
}

void a0_conv2d_1::thread_tmp_3177_fu_114417_p4() {
    tmp_3177_fu_114417_p4 = r_V_97_13_fu_174499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3178_fu_159406_p2() {
    tmp_3178_fu_159406_p2 = (!tmp_3172_reg_225321.read().is_01() || !tmp_3173_fu_159392_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3172_reg_225321.read()) + sc_biguint<15>(tmp_3173_fu_159392_p4.read()));
}

void a0_conv2d_1::thread_tmp_3179_fu_114432_p2() {
    tmp_3179_fu_114432_p2 = (!tmp_3176_fu_114411_p2.read().is_01() || !tmp_3177_fu_114417_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3176_fu_114411_p2.read()) + sc_biguint<15>(tmp_3177_fu_114417_p4.read()));
}

void a0_conv2d_1::thread_tmp_317_fu_140706_p4() {
    tmp_317_fu_140706_p4 = r_V_79_54_fu_187571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3180_fu_159416_p2() {
    tmp_3180_fu_159416_p2 = (!tmp_3179_reg_225331.read().is_01() || !tmp_3178_fu_159406_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3179_reg_225331.read()) + sc_biguint<15>(tmp_3178_fu_159406_p2.read()));
}

void a0_conv2d_1::thread_tmp_3181_fu_159421_p2() {
    tmp_3181_fu_159421_p2 = (!tmp_3171_reg_225316.read().is_01() || !tmp_3170_fu_159380_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3171_reg_225316.read()) + sc_biguint<15>(tmp_3170_fu_159380_p2.read()));
}

void a0_conv2d_1::thread_tmp_3182_fu_159432_p4() {
    tmp_3182_fu_159432_p4 = r_V_98_13_fu_182299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3183_fu_159441_p4() {
    tmp_3183_fu_159441_p4 = r_V_92_14_fu_182379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3184_fu_114438_p4() {
    tmp_3184_fu_114438_p4 = r_V_91_14_fu_174659_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3185_fu_114447_p4() {
    tmp_3185_fu_114447_p4 = r_V_94_14_fu_174675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3186_fu_159460_p2() {
    tmp_3186_fu_159460_p2 = (!tmp_3182_fu_159432_p4.read().is_01() || !tmp_3183_fu_159441_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3182_fu_159432_p4.read()) + sc_biguint<15>(tmp_3183_fu_159441_p4.read()));
}

void a0_conv2d_1::thread_tmp_3187_fu_114456_p2() {
    tmp_3187_fu_114456_p2 = (!tmp_3184_fu_114438_p4.read().is_01() || !tmp_3185_fu_114447_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3184_fu_114438_p4.read()) + sc_biguint<15>(tmp_3185_fu_114447_p4.read()));
}

void a0_conv2d_1::thread_tmp_3189_fu_159472_p4() {
    tmp_3189_fu_159472_p4 = r_V_95_14_fu_182387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_318_fu_140721_p2() {
    tmp_318_fu_140721_p2 = (!tmp_317_fu_140706_p4.read().is_01() || !tmp_316_fu_140697_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_317_fu_140706_p4.read()) + sc_biguint<15>(tmp_316_fu_140697_p4.read()));
}

void a0_conv2d_1::thread_tmp_3190_fu_114471_p4() {
    tmp_3190_fu_114471_p4 = r_V_90_15_fu_174843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3191_fu_114480_p4() {
    tmp_3191_fu_114480_p4 = r_V_96_14_fu_174683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3192_fu_114495_p2() {
    tmp_3192_fu_114495_p2 = (!tmp_3191_fu_114480_p4.read().is_01() || !tmp_3190_fu_114471_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3191_fu_114480_p4.read()) + sc_biguint<15>(tmp_3190_fu_114471_p4.read()));
}

void a0_conv2d_1::thread_tmp_3193_fu_114501_p4() {
    tmp_3193_fu_114501_p4 = r_V_97_14_fu_174691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3194_fu_159486_p2() {
    tmp_3194_fu_159486_p2 = (!tmp_3188_reg_225341.read().is_01() || !tmp_3189_fu_159472_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3188_reg_225341.read()) + sc_biguint<15>(tmp_3189_fu_159472_p4.read()));
}

void a0_conv2d_1::thread_tmp_3195_fu_114516_p2() {
    tmp_3195_fu_114516_p2 = (!tmp_3192_fu_114495_p2.read().is_01() || !tmp_3193_fu_114501_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3192_fu_114495_p2.read()) + sc_biguint<15>(tmp_3193_fu_114501_p4.read()));
}

void a0_conv2d_1::thread_tmp_3196_fu_159496_p2() {
    tmp_3196_fu_159496_p2 = (!tmp_3195_reg_225351.read().is_01() || !tmp_3194_fu_159486_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3195_reg_225351.read()) + sc_biguint<15>(tmp_3194_fu_159486_p2.read()));
}

void a0_conv2d_1::thread_tmp_3197_fu_159501_p2() {
    tmp_3197_fu_159501_p2 = (!tmp_3187_reg_225336.read().is_01() || !tmp_3186_fu_159460_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3187_reg_225336.read()) + sc_biguint<15>(tmp_3186_fu_159460_p2.read()));
}

void a0_conv2d_1::thread_tmp_3198_fu_159512_p2() {
    tmp_3198_fu_159512_p2 = (!tmp_3180_fu_159416_p2.read().is_01() || !tmp_3181_fu_159421_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3180_fu_159416_p2.read()) + sc_biguint<15>(tmp_3181_fu_159421_p2.read()));
}

void a0_conv2d_1::thread_tmp_3199_fu_159518_p2() {
    tmp_3199_fu_159518_p2 = (!tmp_3196_fu_159496_p2.read().is_01() || !tmp_3197_fu_159501_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3196_fu_159496_p2.read()) + sc_biguint<15>(tmp_3197_fu_159501_p2.read()));
}

void a0_conv2d_1::thread_tmp_319_fu_140727_p4() {
    tmp_319_fu_140727_p4 = r_V_77_54_fu_187555_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_31_fu_72526_p2() {
    tmp_31_fu_72526_p2 = (!ap_const_lv16_40.is_01() || !tmp_14_fu_72250_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_40) + sc_biguint<16>(tmp_14_fu_72250_p2.read()));
}

void a0_conv2d_1::thread_tmp_3200_fu_159524_p2() {
    tmp_3200_fu_159524_p2 = (!tmp_3199_fu_159518_p2.read().is_01() || !tmp_3198_fu_159512_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3199_fu_159518_p2.read()) + sc_biguint<15>(tmp_3198_fu_159512_p2.read()));
}

void a0_conv2d_1::thread_tmp_3201_fu_159530_p2() {
    tmp_3201_fu_159530_p2 = (!tmp_3165_fu_159340_p2.read().is_01() || !tmp_3164_fu_159334_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3165_fu_159340_p2.read()) + sc_biguint<15>(tmp_3164_fu_159334_p2.read()));
}

void a0_conv2d_1::thread_tmp_3202_fu_170496_p2() {
    tmp_3202_fu_170496_p2 = (!tmp_3130_reg_227941.read().is_01() || !tmp_3131_reg_227946.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3130_reg_227941.read()) + sc_biguint<15>(tmp_3131_reg_227946.read()));
}

void a0_conv2d_1::thread_tmp_3203_fu_159536_p2() {
    tmp_3203_fu_159536_p2 = (!tmp_3200_fu_159524_p2.read().is_01() || !tmp_3201_fu_159530_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3200_fu_159524_p2.read()) + sc_biguint<15>(tmp_3201_fu_159530_p2.read()));
}

void a0_conv2d_1::thread_tmp_3204_fu_170506_p2() {
    tmp_3204_fu_170506_p2 = (!tmp_3203_reg_227966.read().is_01() || !tmp_3202_fu_170496_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3203_reg_227966.read()) + sc_biguint<15>(tmp_3202_fu_170496_p2.read()));
}

void a0_conv2d_1::thread_tmp_3205_fu_170511_p2() {
    tmp_3205_fu_170511_p2 = (!tmp_3061_reg_227921.read().is_01() || !tmp_3060_fu_170469_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3061_reg_227921.read()) + sc_biguint<15>(tmp_3060_fu_170469_p2.read()));
}

void a0_conv2d_1::thread_tmp_3206_fu_159542_p4() {
    tmp_3206_fu_159542_p4 = r_V_98_14_fu_182395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3207_fu_159551_p4() {
    tmp_3207_fu_159551_p4 = r_V_92_15_fu_182475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3208_fu_114522_p4() {
    tmp_3208_fu_114522_p4 = r_V_91_15_fu_174851_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3209_fu_114531_p4() {
    tmp_3209_fu_114531_p4 = r_V_94_15_fu_174867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_320_fu_140742_p2() {
    tmp_320_fu_140742_p2 = (!tmp_314_fu_140673_p4.read().is_01() || !tmp_315_fu_140682_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_314_fu_140673_p4.read()) + sc_biguint<15>(tmp_315_fu_140682_p4.read()));
}

void a0_conv2d_1::thread_tmp_3210_fu_159570_p2() {
    tmp_3210_fu_159570_p2 = (!tmp_3206_fu_159542_p4.read().is_01() || !tmp_3207_fu_159551_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3206_fu_159542_p4.read()) + sc_biguint<15>(tmp_3207_fu_159551_p4.read()));
}

void a0_conv2d_1::thread_tmp_3211_fu_114540_p2() {
    tmp_3211_fu_114540_p2 = (!tmp_3208_fu_114522_p4.read().is_01() || !tmp_3209_fu_114531_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3208_fu_114522_p4.read()) + sc_biguint<15>(tmp_3209_fu_114531_p4.read()));
}

void a0_conv2d_1::thread_tmp_3213_fu_159582_p4() {
    tmp_3213_fu_159582_p4 = r_V_95_15_fu_182483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3214_fu_114555_p4() {
    tmp_3214_fu_114555_p4 = r_V_90_16_fu_175035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3215_fu_114564_p4() {
    tmp_3215_fu_114564_p4 = r_V_96_15_fu_174875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3216_fu_114579_p2() {
    tmp_3216_fu_114579_p2 = (!tmp_3215_fu_114564_p4.read().is_01() || !tmp_3214_fu_114555_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3215_fu_114564_p4.read()) + sc_biguint<15>(tmp_3214_fu_114555_p4.read()));
}

void a0_conv2d_1::thread_tmp_3217_fu_114585_p4() {
    tmp_3217_fu_114585_p4 = r_V_97_15_fu_174883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3218_fu_159596_p2() {
    tmp_3218_fu_159596_p2 = (!tmp_3212_reg_225361.read().is_01() || !tmp_3213_fu_159582_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3212_reg_225361.read()) + sc_biguint<15>(tmp_3213_fu_159582_p4.read()));
}

void a0_conv2d_1::thread_tmp_3219_fu_114600_p2() {
    tmp_3219_fu_114600_p2 = (!tmp_3216_fu_114579_p2.read().is_01() || !tmp_3217_fu_114585_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3216_fu_114579_p2.read()) + sc_biguint<15>(tmp_3217_fu_114585_p4.read()));
}

void a0_conv2d_1::thread_tmp_321_fu_140748_p2() {
    tmp_321_fu_140748_p2 = (!tmp_318_fu_140721_p2.read().is_01() || !tmp_319_fu_140727_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_318_fu_140721_p2.read()) + sc_biguint<15>(tmp_319_fu_140727_p4.read()));
}

void a0_conv2d_1::thread_tmp_3220_fu_159606_p2() {
    tmp_3220_fu_159606_p2 = (!tmp_3219_reg_225371.read().is_01() || !tmp_3218_fu_159596_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3219_reg_225371.read()) + sc_biguint<15>(tmp_3218_fu_159596_p2.read()));
}

void a0_conv2d_1::thread_tmp_3221_fu_159611_p2() {
    tmp_3221_fu_159611_p2 = (!tmp_3211_reg_225356.read().is_01() || !tmp_3210_fu_159570_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3211_reg_225356.read()) + sc_biguint<15>(tmp_3210_fu_159570_p2.read()));
}

void a0_conv2d_1::thread_tmp_3222_fu_159622_p4() {
    tmp_3222_fu_159622_p4 = r_V_98_15_fu_182491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3223_fu_159631_p4() {
    tmp_3223_fu_159631_p4 = r_V_92_16_fu_182571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3224_fu_114606_p4() {
    tmp_3224_fu_114606_p4 = r_V_91_16_fu_175043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3225_fu_114615_p4() {
    tmp_3225_fu_114615_p4 = r_V_94_16_fu_175059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3226_fu_159650_p2() {
    tmp_3226_fu_159650_p2 = (!tmp_3222_fu_159622_p4.read().is_01() || !tmp_3223_fu_159631_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3222_fu_159622_p4.read()) + sc_biguint<15>(tmp_3223_fu_159631_p4.read()));
}

void a0_conv2d_1::thread_tmp_3227_fu_114624_p2() {
    tmp_3227_fu_114624_p2 = (!tmp_3224_fu_114606_p4.read().is_01() || !tmp_3225_fu_114615_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3224_fu_114606_p4.read()) + sc_biguint<15>(tmp_3225_fu_114615_p4.read()));
}

void a0_conv2d_1::thread_tmp_3229_fu_159662_p4() {
    tmp_3229_fu_159662_p4 = r_V_95_16_fu_182579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_322_fu_140760_p2() {
    tmp_322_fu_140760_p2 = (!tmp_321_fu_140748_p2.read().is_01() || !tmp_320_fu_140742_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_321_fu_140748_p2.read()) + sc_biguint<15>(tmp_320_fu_140742_p2.read()));
}

void a0_conv2d_1::thread_tmp_3230_fu_114639_p4() {
    tmp_3230_fu_114639_p4 = r_V_90_17_fu_175227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3231_fu_114648_p4() {
    tmp_3231_fu_114648_p4 = r_V_96_16_fu_175067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3232_fu_114663_p2() {
    tmp_3232_fu_114663_p2 = (!tmp_3231_fu_114648_p4.read().is_01() || !tmp_3230_fu_114639_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3231_fu_114648_p4.read()) + sc_biguint<15>(tmp_3230_fu_114639_p4.read()));
}

void a0_conv2d_1::thread_tmp_3233_fu_114669_p4() {
    tmp_3233_fu_114669_p4 = r_V_97_16_fu_175075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3234_fu_159680_p2() {
    tmp_3234_fu_159680_p2 = (!tmp_3228_reg_225381.read().is_01() || !tmp_3229_fu_159662_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3228_reg_225381.read()) + sc_biguint<15>(tmp_3229_fu_159662_p4.read()));
}

void a0_conv2d_1::thread_tmp_3235_fu_114678_p2() {
    tmp_3235_fu_114678_p2 = (!tmp_3232_fu_114663_p2.read().is_01() || !tmp_3233_fu_114669_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3232_fu_114663_p2.read()) + sc_biguint<15>(tmp_3233_fu_114669_p4.read()));
}

void a0_conv2d_1::thread_tmp_3236_fu_159691_p2() {
    tmp_3236_fu_159691_p2 = (!tmp_3235_reg_225391.read().is_01() || !tmp_3234_fu_159680_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3235_reg_225391.read()) + sc_biguint<15>(tmp_3234_fu_159680_p2.read()));
}

void a0_conv2d_1::thread_tmp_3237_fu_159696_p2() {
    tmp_3237_fu_159696_p2 = (!tmp_3227_reg_225376.read().is_01() || !tmp_3226_fu_159650_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3227_reg_225376.read()) + sc_biguint<15>(tmp_3226_fu_159650_p2.read()));
}

void a0_conv2d_1::thread_tmp_3238_fu_159707_p2() {
    tmp_3238_fu_159707_p2 = (!tmp_3220_fu_159606_p2.read().is_01() || !tmp_3221_fu_159611_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3220_fu_159606_p2.read()) + sc_biguint<15>(tmp_3221_fu_159611_p2.read()));
}

void a0_conv2d_1::thread_tmp_3239_fu_159713_p2() {
    tmp_3239_fu_159713_p2 = (!tmp_3236_fu_159691_p2.read().is_01() || !tmp_3237_fu_159696_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3236_fu_159691_p2.read()) + sc_biguint<15>(tmp_3237_fu_159696_p2.read()));
}

void a0_conv2d_1::thread_tmp_323_fu_140766_p2() {
    tmp_323_fu_140766_p2 = (!tmp_313_fu_140661_p2.read().is_01() || !tmp_312_fu_140655_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_313_fu_140661_p2.read()) + sc_biguint<15>(tmp_312_fu_140655_p2.read()));
}

void a0_conv2d_1::thread_tmp_3240_fu_159725_p4() {
    tmp_3240_fu_159725_p4 = r_V_98_16_fu_182587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3241_fu_159734_p4() {
    tmp_3241_fu_159734_p4 = r_V_92_17_fu_182667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3242_fu_114684_p4() {
    tmp_3242_fu_114684_p4 = r_V_91_17_fu_175235_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3243_fu_114693_p4() {
    tmp_3243_fu_114693_p4 = r_V_94_17_fu_175251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3244_fu_159753_p2() {
    tmp_3244_fu_159753_p2 = (!tmp_3240_fu_159725_p4.read().is_01() || !tmp_3241_fu_159734_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3240_fu_159725_p4.read()) + sc_biguint<15>(tmp_3241_fu_159734_p4.read()));
}

void a0_conv2d_1::thread_tmp_3245_fu_114702_p2() {
    tmp_3245_fu_114702_p2 = (!tmp_3242_fu_114684_p4.read().is_01() || !tmp_3243_fu_114693_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3242_fu_114684_p4.read()) + sc_biguint<15>(tmp_3243_fu_114693_p4.read()));
}

void a0_conv2d_1::thread_tmp_3247_fu_159765_p4() {
    tmp_3247_fu_159765_p4 = r_V_95_17_fu_182675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3248_fu_114717_p4() {
    tmp_3248_fu_114717_p4 = r_V_90_18_fu_175419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3249_fu_114726_p4() {
    tmp_3249_fu_114726_p4 = r_V_96_17_fu_175259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_324_fu_140778_p2() {
    tmp_324_fu_140778_p2 = (!tmp_306_fu_140589_p2.read().is_01() || !tmp_307_fu_140595_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_306_fu_140589_p2.read()) + sc_biguint<15>(tmp_307_fu_140595_p2.read()));
}

void a0_conv2d_1::thread_tmp_3250_fu_114741_p2() {
    tmp_3250_fu_114741_p2 = (!tmp_3249_fu_114726_p4.read().is_01() || !tmp_3248_fu_114717_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3249_fu_114726_p4.read()) + sc_biguint<15>(tmp_3248_fu_114717_p4.read()));
}

void a0_conv2d_1::thread_tmp_3251_fu_114747_p4() {
    tmp_3251_fu_114747_p4 = r_V_97_17_fu_175267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3252_fu_159779_p2() {
    tmp_3252_fu_159779_p2 = (!tmp_3246_reg_225401.read().is_01() || !tmp_3247_fu_159765_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3246_reg_225401.read()) + sc_biguint<15>(tmp_3247_fu_159765_p4.read()));
}

void a0_conv2d_1::thread_tmp_3253_fu_114762_p2() {
    tmp_3253_fu_114762_p2 = (!tmp_3250_fu_114741_p2.read().is_01() || !tmp_3251_fu_114747_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3250_fu_114741_p2.read()) + sc_biguint<15>(tmp_3251_fu_114747_p4.read()));
}

void a0_conv2d_1::thread_tmp_3254_fu_159789_p2() {
    tmp_3254_fu_159789_p2 = (!tmp_3253_reg_225411.read().is_01() || !tmp_3252_fu_159779_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3253_reg_225411.read()) + sc_biguint<15>(tmp_3252_fu_159779_p2.read()));
}

void a0_conv2d_1::thread_tmp_3255_fu_159794_p2() {
    tmp_3255_fu_159794_p2 = (!tmp_3245_reg_225396.read().is_01() || !tmp_3244_fu_159753_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3245_reg_225396.read()) + sc_biguint<15>(tmp_3244_fu_159753_p2.read()));
}

void a0_conv2d_1::thread_tmp_3256_fu_159805_p4() {
    tmp_3256_fu_159805_p4 = r_V_98_17_fu_182683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3257_fu_159814_p4() {
    tmp_3257_fu_159814_p4 = r_V_92_18_fu_182763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3258_fu_114768_p4() {
    tmp_3258_fu_114768_p4 = r_V_91_18_fu_175427_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3259_fu_114777_p4() {
    tmp_3259_fu_114777_p4 = r_V_94_18_fu_175443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_325_fu_140784_p2() {
    tmp_325_fu_140784_p2 = (!tmp_322_fu_140760_p2.read().is_01() || !tmp_323_fu_140766_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_322_fu_140760_p2.read()) + sc_biguint<15>(tmp_323_fu_140766_p2.read()));
}

void a0_conv2d_1::thread_tmp_3260_fu_159833_p2() {
    tmp_3260_fu_159833_p2 = (!tmp_3256_fu_159805_p4.read().is_01() || !tmp_3257_fu_159814_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3256_fu_159805_p4.read()) + sc_biguint<15>(tmp_3257_fu_159814_p4.read()));
}

void a0_conv2d_1::thread_tmp_3261_fu_114786_p2() {
    tmp_3261_fu_114786_p2 = (!tmp_3258_fu_114768_p4.read().is_01() || !tmp_3259_fu_114777_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3258_fu_114768_p4.read()) + sc_biguint<15>(tmp_3259_fu_114777_p4.read()));
}

void a0_conv2d_1::thread_tmp_3263_fu_159845_p4() {
    tmp_3263_fu_159845_p4 = r_V_95_18_fu_182771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3264_fu_114801_p4() {
    tmp_3264_fu_114801_p4 = r_V_90_19_fu_175611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3265_fu_114810_p4() {
    tmp_3265_fu_114810_p4 = r_V_96_18_fu_175451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3266_fu_114825_p2() {
    tmp_3266_fu_114825_p2 = (!tmp_3265_fu_114810_p4.read().is_01() || !tmp_3264_fu_114801_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3265_fu_114810_p4.read()) + sc_biguint<15>(tmp_3264_fu_114801_p4.read()));
}

void a0_conv2d_1::thread_tmp_3267_fu_114831_p4() {
    tmp_3267_fu_114831_p4 = r_V_97_18_fu_175459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3268_fu_159859_p2() {
    tmp_3268_fu_159859_p2 = (!tmp_3262_reg_225421.read().is_01() || !tmp_3263_fu_159845_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3262_reg_225421.read()) + sc_biguint<15>(tmp_3263_fu_159845_p4.read()));
}

void a0_conv2d_1::thread_tmp_3269_fu_114846_p2() {
    tmp_3269_fu_114846_p2 = (!tmp_3266_fu_114825_p2.read().is_01() || !tmp_3267_fu_114831_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3266_fu_114825_p2.read()) + sc_biguint<15>(tmp_3267_fu_114831_p4.read()));
}

void a0_conv2d_1::thread_tmp_326_fu_140790_p2() {
    tmp_326_fu_140790_p2 = (!tmp_325_fu_140784_p2.read().is_01() || !tmp_324_fu_140778_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_325_fu_140784_p2.read()) + sc_biguint<15>(tmp_324_fu_140778_p2.read()));
}

void a0_conv2d_1::thread_tmp_3270_fu_159869_p2() {
    tmp_3270_fu_159869_p2 = (!tmp_3269_reg_225431.read().is_01() || !tmp_3268_fu_159859_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3269_reg_225431.read()) + sc_biguint<15>(tmp_3268_fu_159859_p2.read()));
}

void a0_conv2d_1::thread_tmp_3271_fu_159874_p2() {
    tmp_3271_fu_159874_p2 = (!tmp_3261_reg_225416.read().is_01() || !tmp_3260_fu_159833_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3261_reg_225416.read()) + sc_biguint<15>(tmp_3260_fu_159833_p2.read()));
}

void a0_conv2d_1::thread_tmp_3272_fu_159885_p2() {
    tmp_3272_fu_159885_p2 = (!tmp_3254_fu_159789_p2.read().is_01() || !tmp_3255_fu_159794_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3254_fu_159789_p2.read()) + sc_biguint<15>(tmp_3255_fu_159794_p2.read()));
}

void a0_conv2d_1::thread_tmp_3273_fu_159891_p2() {
    tmp_3273_fu_159891_p2 = (!tmp_3270_fu_159869_p2.read().is_01() || !tmp_3271_fu_159874_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3270_fu_159869_p2.read()) + sc_biguint<15>(tmp_3271_fu_159874_p2.read()));
}

void a0_conv2d_1::thread_tmp_3274_fu_159897_p2() {
    tmp_3274_fu_159897_p2 = (!tmp_3273_fu_159891_p2.read().is_01() || !tmp_3272_fu_159885_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3273_fu_159891_p2.read()) + sc_biguint<15>(tmp_3272_fu_159885_p2.read()));
}

void a0_conv2d_1::thread_tmp_3275_fu_159903_p2() {
    tmp_3275_fu_159903_p2 = (!tmp_3239_fu_159713_p2.read().is_01() || !tmp_3238_fu_159707_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3239_fu_159713_p2.read()) + sc_biguint<15>(tmp_3238_fu_159707_p2.read()));
}

void a0_conv2d_1::thread_tmp_3276_fu_159909_p4() {
    tmp_3276_fu_159909_p4 = r_V_98_18_fu_182779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3277_fu_159918_p4() {
    tmp_3277_fu_159918_p4 = r_V_92_19_fu_182859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3278_fu_114852_p4() {
    tmp_3278_fu_114852_p4 = r_V_91_19_fu_175619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3279_fu_114861_p4() {
    tmp_3279_fu_114861_p4 = r_V_94_19_fu_175635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_327_fu_169622_p2() {
    tmp_327_fu_169622_p2 = (!tmp_291_reg_227036.read().is_01() || !tmp_290_reg_227031.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_291_reg_227036.read()) + sc_biguint<15>(tmp_290_reg_227031.read()));
}

void a0_conv2d_1::thread_tmp_3280_fu_159937_p2() {
    tmp_3280_fu_159937_p2 = (!tmp_3276_fu_159909_p4.read().is_01() || !tmp_3277_fu_159918_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3276_fu_159909_p4.read()) + sc_biguint<15>(tmp_3277_fu_159918_p4.read()));
}

void a0_conv2d_1::thread_tmp_3281_fu_114870_p2() {
    tmp_3281_fu_114870_p2 = (!tmp_3278_fu_114852_p4.read().is_01() || !tmp_3279_fu_114861_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3278_fu_114852_p4.read()) + sc_biguint<15>(tmp_3279_fu_114861_p4.read()));
}

void a0_conv2d_1::thread_tmp_3283_fu_159949_p4() {
    tmp_3283_fu_159949_p4 = r_V_95_19_fu_182867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3284_fu_114885_p4() {
    tmp_3284_fu_114885_p4 = r_V_90_20_fu_175803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3285_fu_114894_p4() {
    tmp_3285_fu_114894_p4 = r_V_96_19_fu_175643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3286_fu_114909_p2() {
    tmp_3286_fu_114909_p2 = (!tmp_3285_fu_114894_p4.read().is_01() || !tmp_3284_fu_114885_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3285_fu_114894_p4.read()) + sc_biguint<15>(tmp_3284_fu_114885_p4.read()));
}

void a0_conv2d_1::thread_tmp_3287_fu_114915_p4() {
    tmp_3287_fu_114915_p4 = r_V_97_19_fu_175651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3288_fu_159963_p2() {
    tmp_3288_fu_159963_p2 = (!tmp_3282_reg_225441.read().is_01() || !tmp_3283_fu_159949_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3282_reg_225441.read()) + sc_biguint<15>(tmp_3283_fu_159949_p4.read()));
}

void a0_conv2d_1::thread_tmp_3289_fu_114930_p2() {
    tmp_3289_fu_114930_p2 = (!tmp_3286_fu_114909_p2.read().is_01() || !tmp_3287_fu_114915_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3286_fu_114909_p2.read()) + sc_biguint<15>(tmp_3287_fu_114915_p4.read()));
}

void a0_conv2d_1::thread_tmp_328_fu_169631_p2() {
    tmp_328_fu_169631_p2 = (!tmp_256_reg_227021.read().is_01() || !tmp_257_reg_227026.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_256_reg_227021.read()) + sc_biguint<15>(tmp_257_reg_227026.read()));
}

void a0_conv2d_1::thread_tmp_3290_fu_159973_p2() {
    tmp_3290_fu_159973_p2 = (!tmp_3289_reg_225451.read().is_01() || !tmp_3288_fu_159963_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3289_reg_225451.read()) + sc_biguint<15>(tmp_3288_fu_159963_p2.read()));
}

void a0_conv2d_1::thread_tmp_3291_fu_159978_p2() {
    tmp_3291_fu_159978_p2 = (!tmp_3281_reg_225436.read().is_01() || !tmp_3280_fu_159937_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3281_reg_225436.read()) + sc_biguint<15>(tmp_3280_fu_159937_p2.read()));
}

void a0_conv2d_1::thread_tmp_3292_fu_159989_p4() {
    tmp_3292_fu_159989_p4 = r_V_98_19_fu_182875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3293_fu_159998_p4() {
    tmp_3293_fu_159998_p4 = r_V_92_20_fu_182955_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3294_fu_114936_p4() {
    tmp_3294_fu_114936_p4 = r_V_91_20_fu_175811_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3295_fu_114945_p4() {
    tmp_3295_fu_114945_p4 = r_V_94_20_fu_175827_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3296_fu_160017_p2() {
    tmp_3296_fu_160017_p2 = (!tmp_3292_fu_159989_p4.read().is_01() || !tmp_3293_fu_159998_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3292_fu_159989_p4.read()) + sc_biguint<15>(tmp_3293_fu_159998_p4.read()));
}

void a0_conv2d_1::thread_tmp_3297_fu_114954_p2() {
    tmp_3297_fu_114954_p2 = (!tmp_3294_fu_114936_p4.read().is_01() || !tmp_3295_fu_114945_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3294_fu_114936_p4.read()) + sc_biguint<15>(tmp_3295_fu_114945_p4.read()));
}

void a0_conv2d_1::thread_tmp_3299_fu_160029_p4() {
    tmp_3299_fu_160029_p4 = r_V_95_20_fu_182963_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_329_fu_169635_p2() {
    tmp_329_fu_169635_p2 = (!tmp_326_reg_227056.read().is_01() || !tmp_327_fu_169622_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_326_reg_227056.read()) + sc_biguint<15>(tmp_327_fu_169622_p2.read()));
}

void a0_conv2d_1::thread_tmp_32_fu_70158_p5() {
    tmp_32_fu_70158_p5 = esl_concat<8,7>(esl_concat<5,3>(esl_concat<3,2>(tmp_30_fu_70126_p1.read(), ap_const_lv2_0), tmp_30_fu_70126_p1.read()), ap_const_lv7_0);
}

void a0_conv2d_1::thread_tmp_3300_fu_114969_p4() {
    tmp_3300_fu_114969_p4 = r_V_90_21_fu_175995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3301_fu_114978_p4() {
    tmp_3301_fu_114978_p4 = r_V_96_20_fu_175835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3302_fu_114993_p2() {
    tmp_3302_fu_114993_p2 = (!tmp_3301_fu_114978_p4.read().is_01() || !tmp_3300_fu_114969_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3301_fu_114978_p4.read()) + sc_biguint<15>(tmp_3300_fu_114969_p4.read()));
}

void a0_conv2d_1::thread_tmp_3303_fu_114999_p4() {
    tmp_3303_fu_114999_p4 = r_V_97_20_fu_175843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3304_fu_160047_p2() {
    tmp_3304_fu_160047_p2 = (!tmp_3298_reg_225461.read().is_01() || !tmp_3299_fu_160029_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3298_reg_225461.read()) + sc_biguint<15>(tmp_3299_fu_160029_p4.read()));
}

void a0_conv2d_1::thread_tmp_3305_fu_115008_p2() {
    tmp_3305_fu_115008_p2 = (!tmp_3302_fu_114993_p2.read().is_01() || !tmp_3303_fu_114999_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3302_fu_114993_p2.read()) + sc_biguint<15>(tmp_3303_fu_114999_p4.read()));
}

void a0_conv2d_1::thread_tmp_3306_fu_160058_p2() {
    tmp_3306_fu_160058_p2 = (!tmp_3305_reg_225471.read().is_01() || !tmp_3304_fu_160047_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3305_reg_225471.read()) + sc_biguint<15>(tmp_3304_fu_160047_p2.read()));
}

void a0_conv2d_1::thread_tmp_3307_fu_160063_p2() {
    tmp_3307_fu_160063_p2 = (!tmp_3297_reg_225456.read().is_01() || !tmp_3296_fu_160017_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3297_reg_225456.read()) + sc_biguint<15>(tmp_3296_fu_160017_p2.read()));
}

void a0_conv2d_1::thread_tmp_3308_fu_160074_p2() {
    tmp_3308_fu_160074_p2 = (!tmp_3290_fu_159973_p2.read().is_01() || !tmp_3291_fu_159978_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3290_fu_159973_p2.read()) + sc_biguint<15>(tmp_3291_fu_159978_p2.read()));
}

void a0_conv2d_1::thread_tmp_3309_fu_160080_p2() {
    tmp_3309_fu_160080_p2 = (!tmp_3306_fu_160058_p2.read().is_01() || !tmp_3307_fu_160063_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3306_fu_160058_p2.read()) + sc_biguint<15>(tmp_3307_fu_160063_p2.read()));
}

void a0_conv2d_1::thread_tmp_330_fu_169646_p2() {
    tmp_330_fu_169646_p2 = (!tmp_329_fu_169635_p2.read().is_01() || !tmp_328_fu_169631_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_329_fu_169635_p2.read()) + sc_biguint<15>(tmp_328_fu_169631_p2.read()));
}

void a0_conv2d_1::thread_tmp_3310_fu_160092_p4() {
    tmp_3310_fu_160092_p4 = r_V_98_20_fu_182971_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3311_fu_160101_p4() {
    tmp_3311_fu_160101_p4 = r_V_92_21_fu_183051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3312_fu_115014_p4() {
    tmp_3312_fu_115014_p4 = r_V_91_21_fu_176003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3313_fu_115023_p4() {
    tmp_3313_fu_115023_p4 = r_V_94_21_fu_176019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3314_fu_160120_p2() {
    tmp_3314_fu_160120_p2 = (!tmp_3310_fu_160092_p4.read().is_01() || !tmp_3311_fu_160101_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3310_fu_160092_p4.read()) + sc_biguint<15>(tmp_3311_fu_160101_p4.read()));
}

void a0_conv2d_1::thread_tmp_3315_fu_115032_p2() {
    tmp_3315_fu_115032_p2 = (!tmp_3312_fu_115014_p4.read().is_01() || !tmp_3313_fu_115023_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3312_fu_115014_p4.read()) + sc_biguint<15>(tmp_3313_fu_115023_p4.read()));
}

void a0_conv2d_1::thread_tmp_3317_fu_160132_p4() {
    tmp_3317_fu_160132_p4 = r_V_95_21_fu_183059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3318_fu_115047_p4() {
    tmp_3318_fu_115047_p4 = r_V_90_22_fu_176187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3319_fu_115056_p4() {
    tmp_3319_fu_115056_p4 = r_V_96_21_fu_176027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_331_fu_169652_p2() {
    tmp_331_fu_169652_p2 = (!tmp_187_fu_169599_p2.read().is_01() || !tmp_186_fu_169595_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_187_fu_169599_p2.read()) + sc_biguint<15>(tmp_186_fu_169595_p2.read()));
}

void a0_conv2d_1::thread_tmp_3320_fu_115071_p2() {
    tmp_3320_fu_115071_p2 = (!tmp_3319_fu_115056_p4.read().is_01() || !tmp_3318_fu_115047_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3319_fu_115056_p4.read()) + sc_biguint<15>(tmp_3318_fu_115047_p4.read()));
}

void a0_conv2d_1::thread_tmp_3321_fu_115077_p4() {
    tmp_3321_fu_115077_p4 = r_V_97_21_fu_176035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3322_fu_160146_p2() {
    tmp_3322_fu_160146_p2 = (!tmp_3316_reg_225481.read().is_01() || !tmp_3317_fu_160132_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3316_reg_225481.read()) + sc_biguint<15>(tmp_3317_fu_160132_p4.read()));
}

void a0_conv2d_1::thread_tmp_3323_fu_115092_p2() {
    tmp_3323_fu_115092_p2 = (!tmp_3320_fu_115071_p2.read().is_01() || !tmp_3321_fu_115077_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3320_fu_115071_p2.read()) + sc_biguint<15>(tmp_3321_fu_115077_p4.read()));
}

void a0_conv2d_1::thread_tmp_3324_fu_160156_p2() {
    tmp_3324_fu_160156_p2 = (!tmp_3323_reg_225491.read().is_01() || !tmp_3322_fu_160146_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3323_reg_225491.read()) + sc_biguint<15>(tmp_3322_fu_160146_p2.read()));
}

void a0_conv2d_1::thread_tmp_3325_fu_160161_p2() {
    tmp_3325_fu_160161_p2 = (!tmp_3315_reg_225476.read().is_01() || !tmp_3314_fu_160120_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3315_reg_225476.read()) + sc_biguint<15>(tmp_3314_fu_160120_p2.read()));
}

void a0_conv2d_1::thread_tmp_3326_fu_160172_p4() {
    tmp_3326_fu_160172_p4 = r_V_98_21_fu_183067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3327_fu_160181_p4() {
    tmp_3327_fu_160181_p4 = r_V_92_22_fu_183147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3328_fu_115098_p4() {
    tmp_3328_fu_115098_p4 = r_V_91_22_fu_176195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3329_fu_115107_p4() {
    tmp_3329_fu_115107_p4 = r_V_94_22_fu_176211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3330_fu_160200_p2() {
    tmp_3330_fu_160200_p2 = (!tmp_3326_fu_160172_p4.read().is_01() || !tmp_3327_fu_160181_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3326_fu_160172_p4.read()) + sc_biguint<15>(tmp_3327_fu_160181_p4.read()));
}

void a0_conv2d_1::thread_tmp_3331_fu_115116_p2() {
    tmp_3331_fu_115116_p2 = (!tmp_3328_fu_115098_p4.read().is_01() || !tmp_3329_fu_115107_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3328_fu_115098_p4.read()) + sc_biguint<15>(tmp_3329_fu_115107_p4.read()));
}

void a0_conv2d_1::thread_tmp_3333_fu_160212_p4() {
    tmp_3333_fu_160212_p4 = r_V_95_22_fu_183155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3334_fu_115131_p4() {
    tmp_3334_fu_115131_p4 = r_V_90_23_fu_176379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3335_fu_115140_p4() {
    tmp_3335_fu_115140_p4 = r_V_96_22_fu_176219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3336_fu_115155_p2() {
    tmp_3336_fu_115155_p2 = (!tmp_3335_fu_115140_p4.read().is_01() || !tmp_3334_fu_115131_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3335_fu_115140_p4.read()) + sc_biguint<15>(tmp_3334_fu_115131_p4.read()));
}

void a0_conv2d_1::thread_tmp_3337_fu_115161_p4() {
    tmp_3337_fu_115161_p4 = r_V_97_22_fu_176227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3338_fu_160230_p2() {
    tmp_3338_fu_160230_p2 = (!tmp_3332_reg_225501.read().is_01() || !tmp_3333_fu_160212_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3332_reg_225501.read()) + sc_biguint<15>(tmp_3333_fu_160212_p4.read()));
}

void a0_conv2d_1::thread_tmp_3339_fu_115170_p2() {
    tmp_3339_fu_115170_p2 = (!tmp_3336_fu_115155_p2.read().is_01() || !tmp_3337_fu_115161_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3336_fu_115155_p2.read()) + sc_biguint<15>(tmp_3337_fu_115161_p4.read()));
}

void a0_conv2d_1::thread_tmp_333_fu_140796_p4() {
    tmp_333_fu_140796_p4 = r_V_80_30_fu_183883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3340_fu_160241_p2() {
    tmp_3340_fu_160241_p2 = (!tmp_3339_reg_225511.read().is_01() || !tmp_3338_fu_160230_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3339_reg_225511.read()) + sc_biguint<15>(tmp_3338_fu_160230_p2.read()));
}

void a0_conv2d_1::thread_tmp_3341_fu_160246_p2() {
    tmp_3341_fu_160246_p2 = (!tmp_3331_reg_225496.read().is_01() || !tmp_3330_fu_160200_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3331_reg_225496.read()) + sc_biguint<15>(tmp_3330_fu_160200_p2.read()));
}

void a0_conv2d_1::thread_tmp_3342_fu_160257_p2() {
    tmp_3342_fu_160257_p2 = (!tmp_3324_fu_160156_p2.read().is_01() || !tmp_3325_fu_160161_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3324_fu_160156_p2.read()) + sc_biguint<15>(tmp_3325_fu_160161_p2.read()));
}

void a0_conv2d_1::thread_tmp_3343_fu_160263_p2() {
    tmp_3343_fu_160263_p2 = (!tmp_3340_fu_160241_p2.read().is_01() || !tmp_3341_fu_160246_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3340_fu_160241_p2.read()) + sc_biguint<15>(tmp_3341_fu_160246_p2.read()));
}

void a0_conv2d_1::thread_tmp_3344_fu_160275_p2() {
    tmp_3344_fu_160275_p2 = (!tmp_3343_fu_160263_p2.read().is_01() || !tmp_3342_fu_160257_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3343_fu_160263_p2.read()) + sc_biguint<15>(tmp_3342_fu_160257_p2.read()));
}

void a0_conv2d_1::thread_tmp_3345_fu_160281_p2() {
    tmp_3345_fu_160281_p2 = (!tmp_3309_fu_160080_p2.read().is_01() || !tmp_3308_fu_160074_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3309_fu_160080_p2.read()) + sc_biguint<15>(tmp_3308_fu_160074_p2.read()));
}

void a0_conv2d_1::thread_tmp_3346_fu_160287_p2() {
    tmp_3346_fu_160287_p2 = (!tmp_3274_fu_159897_p2.read().is_01() || !tmp_3275_fu_159903_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3274_fu_159897_p2.read()) + sc_biguint<15>(tmp_3275_fu_159903_p2.read()));
}

void a0_conv2d_1::thread_tmp_3347_fu_160293_p2() {
    tmp_3347_fu_160293_p2 = (!tmp_3344_fu_160275_p2.read().is_01() || !tmp_3345_fu_160281_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3344_fu_160275_p2.read()) + sc_biguint<15>(tmp_3345_fu_160281_p2.read()));
}

void a0_conv2d_1::thread_tmp_3348_fu_160299_p4() {
    tmp_3348_fu_160299_p4 = r_V_98_22_fu_183163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3349_fu_160308_p4() {
    tmp_3349_fu_160308_p4 = r_V_92_23_fu_183243_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_334_fu_140810_p4() {
    tmp_334_fu_140810_p4 = r_V_74_31_fu_183963_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3350_fu_115176_p4() {
    tmp_3350_fu_115176_p4 = r_V_91_23_fu_176387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3351_fu_115185_p4() {
    tmp_3351_fu_115185_p4 = r_V_94_23_fu_176403_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3352_fu_160327_p2() {
    tmp_3352_fu_160327_p2 = (!tmp_3348_fu_160299_p4.read().is_01() || !tmp_3349_fu_160308_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3348_fu_160299_p4.read()) + sc_biguint<15>(tmp_3349_fu_160308_p4.read()));
}

void a0_conv2d_1::thread_tmp_3353_fu_115194_p2() {
    tmp_3353_fu_115194_p2 = (!tmp_3350_fu_115176_p4.read().is_01() || !tmp_3351_fu_115185_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3350_fu_115176_p4.read()) + sc_biguint<15>(tmp_3351_fu_115185_p4.read()));
}

void a0_conv2d_1::thread_tmp_3355_fu_160339_p4() {
    tmp_3355_fu_160339_p4 = r_V_95_23_fu_183251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3356_fu_115209_p4() {
    tmp_3356_fu_115209_p4 = r_V_90_24_fu_176571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3357_fu_115218_p4() {
    tmp_3357_fu_115218_p4 = r_V_96_23_fu_176411_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3358_fu_115233_p2() {
    tmp_3358_fu_115233_p2 = (!tmp_3357_fu_115218_p4.read().is_01() || !tmp_3356_fu_115209_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3357_fu_115218_p4.read()) + sc_biguint<15>(tmp_3356_fu_115209_p4.read()));
}

void a0_conv2d_1::thread_tmp_3359_fu_115239_p4() {
    tmp_3359_fu_115239_p4 = r_V_97_23_fu_176419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3360_fu_160353_p2() {
    tmp_3360_fu_160353_p2 = (!tmp_3354_reg_225521.read().is_01() || !tmp_3355_fu_160339_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3354_reg_225521.read()) + sc_biguint<15>(tmp_3355_fu_160339_p4.read()));
}

void a0_conv2d_1::thread_tmp_3361_fu_115254_p2() {
    tmp_3361_fu_115254_p2 = (!tmp_3358_fu_115233_p2.read().is_01() || !tmp_3359_fu_115239_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3358_fu_115233_p2.read()) + sc_biguint<15>(tmp_3359_fu_115239_p4.read()));
}

void a0_conv2d_1::thread_tmp_3362_fu_160363_p2() {
    tmp_3362_fu_160363_p2 = (!tmp_3361_reg_225531.read().is_01() || !tmp_3360_fu_160353_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3361_reg_225531.read()) + sc_biguint<15>(tmp_3360_fu_160353_p2.read()));
}

void a0_conv2d_1::thread_tmp_3363_fu_160368_p2() {
    tmp_3363_fu_160368_p2 = (!tmp_3353_reg_225516.read().is_01() || !tmp_3352_fu_160327_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3353_reg_225516.read()) + sc_biguint<15>(tmp_3352_fu_160327_p2.read()));
}

void a0_conv2d_1::thread_tmp_3364_fu_160379_p4() {
    tmp_3364_fu_160379_p4 = r_V_98_23_fu_183259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3365_fu_160388_p4() {
    tmp_3365_fu_160388_p4 = r_V_92_24_fu_183339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3366_fu_115260_p4() {
    tmp_3366_fu_115260_p4 = r_V_91_24_fu_176579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3367_fu_115269_p4() {
    tmp_3367_fu_115269_p4 = r_V_94_24_fu_176595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3368_fu_160407_p2() {
    tmp_3368_fu_160407_p2 = (!tmp_3364_fu_160379_p4.read().is_01() || !tmp_3365_fu_160388_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3364_fu_160379_p4.read()) + sc_biguint<15>(tmp_3365_fu_160388_p4.read()));
}

void a0_conv2d_1::thread_tmp_3369_fu_115278_p2() {
    tmp_3369_fu_115278_p2 = (!tmp_3366_fu_115260_p4.read().is_01() || !tmp_3367_fu_115269_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3366_fu_115260_p4.read()) + sc_biguint<15>(tmp_3367_fu_115269_p4.read()));
}

void a0_conv2d_1::thread_tmp_336_fu_140824_p2() {
    tmp_336_fu_140824_p2 = (!tmp_332_reg_221851.read().is_01() || !tmp_333_fu_140796_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_332_reg_221851.read()) + sc_biguint<15>(tmp_333_fu_140796_p4.read()));
}

void a0_conv2d_1::thread_tmp_3371_fu_160419_p4() {
    tmp_3371_fu_160419_p4 = r_V_95_24_fu_183347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3372_fu_115293_p4() {
    tmp_3372_fu_115293_p4 = r_V_90_25_fu_176763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3373_fu_115302_p4() {
    tmp_3373_fu_115302_p4 = r_V_96_24_fu_176603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3374_fu_115317_p2() {
    tmp_3374_fu_115317_p2 = (!tmp_3373_fu_115302_p4.read().is_01() || !tmp_3372_fu_115293_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3373_fu_115302_p4.read()) + sc_biguint<15>(tmp_3372_fu_115293_p4.read()));
}

void a0_conv2d_1::thread_tmp_3375_fu_115323_p4() {
    tmp_3375_fu_115323_p4 = r_V_97_24_fu_176611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3376_fu_160437_p2() {
    tmp_3376_fu_160437_p2 = (!tmp_3370_reg_225541.read().is_01() || !tmp_3371_fu_160419_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3370_reg_225541.read()) + sc_biguint<15>(tmp_3371_fu_160419_p4.read()));
}

void a0_conv2d_1::thread_tmp_3377_fu_115332_p2() {
    tmp_3377_fu_115332_p2 = (!tmp_3374_fu_115317_p2.read().is_01() || !tmp_3375_fu_115323_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3374_fu_115317_p2.read()) + sc_biguint<15>(tmp_3375_fu_115323_p4.read()));
}

void a0_conv2d_1::thread_tmp_3378_fu_160448_p2() {
    tmp_3378_fu_160448_p2 = (!tmp_3377_reg_225551.read().is_01() || !tmp_3376_fu_160437_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3377_reg_225551.read()) + sc_biguint<15>(tmp_3376_fu_160437_p2.read()));
}

void a0_conv2d_1::thread_tmp_3379_fu_160453_p2() {
    tmp_3379_fu_160453_p2 = (!tmp_3369_reg_225536.read().is_01() || !tmp_3368_fu_160407_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3369_reg_225536.read()) + sc_biguint<15>(tmp_3368_fu_160407_p2.read()));
}

void a0_conv2d_1::thread_tmp_337_fu_140829_p2() {
    tmp_337_fu_140829_p2 = (!tmp_334_fu_140810_p4.read().is_01() || !tmp_335_reg_221856.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_334_fu_140810_p4.read()) + sc_biguint<15>(tmp_335_reg_221856.read()));
}

void a0_conv2d_1::thread_tmp_3380_fu_160464_p2() {
    tmp_3380_fu_160464_p2 = (!tmp_3362_fu_160363_p2.read().is_01() || !tmp_3363_fu_160368_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3362_fu_160363_p2.read()) + sc_biguint<15>(tmp_3363_fu_160368_p2.read()));
}

void a0_conv2d_1::thread_tmp_3381_fu_160470_p2() {
    tmp_3381_fu_160470_p2 = (!tmp_3378_fu_160448_p2.read().is_01() || !tmp_3379_fu_160453_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3378_fu_160448_p2.read()) + sc_biguint<15>(tmp_3379_fu_160453_p2.read()));
}

void a0_conv2d_1::thread_tmp_3382_fu_160482_p4() {
    tmp_3382_fu_160482_p4 = r_V_98_24_fu_183355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3383_fu_160491_p4() {
    tmp_3383_fu_160491_p4 = r_V_92_25_fu_183435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3384_fu_115338_p4() {
    tmp_3384_fu_115338_p4 = r_V_91_25_fu_176771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3385_fu_115347_p4() {
    tmp_3385_fu_115347_p4 = r_V_94_25_fu_176787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3386_fu_160510_p2() {
    tmp_3386_fu_160510_p2 = (!tmp_3382_fu_160482_p4.read().is_01() || !tmp_3383_fu_160491_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3382_fu_160482_p4.read()) + sc_biguint<15>(tmp_3383_fu_160491_p4.read()));
}

void a0_conv2d_1::thread_tmp_3387_fu_115356_p2() {
    tmp_3387_fu_115356_p2 = (!tmp_3384_fu_115338_p4.read().is_01() || !tmp_3385_fu_115347_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3384_fu_115338_p4.read()) + sc_biguint<15>(tmp_3385_fu_115347_p4.read()));
}

void a0_conv2d_1::thread_tmp_3389_fu_160522_p4() {
    tmp_3389_fu_160522_p4 = r_V_95_25_fu_183443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3390_fu_115371_p4() {
    tmp_3390_fu_115371_p4 = r_V_90_26_fu_176955_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3391_fu_115380_p4() {
    tmp_3391_fu_115380_p4 = r_V_96_25_fu_176795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3392_fu_115395_p2() {
    tmp_3392_fu_115395_p2 = (!tmp_3391_fu_115380_p4.read().is_01() || !tmp_3390_fu_115371_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3391_fu_115380_p4.read()) + sc_biguint<15>(tmp_3390_fu_115371_p4.read()));
}

void a0_conv2d_1::thread_tmp_3393_fu_115401_p4() {
    tmp_3393_fu_115401_p4 = r_V_97_25_fu_176803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3394_fu_160536_p2() {
    tmp_3394_fu_160536_p2 = (!tmp_3388_reg_225561.read().is_01() || !tmp_3389_fu_160522_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3388_reg_225561.read()) + sc_biguint<15>(tmp_3389_fu_160522_p4.read()));
}

void a0_conv2d_1::thread_tmp_3395_fu_115416_p2() {
    tmp_3395_fu_115416_p2 = (!tmp_3392_fu_115395_p2.read().is_01() || !tmp_3393_fu_115401_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3392_fu_115395_p2.read()) + sc_biguint<15>(tmp_3393_fu_115401_p4.read()));
}

void a0_conv2d_1::thread_tmp_3396_fu_160546_p2() {
    tmp_3396_fu_160546_p2 = (!tmp_3395_reg_225571.read().is_01() || !tmp_3394_fu_160536_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3395_reg_225571.read()) + sc_biguint<15>(tmp_3394_fu_160536_p2.read()));
}

void a0_conv2d_1::thread_tmp_3397_fu_160551_p2() {
    tmp_3397_fu_160551_p2 = (!tmp_3387_reg_225556.read().is_01() || !tmp_3386_fu_160510_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3387_reg_225556.read()) + sc_biguint<15>(tmp_3386_fu_160510_p2.read()));
}

void a0_conv2d_1::thread_tmp_3398_fu_160562_p4() {
    tmp_3398_fu_160562_p4 = r_V_98_25_fu_183451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3399_fu_160571_p4() {
    tmp_3399_fu_160571_p4 = r_V_92_26_fu_183531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_33_fu_85637_p2() {
    tmp_33_fu_85637_p2 = (!ap_const_lv16_80.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_80) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_3400_fu_115422_p4() {
    tmp_3400_fu_115422_p4 = r_V_91_26_fu_176963_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3401_fu_115431_p4() {
    tmp_3401_fu_115431_p4 = r_V_94_26_fu_176979_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3402_fu_160590_p2() {
    tmp_3402_fu_160590_p2 = (!tmp_3398_fu_160562_p4.read().is_01() || !tmp_3399_fu_160571_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3398_fu_160562_p4.read()) + sc_biguint<15>(tmp_3399_fu_160571_p4.read()));
}

void a0_conv2d_1::thread_tmp_3403_fu_115440_p2() {
    tmp_3403_fu_115440_p2 = (!tmp_3400_fu_115422_p4.read().is_01() || !tmp_3401_fu_115431_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3400_fu_115422_p4.read()) + sc_biguint<15>(tmp_3401_fu_115431_p4.read()));
}

void a0_conv2d_1::thread_tmp_3405_fu_160602_p4() {
    tmp_3405_fu_160602_p4 = r_V_95_26_fu_183539_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3406_fu_115455_p4() {
    tmp_3406_fu_115455_p4 = r_V_90_27_fu_177147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3407_fu_115464_p4() {
    tmp_3407_fu_115464_p4 = r_V_96_26_fu_176987_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3408_fu_115479_p2() {
    tmp_3408_fu_115479_p2 = (!tmp_3407_fu_115464_p4.read().is_01() || !tmp_3406_fu_115455_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3407_fu_115464_p4.read()) + sc_biguint<15>(tmp_3406_fu_115455_p4.read()));
}

void a0_conv2d_1::thread_tmp_3409_fu_115485_p4() {
    tmp_3409_fu_115485_p4 = r_V_97_26_fu_176995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3410_fu_160616_p2() {
    tmp_3410_fu_160616_p2 = (!tmp_3404_reg_225581.read().is_01() || !tmp_3405_fu_160602_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3404_reg_225581.read()) + sc_biguint<15>(tmp_3405_fu_160602_p4.read()));
}

void a0_conv2d_1::thread_tmp_3411_fu_115500_p2() {
    tmp_3411_fu_115500_p2 = (!tmp_3408_fu_115479_p2.read().is_01() || !tmp_3409_fu_115485_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3408_fu_115479_p2.read()) + sc_biguint<15>(tmp_3409_fu_115485_p4.read()));
}

void a0_conv2d_1::thread_tmp_3412_fu_160626_p2() {
    tmp_3412_fu_160626_p2 = (!tmp_3411_reg_225591.read().is_01() || !tmp_3410_fu_160616_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3411_reg_225591.read()) + sc_biguint<15>(tmp_3410_fu_160616_p2.read()));
}

void a0_conv2d_1::thread_tmp_3413_fu_160631_p2() {
    tmp_3413_fu_160631_p2 = (!tmp_3403_reg_225576.read().is_01() || !tmp_3402_fu_160590_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3403_reg_225576.read()) + sc_biguint<15>(tmp_3402_fu_160590_p2.read()));
}

void a0_conv2d_1::thread_tmp_3414_fu_160642_p2() {
    tmp_3414_fu_160642_p2 = (!tmp_3396_fu_160546_p2.read().is_01() || !tmp_3397_fu_160551_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3396_fu_160546_p2.read()) + sc_biguint<15>(tmp_3397_fu_160551_p2.read()));
}

void a0_conv2d_1::thread_tmp_3415_fu_160648_p2() {
    tmp_3415_fu_160648_p2 = (!tmp_3412_fu_160626_p2.read().is_01() || !tmp_3413_fu_160631_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3412_fu_160626_p2.read()) + sc_biguint<15>(tmp_3413_fu_160631_p2.read()));
}

void a0_conv2d_1::thread_tmp_3416_fu_160654_p2() {
    tmp_3416_fu_160654_p2 = (!tmp_3415_fu_160648_p2.read().is_01() || !tmp_3414_fu_160642_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3415_fu_160648_p2.read()) + sc_biguint<15>(tmp_3414_fu_160642_p2.read()));
}

void a0_conv2d_1::thread_tmp_3417_fu_160660_p2() {
    tmp_3417_fu_160660_p2 = (!tmp_3381_fu_160470_p2.read().is_01() || !tmp_3380_fu_160464_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3381_fu_160470_p2.read()) + sc_biguint<15>(tmp_3380_fu_160464_p2.read()));
}

void a0_conv2d_1::thread_tmp_3418_fu_160666_p4() {
    tmp_3418_fu_160666_p4 = r_V_98_26_fu_183547_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3419_fu_160675_p4() {
    tmp_3419_fu_160675_p4 = r_V_92_27_fu_183627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3420_fu_115506_p4() {
    tmp_3420_fu_115506_p4 = r_V_91_27_fu_177155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3421_fu_115515_p4() {
    tmp_3421_fu_115515_p4 = r_V_94_27_fu_177171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3422_fu_160694_p2() {
    tmp_3422_fu_160694_p2 = (!tmp_3418_fu_160666_p4.read().is_01() || !tmp_3419_fu_160675_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3418_fu_160666_p4.read()) + sc_biguint<15>(tmp_3419_fu_160675_p4.read()));
}

void a0_conv2d_1::thread_tmp_3423_fu_115524_p2() {
    tmp_3423_fu_115524_p2 = (!tmp_3420_fu_115506_p4.read().is_01() || !tmp_3421_fu_115515_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3420_fu_115506_p4.read()) + sc_biguint<15>(tmp_3421_fu_115515_p4.read()));
}

void a0_conv2d_1::thread_tmp_3425_fu_160706_p4() {
    tmp_3425_fu_160706_p4 = r_V_95_27_fu_183635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3426_fu_115539_p4() {
    tmp_3426_fu_115539_p4 = r_V_90_28_fu_177339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3427_fu_115548_p4() {
    tmp_3427_fu_115548_p4 = r_V_96_27_fu_177179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3428_fu_115563_p2() {
    tmp_3428_fu_115563_p2 = (!tmp_3427_fu_115548_p4.read().is_01() || !tmp_3426_fu_115539_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3427_fu_115548_p4.read()) + sc_biguint<15>(tmp_3426_fu_115539_p4.read()));
}

void a0_conv2d_1::thread_tmp_3429_fu_115569_p4() {
    tmp_3429_fu_115569_p4 = r_V_97_27_fu_177187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_342_fu_140844_p2() {
    tmp_342_fu_140844_p2 = (!tmp_341_reg_221881.read().is_01() || !tmp_340_reg_221876.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_341_reg_221881.read()) + sc_biguint<15>(tmp_340_reg_221876.read()));
}

void a0_conv2d_1::thread_tmp_3430_fu_160720_p2() {
    tmp_3430_fu_160720_p2 = (!tmp_3424_reg_225601.read().is_01() || !tmp_3425_fu_160706_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3424_reg_225601.read()) + sc_biguint<15>(tmp_3425_fu_160706_p4.read()));
}

void a0_conv2d_1::thread_tmp_3431_fu_115584_p2() {
    tmp_3431_fu_115584_p2 = (!tmp_3428_fu_115563_p2.read().is_01() || !tmp_3429_fu_115569_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3428_fu_115563_p2.read()) + sc_biguint<15>(tmp_3429_fu_115569_p4.read()));
}

void a0_conv2d_1::thread_tmp_3432_fu_160730_p2() {
    tmp_3432_fu_160730_p2 = (!tmp_3431_reg_225611.read().is_01() || !tmp_3430_fu_160720_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3431_reg_225611.read()) + sc_biguint<15>(tmp_3430_fu_160720_p2.read()));
}

void a0_conv2d_1::thread_tmp_3433_fu_160735_p2() {
    tmp_3433_fu_160735_p2 = (!tmp_3423_reg_225596.read().is_01() || !tmp_3422_fu_160694_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3423_reg_225596.read()) + sc_biguint<15>(tmp_3422_fu_160694_p2.read()));
}

void a0_conv2d_1::thread_tmp_3434_fu_160746_p4() {
    tmp_3434_fu_160746_p4 = r_V_98_27_fu_183643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3435_fu_160755_p4() {
    tmp_3435_fu_160755_p4 = r_V_92_28_fu_183723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3436_fu_115590_p4() {
    tmp_3436_fu_115590_p4 = r_V_91_28_fu_177347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3437_fu_115599_p4() {
    tmp_3437_fu_115599_p4 = r_V_94_28_fu_177363_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3438_fu_160774_p2() {
    tmp_3438_fu_160774_p2 = (!tmp_3434_fu_160746_p4.read().is_01() || !tmp_3435_fu_160755_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3434_fu_160746_p4.read()) + sc_biguint<15>(tmp_3435_fu_160755_p4.read()));
}

void a0_conv2d_1::thread_tmp_3439_fu_115608_p2() {
    tmp_3439_fu_115608_p2 = (!tmp_3436_fu_115590_p4.read().is_01() || !tmp_3437_fu_115599_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3436_fu_115590_p4.read()) + sc_biguint<15>(tmp_3437_fu_115599_p4.read()));
}

void a0_conv2d_1::thread_tmp_343_fu_140848_p4() {
    tmp_343_fu_140848_p4 = r_V_77_31_fu_183971_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3441_fu_160786_p4() {
    tmp_3441_fu_160786_p4 = r_V_95_28_fu_183731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3442_fu_115623_p4() {
    tmp_3442_fu_115623_p4 = r_V_90_29_fu_177531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3443_fu_115632_p4() {
    tmp_3443_fu_115632_p4 = r_V_96_28_fu_177371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3444_fu_115647_p2() {
    tmp_3444_fu_115647_p2 = (!tmp_3443_fu_115632_p4.read().is_01() || !tmp_3442_fu_115623_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3443_fu_115632_p4.read()) + sc_biguint<15>(tmp_3442_fu_115623_p4.read()));
}

void a0_conv2d_1::thread_tmp_3445_fu_115653_p4() {
    tmp_3445_fu_115653_p4 = r_V_97_28_fu_177379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3446_fu_160804_p2() {
    tmp_3446_fu_160804_p2 = (!tmp_3440_reg_225621.read().is_01() || !tmp_3441_fu_160786_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3440_reg_225621.read()) + sc_biguint<15>(tmp_3441_fu_160786_p4.read()));
}

void a0_conv2d_1::thread_tmp_3447_fu_115662_p2() {
    tmp_3447_fu_115662_p2 = (!tmp_3444_fu_115647_p2.read().is_01() || !tmp_3445_fu_115653_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3444_fu_115647_p2.read()) + sc_biguint<15>(tmp_3445_fu_115653_p4.read()));
}

void a0_conv2d_1::thread_tmp_3448_fu_160815_p2() {
    tmp_3448_fu_160815_p2 = (!tmp_3447_reg_225631.read().is_01() || !tmp_3446_fu_160804_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3447_reg_225631.read()) + sc_biguint<15>(tmp_3446_fu_160804_p2.read()));
}

void a0_conv2d_1::thread_tmp_3449_fu_160820_p2() {
    tmp_3449_fu_160820_p2 = (!tmp_3439_reg_225616.read().is_01() || !tmp_3438_fu_160774_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3439_reg_225616.read()) + sc_biguint<15>(tmp_3438_fu_160774_p2.read()));
}

void a0_conv2d_1::thread_tmp_344_fu_140863_p2() {
    tmp_344_fu_140863_p2 = (!tmp_338_reg_221861.read().is_01() || !tmp_339_reg_221866.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_338_reg_221861.read()) + sc_biguint<15>(tmp_339_reg_221866.read()));
}

void a0_conv2d_1::thread_tmp_3450_fu_160831_p2() {
    tmp_3450_fu_160831_p2 = (!tmp_3432_fu_160730_p2.read().is_01() || !tmp_3433_fu_160735_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3432_fu_160730_p2.read()) + sc_biguint<15>(tmp_3433_fu_160735_p2.read()));
}

void a0_conv2d_1::thread_tmp_3451_fu_160837_p2() {
    tmp_3451_fu_160837_p2 = (!tmp_3448_fu_160815_p2.read().is_01() || !tmp_3449_fu_160820_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3448_fu_160815_p2.read()) + sc_biguint<15>(tmp_3449_fu_160820_p2.read()));
}

void a0_conv2d_1::thread_tmp_3452_fu_160849_p4() {
    tmp_3452_fu_160849_p4 = r_V_98_28_fu_183739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3453_fu_160858_p4() {
    tmp_3453_fu_160858_p4 = r_V_92_29_fu_183819_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3454_fu_115668_p4() {
    tmp_3454_fu_115668_p4 = r_V_91_29_fu_177539_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3455_fu_115677_p4() {
    tmp_3455_fu_115677_p4 = r_V_94_29_fu_177555_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3456_fu_160877_p2() {
    tmp_3456_fu_160877_p2 = (!tmp_3452_fu_160849_p4.read().is_01() || !tmp_3453_fu_160858_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3452_fu_160849_p4.read()) + sc_biguint<15>(tmp_3453_fu_160858_p4.read()));
}

void a0_conv2d_1::thread_tmp_3457_fu_115686_p2() {
    tmp_3457_fu_115686_p2 = (!tmp_3454_fu_115668_p4.read().is_01() || !tmp_3455_fu_115677_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3454_fu_115668_p4.read()) + sc_biguint<15>(tmp_3455_fu_115677_p4.read()));
}

void a0_conv2d_1::thread_tmp_3459_fu_160889_p4() {
    tmp_3459_fu_160889_p4 = r_V_95_29_fu_183827_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_345_fu_140867_p2() {
    tmp_345_fu_140867_p2 = (!tmp_342_fu_140844_p2.read().is_01() || !tmp_343_fu_140848_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_342_fu_140844_p2.read()) + sc_biguint<15>(tmp_343_fu_140848_p4.read()));
}

void a0_conv2d_1::thread_tmp_3460_fu_115701_p4() {
    tmp_3460_fu_115701_p4 = r_V_90_30_fu_177723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3461_fu_115710_p4() {
    tmp_3461_fu_115710_p4 = r_V_96_29_fu_177563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3462_fu_115725_p2() {
    tmp_3462_fu_115725_p2 = (!tmp_3461_fu_115710_p4.read().is_01() || !tmp_3460_fu_115701_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3461_fu_115710_p4.read()) + sc_biguint<15>(tmp_3460_fu_115701_p4.read()));
}

void a0_conv2d_1::thread_tmp_3463_fu_115731_p4() {
    tmp_3463_fu_115731_p4 = r_V_97_29_fu_177571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3464_fu_160903_p2() {
    tmp_3464_fu_160903_p2 = (!tmp_3458_reg_225641.read().is_01() || !tmp_3459_fu_160889_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3458_reg_225641.read()) + sc_biguint<15>(tmp_3459_fu_160889_p4.read()));
}

void a0_conv2d_1::thread_tmp_3465_fu_115746_p2() {
    tmp_3465_fu_115746_p2 = (!tmp_3462_fu_115725_p2.read().is_01() || !tmp_3463_fu_115731_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3462_fu_115725_p2.read()) + sc_biguint<15>(tmp_3463_fu_115731_p4.read()));
}

void a0_conv2d_1::thread_tmp_3466_fu_160913_p2() {
    tmp_3466_fu_160913_p2 = (!tmp_3465_reg_225651.read().is_01() || !tmp_3464_fu_160903_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3465_reg_225651.read()) + sc_biguint<15>(tmp_3464_fu_160903_p2.read()));
}

void a0_conv2d_1::thread_tmp_3467_fu_160918_p2() {
    tmp_3467_fu_160918_p2 = (!tmp_3457_reg_225636.read().is_01() || !tmp_3456_fu_160877_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3457_reg_225636.read()) + sc_biguint<15>(tmp_3456_fu_160877_p2.read()));
}

void a0_conv2d_1::thread_tmp_3468_fu_160929_p4() {
    tmp_3468_fu_160929_p4 = r_V_98_29_fu_183835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3469_fu_160938_p4() {
    tmp_3469_fu_160938_p4 = r_V_92_30_fu_183915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_346_fu_140878_p2() {
    tmp_346_fu_140878_p2 = (!tmp_345_fu_140867_p2.read().is_01() || !tmp_344_fu_140863_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_345_fu_140867_p2.read()) + sc_biguint<15>(tmp_344_fu_140863_p2.read()));
}

void a0_conv2d_1::thread_tmp_3470_fu_115752_p4() {
    tmp_3470_fu_115752_p4 = r_V_91_30_fu_177731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3471_fu_115761_p4() {
    tmp_3471_fu_115761_p4 = r_V_94_30_fu_177747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3472_fu_160957_p2() {
    tmp_3472_fu_160957_p2 = (!tmp_3468_fu_160929_p4.read().is_01() || !tmp_3469_fu_160938_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3468_fu_160929_p4.read()) + sc_biguint<15>(tmp_3469_fu_160938_p4.read()));
}

void a0_conv2d_1::thread_tmp_3473_fu_115770_p2() {
    tmp_3473_fu_115770_p2 = (!tmp_3470_fu_115752_p4.read().is_01() || !tmp_3471_fu_115761_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3470_fu_115752_p4.read()) + sc_biguint<15>(tmp_3471_fu_115761_p4.read()));
}

void a0_conv2d_1::thread_tmp_3475_fu_160969_p4() {
    tmp_3475_fu_160969_p4 = r_V_95_30_fu_183923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3476_fu_160983_p4() {
    tmp_3476_fu_160983_p4 = r_V_98_62_fu_190027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3478_fu_160997_p2() {
    tmp_3478_fu_160997_p2 = (!tmp_3477_reg_225666.read().is_01() || !tmp_3476_fu_160983_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3477_reg_225666.read()) + sc_biguint<15>(tmp_3476_fu_160983_p4.read()));
}

void a0_conv2d_1::thread_tmp_347_fu_140884_p2() {
    tmp_347_fu_140884_p2 = (!tmp_337_fu_140829_p2.read().is_01() || !tmp_336_fu_140824_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_337_fu_140829_p2.read()) + sc_biguint<15>(tmp_336_fu_140824_p2.read()));
}

void a0_conv2d_1::thread_tmp_3480_fu_161007_p2() {
    tmp_3480_fu_161007_p2 = (!tmp_3474_reg_225661.read().is_01() || !tmp_3475_fu_160969_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3474_reg_225661.read()) + sc_biguint<15>(tmp_3475_fu_160969_p4.read()));
}

void a0_conv2d_1::thread_tmp_3481_fu_161012_p2() {
    tmp_3481_fu_161012_p2 = (!tmp_3478_fu_160997_p2.read().is_01() || !tmp_3479_reg_225671.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3478_fu_160997_p2.read()) + sc_biguint<15>(tmp_3479_reg_225671.read()));
}

void a0_conv2d_1::thread_tmp_3482_fu_161023_p2() {
    tmp_3482_fu_161023_p2 = (!tmp_3481_fu_161012_p2.read().is_01() || !tmp_3480_fu_161007_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3481_fu_161012_p2.read()) + sc_biguint<15>(tmp_3480_fu_161007_p2.read()));
}

void a0_conv2d_1::thread_tmp_3483_fu_161029_p2() {
    tmp_3483_fu_161029_p2 = (!tmp_3473_reg_225656.read().is_01() || !tmp_3472_fu_160957_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3473_reg_225656.read()) + sc_biguint<15>(tmp_3472_fu_160957_p2.read()));
}

void a0_conv2d_1::thread_tmp_3484_fu_161040_p2() {
    tmp_3484_fu_161040_p2 = (!tmp_3466_fu_160913_p2.read().is_01() || !tmp_3467_fu_160918_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3466_fu_160913_p2.read()) + sc_biguint<15>(tmp_3467_fu_160918_p2.read()));
}

void a0_conv2d_1::thread_tmp_3485_fu_161046_p2() {
    tmp_3485_fu_161046_p2 = (!tmp_3482_fu_161023_p2.read().is_01() || !tmp_3483_fu_161029_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3482_fu_161023_p2.read()) + sc_biguint<15>(tmp_3483_fu_161029_p2.read()));
}

void a0_conv2d_1::thread_tmp_3486_fu_161052_p2() {
    tmp_3486_fu_161052_p2 = (!tmp_3485_fu_161046_p2.read().is_01() || !tmp_3484_fu_161040_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3485_fu_161046_p2.read()) + sc_biguint<15>(tmp_3484_fu_161040_p2.read()));
}

void a0_conv2d_1::thread_tmp_3487_fu_170554_p2() {
    tmp_3487_fu_170554_p2 = (!tmp_3451_reg_228036.read().is_01() || !tmp_3450_reg_228031.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3451_reg_228036.read()) + sc_biguint<15>(tmp_3450_reg_228031.read()));
}

void a0_conv2d_1::thread_tmp_3488_fu_170563_p2() {
    tmp_3488_fu_170563_p2 = (!tmp_3416_reg_228021.read().is_01() || !tmp_3417_reg_228026.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3416_reg_228021.read()) + sc_biguint<15>(tmp_3417_reg_228026.read()));
}

void a0_conv2d_1::thread_tmp_3489_fu_170567_p2() {
    tmp_3489_fu_170567_p2 = (!tmp_3486_reg_228056.read().is_01() || !tmp_3487_fu_170554_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3486_reg_228056.read()) + sc_biguint<15>(tmp_3487_fu_170554_p2.read()));
}

void a0_conv2d_1::thread_tmp_3490_fu_170578_p2() {
    tmp_3490_fu_170578_p2 = (!tmp_3489_fu_170567_p2.read().is_01() || !tmp_3488_fu_170563_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3489_fu_170567_p2.read()) + sc_biguint<15>(tmp_3488_fu_170563_p2.read()));
}

void a0_conv2d_1::thread_tmp_3491_fu_170584_p2() {
    tmp_3491_fu_170584_p2 = (!tmp_3347_reg_228001.read().is_01() || !tmp_3346_reg_227996.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3347_reg_228001.read()) + sc_biguint<15>(tmp_3346_reg_227996.read()));
}

void a0_conv2d_1::thread_tmp_3492_fu_170594_p2() {
    tmp_3492_fu_170594_p2 = (!tmp_3204_fu_170506_p2.read().is_01() || !tmp_3205_fu_170511_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3204_fu_170506_p2.read()) + sc_biguint<15>(tmp_3205_fu_170511_p2.read()));
}

void a0_conv2d_1::thread_tmp_3493_fu_170600_p2() {
    tmp_3493_fu_170600_p2 = (!tmp_3490_fu_170578_p2.read().is_01() || !tmp_3491_fu_170584_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3490_fu_170578_p2.read()) + sc_biguint<15>(tmp_3491_fu_170584_p2.read()));
}

void a0_conv2d_1::thread_tmp_3494_fu_170612_p2() {
    tmp_3494_fu_170612_p2 = (!tmp_3493_fu_170600_p2.read().is_01() || !tmp_3492_fu_170594_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3493_fu_170600_p2.read()) + sc_biguint<15>(tmp_3492_fu_170594_p2.read()));
}

void a0_conv2d_1::thread_tmp_3495_fu_170618_p2() {
    tmp_3495_fu_170618_p2 = (!tmp_2919_fu_170453_p2.read().is_01() || !tmp_2918_fu_170447_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2919_fu_170453_p2.read()) + sc_biguint<15>(tmp_2918_fu_170447_p2.read()));
}

void a0_conv2d_1::thread_tmp_3496_fu_161169_p4() {
    tmp_3496_fu_161169_p4 = r_V_105_62_fu_190083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3497_fu_161178_p4() {
    tmp_3497_fu_161178_p4 = r_V_106_62_fu_190091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3498_fu_161193_p4() {
    tmp_3498_fu_161193_p4 = r_V_104_62_fu_190075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3499_fu_161202_p4() {
    tmp_3499_fu_161202_p4 = r_V_103_62_fu_190067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_349_fu_140896_p4() {
    tmp_349_fu_140896_p4 = r_V_80_31_fu_183979_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_34_fu_70402_p2() {
    tmp_34_fu_70402_p2 = (exitcond6_mid_fu_70382_p2.read() | exitcond_flatten_fu_70106_p2.read());
}

void a0_conv2d_1::thread_tmp_3500_fu_161217_p2() {
    tmp_3500_fu_161217_p2 = (!tmp_3496_fu_161169_p4.read().is_01() || !tmp_3497_fu_161178_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3496_fu_161169_p4.read()) + sc_biguint<15>(tmp_3497_fu_161178_p4.read()));
}

void a0_conv2d_1::thread_tmp_3501_fu_161223_p2() {
    tmp_3501_fu_161223_p2 = (!tmp_3498_fu_161193_p4.read().is_01() || !tmp_3499_fu_161202_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3498_fu_161193_p4.read()) + sc_biguint<15>(tmp_3499_fu_161202_p4.read()));
}

void a0_conv2d_1::thread_tmp_3502_fu_161235_p4() {
    tmp_3502_fu_161235_p4 = r_V_102_62_fu_190059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3503_fu_161244_p4() {
    tmp_3503_fu_161244_p4 = r_V_99_62_fu_190035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3504_fu_161259_p4() {
    tmp_3504_fu_161259_p4 = r_V_100_62_fu_190043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3505_fu_161268_p4() {
    tmp_3505_fu_161268_p4 = r_V_101_62_fu_190051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3506_fu_161283_p2() {
    tmp_3506_fu_161283_p2 = (!tmp_3505_fu_161268_p4.read().is_01() || !tmp_3504_fu_161259_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3505_fu_161268_p4.read()) + sc_biguint<15>(tmp_3504_fu_161259_p4.read()));
}

void a0_conv2d_1::thread_tmp_3507_fu_161289_p4() {
    tmp_3507_fu_161289_p4 = r_V_107_61_fu_189811_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3508_fu_161304_p2() {
    tmp_3508_fu_161304_p2 = (!tmp_3502_fu_161235_p4.read().is_01() || !tmp_3503_fu_161244_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3502_fu_161235_p4.read()) + sc_biguint<15>(tmp_3503_fu_161244_p4.read()));
}

void a0_conv2d_1::thread_tmp_3509_fu_161310_p2() {
    tmp_3509_fu_161310_p2 = (!tmp_3506_fu_161283_p2.read().is_01() || !tmp_3507_fu_161289_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3506_fu_161283_p2.read()) + sc_biguint<15>(tmp_3507_fu_161289_p4.read()));
}

void a0_conv2d_1::thread_tmp_350_fu_140910_p4() {
    tmp_350_fu_140910_p4 = r_V_74_32_fu_184059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3510_fu_161322_p2() {
    tmp_3510_fu_161322_p2 = (!tmp_3509_fu_161310_p2.read().is_01() || !tmp_3508_fu_161304_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3509_fu_161310_p2.read()) + sc_biguint<15>(tmp_3508_fu_161304_p2.read()));
}

void a0_conv2d_1::thread_tmp_3511_fu_161328_p2() {
    tmp_3511_fu_161328_p2 = (!tmp_3501_fu_161223_p2.read().is_01() || !tmp_3500_fu_161217_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3501_fu_161223_p2.read()) + sc_biguint<15>(tmp_3500_fu_161217_p2.read()));
}

void a0_conv2d_1::thread_tmp_3512_fu_161340_p4() {
    tmp_3512_fu_161340_p4 = r_V_99_61_fu_189747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3513_fu_161349_p4() {
    tmp_3513_fu_161349_p4 = r_V_107_60_fu_189523_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3514_fu_161364_p4() {
    tmp_3514_fu_161364_p4 = r_V_101_61_fu_189763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3515_fu_161373_p4() {
    tmp_3515_fu_161373_p4 = r_V_100_61_fu_189755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3516_fu_161388_p2() {
    tmp_3516_fu_161388_p2 = (!tmp_3512_fu_161340_p4.read().is_01() || !tmp_3513_fu_161349_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3512_fu_161340_p4.read()) + sc_biguint<15>(tmp_3513_fu_161349_p4.read()));
}

void a0_conv2d_1::thread_tmp_3517_fu_161394_p2() {
    tmp_3517_fu_161394_p2 = (!tmp_3514_fu_161364_p4.read().is_01() || !tmp_3515_fu_161373_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3514_fu_161364_p4.read()) + sc_biguint<15>(tmp_3515_fu_161373_p4.read()));
}

void a0_conv2d_1::thread_tmp_3518_fu_161406_p4() {
    tmp_3518_fu_161406_p4 = r_V_103_61_fu_189779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3519_fu_161415_p4() {
    tmp_3519_fu_161415_p4 = r_V_102_61_fu_189771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3520_fu_161430_p4() {
    tmp_3520_fu_161430_p4 = r_V_105_61_fu_189795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3521_fu_161439_p4() {
    tmp_3521_fu_161439_p4 = r_V_106_61_fu_189803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3522_fu_161454_p2() {
    tmp_3522_fu_161454_p2 = (!tmp_3521_fu_161439_p4.read().is_01() || !tmp_3520_fu_161430_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3521_fu_161439_p4.read()) + sc_biguint<15>(tmp_3520_fu_161430_p4.read()));
}

void a0_conv2d_1::thread_tmp_3523_fu_161460_p4() {
    tmp_3523_fu_161460_p4 = r_V_104_61_fu_189787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3524_fu_161475_p2() {
    tmp_3524_fu_161475_p2 = (!tmp_3518_fu_161406_p4.read().is_01() || !tmp_3519_fu_161415_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3518_fu_161406_p4.read()) + sc_biguint<15>(tmp_3519_fu_161415_p4.read()));
}

void a0_conv2d_1::thread_tmp_3525_fu_161481_p2() {
    tmp_3525_fu_161481_p2 = (!tmp_3522_fu_161454_p2.read().is_01() || !tmp_3523_fu_161460_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3522_fu_161454_p2.read()) + sc_biguint<15>(tmp_3523_fu_161460_p4.read()));
}

void a0_conv2d_1::thread_tmp_3526_fu_161493_p2() {
    tmp_3526_fu_161493_p2 = (!tmp_3525_fu_161481_p2.read().is_01() || !tmp_3524_fu_161475_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3525_fu_161481_p2.read()) + sc_biguint<15>(tmp_3524_fu_161475_p2.read()));
}

void a0_conv2d_1::thread_tmp_3527_fu_161499_p2() {
    tmp_3527_fu_161499_p2 = (!tmp_3517_fu_161394_p2.read().is_01() || !tmp_3516_fu_161388_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3517_fu_161394_p2.read()) + sc_biguint<15>(tmp_3516_fu_161388_p2.read()));
}

void a0_conv2d_1::thread_tmp_3528_fu_161511_p2() {
    tmp_3528_fu_161511_p2 = (!tmp_3510_fu_161322_p2.read().is_01() || !tmp_3511_fu_161328_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3510_fu_161322_p2.read()) + sc_biguint<15>(tmp_3511_fu_161328_p2.read()));
}

void a0_conv2d_1::thread_tmp_3529_fu_161517_p2() {
    tmp_3529_fu_161517_p2 = (!tmp_3526_fu_161493_p2.read().is_01() || !tmp_3527_fu_161499_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3526_fu_161493_p2.read()) + sc_biguint<15>(tmp_3527_fu_161499_p2.read()));
}

void a0_conv2d_1::thread_tmp_352_fu_140924_p2() {
    tmp_352_fu_140924_p2 = (!tmp_348_reg_221886.read().is_01() || !tmp_349_fu_140896_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_348_reg_221886.read()) + sc_biguint<15>(tmp_349_fu_140896_p4.read()));
}

void a0_conv2d_1::thread_tmp_3530_fu_161529_p4() {
    tmp_3530_fu_161529_p4 = r_V_99_59_fu_189171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3531_fu_161538_p4() {
    tmp_3531_fu_161538_p4 = r_V_107_58_fu_188947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3532_fu_161553_p4() {
    tmp_3532_fu_161553_p4 = r_V_101_59_fu_189187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3533_fu_161562_p4() {
    tmp_3533_fu_161562_p4 = r_V_100_59_fu_189179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3534_fu_161577_p2() {
    tmp_3534_fu_161577_p2 = (!tmp_3530_fu_161529_p4.read().is_01() || !tmp_3531_fu_161538_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3530_fu_161529_p4.read()) + sc_biguint<15>(tmp_3531_fu_161538_p4.read()));
}

void a0_conv2d_1::thread_tmp_3535_fu_161583_p2() {
    tmp_3535_fu_161583_p2 = (!tmp_3532_fu_161553_p4.read().is_01() || !tmp_3533_fu_161562_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3532_fu_161553_p4.read()) + sc_biguint<15>(tmp_3533_fu_161562_p4.read()));
}

void a0_conv2d_1::thread_tmp_3536_fu_161595_p4() {
    tmp_3536_fu_161595_p4 = r_V_103_59_fu_189203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3537_fu_161604_p4() {
    tmp_3537_fu_161604_p4 = r_V_102_59_fu_189195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3538_fu_161619_p4() {
    tmp_3538_fu_161619_p4 = r_V_105_59_fu_189219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3539_fu_161628_p4() {
    tmp_3539_fu_161628_p4 = r_V_106_59_fu_189227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_353_fu_140929_p2() {
    tmp_353_fu_140929_p2 = (!tmp_350_fu_140910_p4.read().is_01() || !tmp_351_reg_221891.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_350_fu_140910_p4.read()) + sc_biguint<15>(tmp_351_reg_221891.read()));
}

void a0_conv2d_1::thread_tmp_3540_fu_161643_p2() {
    tmp_3540_fu_161643_p2 = (!tmp_3539_fu_161628_p4.read().is_01() || !tmp_3538_fu_161619_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3539_fu_161628_p4.read()) + sc_biguint<15>(tmp_3538_fu_161619_p4.read()));
}

void a0_conv2d_1::thread_tmp_3541_fu_161649_p4() {
    tmp_3541_fu_161649_p4 = r_V_104_59_fu_189211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3542_fu_161664_p2() {
    tmp_3542_fu_161664_p2 = (!tmp_3536_fu_161595_p4.read().is_01() || !tmp_3537_fu_161604_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3536_fu_161595_p4.read()) + sc_biguint<15>(tmp_3537_fu_161604_p4.read()));
}

void a0_conv2d_1::thread_tmp_3543_fu_161670_p2() {
    tmp_3543_fu_161670_p2 = (!tmp_3540_fu_161643_p2.read().is_01() || !tmp_3541_fu_161649_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3540_fu_161643_p2.read()) + sc_biguint<15>(tmp_3541_fu_161649_p4.read()));
}

void a0_conv2d_1::thread_tmp_3544_fu_161682_p2() {
    tmp_3544_fu_161682_p2 = (!tmp_3543_fu_161670_p2.read().is_01() || !tmp_3542_fu_161664_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3543_fu_161670_p2.read()) + sc_biguint<15>(tmp_3542_fu_161664_p2.read()));
}

void a0_conv2d_1::thread_tmp_3545_fu_161688_p2() {
    tmp_3545_fu_161688_p2 = (!tmp_3535_fu_161583_p2.read().is_01() || !tmp_3534_fu_161577_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3535_fu_161583_p2.read()) + sc_biguint<15>(tmp_3534_fu_161577_p2.read()));
}

void a0_conv2d_1::thread_tmp_3546_fu_161700_p4() {
    tmp_3546_fu_161700_p4 = r_V_99_60_fu_189459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3547_fu_161709_p4() {
    tmp_3547_fu_161709_p4 = r_V_107_59_fu_189235_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3548_fu_161724_p4() {
    tmp_3548_fu_161724_p4 = r_V_101_60_fu_189475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3549_fu_161733_p4() {
    tmp_3549_fu_161733_p4 = r_V_100_60_fu_189467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3550_fu_161748_p2() {
    tmp_3550_fu_161748_p2 = (!tmp_3546_fu_161700_p4.read().is_01() || !tmp_3547_fu_161709_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3546_fu_161700_p4.read()) + sc_biguint<15>(tmp_3547_fu_161709_p4.read()));
}

void a0_conv2d_1::thread_tmp_3551_fu_161754_p2() {
    tmp_3551_fu_161754_p2 = (!tmp_3548_fu_161724_p4.read().is_01() || !tmp_3549_fu_161733_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3548_fu_161724_p4.read()) + sc_biguint<15>(tmp_3549_fu_161733_p4.read()));
}

void a0_conv2d_1::thread_tmp_3552_fu_161766_p4() {
    tmp_3552_fu_161766_p4 = r_V_103_60_fu_189491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3553_fu_161775_p4() {
    tmp_3553_fu_161775_p4 = r_V_102_60_fu_189483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3554_fu_161790_p4() {
    tmp_3554_fu_161790_p4 = r_V_105_60_fu_189507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3555_fu_161799_p4() {
    tmp_3555_fu_161799_p4 = r_V_106_60_fu_189515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3556_fu_161814_p2() {
    tmp_3556_fu_161814_p2 = (!tmp_3555_fu_161799_p4.read().is_01() || !tmp_3554_fu_161790_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3555_fu_161799_p4.read()) + sc_biguint<15>(tmp_3554_fu_161790_p4.read()));
}

void a0_conv2d_1::thread_tmp_3557_fu_161820_p4() {
    tmp_3557_fu_161820_p4 = r_V_104_60_fu_189499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3558_fu_161835_p2() {
    tmp_3558_fu_161835_p2 = (!tmp_3552_fu_161766_p4.read().is_01() || !tmp_3553_fu_161775_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3552_fu_161766_p4.read()) + sc_biguint<15>(tmp_3553_fu_161775_p4.read()));
}

void a0_conv2d_1::thread_tmp_3559_fu_161841_p2() {
    tmp_3559_fu_161841_p2 = (!tmp_3556_fu_161814_p2.read().is_01() || !tmp_3557_fu_161820_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3556_fu_161814_p2.read()) + sc_biguint<15>(tmp_3557_fu_161820_p4.read()));
}

void a0_conv2d_1::thread_tmp_3560_fu_161853_p2() {
    tmp_3560_fu_161853_p2 = (!tmp_3559_fu_161841_p2.read().is_01() || !tmp_3558_fu_161835_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3559_fu_161841_p2.read()) + sc_biguint<15>(tmp_3558_fu_161835_p2.read()));
}

void a0_conv2d_1::thread_tmp_3561_fu_161859_p2() {
    tmp_3561_fu_161859_p2 = (!tmp_3551_fu_161754_p2.read().is_01() || !tmp_3550_fu_161748_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3551_fu_161754_p2.read()) + sc_biguint<15>(tmp_3550_fu_161748_p2.read()));
}

void a0_conv2d_1::thread_tmp_3562_fu_161871_p2() {
    tmp_3562_fu_161871_p2 = (!tmp_3544_fu_161682_p2.read().is_01() || !tmp_3545_fu_161688_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3544_fu_161682_p2.read()) + sc_biguint<15>(tmp_3545_fu_161688_p2.read()));
}

void a0_conv2d_1::thread_tmp_3563_fu_161877_p2() {
    tmp_3563_fu_161877_p2 = (!tmp_3560_fu_161853_p2.read().is_01() || !tmp_3561_fu_161859_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3560_fu_161853_p2.read()) + sc_biguint<15>(tmp_3561_fu_161859_p2.read()));
}

void a0_conv2d_1::thread_tmp_3564_fu_161889_p2() {
    tmp_3564_fu_161889_p2 = (!tmp_3563_fu_161877_p2.read().is_01() || !tmp_3562_fu_161871_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3563_fu_161877_p2.read()) + sc_biguint<15>(tmp_3562_fu_161871_p2.read()));
}

void a0_conv2d_1::thread_tmp_3565_fu_161895_p2() {
    tmp_3565_fu_161895_p2 = (!tmp_3529_fu_161517_p2.read().is_01() || !tmp_3528_fu_161511_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3529_fu_161517_p2.read()) + sc_biguint<15>(tmp_3528_fu_161511_p2.read()));
}

void a0_conv2d_1::thread_tmp_3566_fu_161907_p4() {
    tmp_3566_fu_161907_p4 = r_V_99_55_fu_188019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3567_fu_161916_p4() {
    tmp_3567_fu_161916_p4 = r_V_107_54_fu_187795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3568_fu_161931_p4() {
    tmp_3568_fu_161931_p4 = r_V_101_55_fu_188035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3569_fu_161940_p4() {
    tmp_3569_fu_161940_p4 = r_V_100_55_fu_188027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3570_fu_161955_p2() {
    tmp_3570_fu_161955_p2 = (!tmp_3566_fu_161907_p4.read().is_01() || !tmp_3567_fu_161916_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3566_fu_161907_p4.read()) + sc_biguint<15>(tmp_3567_fu_161916_p4.read()));
}

void a0_conv2d_1::thread_tmp_3571_fu_161961_p2() {
    tmp_3571_fu_161961_p2 = (!tmp_3568_fu_161931_p4.read().is_01() || !tmp_3569_fu_161940_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3568_fu_161931_p4.read()) + sc_biguint<15>(tmp_3569_fu_161940_p4.read()));
}

void a0_conv2d_1::thread_tmp_3572_fu_161973_p4() {
    tmp_3572_fu_161973_p4 = r_V_103_55_fu_188051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3573_fu_161982_p4() {
    tmp_3573_fu_161982_p4 = r_V_102_55_fu_188043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3574_fu_161997_p4() {
    tmp_3574_fu_161997_p4 = r_V_105_55_fu_188067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3575_fu_162006_p4() {
    tmp_3575_fu_162006_p4 = r_V_106_55_fu_188075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3576_fu_162021_p2() {
    tmp_3576_fu_162021_p2 = (!tmp_3575_fu_162006_p4.read().is_01() || !tmp_3574_fu_161997_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3575_fu_162006_p4.read()) + sc_biguint<15>(tmp_3574_fu_161997_p4.read()));
}

void a0_conv2d_1::thread_tmp_3577_fu_162027_p4() {
    tmp_3577_fu_162027_p4 = r_V_104_55_fu_188059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3578_fu_162042_p2() {
    tmp_3578_fu_162042_p2 = (!tmp_3572_fu_161973_p4.read().is_01() || !tmp_3573_fu_161982_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3572_fu_161973_p4.read()) + sc_biguint<15>(tmp_3573_fu_161982_p4.read()));
}

void a0_conv2d_1::thread_tmp_3579_fu_162048_p2() {
    tmp_3579_fu_162048_p2 = (!tmp_3576_fu_162021_p2.read().is_01() || !tmp_3577_fu_162027_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3576_fu_162021_p2.read()) + sc_biguint<15>(tmp_3577_fu_162027_p4.read()));
}

void a0_conv2d_1::thread_tmp_3580_fu_162060_p2() {
    tmp_3580_fu_162060_p2 = (!tmp_3579_fu_162048_p2.read().is_01() || !tmp_3578_fu_162042_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3579_fu_162048_p2.read()) + sc_biguint<15>(tmp_3578_fu_162042_p2.read()));
}

void a0_conv2d_1::thread_tmp_3581_fu_162066_p2() {
    tmp_3581_fu_162066_p2 = (!tmp_3571_fu_161961_p2.read().is_01() || !tmp_3570_fu_161955_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3571_fu_161961_p2.read()) + sc_biguint<15>(tmp_3570_fu_161955_p2.read()));
}

void a0_conv2d_1::thread_tmp_3582_fu_162078_p4() {
    tmp_3582_fu_162078_p4 = r_V_99_56_fu_188307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3583_fu_162087_p4() {
    tmp_3583_fu_162087_p4 = r_V_107_55_fu_188083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3584_fu_162102_p4() {
    tmp_3584_fu_162102_p4 = r_V_101_56_fu_188323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3585_fu_162111_p4() {
    tmp_3585_fu_162111_p4 = r_V_100_56_fu_188315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3586_fu_162126_p2() {
    tmp_3586_fu_162126_p2 = (!tmp_3582_fu_162078_p4.read().is_01() || !tmp_3583_fu_162087_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3582_fu_162078_p4.read()) + sc_biguint<15>(tmp_3583_fu_162087_p4.read()));
}

void a0_conv2d_1::thread_tmp_3587_fu_162132_p2() {
    tmp_3587_fu_162132_p2 = (!tmp_3584_fu_162102_p4.read().is_01() || !tmp_3585_fu_162111_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3584_fu_162102_p4.read()) + sc_biguint<15>(tmp_3585_fu_162111_p4.read()));
}

void a0_conv2d_1::thread_tmp_3588_fu_162144_p4() {
    tmp_3588_fu_162144_p4 = r_V_103_56_fu_188339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3589_fu_162153_p4() {
    tmp_3589_fu_162153_p4 = r_V_102_56_fu_188331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_358_fu_140940_p2() {
    tmp_358_fu_140940_p2 = (!tmp_357_reg_221916.read().is_01() || !tmp_356_reg_221911.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_357_reg_221916.read()) + sc_biguint<15>(tmp_356_reg_221911.read()));
}

void a0_conv2d_1::thread_tmp_3590_fu_162168_p4() {
    tmp_3590_fu_162168_p4 = r_V_105_56_fu_188355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3591_fu_162177_p4() {
    tmp_3591_fu_162177_p4 = r_V_106_56_fu_188363_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3592_fu_162192_p2() {
    tmp_3592_fu_162192_p2 = (!tmp_3591_fu_162177_p4.read().is_01() || !tmp_3590_fu_162168_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3591_fu_162177_p4.read()) + sc_biguint<15>(tmp_3590_fu_162168_p4.read()));
}

void a0_conv2d_1::thread_tmp_3593_fu_162198_p4() {
    tmp_3593_fu_162198_p4 = r_V_104_56_fu_188347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3594_fu_162213_p2() {
    tmp_3594_fu_162213_p2 = (!tmp_3588_fu_162144_p4.read().is_01() || !tmp_3589_fu_162153_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3588_fu_162144_p4.read()) + sc_biguint<15>(tmp_3589_fu_162153_p4.read()));
}

void a0_conv2d_1::thread_tmp_3595_fu_162219_p2() {
    tmp_3595_fu_162219_p2 = (!tmp_3592_fu_162192_p2.read().is_01() || !tmp_3593_fu_162198_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3592_fu_162192_p2.read()) + sc_biguint<15>(tmp_3593_fu_162198_p4.read()));
}

void a0_conv2d_1::thread_tmp_3596_fu_162231_p2() {
    tmp_3596_fu_162231_p2 = (!tmp_3595_fu_162219_p2.read().is_01() || !tmp_3594_fu_162213_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3595_fu_162219_p2.read()) + sc_biguint<15>(tmp_3594_fu_162213_p2.read()));
}

void a0_conv2d_1::thread_tmp_3597_fu_162237_p2() {
    tmp_3597_fu_162237_p2 = (!tmp_3587_fu_162132_p2.read().is_01() || !tmp_3586_fu_162126_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3587_fu_162132_p2.read()) + sc_biguint<15>(tmp_3586_fu_162126_p2.read()));
}

void a0_conv2d_1::thread_tmp_3598_fu_162249_p2() {
    tmp_3598_fu_162249_p2 = (!tmp_3580_fu_162060_p2.read().is_01() || !tmp_3581_fu_162066_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3580_fu_162060_p2.read()) + sc_biguint<15>(tmp_3581_fu_162066_p2.read()));
}

void a0_conv2d_1::thread_tmp_3599_fu_162255_p2() {
    tmp_3599_fu_162255_p2 = (!tmp_3596_fu_162231_p2.read().is_01() || !tmp_3597_fu_162237_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3596_fu_162231_p2.read()) + sc_biguint<15>(tmp_3597_fu_162237_p2.read()));
}

void a0_conv2d_1::thread_tmp_359_fu_140944_p4() {
    tmp_359_fu_140944_p4 = r_V_77_32_fu_184067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_35_10_fu_89828_p2() {
    tmp_35_10_fu_89828_p2 = (!ap_const_lv16_8B.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8B) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_11_fu_90209_p2() {
    tmp_35_11_fu_90209_p2 = (!ap_const_lv16_8C.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8C) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_12_fu_90590_p2() {
    tmp_35_12_fu_90590_p2 = (!ap_const_lv16_8D.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8D) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_13_fu_90971_p2() {
    tmp_35_13_fu_90971_p2 = (!ap_const_lv16_8E.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8E) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_14_fu_91352_p2() {
    tmp_35_14_fu_91352_p2 = (!ap_const_lv16_8F.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8F) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_15_fu_91733_p2() {
    tmp_35_15_fu_91733_p2 = (!ap_const_lv16_90.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_90) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_16_fu_92114_p2() {
    tmp_35_16_fu_92114_p2 = (!ap_const_lv16_91.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_91) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_17_fu_92495_p2() {
    tmp_35_17_fu_92495_p2 = (!ap_const_lv16_92.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_92) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_18_fu_92876_p2() {
    tmp_35_18_fu_92876_p2 = (!ap_const_lv16_93.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_93) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_19_fu_93257_p2() {
    tmp_35_19_fu_93257_p2 = (!ap_const_lv16_94.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_94) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_1_fu_86018_p2() {
    tmp_35_1_fu_86018_p2 = (!ap_const_lv16_81.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_81) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_20_fu_93638_p2() {
    tmp_35_20_fu_93638_p2 = (!ap_const_lv16_95.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_95) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_21_fu_94019_p2() {
    tmp_35_21_fu_94019_p2 = (!ap_const_lv16_96.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_96) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_22_fu_94400_p2() {
    tmp_35_22_fu_94400_p2 = (!ap_const_lv16_97.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_97) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_23_fu_94781_p2() {
    tmp_35_23_fu_94781_p2 = (!ap_const_lv16_98.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_98) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_24_fu_95162_p2() {
    tmp_35_24_fu_95162_p2 = (!ap_const_lv16_99.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_99) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_25_fu_95543_p2() {
    tmp_35_25_fu_95543_p2 = (!ap_const_lv16_9A.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9A) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_26_fu_95924_p2() {
    tmp_35_26_fu_95924_p2 = (!ap_const_lv16_9B.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9B) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_27_fu_96305_p2() {
    tmp_35_27_fu_96305_p2 = (!ap_const_lv16_9C.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9C) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_28_fu_96686_p2() {
    tmp_35_28_fu_96686_p2 = (!ap_const_lv16_9D.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9D) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_29_fu_97067_p2() {
    tmp_35_29_fu_97067_p2 = (!ap_const_lv16_9E.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9E) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_2_fu_86399_p2() {
    tmp_35_2_fu_86399_p2 = (!ap_const_lv16_82.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_82) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_30_fu_97448_p2() {
    tmp_35_30_fu_97448_p2 = (!ap_const_lv16_9F.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_9F) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_31_fu_97829_p2() {
    tmp_35_31_fu_97829_p2 = (!ap_const_lv16_A0.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A0) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_32_fu_98210_p2() {
    tmp_35_32_fu_98210_p2 = (!ap_const_lv16_A1.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A1) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_33_fu_98591_p2() {
    tmp_35_33_fu_98591_p2 = (!ap_const_lv16_A2.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A2) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_34_fu_98972_p2() {
    tmp_35_34_fu_98972_p2 = (!ap_const_lv16_A3.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A3) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_35_fu_99353_p2() {
    tmp_35_35_fu_99353_p2 = (!ap_const_lv16_A4.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A4) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_36_fu_99734_p2() {
    tmp_35_36_fu_99734_p2 = (!ap_const_lv16_A5.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A5) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_37_fu_100115_p2() {
    tmp_35_37_fu_100115_p2 = (!ap_const_lv16_A6.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A6) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_38_fu_100496_p2() {
    tmp_35_38_fu_100496_p2 = (!ap_const_lv16_A7.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A7) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_39_fu_100877_p2() {
    tmp_35_39_fu_100877_p2 = (!ap_const_lv16_A8.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A8) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_3_fu_86780_p2() {
    tmp_35_3_fu_86780_p2 = (!ap_const_lv16_83.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_83) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_40_fu_101258_p2() {
    tmp_35_40_fu_101258_p2 = (!ap_const_lv16_A9.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_A9) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_41_fu_101639_p2() {
    tmp_35_41_fu_101639_p2 = (!ap_const_lv16_AA.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AA) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_42_fu_102020_p2() {
    tmp_35_42_fu_102020_p2 = (!ap_const_lv16_AB.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AB) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_43_fu_102401_p2() {
    tmp_35_43_fu_102401_p2 = (!ap_const_lv16_AC.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AC) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_44_fu_102782_p2() {
    tmp_35_44_fu_102782_p2 = (!ap_const_lv16_AD.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AD) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_45_fu_103163_p2() {
    tmp_35_45_fu_103163_p2 = (!ap_const_lv16_AE.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AE) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_46_fu_103544_p2() {
    tmp_35_46_fu_103544_p2 = (!ap_const_lv16_AF.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_AF) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_47_fu_103899_p2() {
    tmp_35_47_fu_103899_p2 = (!ap_const_lv16_B0.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B0) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_48_fu_103968_p2() {
    tmp_35_48_fu_103968_p2 = (!ap_const_lv16_B1.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B1) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_49_fu_104037_p2() {
    tmp_35_49_fu_104037_p2 = (!ap_const_lv16_B2.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B2) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_4_fu_87161_p2() {
    tmp_35_4_fu_87161_p2 = (!ap_const_lv16_84.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_84) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_50_fu_104106_p2() {
    tmp_35_50_fu_104106_p2 = (!ap_const_lv16_B3.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B3) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_51_fu_104175_p2() {
    tmp_35_51_fu_104175_p2 = (!ap_const_lv16_B4.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B4) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_52_fu_104244_p2() {
    tmp_35_52_fu_104244_p2 = (!ap_const_lv16_B5.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B5) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_53_fu_104313_p2() {
    tmp_35_53_fu_104313_p2 = (!ap_const_lv16_B6.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B6) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_54_fu_104382_p2() {
    tmp_35_54_fu_104382_p2 = (!ap_const_lv16_B7.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B7) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_55_fu_104451_p2() {
    tmp_35_55_fu_104451_p2 = (!ap_const_lv16_B8.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B8) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_56_fu_104520_p2() {
    tmp_35_56_fu_104520_p2 = (!ap_const_lv16_B9.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_B9) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_57_fu_104589_p2() {
    tmp_35_57_fu_104589_p2 = (!ap_const_lv16_BA.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BA) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_58_fu_104658_p2() {
    tmp_35_58_fu_104658_p2 = (!ap_const_lv16_BB.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BB) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_59_fu_104727_p2() {
    tmp_35_59_fu_104727_p2 = (!ap_const_lv16_BC.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BC) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_5_fu_87542_p2() {
    tmp_35_5_fu_87542_p2 = (!ap_const_lv16_85.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_85) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_60_fu_104796_p2() {
    tmp_35_60_fu_104796_p2 = (!ap_const_lv16_BD.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BD) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_61_fu_104865_p2() {
    tmp_35_61_fu_104865_p2 = (!ap_const_lv16_BE.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BE) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_62_fu_104934_p2() {
    tmp_35_62_fu_104934_p2 = (!ap_const_lv16_BF.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_BF) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_6_fu_87923_p2() {
    tmp_35_6_fu_87923_p2 = (!ap_const_lv16_86.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_86) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_7_fu_88304_p2() {
    tmp_35_7_fu_88304_p2 = (!ap_const_lv16_87.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_87) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_8_fu_88685_p2() {
    tmp_35_8_fu_88685_p2 = (!ap_const_lv16_88.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_88) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_9_fu_89066_p2() {
    tmp_35_9_fu_89066_p2 = (!ap_const_lv16_89.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_89) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_35_fu_72550_p2() {
    tmp_35_fu_72550_p2 = (!ap_const_lv16_C0.is_01() || !tmp_14_fu_72250_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_C0) + sc_biguint<16>(tmp_14_fu_72250_p2.read()));
}

void a0_conv2d_1::thread_tmp_35_s_fu_89447_p2() {
    tmp_35_s_fu_89447_p2 = (!ap_const_lv16_8A.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_8A) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_3600_fu_162267_p4() {
    tmp_3600_fu_162267_p4 = r_V_99_57_fu_188595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3601_fu_162276_p4() {
    tmp_3601_fu_162276_p4 = r_V_107_56_fu_188371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3602_fu_162291_p4() {
    tmp_3602_fu_162291_p4 = r_V_101_57_fu_188611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3603_fu_162300_p4() {
    tmp_3603_fu_162300_p4 = r_V_100_57_fu_188603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3604_fu_162315_p2() {
    tmp_3604_fu_162315_p2 = (!tmp_3600_fu_162267_p4.read().is_01() || !tmp_3601_fu_162276_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3600_fu_162267_p4.read()) + sc_biguint<15>(tmp_3601_fu_162276_p4.read()));
}

void a0_conv2d_1::thread_tmp_3605_fu_162321_p2() {
    tmp_3605_fu_162321_p2 = (!tmp_3602_fu_162291_p4.read().is_01() || !tmp_3603_fu_162300_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3602_fu_162291_p4.read()) + sc_biguint<15>(tmp_3603_fu_162300_p4.read()));
}

void a0_conv2d_1::thread_tmp_3606_fu_162333_p4() {
    tmp_3606_fu_162333_p4 = r_V_103_57_fu_188627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3607_fu_162342_p4() {
    tmp_3607_fu_162342_p4 = r_V_102_57_fu_188619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3608_fu_162357_p4() {
    tmp_3608_fu_162357_p4 = r_V_105_57_fu_188643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3609_fu_162366_p4() {
    tmp_3609_fu_162366_p4 = r_V_106_57_fu_188651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_360_fu_140958_p2() {
    tmp_360_fu_140958_p2 = (!tmp_354_reg_221896.read().is_01() || !tmp_355_reg_221901.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_354_reg_221896.read()) + sc_biguint<15>(tmp_355_reg_221901.read()));
}

void a0_conv2d_1::thread_tmp_3610_fu_162381_p2() {
    tmp_3610_fu_162381_p2 = (!tmp_3609_fu_162366_p4.read().is_01() || !tmp_3608_fu_162357_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3609_fu_162366_p4.read()) + sc_biguint<15>(tmp_3608_fu_162357_p4.read()));
}

void a0_conv2d_1::thread_tmp_3611_fu_162387_p4() {
    tmp_3611_fu_162387_p4 = r_V_104_57_fu_188635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3612_fu_162402_p2() {
    tmp_3612_fu_162402_p2 = (!tmp_3606_fu_162333_p4.read().is_01() || !tmp_3607_fu_162342_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3606_fu_162333_p4.read()) + sc_biguint<15>(tmp_3607_fu_162342_p4.read()));
}

void a0_conv2d_1::thread_tmp_3613_fu_162408_p2() {
    tmp_3613_fu_162408_p2 = (!tmp_3610_fu_162381_p2.read().is_01() || !tmp_3611_fu_162387_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3610_fu_162381_p2.read()) + sc_biguint<15>(tmp_3611_fu_162387_p4.read()));
}

void a0_conv2d_1::thread_tmp_3614_fu_162420_p2() {
    tmp_3614_fu_162420_p2 = (!tmp_3613_fu_162408_p2.read().is_01() || !tmp_3612_fu_162402_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3613_fu_162408_p2.read()) + sc_biguint<15>(tmp_3612_fu_162402_p2.read()));
}

void a0_conv2d_1::thread_tmp_3615_fu_162426_p2() {
    tmp_3615_fu_162426_p2 = (!tmp_3605_fu_162321_p2.read().is_01() || !tmp_3604_fu_162315_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3605_fu_162321_p2.read()) + sc_biguint<15>(tmp_3604_fu_162315_p2.read()));
}

void a0_conv2d_1::thread_tmp_3616_fu_162438_p4() {
    tmp_3616_fu_162438_p4 = r_V_99_58_fu_188883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3617_fu_162447_p4() {
    tmp_3617_fu_162447_p4 = r_V_107_57_fu_188659_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3618_fu_162462_p4() {
    tmp_3618_fu_162462_p4 = r_V_101_58_fu_188899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3619_fu_162471_p4() {
    tmp_3619_fu_162471_p4 = r_V_100_58_fu_188891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_361_fu_140962_p2() {
    tmp_361_fu_140962_p2 = (!tmp_358_fu_140940_p2.read().is_01() || !tmp_359_fu_140944_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_358_fu_140940_p2.read()) + sc_biguint<15>(tmp_359_fu_140944_p4.read()));
}

void a0_conv2d_1::thread_tmp_3620_fu_162486_p2() {
    tmp_3620_fu_162486_p2 = (!tmp_3616_fu_162438_p4.read().is_01() || !tmp_3617_fu_162447_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3616_fu_162438_p4.read()) + sc_biguint<15>(tmp_3617_fu_162447_p4.read()));
}

void a0_conv2d_1::thread_tmp_3621_fu_162492_p2() {
    tmp_3621_fu_162492_p2 = (!tmp_3618_fu_162462_p4.read().is_01() || !tmp_3619_fu_162471_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3618_fu_162462_p4.read()) + sc_biguint<15>(tmp_3619_fu_162471_p4.read()));
}

void a0_conv2d_1::thread_tmp_3622_fu_162504_p4() {
    tmp_3622_fu_162504_p4 = r_V_103_58_fu_188915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3623_fu_162513_p4() {
    tmp_3623_fu_162513_p4 = r_V_102_58_fu_188907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3624_fu_162528_p4() {
    tmp_3624_fu_162528_p4 = r_V_105_58_fu_188931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3625_fu_162537_p4() {
    tmp_3625_fu_162537_p4 = r_V_106_58_fu_188939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3626_fu_162552_p2() {
    tmp_3626_fu_162552_p2 = (!tmp_3625_fu_162537_p4.read().is_01() || !tmp_3624_fu_162528_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3625_fu_162537_p4.read()) + sc_biguint<15>(tmp_3624_fu_162528_p4.read()));
}

void a0_conv2d_1::thread_tmp_3627_fu_162558_p4() {
    tmp_3627_fu_162558_p4 = r_V_104_58_fu_188923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3628_fu_162573_p2() {
    tmp_3628_fu_162573_p2 = (!tmp_3622_fu_162504_p4.read().is_01() || !tmp_3623_fu_162513_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3622_fu_162504_p4.read()) + sc_biguint<15>(tmp_3623_fu_162513_p4.read()));
}

void a0_conv2d_1::thread_tmp_3629_fu_162579_p2() {
    tmp_3629_fu_162579_p2 = (!tmp_3626_fu_162552_p2.read().is_01() || !tmp_3627_fu_162558_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3626_fu_162552_p2.read()) + sc_biguint<15>(tmp_3627_fu_162558_p4.read()));
}

void a0_conv2d_1::thread_tmp_362_fu_140973_p2() {
    tmp_362_fu_140973_p2 = (!tmp_361_fu_140962_p2.read().is_01() || !tmp_360_fu_140958_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_361_fu_140962_p2.read()) + sc_biguint<15>(tmp_360_fu_140958_p2.read()));
}

void a0_conv2d_1::thread_tmp_3630_fu_162591_p2() {
    tmp_3630_fu_162591_p2 = (!tmp_3629_fu_162579_p2.read().is_01() || !tmp_3628_fu_162573_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3629_fu_162579_p2.read()) + sc_biguint<15>(tmp_3628_fu_162573_p2.read()));
}

void a0_conv2d_1::thread_tmp_3631_fu_162597_p2() {
    tmp_3631_fu_162597_p2 = (!tmp_3621_fu_162492_p2.read().is_01() || !tmp_3620_fu_162486_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3621_fu_162492_p2.read()) + sc_biguint<15>(tmp_3620_fu_162486_p2.read()));
}

void a0_conv2d_1::thread_tmp_3632_fu_162609_p2() {
    tmp_3632_fu_162609_p2 = (!tmp_3614_fu_162420_p2.read().is_01() || !tmp_3615_fu_162426_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3614_fu_162420_p2.read()) + sc_biguint<15>(tmp_3615_fu_162426_p2.read()));
}

void a0_conv2d_1::thread_tmp_3633_fu_162615_p2() {
    tmp_3633_fu_162615_p2 = (!tmp_3630_fu_162591_p2.read().is_01() || !tmp_3631_fu_162597_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3630_fu_162591_p2.read()) + sc_biguint<15>(tmp_3631_fu_162597_p2.read()));
}

void a0_conv2d_1::thread_tmp_3634_fu_162627_p2() {
    tmp_3634_fu_162627_p2 = (!tmp_3633_fu_162615_p2.read().is_01() || !tmp_3632_fu_162609_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3633_fu_162615_p2.read()) + sc_biguint<15>(tmp_3632_fu_162609_p2.read()));
}

void a0_conv2d_1::thread_tmp_3635_fu_170631_p2() {
    tmp_3635_fu_170631_p2 = (!tmp_3599_reg_228081.read().is_01() || !tmp_3598_reg_228076.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3599_reg_228081.read()) + sc_biguint<15>(tmp_3598_reg_228076.read()));
}

void a0_conv2d_1::thread_tmp_3636_fu_170639_p2() {
    tmp_3636_fu_170639_p2 = (!tmp_3564_reg_228061.read().is_01() || !tmp_3565_reg_228066.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3564_reg_228061.read()) + sc_biguint<15>(tmp_3565_reg_228066.read()));
}

void a0_conv2d_1::thread_tmp_3637_fu_170643_p2() {
    tmp_3637_fu_170643_p2 = (!tmp_3634_reg_228096.read().is_01() || !tmp_3635_fu_170631_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3634_reg_228096.read()) + sc_biguint<15>(tmp_3635_fu_170631_p2.read()));
}

void a0_conv2d_1::thread_tmp_3638_fu_162633_p4() {
    tmp_3638_fu_162633_p4 = r_V_99_47_fu_185715_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3639_fu_162642_p4() {
    tmp_3639_fu_162642_p4 = r_V_107_46_fu_185491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_363_fu_140979_p2() {
    tmp_363_fu_140979_p2 = (!tmp_353_fu_140929_p2.read().is_01() || !tmp_352_fu_140924_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_353_fu_140929_p2.read()) + sc_biguint<15>(tmp_352_fu_140924_p2.read()));
}

void a0_conv2d_1::thread_tmp_3640_fu_162657_p4() {
    tmp_3640_fu_162657_p4 = r_V_101_47_fu_185731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3641_fu_162666_p4() {
    tmp_3641_fu_162666_p4 = r_V_100_47_fu_185723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3642_fu_162681_p2() {
    tmp_3642_fu_162681_p2 = (!tmp_3638_fu_162633_p4.read().is_01() || !tmp_3639_fu_162642_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3638_fu_162633_p4.read()) + sc_biguint<15>(tmp_3639_fu_162642_p4.read()));
}

void a0_conv2d_1::thread_tmp_3643_fu_162687_p2() {
    tmp_3643_fu_162687_p2 = (!tmp_3640_fu_162657_p4.read().is_01() || !tmp_3641_fu_162666_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3640_fu_162657_p4.read()) + sc_biguint<15>(tmp_3641_fu_162666_p4.read()));
}

void a0_conv2d_1::thread_tmp_3644_fu_162699_p4() {
    tmp_3644_fu_162699_p4 = r_V_103_47_fu_185747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3645_fu_162708_p4() {
    tmp_3645_fu_162708_p4 = r_V_102_47_fu_185739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3646_fu_162723_p4() {
    tmp_3646_fu_162723_p4 = r_V_105_47_fu_185763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3647_fu_162732_p4() {
    tmp_3647_fu_162732_p4 = r_V_106_47_fu_185771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3648_fu_162747_p2() {
    tmp_3648_fu_162747_p2 = (!tmp_3647_fu_162732_p4.read().is_01() || !tmp_3646_fu_162723_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3647_fu_162732_p4.read()) + sc_biguint<15>(tmp_3646_fu_162723_p4.read()));
}

void a0_conv2d_1::thread_tmp_3649_fu_162753_p4() {
    tmp_3649_fu_162753_p4 = r_V_104_47_fu_185755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_364_fu_140991_p2() {
    tmp_364_fu_140991_p2 = (!tmp_346_fu_140878_p2.read().is_01() || !tmp_347_fu_140884_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_346_fu_140878_p2.read()) + sc_biguint<15>(tmp_347_fu_140884_p2.read()));
}

void a0_conv2d_1::thread_tmp_3650_fu_162768_p2() {
    tmp_3650_fu_162768_p2 = (!tmp_3644_fu_162699_p4.read().is_01() || !tmp_3645_fu_162708_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3644_fu_162699_p4.read()) + sc_biguint<15>(tmp_3645_fu_162708_p4.read()));
}

void a0_conv2d_1::thread_tmp_3651_fu_162774_p2() {
    tmp_3651_fu_162774_p2 = (!tmp_3648_fu_162747_p2.read().is_01() || !tmp_3649_fu_162753_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3648_fu_162747_p2.read()) + sc_biguint<15>(tmp_3649_fu_162753_p4.read()));
}

void a0_conv2d_1::thread_tmp_3652_fu_162786_p2() {
    tmp_3652_fu_162786_p2 = (!tmp_3651_fu_162774_p2.read().is_01() || !tmp_3650_fu_162768_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3651_fu_162774_p2.read()) + sc_biguint<15>(tmp_3650_fu_162768_p2.read()));
}

void a0_conv2d_1::thread_tmp_3653_fu_162792_p2() {
    tmp_3653_fu_162792_p2 = (!tmp_3643_fu_162687_p2.read().is_01() || !tmp_3642_fu_162681_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3643_fu_162687_p2.read()) + sc_biguint<15>(tmp_3642_fu_162681_p2.read()));
}

void a0_conv2d_1::thread_tmp_3654_fu_162804_p4() {
    tmp_3654_fu_162804_p4 = r_V_99_48_fu_186003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3655_fu_162813_p4() {
    tmp_3655_fu_162813_p4 = r_V_107_47_fu_185779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3656_fu_162828_p4() {
    tmp_3656_fu_162828_p4 = r_V_101_48_fu_186019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3657_fu_162837_p4() {
    tmp_3657_fu_162837_p4 = r_V_100_48_fu_186011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3658_fu_162852_p2() {
    tmp_3658_fu_162852_p2 = (!tmp_3654_fu_162804_p4.read().is_01() || !tmp_3655_fu_162813_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3654_fu_162804_p4.read()) + sc_biguint<15>(tmp_3655_fu_162813_p4.read()));
}

void a0_conv2d_1::thread_tmp_3659_fu_162858_p2() {
    tmp_3659_fu_162858_p2 = (!tmp_3656_fu_162828_p4.read().is_01() || !tmp_3657_fu_162837_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3656_fu_162828_p4.read()) + sc_biguint<15>(tmp_3657_fu_162837_p4.read()));
}

void a0_conv2d_1::thread_tmp_365_fu_140997_p2() {
    tmp_365_fu_140997_p2 = (!tmp_362_fu_140973_p2.read().is_01() || !tmp_363_fu_140979_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_362_fu_140973_p2.read()) + sc_biguint<15>(tmp_363_fu_140979_p2.read()));
}

void a0_conv2d_1::thread_tmp_3660_fu_162870_p4() {
    tmp_3660_fu_162870_p4 = r_V_103_48_fu_186035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3661_fu_162879_p4() {
    tmp_3661_fu_162879_p4 = r_V_102_48_fu_186027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3662_fu_162894_p4() {
    tmp_3662_fu_162894_p4 = r_V_105_48_fu_186051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3663_fu_162903_p4() {
    tmp_3663_fu_162903_p4 = r_V_106_48_fu_186059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3664_fu_162918_p2() {
    tmp_3664_fu_162918_p2 = (!tmp_3663_fu_162903_p4.read().is_01() || !tmp_3662_fu_162894_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3663_fu_162903_p4.read()) + sc_biguint<15>(tmp_3662_fu_162894_p4.read()));
}

void a0_conv2d_1::thread_tmp_3665_fu_162924_p4() {
    tmp_3665_fu_162924_p4 = r_V_104_48_fu_186043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3666_fu_162939_p2() {
    tmp_3666_fu_162939_p2 = (!tmp_3660_fu_162870_p4.read().is_01() || !tmp_3661_fu_162879_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3660_fu_162870_p4.read()) + sc_biguint<15>(tmp_3661_fu_162879_p4.read()));
}

void a0_conv2d_1::thread_tmp_3667_fu_162945_p2() {
    tmp_3667_fu_162945_p2 = (!tmp_3664_fu_162918_p2.read().is_01() || !tmp_3665_fu_162924_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3664_fu_162918_p2.read()) + sc_biguint<15>(tmp_3665_fu_162924_p4.read()));
}

void a0_conv2d_1::thread_tmp_3668_fu_162957_p2() {
    tmp_3668_fu_162957_p2 = (!tmp_3667_fu_162945_p2.read().is_01() || !tmp_3666_fu_162939_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3667_fu_162945_p2.read()) + sc_biguint<15>(tmp_3666_fu_162939_p2.read()));
}

void a0_conv2d_1::thread_tmp_3669_fu_162963_p2() {
    tmp_3669_fu_162963_p2 = (!tmp_3659_fu_162858_p2.read().is_01() || !tmp_3658_fu_162852_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3659_fu_162858_p2.read()) + sc_biguint<15>(tmp_3658_fu_162852_p2.read()));
}

void a0_conv2d_1::thread_tmp_3670_fu_162975_p2() {
    tmp_3670_fu_162975_p2 = (!tmp_3652_fu_162786_p2.read().is_01() || !tmp_3653_fu_162792_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3652_fu_162786_p2.read()) + sc_biguint<15>(tmp_3653_fu_162792_p2.read()));
}

void a0_conv2d_1::thread_tmp_3671_fu_162981_p2() {
    tmp_3671_fu_162981_p2 = (!tmp_3668_fu_162957_p2.read().is_01() || !tmp_3669_fu_162963_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3668_fu_162957_p2.read()) + sc_biguint<15>(tmp_3669_fu_162963_p2.read()));
}

void a0_conv2d_1::thread_tmp_3672_fu_162993_p4() {
    tmp_3672_fu_162993_p4 = r_V_99_49_fu_186291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3673_fu_163002_p4() {
    tmp_3673_fu_163002_p4 = r_V_107_48_fu_186067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3674_fu_163017_p4() {
    tmp_3674_fu_163017_p4 = r_V_101_49_fu_186307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3675_fu_163026_p4() {
    tmp_3675_fu_163026_p4 = r_V_100_49_fu_186299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3676_fu_163041_p2() {
    tmp_3676_fu_163041_p2 = (!tmp_3672_fu_162993_p4.read().is_01() || !tmp_3673_fu_163002_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3672_fu_162993_p4.read()) + sc_biguint<15>(tmp_3673_fu_163002_p4.read()));
}

void a0_conv2d_1::thread_tmp_3677_fu_163047_p2() {
    tmp_3677_fu_163047_p2 = (!tmp_3674_fu_163017_p4.read().is_01() || !tmp_3675_fu_163026_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3674_fu_163017_p4.read()) + sc_biguint<15>(tmp_3675_fu_163026_p4.read()));
}

void a0_conv2d_1::thread_tmp_3678_fu_163059_p4() {
    tmp_3678_fu_163059_p4 = r_V_103_49_fu_186323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3679_fu_163068_p4() {
    tmp_3679_fu_163068_p4 = r_V_102_49_fu_186315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_367_fu_141009_p4() {
    tmp_367_fu_141009_p4 = r_V_80_32_fu_184075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3680_fu_163083_p4() {
    tmp_3680_fu_163083_p4 = r_V_105_49_fu_186339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3681_fu_163092_p4() {
    tmp_3681_fu_163092_p4 = r_V_106_49_fu_186347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3682_fu_163107_p2() {
    tmp_3682_fu_163107_p2 = (!tmp_3681_fu_163092_p4.read().is_01() || !tmp_3680_fu_163083_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3681_fu_163092_p4.read()) + sc_biguint<15>(tmp_3680_fu_163083_p4.read()));
}

void a0_conv2d_1::thread_tmp_3683_fu_163113_p4() {
    tmp_3683_fu_163113_p4 = r_V_104_49_fu_186331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3684_fu_163128_p2() {
    tmp_3684_fu_163128_p2 = (!tmp_3678_fu_163059_p4.read().is_01() || !tmp_3679_fu_163068_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3678_fu_163059_p4.read()) + sc_biguint<15>(tmp_3679_fu_163068_p4.read()));
}

void a0_conv2d_1::thread_tmp_3685_fu_163134_p2() {
    tmp_3685_fu_163134_p2 = (!tmp_3682_fu_163107_p2.read().is_01() || !tmp_3683_fu_163113_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3682_fu_163107_p2.read()) + sc_biguint<15>(tmp_3683_fu_163113_p4.read()));
}

void a0_conv2d_1::thread_tmp_3686_fu_163146_p2() {
    tmp_3686_fu_163146_p2 = (!tmp_3685_fu_163134_p2.read().is_01() || !tmp_3684_fu_163128_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3685_fu_163134_p2.read()) + sc_biguint<15>(tmp_3684_fu_163128_p2.read()));
}

void a0_conv2d_1::thread_tmp_3687_fu_163152_p2() {
    tmp_3687_fu_163152_p2 = (!tmp_3677_fu_163047_p2.read().is_01() || !tmp_3676_fu_163041_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3677_fu_163047_p2.read()) + sc_biguint<15>(tmp_3676_fu_163041_p2.read()));
}

void a0_conv2d_1::thread_tmp_3688_fu_163164_p4() {
    tmp_3688_fu_163164_p4 = r_V_99_50_fu_186579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3689_fu_163173_p4() {
    tmp_3689_fu_163173_p4 = r_V_107_49_fu_186355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_368_fu_141023_p4() {
    tmp_368_fu_141023_p4 = r_V_74_33_fu_184155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3690_fu_163188_p4() {
    tmp_3690_fu_163188_p4 = r_V_101_50_fu_186595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3691_fu_163197_p4() {
    tmp_3691_fu_163197_p4 = r_V_100_50_fu_186587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3692_fu_163212_p2() {
    tmp_3692_fu_163212_p2 = (!tmp_3688_fu_163164_p4.read().is_01() || !tmp_3689_fu_163173_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3688_fu_163164_p4.read()) + sc_biguint<15>(tmp_3689_fu_163173_p4.read()));
}

void a0_conv2d_1::thread_tmp_3693_fu_163218_p2() {
    tmp_3693_fu_163218_p2 = (!tmp_3690_fu_163188_p4.read().is_01() || !tmp_3691_fu_163197_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3690_fu_163188_p4.read()) + sc_biguint<15>(tmp_3691_fu_163197_p4.read()));
}

void a0_conv2d_1::thread_tmp_3694_fu_163230_p4() {
    tmp_3694_fu_163230_p4 = r_V_103_50_fu_186611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3695_fu_163239_p4() {
    tmp_3695_fu_163239_p4 = r_V_102_50_fu_186603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3696_fu_163254_p4() {
    tmp_3696_fu_163254_p4 = r_V_105_50_fu_186627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3697_fu_163263_p4() {
    tmp_3697_fu_163263_p4 = r_V_106_50_fu_186635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3698_fu_163278_p2() {
    tmp_3698_fu_163278_p2 = (!tmp_3697_fu_163263_p4.read().is_01() || !tmp_3696_fu_163254_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3697_fu_163263_p4.read()) + sc_biguint<15>(tmp_3696_fu_163254_p4.read()));
}

void a0_conv2d_1::thread_tmp_3699_fu_163284_p4() {
    tmp_3699_fu_163284_p4 = r_V_104_50_fu_186619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_36_fu_72222_p1() {
    tmp_36_fu_72222_p1 = order_mid2_fu_70408_p3.read().range(6-1, 0);
}

void a0_conv2d_1::thread_tmp_3700_fu_163299_p2() {
    tmp_3700_fu_163299_p2 = (!tmp_3694_fu_163230_p4.read().is_01() || !tmp_3695_fu_163239_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3694_fu_163230_p4.read()) + sc_biguint<15>(tmp_3695_fu_163239_p4.read()));
}

void a0_conv2d_1::thread_tmp_3701_fu_163305_p2() {
    tmp_3701_fu_163305_p2 = (!tmp_3698_fu_163278_p2.read().is_01() || !tmp_3699_fu_163284_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3698_fu_163278_p2.read()) + sc_biguint<15>(tmp_3699_fu_163284_p4.read()));
}

void a0_conv2d_1::thread_tmp_3702_fu_163317_p2() {
    tmp_3702_fu_163317_p2 = (!tmp_3701_fu_163305_p2.read().is_01() || !tmp_3700_fu_163299_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3701_fu_163305_p2.read()) + sc_biguint<15>(tmp_3700_fu_163299_p2.read()));
}

void a0_conv2d_1::thread_tmp_3703_fu_163323_p2() {
    tmp_3703_fu_163323_p2 = (!tmp_3693_fu_163218_p2.read().is_01() || !tmp_3692_fu_163212_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3693_fu_163218_p2.read()) + sc_biguint<15>(tmp_3692_fu_163212_p2.read()));
}

void a0_conv2d_1::thread_tmp_3704_fu_163335_p2() {
    tmp_3704_fu_163335_p2 = (!tmp_3686_fu_163146_p2.read().is_01() || !tmp_3687_fu_163152_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3686_fu_163146_p2.read()) + sc_biguint<15>(tmp_3687_fu_163152_p2.read()));
}

void a0_conv2d_1::thread_tmp_3705_fu_163341_p2() {
    tmp_3705_fu_163341_p2 = (!tmp_3702_fu_163317_p2.read().is_01() || !tmp_3703_fu_163323_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3702_fu_163317_p2.read()) + sc_biguint<15>(tmp_3703_fu_163323_p2.read()));
}

void a0_conv2d_1::thread_tmp_3706_fu_163347_p2() {
    tmp_3706_fu_163347_p2 = (!tmp_3705_fu_163341_p2.read().is_01() || !tmp_3704_fu_163335_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3705_fu_163341_p2.read()) + sc_biguint<15>(tmp_3704_fu_163335_p2.read()));
}

void a0_conv2d_1::thread_tmp_3707_fu_163353_p2() {
    tmp_3707_fu_163353_p2 = (!tmp_3671_fu_162981_p2.read().is_01() || !tmp_3670_fu_162975_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3671_fu_162981_p2.read()) + sc_biguint<15>(tmp_3670_fu_162975_p2.read()));
}

void a0_conv2d_1::thread_tmp_3708_fu_163359_p4() {
    tmp_3708_fu_163359_p4 = r_V_99_51_fu_186867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3709_fu_163368_p4() {
    tmp_3709_fu_163368_p4 = r_V_107_50_fu_186643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_370_fu_141037_p2() {
    tmp_370_fu_141037_p2 = (!tmp_366_reg_221926.read().is_01() || !tmp_367_fu_141009_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_366_reg_221926.read()) + sc_biguint<15>(tmp_367_fu_141009_p4.read()));
}

void a0_conv2d_1::thread_tmp_3710_fu_163383_p4() {
    tmp_3710_fu_163383_p4 = r_V_101_51_fu_186883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3711_fu_163392_p4() {
    tmp_3711_fu_163392_p4 = r_V_100_51_fu_186875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3712_fu_163407_p2() {
    tmp_3712_fu_163407_p2 = (!tmp_3708_fu_163359_p4.read().is_01() || !tmp_3709_fu_163368_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3708_fu_163359_p4.read()) + sc_biguint<15>(tmp_3709_fu_163368_p4.read()));
}

void a0_conv2d_1::thread_tmp_3713_fu_163413_p2() {
    tmp_3713_fu_163413_p2 = (!tmp_3710_fu_163383_p4.read().is_01() || !tmp_3711_fu_163392_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3710_fu_163383_p4.read()) + sc_biguint<15>(tmp_3711_fu_163392_p4.read()));
}

void a0_conv2d_1::thread_tmp_3714_fu_163425_p4() {
    tmp_3714_fu_163425_p4 = r_V_103_51_fu_186899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3715_fu_163434_p4() {
    tmp_3715_fu_163434_p4 = r_V_102_51_fu_186891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3716_fu_163449_p4() {
    tmp_3716_fu_163449_p4 = r_V_105_51_fu_186915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3717_fu_163458_p4() {
    tmp_3717_fu_163458_p4 = r_V_106_51_fu_186923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3718_fu_163473_p2() {
    tmp_3718_fu_163473_p2 = (!tmp_3717_fu_163458_p4.read().is_01() || !tmp_3716_fu_163449_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3717_fu_163458_p4.read()) + sc_biguint<15>(tmp_3716_fu_163449_p4.read()));
}

void a0_conv2d_1::thread_tmp_3719_fu_163479_p4() {
    tmp_3719_fu_163479_p4 = r_V_104_51_fu_186907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_371_fu_141042_p2() {
    tmp_371_fu_141042_p2 = (!tmp_368_fu_141023_p4.read().is_01() || !tmp_369_reg_221931.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_368_fu_141023_p4.read()) + sc_biguint<15>(tmp_369_reg_221931.read()));
}

void a0_conv2d_1::thread_tmp_3720_fu_163494_p2() {
    tmp_3720_fu_163494_p2 = (!tmp_3714_fu_163425_p4.read().is_01() || !tmp_3715_fu_163434_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3714_fu_163425_p4.read()) + sc_biguint<15>(tmp_3715_fu_163434_p4.read()));
}

void a0_conv2d_1::thread_tmp_3721_fu_163500_p2() {
    tmp_3721_fu_163500_p2 = (!tmp_3718_fu_163473_p2.read().is_01() || !tmp_3719_fu_163479_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3718_fu_163473_p2.read()) + sc_biguint<15>(tmp_3719_fu_163479_p4.read()));
}

void a0_conv2d_1::thread_tmp_3722_fu_163512_p2() {
    tmp_3722_fu_163512_p2 = (!tmp_3721_fu_163500_p2.read().is_01() || !tmp_3720_fu_163494_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3721_fu_163500_p2.read()) + sc_biguint<15>(tmp_3720_fu_163494_p2.read()));
}

void a0_conv2d_1::thread_tmp_3723_fu_163518_p2() {
    tmp_3723_fu_163518_p2 = (!tmp_3713_fu_163413_p2.read().is_01() || !tmp_3712_fu_163407_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3713_fu_163413_p2.read()) + sc_biguint<15>(tmp_3712_fu_163407_p2.read()));
}

void a0_conv2d_1::thread_tmp_3724_fu_163530_p4() {
    tmp_3724_fu_163530_p4 = r_V_99_52_fu_187155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3725_fu_163539_p4() {
    tmp_3725_fu_163539_p4 = r_V_107_51_fu_186931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3726_fu_163554_p4() {
    tmp_3726_fu_163554_p4 = r_V_101_52_fu_187171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3727_fu_163563_p4() {
    tmp_3727_fu_163563_p4 = r_V_100_52_fu_187163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3728_fu_163578_p2() {
    tmp_3728_fu_163578_p2 = (!tmp_3724_fu_163530_p4.read().is_01() || !tmp_3725_fu_163539_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3724_fu_163530_p4.read()) + sc_biguint<15>(tmp_3725_fu_163539_p4.read()));
}

void a0_conv2d_1::thread_tmp_3729_fu_163584_p2() {
    tmp_3729_fu_163584_p2 = (!tmp_3726_fu_163554_p4.read().is_01() || !tmp_3727_fu_163563_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3726_fu_163554_p4.read()) + sc_biguint<15>(tmp_3727_fu_163563_p4.read()));
}

void a0_conv2d_1::thread_tmp_3730_fu_163596_p4() {
    tmp_3730_fu_163596_p4 = r_V_103_52_fu_187187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3731_fu_163605_p4() {
    tmp_3731_fu_163605_p4 = r_V_102_52_fu_187179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3732_fu_163620_p4() {
    tmp_3732_fu_163620_p4 = r_V_105_52_fu_187203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3733_fu_163629_p4() {
    tmp_3733_fu_163629_p4 = r_V_106_52_fu_187211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3734_fu_163644_p2() {
    tmp_3734_fu_163644_p2 = (!tmp_3733_fu_163629_p4.read().is_01() || !tmp_3732_fu_163620_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3733_fu_163629_p4.read()) + sc_biguint<15>(tmp_3732_fu_163620_p4.read()));
}

void a0_conv2d_1::thread_tmp_3735_fu_163650_p4() {
    tmp_3735_fu_163650_p4 = r_V_104_52_fu_187195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3736_fu_163665_p2() {
    tmp_3736_fu_163665_p2 = (!tmp_3730_fu_163596_p4.read().is_01() || !tmp_3731_fu_163605_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3730_fu_163596_p4.read()) + sc_biguint<15>(tmp_3731_fu_163605_p4.read()));
}

void a0_conv2d_1::thread_tmp_3737_fu_163671_p2() {
    tmp_3737_fu_163671_p2 = (!tmp_3734_fu_163644_p2.read().is_01() || !tmp_3735_fu_163650_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3734_fu_163644_p2.read()) + sc_biguint<15>(tmp_3735_fu_163650_p4.read()));
}

void a0_conv2d_1::thread_tmp_3738_fu_163683_p2() {
    tmp_3738_fu_163683_p2 = (!tmp_3737_fu_163671_p2.read().is_01() || !tmp_3736_fu_163665_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3737_fu_163671_p2.read()) + sc_biguint<15>(tmp_3736_fu_163665_p2.read()));
}

void a0_conv2d_1::thread_tmp_3739_fu_163689_p2() {
    tmp_3739_fu_163689_p2 = (!tmp_3729_fu_163584_p2.read().is_01() || !tmp_3728_fu_163578_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3729_fu_163584_p2.read()) + sc_biguint<15>(tmp_3728_fu_163578_p2.read()));
}

void a0_conv2d_1::thread_tmp_3740_fu_163701_p2() {
    tmp_3740_fu_163701_p2 = (!tmp_3722_fu_163512_p2.read().is_01() || !tmp_3723_fu_163518_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3722_fu_163512_p2.read()) + sc_biguint<15>(tmp_3723_fu_163518_p2.read()));
}

void a0_conv2d_1::thread_tmp_3741_fu_163707_p2() {
    tmp_3741_fu_163707_p2 = (!tmp_3738_fu_163683_p2.read().is_01() || !tmp_3739_fu_163689_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3738_fu_163683_p2.read()) + sc_biguint<15>(tmp_3739_fu_163689_p2.read()));
}

void a0_conv2d_1::thread_tmp_3742_fu_163719_p4() {
    tmp_3742_fu_163719_p4 = r_V_99_53_fu_187443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3743_fu_163728_p4() {
    tmp_3743_fu_163728_p4 = r_V_107_52_fu_187219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3744_fu_163743_p4() {
    tmp_3744_fu_163743_p4 = r_V_101_53_fu_187459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3745_fu_163752_p4() {
    tmp_3745_fu_163752_p4 = r_V_100_53_fu_187451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3746_fu_163767_p2() {
    tmp_3746_fu_163767_p2 = (!tmp_3742_fu_163719_p4.read().is_01() || !tmp_3743_fu_163728_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3742_fu_163719_p4.read()) + sc_biguint<15>(tmp_3743_fu_163728_p4.read()));
}

void a0_conv2d_1::thread_tmp_3747_fu_163773_p2() {
    tmp_3747_fu_163773_p2 = (!tmp_3744_fu_163743_p4.read().is_01() || !tmp_3745_fu_163752_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3744_fu_163743_p4.read()) + sc_biguint<15>(tmp_3745_fu_163752_p4.read()));
}

void a0_conv2d_1::thread_tmp_3748_fu_163785_p4() {
    tmp_3748_fu_163785_p4 = r_V_103_53_fu_187475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3749_fu_163794_p4() {
    tmp_3749_fu_163794_p4 = r_V_102_53_fu_187467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3750_fu_163809_p4() {
    tmp_3750_fu_163809_p4 = r_V_105_53_fu_187491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3751_fu_163818_p4() {
    tmp_3751_fu_163818_p4 = r_V_106_53_fu_187499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3752_fu_163833_p2() {
    tmp_3752_fu_163833_p2 = (!tmp_3751_fu_163818_p4.read().is_01() || !tmp_3750_fu_163809_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3751_fu_163818_p4.read()) + sc_biguint<15>(tmp_3750_fu_163809_p4.read()));
}

void a0_conv2d_1::thread_tmp_3753_fu_163839_p4() {
    tmp_3753_fu_163839_p4 = r_V_104_53_fu_187483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3754_fu_163854_p2() {
    tmp_3754_fu_163854_p2 = (!tmp_3748_fu_163785_p4.read().is_01() || !tmp_3749_fu_163794_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3748_fu_163785_p4.read()) + sc_biguint<15>(tmp_3749_fu_163794_p4.read()));
}

void a0_conv2d_1::thread_tmp_3755_fu_163860_p2() {
    tmp_3755_fu_163860_p2 = (!tmp_3752_fu_163833_p2.read().is_01() || !tmp_3753_fu_163839_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3752_fu_163833_p2.read()) + sc_biguint<15>(tmp_3753_fu_163839_p4.read()));
}

void a0_conv2d_1::thread_tmp_3756_fu_163872_p2() {
    tmp_3756_fu_163872_p2 = (!tmp_3755_fu_163860_p2.read().is_01() || !tmp_3754_fu_163854_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3755_fu_163860_p2.read()) + sc_biguint<15>(tmp_3754_fu_163854_p2.read()));
}

void a0_conv2d_1::thread_tmp_3757_fu_163878_p2() {
    tmp_3757_fu_163878_p2 = (!tmp_3747_fu_163773_p2.read().is_01() || !tmp_3746_fu_163767_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3747_fu_163773_p2.read()) + sc_biguint<15>(tmp_3746_fu_163767_p2.read()));
}

void a0_conv2d_1::thread_tmp_3758_fu_163890_p4() {
    tmp_3758_fu_163890_p4 = r_V_99_54_fu_187731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3759_fu_163899_p4() {
    tmp_3759_fu_163899_p4 = r_V_107_53_fu_187507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3760_fu_163914_p4() {
    tmp_3760_fu_163914_p4 = r_V_101_54_fu_187747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3761_fu_163923_p4() {
    tmp_3761_fu_163923_p4 = r_V_100_54_fu_187739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3762_fu_163938_p2() {
    tmp_3762_fu_163938_p2 = (!tmp_3758_fu_163890_p4.read().is_01() || !tmp_3759_fu_163899_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3758_fu_163890_p4.read()) + sc_biguint<15>(tmp_3759_fu_163899_p4.read()));
}

void a0_conv2d_1::thread_tmp_3763_fu_163944_p2() {
    tmp_3763_fu_163944_p2 = (!tmp_3760_fu_163914_p4.read().is_01() || !tmp_3761_fu_163923_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3760_fu_163914_p4.read()) + sc_biguint<15>(tmp_3761_fu_163923_p4.read()));
}

void a0_conv2d_1::thread_tmp_3764_fu_163956_p4() {
    tmp_3764_fu_163956_p4 = r_V_103_54_fu_187763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3765_fu_163965_p4() {
    tmp_3765_fu_163965_p4 = r_V_102_54_fu_187755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3766_fu_163980_p4() {
    tmp_3766_fu_163980_p4 = r_V_105_54_fu_187779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3767_fu_163989_p4() {
    tmp_3767_fu_163989_p4 = r_V_106_54_fu_187787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3768_fu_164004_p2() {
    tmp_3768_fu_164004_p2 = (!tmp_3767_fu_163989_p4.read().is_01() || !tmp_3766_fu_163980_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3767_fu_163989_p4.read()) + sc_biguint<15>(tmp_3766_fu_163980_p4.read()));
}

void a0_conv2d_1::thread_tmp_3769_fu_164010_p4() {
    tmp_3769_fu_164010_p4 = r_V_104_54_fu_187771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_376_fu_141057_p2() {
    tmp_376_fu_141057_p2 = (!tmp_375_reg_221956.read().is_01() || !tmp_374_reg_221951.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_375_reg_221956.read()) + sc_biguint<15>(tmp_374_reg_221951.read()));
}

void a0_conv2d_1::thread_tmp_3770_fu_164025_p2() {
    tmp_3770_fu_164025_p2 = (!tmp_3764_fu_163956_p4.read().is_01() || !tmp_3765_fu_163965_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3764_fu_163956_p4.read()) + sc_biguint<15>(tmp_3765_fu_163965_p4.read()));
}

void a0_conv2d_1::thread_tmp_3771_fu_164031_p2() {
    tmp_3771_fu_164031_p2 = (!tmp_3768_fu_164004_p2.read().is_01() || !tmp_3769_fu_164010_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3768_fu_164004_p2.read()) + sc_biguint<15>(tmp_3769_fu_164010_p4.read()));
}

void a0_conv2d_1::thread_tmp_3772_fu_164043_p2() {
    tmp_3772_fu_164043_p2 = (!tmp_3771_fu_164031_p2.read().is_01() || !tmp_3770_fu_164025_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3771_fu_164031_p2.read()) + sc_biguint<15>(tmp_3770_fu_164025_p2.read()));
}

void a0_conv2d_1::thread_tmp_3773_fu_164049_p2() {
    tmp_3773_fu_164049_p2 = (!tmp_3763_fu_163944_p2.read().is_01() || !tmp_3762_fu_163938_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3763_fu_163944_p2.read()) + sc_biguint<15>(tmp_3762_fu_163938_p2.read()));
}

void a0_conv2d_1::thread_tmp_3774_fu_164061_p2() {
    tmp_3774_fu_164061_p2 = (!tmp_3756_fu_163872_p2.read().is_01() || !tmp_3757_fu_163878_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3756_fu_163872_p2.read()) + sc_biguint<15>(tmp_3757_fu_163878_p2.read()));
}

void a0_conv2d_1::thread_tmp_3775_fu_164067_p2() {
    tmp_3775_fu_164067_p2 = (!tmp_3772_fu_164043_p2.read().is_01() || !tmp_3773_fu_164049_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3772_fu_164043_p2.read()) + sc_biguint<15>(tmp_3773_fu_164049_p2.read()));
}

void a0_conv2d_1::thread_tmp_3776_fu_164073_p2() {
    tmp_3776_fu_164073_p2 = (!tmp_3775_fu_164067_p2.read().is_01() || !tmp_3774_fu_164061_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3775_fu_164067_p2.read()) + sc_biguint<15>(tmp_3774_fu_164061_p2.read()));
}

void a0_conv2d_1::thread_tmp_3777_fu_170666_p2() {
    tmp_3777_fu_170666_p2 = (!tmp_3741_reg_228131.read().is_01() || !tmp_3740_reg_228126.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3741_reg_228131.read()) + sc_biguint<15>(tmp_3740_reg_228126.read()));
}

void a0_conv2d_1::thread_tmp_3778_fu_170675_p2() {
    tmp_3778_fu_170675_p2 = (!tmp_3706_reg_228116.read().is_01() || !tmp_3707_reg_228121.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3706_reg_228116.read()) + sc_biguint<15>(tmp_3707_reg_228121.read()));
}

void a0_conv2d_1::thread_tmp_3779_fu_170679_p2() {
    tmp_3779_fu_170679_p2 = (!tmp_3776_reg_228151.read().is_01() || !tmp_3777_fu_170666_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3776_reg_228151.read()) + sc_biguint<15>(tmp_3777_fu_170666_p2.read()));
}

void a0_conv2d_1::thread_tmp_377_fu_141061_p4() {
    tmp_377_fu_141061_p4 = r_V_77_33_fu_184163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3780_fu_170690_p2() {
    tmp_3780_fu_170690_p2 = (!tmp_3779_fu_170679_p2.read().is_01() || !tmp_3778_fu_170675_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3779_fu_170679_p2.read()) + sc_biguint<15>(tmp_3778_fu_170675_p2.read()));
}

void a0_conv2d_1::thread_tmp_3781_fu_170696_p2() {
    tmp_3781_fu_170696_p2 = (!tmp_3637_fu_170643_p2.read().is_01() || !tmp_3636_fu_170639_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3637_fu_170643_p2.read()) + sc_biguint<15>(tmp_3636_fu_170639_p2.read()));
}

void a0_conv2d_1::thread_tmp_3783_fu_164079_p4() {
    tmp_3783_fu_164079_p4 = r_V_107_30_fu_183955_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3784_fu_164093_p4() {
    tmp_3784_fu_164093_p4 = r_V_101_31_fu_184035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3786_fu_164107_p2() {
    tmp_3786_fu_164107_p2 = (!tmp_3782_reg_225721.read().is_01() || !tmp_3783_fu_164079_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3782_reg_225721.read()) + sc_biguint<15>(tmp_3783_fu_164079_p4.read()));
}

void a0_conv2d_1::thread_tmp_3787_fu_164112_p2() {
    tmp_3787_fu_164112_p2 = (!tmp_3784_fu_164093_p4.read().is_01() || !tmp_3785_reg_225726.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3784_fu_164093_p4.read()) + sc_biguint<15>(tmp_3785_reg_225726.read()));
}

void a0_conv2d_1::thread_tmp_378_fu_141076_p2() {
    tmp_378_fu_141076_p2 = (!tmp_372_reg_221936.read().is_01() || !tmp_373_reg_221941.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_372_reg_221936.read()) + sc_biguint<15>(tmp_373_reg_221941.read()));
}

void a0_conv2d_1::thread_tmp_3792_fu_164127_p2() {
    tmp_3792_fu_164127_p2 = (!tmp_3791_reg_225751.read().is_01() || !tmp_3790_reg_225746.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3791_reg_225751.read()) + sc_biguint<15>(tmp_3790_reg_225746.read()));
}

void a0_conv2d_1::thread_tmp_3793_fu_164131_p4() {
    tmp_3793_fu_164131_p4 = r_V_104_31_fu_184043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3794_fu_164146_p2() {
    tmp_3794_fu_164146_p2 = (!tmp_3788_reg_225731.read().is_01() || !tmp_3789_reg_225736.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3788_reg_225731.read()) + sc_biguint<15>(tmp_3789_reg_225736.read()));
}

void a0_conv2d_1::thread_tmp_3795_fu_164150_p2() {
    tmp_3795_fu_164150_p2 = (!tmp_3792_fu_164127_p2.read().is_01() || !tmp_3793_fu_164131_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3792_fu_164127_p2.read()) + sc_biguint<15>(tmp_3793_fu_164131_p4.read()));
}

void a0_conv2d_1::thread_tmp_3796_fu_164161_p2() {
    tmp_3796_fu_164161_p2 = (!tmp_3795_fu_164150_p2.read().is_01() || !tmp_3794_fu_164146_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3795_fu_164150_p2.read()) + sc_biguint<15>(tmp_3794_fu_164146_p2.read()));
}

void a0_conv2d_1::thread_tmp_3797_fu_164167_p2() {
    tmp_3797_fu_164167_p2 = (!tmp_3787_fu_164112_p2.read().is_01() || !tmp_3786_fu_164107_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3787_fu_164112_p2.read()) + sc_biguint<15>(tmp_3786_fu_164107_p2.read()));
}

void a0_conv2d_1::thread_tmp_3799_fu_164179_p4() {
    tmp_3799_fu_164179_p4 = r_V_107_31_fu_184051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_379_fu_141080_p2() {
    tmp_379_fu_141080_p2 = (!tmp_376_fu_141057_p2.read().is_01() || !tmp_377_fu_141061_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_376_fu_141057_p2.read()) + sc_biguint<15>(tmp_377_fu_141061_p4.read()));
}

void a0_conv2d_1::thread_tmp_37_fu_72574_p2() {
    tmp_37_fu_72574_p2 = (!ap_const_lv16_100.is_01() || !tmp_14_fu_72250_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_100) + sc_biguint<16>(tmp_14_fu_72250_p2.read()));
}

void a0_conv2d_1::thread_tmp_3800_fu_164193_p4() {
    tmp_3800_fu_164193_p4 = r_V_101_32_fu_184131_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3802_fu_164207_p2() {
    tmp_3802_fu_164207_p2 = (!tmp_3798_reg_225756.read().is_01() || !tmp_3799_fu_164179_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3798_reg_225756.read()) + sc_biguint<15>(tmp_3799_fu_164179_p4.read()));
}

void a0_conv2d_1::thread_tmp_3803_fu_164212_p2() {
    tmp_3803_fu_164212_p2 = (!tmp_3800_fu_164193_p4.read().is_01() || !tmp_3801_reg_225761.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3800_fu_164193_p4.read()) + sc_biguint<15>(tmp_3801_reg_225761.read()));
}

void a0_conv2d_1::thread_tmp_3808_fu_164223_p2() {
    tmp_3808_fu_164223_p2 = (!tmp_3807_reg_225786.read().is_01() || !tmp_3806_reg_225781.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3807_reg_225786.read()) + sc_biguint<15>(tmp_3806_reg_225781.read()));
}

void a0_conv2d_1::thread_tmp_3809_fu_164227_p4() {
    tmp_3809_fu_164227_p4 = r_V_104_32_fu_184139_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_380_fu_141091_p2() {
    tmp_380_fu_141091_p2 = (!tmp_379_fu_141080_p2.read().is_01() || !tmp_378_fu_141076_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_379_fu_141080_p2.read()) + sc_biguint<15>(tmp_378_fu_141076_p2.read()));
}

void a0_conv2d_1::thread_tmp_3810_fu_164241_p2() {
    tmp_3810_fu_164241_p2 = (!tmp_3804_reg_225766.read().is_01() || !tmp_3805_reg_225771.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3804_reg_225766.read()) + sc_biguint<15>(tmp_3805_reg_225771.read()));
}

void a0_conv2d_1::thread_tmp_3811_fu_164245_p2() {
    tmp_3811_fu_164245_p2 = (!tmp_3808_fu_164223_p2.read().is_01() || !tmp_3809_fu_164227_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3808_fu_164223_p2.read()) + sc_biguint<15>(tmp_3809_fu_164227_p4.read()));
}

void a0_conv2d_1::thread_tmp_3812_fu_164256_p2() {
    tmp_3812_fu_164256_p2 = (!tmp_3811_fu_164245_p2.read().is_01() || !tmp_3810_fu_164241_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3811_fu_164245_p2.read()) + sc_biguint<15>(tmp_3810_fu_164241_p2.read()));
}

void a0_conv2d_1::thread_tmp_3813_fu_164262_p2() {
    tmp_3813_fu_164262_p2 = (!tmp_3803_fu_164212_p2.read().is_01() || !tmp_3802_fu_164207_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3803_fu_164212_p2.read()) + sc_biguint<15>(tmp_3802_fu_164207_p2.read()));
}

void a0_conv2d_1::thread_tmp_3814_fu_164274_p2() {
    tmp_3814_fu_164274_p2 = (!tmp_3796_fu_164161_p2.read().is_01() || !tmp_3797_fu_164167_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3796_fu_164161_p2.read()) + sc_biguint<15>(tmp_3797_fu_164167_p2.read()));
}

void a0_conv2d_1::thread_tmp_3815_fu_164280_p2() {
    tmp_3815_fu_164280_p2 = (!tmp_3812_fu_164256_p2.read().is_01() || !tmp_3813_fu_164262_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3812_fu_164256_p2.read()) + sc_biguint<15>(tmp_3813_fu_164262_p2.read()));
}

void a0_conv2d_1::thread_tmp_3817_fu_164292_p4() {
    tmp_3817_fu_164292_p4 = r_V_107_32_fu_184147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3818_fu_164306_p4() {
    tmp_3818_fu_164306_p4 = r_V_101_33_fu_184227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_381_fu_141097_p2() {
    tmp_381_fu_141097_p2 = (!tmp_371_fu_141042_p2.read().is_01() || !tmp_370_fu_141037_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_371_fu_141042_p2.read()) + sc_biguint<15>(tmp_370_fu_141037_p2.read()));
}

void a0_conv2d_1::thread_tmp_3820_fu_164320_p2() {
    tmp_3820_fu_164320_p2 = (!tmp_3816_reg_225796.read().is_01() || !tmp_3817_fu_164292_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3816_reg_225796.read()) + sc_biguint<15>(tmp_3817_fu_164292_p4.read()));
}

void a0_conv2d_1::thread_tmp_3821_fu_164325_p2() {
    tmp_3821_fu_164325_p2 = (!tmp_3818_fu_164306_p4.read().is_01() || !tmp_3819_reg_225801.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3818_fu_164306_p4.read()) + sc_biguint<15>(tmp_3819_reg_225801.read()));
}

void a0_conv2d_1::thread_tmp_3826_fu_164340_p2() {
    tmp_3826_fu_164340_p2 = (!tmp_3825_reg_225826.read().is_01() || !tmp_3824_reg_225821.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3825_reg_225826.read()) + sc_biguint<15>(tmp_3824_reg_225821.read()));
}

void a0_conv2d_1::thread_tmp_3827_fu_164344_p4() {
    tmp_3827_fu_164344_p4 = r_V_104_33_fu_184235_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3828_fu_164359_p2() {
    tmp_3828_fu_164359_p2 = (!tmp_3822_reg_225806.read().is_01() || !tmp_3823_reg_225811.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3822_reg_225806.read()) + sc_biguint<15>(tmp_3823_reg_225811.read()));
}

void a0_conv2d_1::thread_tmp_3829_fu_164363_p2() {
    tmp_3829_fu_164363_p2 = (!tmp_3826_fu_164340_p2.read().is_01() || !tmp_3827_fu_164344_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3826_fu_164340_p2.read()) + sc_biguint<15>(tmp_3827_fu_164344_p4.read()));
}

void a0_conv2d_1::thread_tmp_3830_fu_164374_p2() {
    tmp_3830_fu_164374_p2 = (!tmp_3829_fu_164363_p2.read().is_01() || !tmp_3828_fu_164359_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3829_fu_164363_p2.read()) + sc_biguint<15>(tmp_3828_fu_164359_p2.read()));
}

void a0_conv2d_1::thread_tmp_3831_fu_164380_p2() {
    tmp_3831_fu_164380_p2 = (!tmp_3821_fu_164325_p2.read().is_01() || !tmp_3820_fu_164320_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3821_fu_164325_p2.read()) + sc_biguint<15>(tmp_3820_fu_164320_p2.read()));
}

void a0_conv2d_1::thread_tmp_3833_fu_164392_p4() {
    tmp_3833_fu_164392_p4 = r_V_107_33_fu_184243_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3834_fu_164406_p4() {
    tmp_3834_fu_164406_p4 = r_V_101_34_fu_184323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3836_fu_164420_p2() {
    tmp_3836_fu_164420_p2 = (!tmp_3832_reg_225831.read().is_01() || !tmp_3833_fu_164392_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3832_reg_225831.read()) + sc_biguint<15>(tmp_3833_fu_164392_p4.read()));
}

void a0_conv2d_1::thread_tmp_3837_fu_164425_p2() {
    tmp_3837_fu_164425_p2 = (!tmp_3834_fu_164406_p4.read().is_01() || !tmp_3835_reg_225836.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3834_fu_164406_p4.read()) + sc_biguint<15>(tmp_3835_reg_225836.read()));
}

void a0_conv2d_1::thread_tmp_383_fu_141109_p4() {
    tmp_383_fu_141109_p4 = r_V_80_33_fu_184171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3842_fu_164440_p2() {
    tmp_3842_fu_164440_p2 = (!tmp_3841_reg_225861.read().is_01() || !tmp_3840_reg_225856.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3841_reg_225861.read()) + sc_biguint<15>(tmp_3840_reg_225856.read()));
}

void a0_conv2d_1::thread_tmp_3843_fu_164444_p4() {
    tmp_3843_fu_164444_p4 = r_V_104_34_fu_184331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3844_fu_164459_p2() {
    tmp_3844_fu_164459_p2 = (!tmp_3838_reg_225841.read().is_01() || !tmp_3839_reg_225846.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3838_reg_225841.read()) + sc_biguint<15>(tmp_3839_reg_225846.read()));
}

void a0_conv2d_1::thread_tmp_3845_fu_164463_p2() {
    tmp_3845_fu_164463_p2 = (!tmp_3842_fu_164440_p2.read().is_01() || !tmp_3843_fu_164444_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3842_fu_164440_p2.read()) + sc_biguint<15>(tmp_3843_fu_164444_p4.read()));
}

void a0_conv2d_1::thread_tmp_3846_fu_164474_p2() {
    tmp_3846_fu_164474_p2 = (!tmp_3845_fu_164463_p2.read().is_01() || !tmp_3844_fu_164459_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3845_fu_164463_p2.read()) + sc_biguint<15>(tmp_3844_fu_164459_p2.read()));
}

void a0_conv2d_1::thread_tmp_3847_fu_164480_p2() {
    tmp_3847_fu_164480_p2 = (!tmp_3837_fu_164425_p2.read().is_01() || !tmp_3836_fu_164420_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3837_fu_164425_p2.read()) + sc_biguint<15>(tmp_3836_fu_164420_p2.read()));
}

void a0_conv2d_1::thread_tmp_3848_fu_164492_p2() {
    tmp_3848_fu_164492_p2 = (!tmp_3830_fu_164374_p2.read().is_01() || !tmp_3831_fu_164380_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3830_fu_164374_p2.read()) + sc_biguint<15>(tmp_3831_fu_164380_p2.read()));
}

void a0_conv2d_1::thread_tmp_3849_fu_164498_p2() {
    tmp_3849_fu_164498_p2 = (!tmp_3846_fu_164474_p2.read().is_01() || !tmp_3847_fu_164480_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3846_fu_164474_p2.read()) + sc_biguint<15>(tmp_3847_fu_164480_p2.read()));
}

void a0_conv2d_1::thread_tmp_384_fu_141123_p4() {
    tmp_384_fu_141123_p4 = r_V_74_34_fu_184251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3850_fu_164504_p2() {
    tmp_3850_fu_164504_p2 = (!tmp_3849_fu_164498_p2.read().is_01() || !tmp_3848_fu_164492_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3849_fu_164498_p2.read()) + sc_biguint<15>(tmp_3848_fu_164492_p2.read()));
}

void a0_conv2d_1::thread_tmp_3851_fu_170712_p2() {
    tmp_3851_fu_170712_p2 = (!tmp_3815_reg_228161.read().is_01() || !tmp_3814_reg_228156.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3815_reg_228161.read()) + sc_biguint<15>(tmp_3814_reg_228156.read()));
}

void a0_conv2d_1::thread_tmp_3853_fu_164510_p4() {
    tmp_3853_fu_164510_p4 = r_V_107_34_fu_184339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3854_fu_164524_p4() {
    tmp_3854_fu_164524_p4 = r_V_101_35_fu_184419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3856_fu_164538_p2() {
    tmp_3856_fu_164538_p2 = (!tmp_3852_reg_225866.read().is_01() || !tmp_3853_fu_164510_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3852_reg_225866.read()) + sc_biguint<15>(tmp_3853_fu_164510_p4.read()));
}

void a0_conv2d_1::thread_tmp_3857_fu_164543_p2() {
    tmp_3857_fu_164543_p2 = (!tmp_3854_fu_164524_p4.read().is_01() || !tmp_3855_reg_225871.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3854_fu_164524_p4.read()) + sc_biguint<15>(tmp_3855_reg_225871.read()));
}

void a0_conv2d_1::thread_tmp_3862_fu_164558_p2() {
    tmp_3862_fu_164558_p2 = (!tmp_3861_reg_225896.read().is_01() || !tmp_3860_reg_225891.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3861_reg_225896.read()) + sc_biguint<15>(tmp_3860_reg_225891.read()));
}

void a0_conv2d_1::thread_tmp_3863_fu_164562_p4() {
    tmp_3863_fu_164562_p4 = r_V_104_35_fu_184427_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3864_fu_164577_p2() {
    tmp_3864_fu_164577_p2 = (!tmp_3858_reg_225876.read().is_01() || !tmp_3859_reg_225881.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3858_reg_225876.read()) + sc_biguint<15>(tmp_3859_reg_225881.read()));
}

void a0_conv2d_1::thread_tmp_3865_fu_164581_p2() {
    tmp_3865_fu_164581_p2 = (!tmp_3862_fu_164558_p2.read().is_01() || !tmp_3863_fu_164562_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3862_fu_164558_p2.read()) + sc_biguint<15>(tmp_3863_fu_164562_p4.read()));
}

void a0_conv2d_1::thread_tmp_3866_fu_164592_p2() {
    tmp_3866_fu_164592_p2 = (!tmp_3865_fu_164581_p2.read().is_01() || !tmp_3864_fu_164577_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3865_fu_164581_p2.read()) + sc_biguint<15>(tmp_3864_fu_164577_p2.read()));
}

void a0_conv2d_1::thread_tmp_3867_fu_164598_p2() {
    tmp_3867_fu_164598_p2 = (!tmp_3857_fu_164543_p2.read().is_01() || !tmp_3856_fu_164538_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3857_fu_164543_p2.read()) + sc_biguint<15>(tmp_3856_fu_164538_p2.read()));
}

void a0_conv2d_1::thread_tmp_3869_fu_164610_p4() {
    tmp_3869_fu_164610_p4 = r_V_107_35_fu_184435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_386_fu_141137_p2() {
    tmp_386_fu_141137_p2 = (!tmp_382_reg_221961.read().is_01() || !tmp_383_fu_141109_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_382_reg_221961.read()) + sc_biguint<15>(tmp_383_fu_141109_p4.read()));
}

void a0_conv2d_1::thread_tmp_3870_fu_164624_p4() {
    tmp_3870_fu_164624_p4 = r_V_101_36_fu_184515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3872_fu_164638_p2() {
    tmp_3872_fu_164638_p2 = (!tmp_3868_reg_225901.read().is_01() || !tmp_3869_fu_164610_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3868_reg_225901.read()) + sc_biguint<15>(tmp_3869_fu_164610_p4.read()));
}

void a0_conv2d_1::thread_tmp_3873_fu_164643_p2() {
    tmp_3873_fu_164643_p2 = (!tmp_3870_fu_164624_p4.read().is_01() || !tmp_3871_reg_225906.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3870_fu_164624_p4.read()) + sc_biguint<15>(tmp_3871_reg_225906.read()));
}

void a0_conv2d_1::thread_tmp_3878_fu_164654_p2() {
    tmp_3878_fu_164654_p2 = (!tmp_3877_reg_225931.read().is_01() || !tmp_3876_reg_225926.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3877_reg_225931.read()) + sc_biguint<15>(tmp_3876_reg_225926.read()));
}

void a0_conv2d_1::thread_tmp_3879_fu_164658_p4() {
    tmp_3879_fu_164658_p4 = r_V_104_36_fu_184523_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_387_fu_141142_p2() {
    tmp_387_fu_141142_p2 = (!tmp_384_fu_141123_p4.read().is_01() || !tmp_385_reg_221966.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_384_fu_141123_p4.read()) + sc_biguint<15>(tmp_385_reg_221966.read()));
}

void a0_conv2d_1::thread_tmp_3880_fu_164672_p2() {
    tmp_3880_fu_164672_p2 = (!tmp_3874_reg_225911.read().is_01() || !tmp_3875_reg_225916.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3874_reg_225911.read()) + sc_biguint<15>(tmp_3875_reg_225916.read()));
}

void a0_conv2d_1::thread_tmp_3881_fu_164676_p2() {
    tmp_3881_fu_164676_p2 = (!tmp_3878_fu_164654_p2.read().is_01() || !tmp_3879_fu_164658_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3878_fu_164654_p2.read()) + sc_biguint<15>(tmp_3879_fu_164658_p4.read()));
}

void a0_conv2d_1::thread_tmp_3882_fu_164687_p2() {
    tmp_3882_fu_164687_p2 = (!tmp_3881_fu_164676_p2.read().is_01() || !tmp_3880_fu_164672_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3881_fu_164676_p2.read()) + sc_biguint<15>(tmp_3880_fu_164672_p2.read()));
}

void a0_conv2d_1::thread_tmp_3883_fu_164693_p2() {
    tmp_3883_fu_164693_p2 = (!tmp_3873_fu_164643_p2.read().is_01() || !tmp_3872_fu_164638_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3873_fu_164643_p2.read()) + sc_biguint<15>(tmp_3872_fu_164638_p2.read()));
}

void a0_conv2d_1::thread_tmp_3884_fu_164705_p2() {
    tmp_3884_fu_164705_p2 = (!tmp_3866_fu_164592_p2.read().is_01() || !tmp_3867_fu_164598_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3866_fu_164592_p2.read()) + sc_biguint<15>(tmp_3867_fu_164598_p2.read()));
}

void a0_conv2d_1::thread_tmp_3885_fu_164711_p2() {
    tmp_3885_fu_164711_p2 = (!tmp_3882_fu_164687_p2.read().is_01() || !tmp_3883_fu_164693_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3882_fu_164687_p2.read()) + sc_biguint<15>(tmp_3883_fu_164693_p2.read()));
}

void a0_conv2d_1::thread_tmp_3887_fu_164723_p4() {
    tmp_3887_fu_164723_p4 = r_V_107_36_fu_184531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3888_fu_164737_p4() {
    tmp_3888_fu_164737_p4 = r_V_101_37_fu_184611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3890_fu_164751_p2() {
    tmp_3890_fu_164751_p2 = (!tmp_3886_reg_225941.read().is_01() || !tmp_3887_fu_164723_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3886_reg_225941.read()) + sc_biguint<15>(tmp_3887_fu_164723_p4.read()));
}

void a0_conv2d_1::thread_tmp_3891_fu_164756_p2() {
    tmp_3891_fu_164756_p2 = (!tmp_3888_fu_164737_p4.read().is_01() || !tmp_3889_reg_225946.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3888_fu_164737_p4.read()) + sc_biguint<15>(tmp_3889_reg_225946.read()));
}

void a0_conv2d_1::thread_tmp_3896_fu_164771_p2() {
    tmp_3896_fu_164771_p2 = (!tmp_3895_reg_225971.read().is_01() || !tmp_3894_reg_225966.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3895_reg_225971.read()) + sc_biguint<15>(tmp_3894_reg_225966.read()));
}

void a0_conv2d_1::thread_tmp_3897_fu_164775_p4() {
    tmp_3897_fu_164775_p4 = r_V_104_37_fu_184619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3898_fu_164790_p2() {
    tmp_3898_fu_164790_p2 = (!tmp_3892_reg_225951.read().is_01() || !tmp_3893_reg_225956.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3892_reg_225951.read()) + sc_biguint<15>(tmp_3893_reg_225956.read()));
}

void a0_conv2d_1::thread_tmp_3899_fu_164794_p2() {
    tmp_3899_fu_164794_p2 = (!tmp_3896_fu_164771_p2.read().is_01() || !tmp_3897_fu_164775_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3896_fu_164771_p2.read()) + sc_biguint<15>(tmp_3897_fu_164775_p4.read()));
}

void a0_conv2d_1::thread_tmp_38_fu_85686_p2() {
    tmp_38_fu_85686_p2 = (!ap_const_lv16_140.is_01() || !tmp_14_reg_199400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_140) + sc_biguint<16>(tmp_14_reg_199400.read()));
}

void a0_conv2d_1::thread_tmp_3900_fu_164805_p2() {
    tmp_3900_fu_164805_p2 = (!tmp_3899_fu_164794_p2.read().is_01() || !tmp_3898_fu_164790_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3899_fu_164794_p2.read()) + sc_biguint<15>(tmp_3898_fu_164790_p2.read()));
}

void a0_conv2d_1::thread_tmp_3901_fu_164811_p2() {
    tmp_3901_fu_164811_p2 = (!tmp_3891_fu_164756_p2.read().is_01() || !tmp_3890_fu_164751_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3891_fu_164756_p2.read()) + sc_biguint<15>(tmp_3890_fu_164751_p2.read()));
}

void a0_conv2d_1::thread_tmp_3903_fu_164823_p4() {
    tmp_3903_fu_164823_p4 = r_V_107_37_fu_184627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3904_fu_164837_p4() {
    tmp_3904_fu_164837_p4 = r_V_101_38_fu_184707_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3906_fu_164851_p2() {
    tmp_3906_fu_164851_p2 = (!tmp_3902_reg_225976.read().is_01() || !tmp_3903_fu_164823_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3902_reg_225976.read()) + sc_biguint<15>(tmp_3903_fu_164823_p4.read()));
}

void a0_conv2d_1::thread_tmp_3907_fu_164856_p2() {
    tmp_3907_fu_164856_p2 = (!tmp_3904_fu_164837_p4.read().is_01() || !tmp_3905_reg_225981.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3904_fu_164837_p4.read()) + sc_biguint<15>(tmp_3905_reg_225981.read()));
}

void a0_conv2d_1::thread_tmp_3912_fu_164867_p2() {
    tmp_3912_fu_164867_p2 = (!tmp_3911_reg_226006.read().is_01() || !tmp_3910_reg_226001.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3911_reg_226006.read()) + sc_biguint<15>(tmp_3910_reg_226001.read()));
}

void a0_conv2d_1::thread_tmp_3913_fu_164871_p4() {
    tmp_3913_fu_164871_p4 = r_V_104_38_fu_184715_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3914_fu_164885_p2() {
    tmp_3914_fu_164885_p2 = (!tmp_3908_reg_225986.read().is_01() || !tmp_3909_reg_225991.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3908_reg_225986.read()) + sc_biguint<15>(tmp_3909_reg_225991.read()));
}

void a0_conv2d_1::thread_tmp_3915_fu_164889_p2() {
    tmp_3915_fu_164889_p2 = (!tmp_3912_fu_164867_p2.read().is_01() || !tmp_3913_fu_164871_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3912_fu_164867_p2.read()) + sc_biguint<15>(tmp_3913_fu_164871_p4.read()));
}

void a0_conv2d_1::thread_tmp_3916_fu_164900_p2() {
    tmp_3916_fu_164900_p2 = (!tmp_3915_fu_164889_p2.read().is_01() || !tmp_3914_fu_164885_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3915_fu_164889_p2.read()) + sc_biguint<15>(tmp_3914_fu_164885_p2.read()));
}

void a0_conv2d_1::thread_tmp_3917_fu_164906_p2() {
    tmp_3917_fu_164906_p2 = (!tmp_3907_fu_164856_p2.read().is_01() || !tmp_3906_fu_164851_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3907_fu_164856_p2.read()) + sc_biguint<15>(tmp_3906_fu_164851_p2.read()));
}

void a0_conv2d_1::thread_tmp_3918_fu_164918_p2() {
    tmp_3918_fu_164918_p2 = (!tmp_3900_fu_164805_p2.read().is_01() || !tmp_3901_fu_164811_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3900_fu_164805_p2.read()) + sc_biguint<15>(tmp_3901_fu_164811_p2.read()));
}

void a0_conv2d_1::thread_tmp_3919_fu_164924_p2() {
    tmp_3919_fu_164924_p2 = (!tmp_3916_fu_164900_p2.read().is_01() || !tmp_3917_fu_164906_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3916_fu_164900_p2.read()) + sc_biguint<15>(tmp_3917_fu_164906_p2.read()));
}

void a0_conv2d_1::thread_tmp_3920_fu_164936_p2() {
    tmp_3920_fu_164936_p2 = (!tmp_3919_fu_164924_p2.read().is_01() || !tmp_3918_fu_164918_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3919_fu_164924_p2.read()) + sc_biguint<15>(tmp_3918_fu_164918_p2.read()));
}

void a0_conv2d_1::thread_tmp_3921_fu_170721_p2() {
    tmp_3921_fu_170721_p2 = (!tmp_3885_reg_228191.read().is_01() || !tmp_3884_reg_228186.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3885_reg_228191.read()) + sc_biguint<15>(tmp_3884_reg_228186.read()));
}

void a0_conv2d_1::thread_tmp_3922_fu_170729_p2() {
    tmp_3922_fu_170729_p2 = (!tmp_3850_reg_228181.read().is_01() || !tmp_3851_fu_170712_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3850_reg_228181.read()) + sc_biguint<15>(tmp_3851_fu_170712_p2.read()));
}

void a0_conv2d_1::thread_tmp_3923_fu_170734_p2() {
    tmp_3923_fu_170734_p2 = (!tmp_3920_reg_228206.read().is_01() || !tmp_3921_fu_170721_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3920_reg_228206.read()) + sc_biguint<15>(tmp_3921_fu_170721_p2.read()));
}

void a0_conv2d_1::thread_tmp_3925_fu_164942_p4() {
    tmp_3925_fu_164942_p4 = r_V_107_38_fu_184723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3926_fu_164956_p4() {
    tmp_3926_fu_164956_p4 = r_V_101_39_fu_184803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3928_fu_164970_p2() {
    tmp_3928_fu_164970_p2 = (!tmp_3924_reg_226016.read().is_01() || !tmp_3925_fu_164942_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3924_reg_226016.read()) + sc_biguint<15>(tmp_3925_fu_164942_p4.read()));
}

void a0_conv2d_1::thread_tmp_3929_fu_164975_p2() {
    tmp_3929_fu_164975_p2 = (!tmp_3926_fu_164956_p4.read().is_01() || !tmp_3927_reg_226021.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3926_fu_164956_p4.read()) + sc_biguint<15>(tmp_3927_reg_226021.read()));
}

void a0_conv2d_1::thread_tmp_392_fu_141157_p2() {
    tmp_392_fu_141157_p2 = (!tmp_391_reg_221991.read().is_01() || !tmp_390_reg_221986.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_391_reg_221991.read()) + sc_biguint<15>(tmp_390_reg_221986.read()));
}

void a0_conv2d_1::thread_tmp_3934_fu_164990_p2() {
    tmp_3934_fu_164990_p2 = (!tmp_3933_reg_226046.read().is_01() || !tmp_3932_reg_226041.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3933_reg_226046.read()) + sc_biguint<15>(tmp_3932_reg_226041.read()));
}

void a0_conv2d_1::thread_tmp_3935_fu_164994_p4() {
    tmp_3935_fu_164994_p4 = r_V_104_39_fu_184811_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3936_fu_165009_p2() {
    tmp_3936_fu_165009_p2 = (!tmp_3930_reg_226026.read().is_01() || !tmp_3931_reg_226031.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3930_reg_226026.read()) + sc_biguint<15>(tmp_3931_reg_226031.read()));
}

void a0_conv2d_1::thread_tmp_3937_fu_165013_p2() {
    tmp_3937_fu_165013_p2 = (!tmp_3934_fu_164990_p2.read().is_01() || !tmp_3935_fu_164994_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3934_fu_164990_p2.read()) + sc_biguint<15>(tmp_3935_fu_164994_p4.read()));
}

void a0_conv2d_1::thread_tmp_3938_fu_165024_p2() {
    tmp_3938_fu_165024_p2 = (!tmp_3937_fu_165013_p2.read().is_01() || !tmp_3936_fu_165009_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3937_fu_165013_p2.read()) + sc_biguint<15>(tmp_3936_fu_165009_p2.read()));
}

void a0_conv2d_1::thread_tmp_3939_fu_165030_p2() {
    tmp_3939_fu_165030_p2 = (!tmp_3929_fu_164975_p2.read().is_01() || !tmp_3928_fu_164970_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3929_fu_164975_p2.read()) + sc_biguint<15>(tmp_3928_fu_164970_p2.read()));
}

void a0_conv2d_1::thread_tmp_393_fu_141161_p4() {
    tmp_393_fu_141161_p4 = r_V_77_34_fu_184259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3941_fu_165042_p4() {
    tmp_3941_fu_165042_p4 = r_V_107_39_fu_184819_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3942_fu_165056_p4() {
    tmp_3942_fu_165056_p4 = r_V_101_40_fu_184899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3944_fu_165070_p2() {
    tmp_3944_fu_165070_p2 = (!tmp_3940_reg_226051.read().is_01() || !tmp_3941_fu_165042_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3940_reg_226051.read()) + sc_biguint<15>(tmp_3941_fu_165042_p4.read()));
}

void a0_conv2d_1::thread_tmp_3945_fu_165075_p2() {
    tmp_3945_fu_165075_p2 = (!tmp_3942_fu_165056_p4.read().is_01() || !tmp_3943_reg_226056.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3942_fu_165056_p4.read()) + sc_biguint<15>(tmp_3943_reg_226056.read()));
}

void a0_conv2d_1::thread_tmp_394_fu_141176_p2() {
    tmp_394_fu_141176_p2 = (!tmp_388_reg_221971.read().is_01() || !tmp_389_reg_221976.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_388_reg_221971.read()) + sc_biguint<15>(tmp_389_reg_221976.read()));
}

void a0_conv2d_1::thread_tmp_3950_fu_165086_p2() {
    tmp_3950_fu_165086_p2 = (!tmp_3949_reg_226081.read().is_01() || !tmp_3948_reg_226076.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3949_reg_226081.read()) + sc_biguint<15>(tmp_3948_reg_226076.read()));
}

void a0_conv2d_1::thread_tmp_3951_fu_165090_p4() {
    tmp_3951_fu_165090_p4 = r_V_104_40_fu_184907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3952_fu_165104_p2() {
    tmp_3952_fu_165104_p2 = (!tmp_3946_reg_226061.read().is_01() || !tmp_3947_reg_226066.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3946_reg_226061.read()) + sc_biguint<15>(tmp_3947_reg_226066.read()));
}

void a0_conv2d_1::thread_tmp_3953_fu_165108_p2() {
    tmp_3953_fu_165108_p2 = (!tmp_3950_fu_165086_p2.read().is_01() || !tmp_3951_fu_165090_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3950_fu_165086_p2.read()) + sc_biguint<15>(tmp_3951_fu_165090_p4.read()));
}

void a0_conv2d_1::thread_tmp_3954_fu_165119_p2() {
    tmp_3954_fu_165119_p2 = (!tmp_3953_fu_165108_p2.read().is_01() || !tmp_3952_fu_165104_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3953_fu_165108_p2.read()) + sc_biguint<15>(tmp_3952_fu_165104_p2.read()));
}

void a0_conv2d_1::thread_tmp_3955_fu_165125_p2() {
    tmp_3955_fu_165125_p2 = (!tmp_3945_fu_165075_p2.read().is_01() || !tmp_3944_fu_165070_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3945_fu_165075_p2.read()) + sc_biguint<15>(tmp_3944_fu_165070_p2.read()));
}

void a0_conv2d_1::thread_tmp_3956_fu_165137_p2() {
    tmp_3956_fu_165137_p2 = (!tmp_3938_fu_165024_p2.read().is_01() || !tmp_3939_fu_165030_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3938_fu_165024_p2.read()) + sc_biguint<15>(tmp_3939_fu_165030_p2.read()));
}

void a0_conv2d_1::thread_tmp_3957_fu_165143_p2() {
    tmp_3957_fu_165143_p2 = (!tmp_3954_fu_165119_p2.read().is_01() || !tmp_3955_fu_165125_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3954_fu_165119_p2.read()) + sc_biguint<15>(tmp_3955_fu_165125_p2.read()));
}

void a0_conv2d_1::thread_tmp_3959_fu_165155_p4() {
    tmp_3959_fu_165155_p4 = r_V_107_40_fu_184915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_395_fu_141180_p2() {
    tmp_395_fu_141180_p2 = (!tmp_392_fu_141157_p2.read().is_01() || !tmp_393_fu_141161_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_392_fu_141157_p2.read()) + sc_biguint<15>(tmp_393_fu_141161_p4.read()));
}

void a0_conv2d_1::thread_tmp_3960_fu_165169_p4() {
    tmp_3960_fu_165169_p4 = r_V_101_41_fu_184995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3962_fu_165183_p2() {
    tmp_3962_fu_165183_p2 = (!tmp_3958_reg_226091.read().is_01() || !tmp_3959_fu_165155_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3958_reg_226091.read()) + sc_biguint<15>(tmp_3959_fu_165155_p4.read()));
}

void a0_conv2d_1::thread_tmp_3963_fu_165188_p2() {
    tmp_3963_fu_165188_p2 = (!tmp_3960_fu_165169_p4.read().is_01() || !tmp_3961_reg_226096.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3960_fu_165169_p4.read()) + sc_biguint<15>(tmp_3961_reg_226096.read()));
}

void a0_conv2d_1::thread_tmp_3968_fu_165203_p2() {
    tmp_3968_fu_165203_p2 = (!tmp_3967_reg_226121.read().is_01() || !tmp_3966_reg_226116.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3967_reg_226121.read()) + sc_biguint<15>(tmp_3966_reg_226116.read()));
}

void a0_conv2d_1::thread_tmp_3969_fu_165207_p4() {
    tmp_3969_fu_165207_p4 = r_V_104_41_fu_185003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_396_fu_141191_p2() {
    tmp_396_fu_141191_p2 = (!tmp_395_fu_141180_p2.read().is_01() || !tmp_394_fu_141176_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_395_fu_141180_p2.read()) + sc_biguint<15>(tmp_394_fu_141176_p2.read()));
}

void a0_conv2d_1::thread_tmp_3970_fu_165222_p2() {
    tmp_3970_fu_165222_p2 = (!tmp_3964_reg_226101.read().is_01() || !tmp_3965_reg_226106.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3964_reg_226101.read()) + sc_biguint<15>(tmp_3965_reg_226106.read()));
}

void a0_conv2d_1::thread_tmp_3971_fu_165226_p2() {
    tmp_3971_fu_165226_p2 = (!tmp_3968_fu_165203_p2.read().is_01() || !tmp_3969_fu_165207_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3968_fu_165203_p2.read()) + sc_biguint<15>(tmp_3969_fu_165207_p4.read()));
}

void a0_conv2d_1::thread_tmp_3972_fu_165237_p2() {
    tmp_3972_fu_165237_p2 = (!tmp_3971_fu_165226_p2.read().is_01() || !tmp_3970_fu_165222_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3971_fu_165226_p2.read()) + sc_biguint<15>(tmp_3970_fu_165222_p2.read()));
}

void a0_conv2d_1::thread_tmp_3973_fu_165243_p2() {
    tmp_3973_fu_165243_p2 = (!tmp_3963_fu_165188_p2.read().is_01() || !tmp_3962_fu_165183_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3963_fu_165188_p2.read()) + sc_biguint<15>(tmp_3962_fu_165183_p2.read()));
}

void a0_conv2d_1::thread_tmp_3975_fu_165255_p4() {
    tmp_3975_fu_165255_p4 = r_V_107_41_fu_185011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3976_fu_165269_p4() {
    tmp_3976_fu_165269_p4 = r_V_101_42_fu_185091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3978_fu_165283_p2() {
    tmp_3978_fu_165283_p2 = (!tmp_3974_reg_226126.read().is_01() || !tmp_3975_fu_165255_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3974_reg_226126.read()) + sc_biguint<15>(tmp_3975_fu_165255_p4.read()));
}

void a0_conv2d_1::thread_tmp_3979_fu_165288_p2() {
    tmp_3979_fu_165288_p2 = (!tmp_3976_fu_165269_p4.read().is_01() || !tmp_3977_reg_226131.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3976_fu_165269_p4.read()) + sc_biguint<15>(tmp_3977_reg_226131.read()));
}

void a0_conv2d_1::thread_tmp_397_fu_141197_p2() {
    tmp_397_fu_141197_p2 = (!tmp_387_fu_141142_p2.read().is_01() || !tmp_386_fu_141137_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_387_fu_141142_p2.read()) + sc_biguint<15>(tmp_386_fu_141137_p2.read()));
}

void a0_conv2d_1::thread_tmp_3984_fu_165303_p2() {
    tmp_3984_fu_165303_p2 = (!tmp_3983_reg_226156.read().is_01() || !tmp_3982_reg_226151.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3983_reg_226156.read()) + sc_biguint<15>(tmp_3982_reg_226151.read()));
}

void a0_conv2d_1::thread_tmp_3985_fu_165307_p4() {
    tmp_3985_fu_165307_p4 = r_V_104_42_fu_185099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3986_fu_165322_p2() {
    tmp_3986_fu_165322_p2 = (!tmp_3980_reg_226136.read().is_01() || !tmp_3981_reg_226141.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3980_reg_226136.read()) + sc_biguint<15>(tmp_3981_reg_226141.read()));
}

void a0_conv2d_1::thread_tmp_3987_fu_165326_p2() {
    tmp_3987_fu_165326_p2 = (!tmp_3984_fu_165303_p2.read().is_01() || !tmp_3985_fu_165307_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3984_fu_165303_p2.read()) + sc_biguint<15>(tmp_3985_fu_165307_p4.read()));
}

void a0_conv2d_1::thread_tmp_3988_fu_165337_p2() {
    tmp_3988_fu_165337_p2 = (!tmp_3987_fu_165326_p2.read().is_01() || !tmp_3986_fu_165322_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3987_fu_165326_p2.read()) + sc_biguint<15>(tmp_3986_fu_165322_p2.read()));
}

void a0_conv2d_1::thread_tmp_3989_fu_165343_p2() {
    tmp_3989_fu_165343_p2 = (!tmp_3979_fu_165288_p2.read().is_01() || !tmp_3978_fu_165283_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3979_fu_165288_p2.read()) + sc_biguint<15>(tmp_3978_fu_165283_p2.read()));
}

void a0_conv2d_1::thread_tmp_398_fu_141209_p2() {
    tmp_398_fu_141209_p2 = (!tmp_380_fu_141091_p2.read().is_01() || !tmp_381_fu_141097_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_380_fu_141091_p2.read()) + sc_biguint<15>(tmp_381_fu_141097_p2.read()));
}

void a0_conv2d_1::thread_tmp_3990_fu_165355_p2() {
    tmp_3990_fu_165355_p2 = (!tmp_3972_fu_165237_p2.read().is_01() || !tmp_3973_fu_165243_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3972_fu_165237_p2.read()) + sc_biguint<15>(tmp_3973_fu_165243_p2.read()));
}

void a0_conv2d_1::thread_tmp_3991_fu_165361_p2() {
    tmp_3991_fu_165361_p2 = (!tmp_3988_fu_165337_p2.read().is_01() || !tmp_3989_fu_165343_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3988_fu_165337_p2.read()) + sc_biguint<15>(tmp_3989_fu_165343_p2.read()));
}

void a0_conv2d_1::thread_tmp_3992_fu_165367_p2() {
    tmp_3992_fu_165367_p2 = (!tmp_3991_fu_165361_p2.read().is_01() || !tmp_3990_fu_165355_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3991_fu_165361_p2.read()) + sc_biguint<15>(tmp_3990_fu_165355_p2.read()));
}

void a0_conv2d_1::thread_tmp_3993_fu_165373_p2() {
    tmp_3993_fu_165373_p2 = (!tmp_3957_fu_165143_p2.read().is_01() || !tmp_3956_fu_165137_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3957_fu_165143_p2.read()) + sc_biguint<15>(tmp_3956_fu_165137_p2.read()));
}

void a0_conv2d_1::thread_tmp_3995_fu_165379_p4() {
    tmp_3995_fu_165379_p4 = r_V_107_42_fu_185107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3996_fu_165393_p4() {
    tmp_3996_fu_165393_p4 = r_V_101_43_fu_185187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_3998_fu_165407_p2() {
    tmp_3998_fu_165407_p2 = (!tmp_3994_reg_226161.read().is_01() || !tmp_3995_fu_165379_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3994_reg_226161.read()) + sc_biguint<15>(tmp_3995_fu_165379_p4.read()));
}

void a0_conv2d_1::thread_tmp_3999_fu_165412_p2() {
    tmp_3999_fu_165412_p2 = (!tmp_3996_fu_165393_p4.read().is_01() || !tmp_3997_reg_226166.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3996_fu_165393_p4.read()) + sc_biguint<15>(tmp_3997_reg_226166.read()));
}

void a0_conv2d_1::thread_tmp_399_fu_141215_p2() {
    tmp_399_fu_141215_p2 = (!tmp_396_fu_141191_p2.read().is_01() || !tmp_397_fu_141197_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_396_fu_141191_p2.read()) + sc_biguint<15>(tmp_397_fu_141197_p2.read()));
}

void a0_conv2d_1::thread_tmp_39_fu_171599_p2() {
    tmp_39_fu_171599_p2 = (!fresult_V_fu_171122_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(fresult_V_fu_171122_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void a0_conv2d_1::thread_tmp_4004_fu_165427_p2() {
    tmp_4004_fu_165427_p2 = (!tmp_4003_reg_226191.read().is_01() || !tmp_4002_reg_226186.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4003_reg_226191.read()) + sc_biguint<15>(tmp_4002_reg_226186.read()));
}

void a0_conv2d_1::thread_tmp_4005_fu_165431_p4() {
    tmp_4005_fu_165431_p4 = r_V_104_43_fu_185195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4006_fu_165446_p2() {
    tmp_4006_fu_165446_p2 = (!tmp_4000_reg_226171.read().is_01() || !tmp_4001_reg_226176.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4000_reg_226171.read()) + sc_biguint<15>(tmp_4001_reg_226176.read()));
}

void a0_conv2d_1::thread_tmp_4007_fu_165450_p2() {
    tmp_4007_fu_165450_p2 = (!tmp_4004_fu_165427_p2.read().is_01() || !tmp_4005_fu_165431_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4004_fu_165427_p2.read()) + sc_biguint<15>(tmp_4005_fu_165431_p4.read()));
}

void a0_conv2d_1::thread_tmp_4008_fu_165461_p2() {
    tmp_4008_fu_165461_p2 = (!tmp_4007_fu_165450_p2.read().is_01() || !tmp_4006_fu_165446_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4007_fu_165450_p2.read()) + sc_biguint<15>(tmp_4006_fu_165446_p2.read()));
}

void a0_conv2d_1::thread_tmp_4009_fu_165467_p2() {
    tmp_4009_fu_165467_p2 = (!tmp_3999_fu_165412_p2.read().is_01() || !tmp_3998_fu_165407_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3999_fu_165412_p2.read()) + sc_biguint<15>(tmp_3998_fu_165407_p2.read()));
}

void a0_conv2d_1::thread_tmp_400_fu_141221_p2() {
    tmp_400_fu_141221_p2 = (!tmp_399_fu_141215_p2.read().is_01() || !tmp_398_fu_141209_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_399_fu_141215_p2.read()) + sc_biguint<15>(tmp_398_fu_141209_p2.read()));
}

void a0_conv2d_1::thread_tmp_4011_fu_165479_p4() {
    tmp_4011_fu_165479_p4 = r_V_107_43_fu_185203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4012_fu_165493_p4() {
    tmp_4012_fu_165493_p4 = r_V_101_44_fu_185283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4014_fu_165507_p2() {
    tmp_4014_fu_165507_p2 = (!tmp_4010_reg_226196.read().is_01() || !tmp_4011_fu_165479_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4010_reg_226196.read()) + sc_biguint<15>(tmp_4011_fu_165479_p4.read()));
}

void a0_conv2d_1::thread_tmp_4015_fu_165512_p2() {
    tmp_4015_fu_165512_p2 = (!tmp_4012_fu_165493_p4.read().is_01() || !tmp_4013_reg_226201.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4012_fu_165493_p4.read()) + sc_biguint<15>(tmp_4013_reg_226201.read()));
}

void a0_conv2d_1::thread_tmp_401_fu_169668_p2() {
    tmp_401_fu_169668_p2 = (!tmp_365_reg_227066.read().is_01() || !tmp_364_reg_227061.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_365_reg_227066.read()) + sc_biguint<15>(tmp_364_reg_227061.read()));
}

void a0_conv2d_1::thread_tmp_4020_fu_165523_p2() {
    tmp_4020_fu_165523_p2 = (!tmp_4019_reg_226226.read().is_01() || !tmp_4018_reg_226221.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4019_reg_226226.read()) + sc_biguint<15>(tmp_4018_reg_226221.read()));
}

void a0_conv2d_1::thread_tmp_4021_fu_165527_p4() {
    tmp_4021_fu_165527_p4 = r_V_104_44_fu_185291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4022_fu_165541_p2() {
    tmp_4022_fu_165541_p2 = (!tmp_4016_reg_226206.read().is_01() || !tmp_4017_reg_226211.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4016_reg_226206.read()) + sc_biguint<15>(tmp_4017_reg_226211.read()));
}

void a0_conv2d_1::thread_tmp_4023_fu_165545_p2() {
    tmp_4023_fu_165545_p2 = (!tmp_4020_fu_165523_p2.read().is_01() || !tmp_4021_fu_165527_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4020_fu_165523_p2.read()) + sc_biguint<15>(tmp_4021_fu_165527_p4.read()));
}

void a0_conv2d_1::thread_tmp_4024_fu_165556_p2() {
    tmp_4024_fu_165556_p2 = (!tmp_4023_fu_165545_p2.read().is_01() || !tmp_4022_fu_165541_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4023_fu_165545_p2.read()) + sc_biguint<15>(tmp_4022_fu_165541_p2.read()));
}

void a0_conv2d_1::thread_tmp_4025_fu_165562_p2() {
    tmp_4025_fu_165562_p2 = (!tmp_4015_fu_165512_p2.read().is_01() || !tmp_4014_fu_165507_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4015_fu_165512_p2.read()) + sc_biguint<15>(tmp_4014_fu_165507_p2.read()));
}

void a0_conv2d_1::thread_tmp_4026_fu_165574_p2() {
    tmp_4026_fu_165574_p2 = (!tmp_4008_fu_165461_p2.read().is_01() || !tmp_4009_fu_165467_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4008_fu_165461_p2.read()) + sc_biguint<15>(tmp_4009_fu_165467_p2.read()));
}

void a0_conv2d_1::thread_tmp_4027_fu_165580_p2() {
    tmp_4027_fu_165580_p2 = (!tmp_4024_fu_165556_p2.read().is_01() || !tmp_4025_fu_165562_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4024_fu_165556_p2.read()) + sc_biguint<15>(tmp_4025_fu_165562_p2.read()));
}

void a0_conv2d_1::thread_tmp_4029_fu_165592_p4() {
    tmp_4029_fu_165592_p4 = r_V_107_44_fu_185299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4030_fu_165606_p4() {
    tmp_4030_fu_165606_p4 = r_V_101_45_fu_185379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4032_fu_165620_p2() {
    tmp_4032_fu_165620_p2 = (!tmp_4028_reg_226236.read().is_01() || !tmp_4029_fu_165592_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4028_reg_226236.read()) + sc_biguint<15>(tmp_4029_fu_165592_p4.read()));
}

void a0_conv2d_1::thread_tmp_4033_fu_165625_p2() {
    tmp_4033_fu_165625_p2 = (!tmp_4030_fu_165606_p4.read().is_01() || !tmp_4031_reg_226241.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4030_fu_165606_p4.read()) + sc_biguint<15>(tmp_4031_reg_226241.read()));
}

void a0_conv2d_1::thread_tmp_4038_fu_165640_p2() {
    tmp_4038_fu_165640_p2 = (!tmp_4037_reg_226266.read().is_01() || !tmp_4036_reg_226261.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4037_reg_226266.read()) + sc_biguint<15>(tmp_4036_reg_226261.read()));
}

void a0_conv2d_1::thread_tmp_4039_fu_165644_p4() {
    tmp_4039_fu_165644_p4 = r_V_104_45_fu_185387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_403_fu_141227_p4() {
    tmp_403_fu_141227_p4 = r_V_80_34_fu_184267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4040_fu_165659_p2() {
    tmp_4040_fu_165659_p2 = (!tmp_4034_reg_226246.read().is_01() || !tmp_4035_reg_226251.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4034_reg_226246.read()) + sc_biguint<15>(tmp_4035_reg_226251.read()));
}

void a0_conv2d_1::thread_tmp_4041_fu_165663_p2() {
    tmp_4041_fu_165663_p2 = (!tmp_4038_fu_165640_p2.read().is_01() || !tmp_4039_fu_165644_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4038_fu_165640_p2.read()) + sc_biguint<15>(tmp_4039_fu_165644_p4.read()));
}

void a0_conv2d_1::thread_tmp_4042_fu_165674_p2() {
    tmp_4042_fu_165674_p2 = (!tmp_4041_fu_165663_p2.read().is_01() || !tmp_4040_fu_165659_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4041_fu_165663_p2.read()) + sc_biguint<15>(tmp_4040_fu_165659_p2.read()));
}

void a0_conv2d_1::thread_tmp_4043_fu_165680_p2() {
    tmp_4043_fu_165680_p2 = (!tmp_4033_fu_165625_p2.read().is_01() || !tmp_4032_fu_165620_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4033_fu_165625_p2.read()) + sc_biguint<15>(tmp_4032_fu_165620_p2.read()));
}

void a0_conv2d_1::thread_tmp_4045_fu_165692_p4() {
    tmp_4045_fu_165692_p4 = r_V_107_45_fu_185395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4046_fu_165706_p4() {
    tmp_4046_fu_165706_p4 = r_V_101_46_fu_185475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4048_fu_165720_p2() {
    tmp_4048_fu_165720_p2 = (!tmp_4044_reg_226271.read().is_01() || !tmp_4045_fu_165692_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4044_reg_226271.read()) + sc_biguint<15>(tmp_4045_fu_165692_p4.read()));
}

void a0_conv2d_1::thread_tmp_4049_fu_165725_p2() {
    tmp_4049_fu_165725_p2 = (!tmp_4046_fu_165706_p4.read().is_01() || !tmp_4047_reg_226276.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4046_fu_165706_p4.read()) + sc_biguint<15>(tmp_4047_reg_226276.read()));
}

void a0_conv2d_1::thread_tmp_404_fu_141241_p4() {
    tmp_404_fu_141241_p4 = r_V_74_35_fu_184347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4054_fu_165736_p2() {
    tmp_4054_fu_165736_p2 = (!tmp_4053_reg_226301.read().is_01() || !tmp_4052_reg_226296.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4053_reg_226301.read()) + sc_biguint<15>(tmp_4052_reg_226296.read()));
}

void a0_conv2d_1::thread_tmp_4055_fu_165740_p4() {
    tmp_4055_fu_165740_p4 = r_V_104_46_fu_185483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4056_fu_165754_p2() {
    tmp_4056_fu_165754_p2 = (!tmp_4050_reg_226281.read().is_01() || !tmp_4051_reg_226286.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4050_reg_226281.read()) + sc_biguint<15>(tmp_4051_reg_226286.read()));
}

void a0_conv2d_1::thread_tmp_4057_fu_165758_p2() {
    tmp_4057_fu_165758_p2 = (!tmp_4054_fu_165736_p2.read().is_01() || !tmp_4055_fu_165740_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4054_fu_165736_p2.read()) + sc_biguint<15>(tmp_4055_fu_165740_p4.read()));
}

void a0_conv2d_1::thread_tmp_4058_fu_165769_p2() {
    tmp_4058_fu_165769_p2 = (!tmp_4057_fu_165758_p2.read().is_01() || !tmp_4056_fu_165754_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4057_fu_165758_p2.read()) + sc_biguint<15>(tmp_4056_fu_165754_p2.read()));
}

void a0_conv2d_1::thread_tmp_4059_fu_165775_p2() {
    tmp_4059_fu_165775_p2 = (!tmp_4049_fu_165725_p2.read().is_01() || !tmp_4048_fu_165720_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4049_fu_165725_p2.read()) + sc_biguint<15>(tmp_4048_fu_165720_p2.read()));
}

void a0_conv2d_1::thread_tmp_4060_fu_165787_p2() {
    tmp_4060_fu_165787_p2 = (!tmp_4042_fu_165674_p2.read().is_01() || !tmp_4043_fu_165680_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4042_fu_165674_p2.read()) + sc_biguint<15>(tmp_4043_fu_165680_p2.read()));
}

void a0_conv2d_1::thread_tmp_4061_fu_165793_p2() {
    tmp_4061_fu_165793_p2 = (!tmp_4058_fu_165769_p2.read().is_01() || !tmp_4059_fu_165775_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4058_fu_165769_p2.read()) + sc_biguint<15>(tmp_4059_fu_165775_p2.read()));
}

void a0_conv2d_1::thread_tmp_4062_fu_165805_p2() {
    tmp_4062_fu_165805_p2 = (!tmp_4061_fu_165793_p2.read().is_01() || !tmp_4060_fu_165787_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4061_fu_165793_p2.read()) + sc_biguint<15>(tmp_4060_fu_165787_p2.read()));
}

void a0_conv2d_1::thread_tmp_4063_fu_170754_p2() {
    tmp_4063_fu_170754_p2 = (!tmp_4027_reg_228241.read().is_01() || !tmp_4026_reg_228236.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4027_reg_228241.read()) + sc_biguint<15>(tmp_4026_reg_228236.read()));
}

void a0_conv2d_1::thread_tmp_4064_fu_170762_p2() {
    tmp_4064_fu_170762_p2 = (!tmp_3992_reg_228226.read().is_01() || !tmp_3993_reg_228231.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3992_reg_228226.read()) + sc_biguint<15>(tmp_3993_reg_228231.read()));
}

void a0_conv2d_1::thread_tmp_4065_fu_170766_p2() {
    tmp_4065_fu_170766_p2 = (!tmp_4062_reg_228256.read().is_01() || !tmp_4063_fu_170754_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4062_reg_228256.read()) + sc_biguint<15>(tmp_4063_fu_170754_p2.read()));
}

void a0_conv2d_1::thread_tmp_4066_fu_170777_p2() {
    tmp_4066_fu_170777_p2 = (!tmp_4065_fu_170766_p2.read().is_01() || !tmp_4064_fu_170762_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4065_fu_170766_p2.read()) + sc_biguint<15>(tmp_4064_fu_170762_p2.read()));
}

void a0_conv2d_1::thread_tmp_4067_fu_170783_p2() {
    tmp_4067_fu_170783_p2 = (!tmp_3923_fu_170734_p2.read().is_01() || !tmp_3922_fu_170729_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3923_fu_170734_p2.read()) + sc_biguint<15>(tmp_3922_fu_170729_p2.read()));
}

void a0_conv2d_1::thread_tmp_4068_fu_170795_p2() {
    tmp_4068_fu_170795_p2 = (!tmp_3780_fu_170690_p2.read().is_01() || !tmp_3781_fu_170696_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_3780_fu_170690_p2.read()) + sc_biguint<15>(tmp_3781_fu_170696_p2.read()));
}

void a0_conv2d_1::thread_tmp_4069_fu_170801_p2() {
    tmp_4069_fu_170801_p2 = (!tmp_4066_fu_170777_p2.read().is_01() || !tmp_4067_fu_170783_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4066_fu_170777_p2.read()) + sc_biguint<15>(tmp_4067_fu_170783_p2.read()));
}

void a0_conv2d_1::thread_tmp_406_fu_141255_p2() {
    tmp_406_fu_141255_p2 = (!tmp_402_reg_221996.read().is_01() || !tmp_403_fu_141227_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_402_reg_221996.read()) + sc_biguint<15>(tmp_403_fu_141227_p4.read()));
}

void a0_conv2d_1::thread_tmp_4073_fu_165811_p4() {
    tmp_4073_fu_165811_p4 = r_V_29_fu_180963_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_4074_fu_165825_p2() {
    tmp_4074_fu_165825_p2 = (!tmp_4070_reg_226311.read().is_01() || !tmp_4071_reg_226316.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4070_reg_226311.read()) + sc_biguint<15>(tmp_4071_reg_226316.read()));
}

void a0_conv2d_1::thread_tmp_4075_fu_165829_p2() {
    tmp_4075_fu_165829_p2 = (!tmp_4072_reg_226326.read().is_01() || !tmp_4073_fu_165811_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_4072_reg_226326.read()) + sc_biguint<15>(tmp_4073_fu_165811_p4.read()));
}

void a0_conv2d_1::thread_tmp_4076_fu_165839_p4() {
    tmp_4076_fu_165839_p4 = r_V_32_fu_180971_p2.read().range(28, 14);
}

}

