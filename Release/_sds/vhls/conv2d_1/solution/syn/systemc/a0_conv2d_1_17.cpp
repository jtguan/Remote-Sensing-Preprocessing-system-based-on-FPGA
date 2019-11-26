#include "a0_conv2d_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void a0_conv2d_1::thread_tmp_114_fu_138606_p2() {
    tmp_114_fu_138606_p2 = (!tmp_113_fu_138594_p2.read().is_01() || !tmp_112_fu_138588_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_113_fu_138594_p2.read()) + sc_biguint<15>(tmp_112_fu_138588_p2.read()));
}

void a0_conv2d_1::thread_tmp_1150_fu_145309_p2() {
    tmp_1150_fu_145309_p2 = (!tmp_1132_fu_145208_p2.read().is_01() || !tmp_1133_fu_145213_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1132_fu_145208_p2.read()) + sc_biguint<15>(tmp_1133_fu_145213_p2.read()));
}

void a0_conv2d_1::thread_tmp_1151_fu_145315_p2() {
    tmp_1151_fu_145315_p2 = (!tmp_1148_fu_145293_p2.read().is_01() || !tmp_1149_fu_145298_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1148_fu_145293_p2.read()) + sc_biguint<15>(tmp_1149_fu_145298_p2.read()));
}

void a0_conv2d_1::thread_tmp_1152_fu_145327_p4() {
    tmp_1152_fu_145327_p4 = r_V_80_28_fu_183691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1153_fu_145336_p4() {
    tmp_1153_fu_145336_p4 = r_V_74_29_fu_183771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1154_fu_108468_p4() {
    tmp_1154_fu_108468_p4 = r_V_73_29_fu_177443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1155_fu_108477_p4() {
    tmp_1155_fu_108477_p4 = r_V_76_29_fu_177459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1156_fu_145355_p2() {
    tmp_1156_fu_145355_p2 = (!tmp_1152_fu_145327_p4.read().is_01() || !tmp_1153_fu_145336_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1152_fu_145327_p4.read()) + sc_biguint<15>(tmp_1153_fu_145336_p4.read()));
}

void a0_conv2d_1::thread_tmp_1157_fu_108486_p2() {
    tmp_1157_fu_108486_p2 = (!tmp_1154_fu_108468_p4.read().is_01() || !tmp_1155_fu_108477_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1154_fu_108468_p4.read()) + sc_biguint<15>(tmp_1155_fu_108477_p4.read()));
}

void a0_conv2d_1::thread_tmp_1159_fu_145367_p4() {
    tmp_1159_fu_145367_p4 = r_V_77_29_fu_183779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_115_fu_138612_p2() {
    tmp_115_fu_138612_p2 = (!tmp_79_fu_138234_p2.read().is_01() || !tmp_78_fu_138228_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_79_fu_138234_p2.read()) + sc_biguint<15>(tmp_78_fu_138228_p2.read()));
}

void a0_conv2d_1::thread_tmp_1160_fu_108501_p4() {
    tmp_1160_fu_108501_p4 = r_V_72_30_fu_177627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1161_fu_108510_p4() {
    tmp_1161_fu_108510_p4 = r_V_78_29_fu_177467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1162_fu_108525_p2() {
    tmp_1162_fu_108525_p2 = (!tmp_1161_fu_108510_p4.read().is_01() || !tmp_1160_fu_108501_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1161_fu_108510_p4.read()) + sc_biguint<15>(tmp_1160_fu_108501_p4.read()));
}

void a0_conv2d_1::thread_tmp_1163_fu_108531_p4() {
    tmp_1163_fu_108531_p4 = r_V_79_29_fu_177475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1164_fu_145381_p2() {
    tmp_1164_fu_145381_p2 = (!tmp_1158_reg_223061.read().is_01() || !tmp_1159_fu_145367_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1158_reg_223061.read()) + sc_biguint<15>(tmp_1159_fu_145367_p4.read()));
}

void a0_conv2d_1::thread_tmp_1165_fu_108546_p2() {
    tmp_1165_fu_108546_p2 = (!tmp_1162_fu_108525_p2.read().is_01() || !tmp_1163_fu_108531_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1162_fu_108525_p2.read()) + sc_biguint<15>(tmp_1163_fu_108531_p4.read()));
}

void a0_conv2d_1::thread_tmp_1166_fu_145391_p2() {
    tmp_1166_fu_145391_p2 = (!tmp_1165_reg_223071.read().is_01() || !tmp_1164_fu_145381_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1165_reg_223071.read()) + sc_biguint<15>(tmp_1164_fu_145381_p2.read()));
}

void a0_conv2d_1::thread_tmp_1167_fu_145396_p2() {
    tmp_1167_fu_145396_p2 = (!tmp_1157_reg_223056.read().is_01() || !tmp_1156_fu_145355_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1157_reg_223056.read()) + sc_biguint<15>(tmp_1156_fu_145355_p2.read()));
}

void a0_conv2d_1::thread_tmp_1168_fu_145407_p4() {
    tmp_1168_fu_145407_p4 = r_V_80_29_fu_183787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1169_fu_145416_p4() {
    tmp_1169_fu_145416_p4 = r_V_74_30_fu_183867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_116_fu_138624_p4() {
    tmp_116_fu_138624_p4 = r_V_72_55_fu_187803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1170_fu_108552_p4() {
    tmp_1170_fu_108552_p4 = r_V_73_30_fu_177635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1171_fu_108561_p4() {
    tmp_1171_fu_108561_p4 = r_V_76_30_fu_177651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1172_fu_145435_p2() {
    tmp_1172_fu_145435_p2 = (!tmp_1168_fu_145407_p4.read().is_01() || !tmp_1169_fu_145416_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1168_fu_145407_p4.read()) + sc_biguint<15>(tmp_1169_fu_145416_p4.read()));
}

void a0_conv2d_1::thread_tmp_1173_fu_108570_p2() {
    tmp_1173_fu_108570_p2 = (!tmp_1170_fu_108552_p4.read().is_01() || !tmp_1171_fu_108561_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1170_fu_108552_p4.read()) + sc_biguint<15>(tmp_1171_fu_108561_p4.read()));
}

void a0_conv2d_1::thread_tmp_1175_fu_145447_p4() {
    tmp_1175_fu_145447_p4 = r_V_77_30_fu_183875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1176_fu_145461_p4() {
    tmp_1176_fu_145461_p4 = r_V_80_62_fu_189883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1178_fu_145475_p2() {
    tmp_1178_fu_145475_p2 = (!tmp_1177_reg_223086.read().is_01() || !tmp_1176_fu_145461_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1177_reg_223086.read()) + sc_biguint<15>(tmp_1176_fu_145461_p4.read()));
}

void a0_conv2d_1::thread_tmp_117_fu_138633_p4() {
    tmp_117_fu_138633_p4 = r_V_80_54_fu_187579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1180_fu_145485_p2() {
    tmp_1180_fu_145485_p2 = (!tmp_1174_reg_223081.read().is_01() || !tmp_1175_fu_145447_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1174_reg_223081.read()) + sc_biguint<15>(tmp_1175_fu_145447_p4.read()));
}

void a0_conv2d_1::thread_tmp_1181_fu_145490_p2() {
    tmp_1181_fu_145490_p2 = (!tmp_1178_fu_145475_p2.read().is_01() || !tmp_1179_reg_223091.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1178_fu_145475_p2.read()) + sc_biguint<15>(tmp_1179_reg_223091.read()));
}

void a0_conv2d_1::thread_tmp_1182_fu_145501_p2() {
    tmp_1182_fu_145501_p2 = (!tmp_1181_fu_145490_p2.read().is_01() || !tmp_1180_fu_145485_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1181_fu_145490_p2.read()) + sc_biguint<15>(tmp_1180_fu_145485_p2.read()));
}

void a0_conv2d_1::thread_tmp_1183_fu_145507_p2() {
    tmp_1183_fu_145507_p2 = (!tmp_1173_reg_223076.read().is_01() || !tmp_1172_fu_145435_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1173_reg_223076.read()) + sc_biguint<15>(tmp_1172_fu_145435_p2.read()));
}

void a0_conv2d_1::thread_tmp_1184_fu_145518_p2() {
    tmp_1184_fu_145518_p2 = (!tmp_1166_fu_145391_p2.read().is_01() || !tmp_1167_fu_145396_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1166_fu_145391_p2.read()) + sc_biguint<15>(tmp_1167_fu_145396_p2.read()));
}

void a0_conv2d_1::thread_tmp_1185_fu_145524_p2() {
    tmp_1185_fu_145524_p2 = (!tmp_1182_fu_145501_p2.read().is_01() || !tmp_1183_fu_145507_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1182_fu_145501_p2.read()) + sc_biguint<15>(tmp_1183_fu_145507_p2.read()));
}

void a0_conv2d_1::thread_tmp_1186_fu_145530_p2() {
    tmp_1186_fu_145530_p2 = (!tmp_1185_fu_145524_p2.read().is_01() || !tmp_1184_fu_145518_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1185_fu_145524_p2.read()) + sc_biguint<15>(tmp_1184_fu_145518_p2.read()));
}

void a0_conv2d_1::thread_tmp_1187_fu_169858_p2() {
    tmp_1187_fu_169858_p2 = (!tmp_1151_reg_227306.read().is_01() || !tmp_1150_reg_227301.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1151_reg_227306.read()) + sc_biguint<15>(tmp_1150_reg_227301.read()));
}

void a0_conv2d_1::thread_tmp_1188_fu_169867_p2() {
    tmp_1188_fu_169867_p2 = (!tmp_1116_reg_227291.read().is_01() || !tmp_1117_reg_227296.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1116_reg_227291.read()) + sc_biguint<15>(tmp_1117_reg_227296.read()));
}

void a0_conv2d_1::thread_tmp_1189_fu_169871_p2() {
    tmp_1189_fu_169871_p2 = (!tmp_1186_reg_227326.read().is_01() || !tmp_1187_fu_169858_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1186_reg_227326.read()) + sc_biguint<15>(tmp_1187_fu_169858_p2.read()));
}

void a0_conv2d_1::thread_tmp_118_fu_138648_p4() {
    tmp_118_fu_138648_p4 = r_V_74_55_fu_187819_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1190_fu_169882_p2() {
    tmp_1190_fu_169882_p2 = (!tmp_1189_fu_169871_p2.read().is_01() || !tmp_1188_fu_169867_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1189_fu_169871_p2.read()) + sc_biguint<15>(tmp_1188_fu_169867_p2.read()));
}

void a0_conv2d_1::thread_tmp_1191_fu_169888_p2() {
    tmp_1191_fu_169888_p2 = (!tmp_1047_reg_227271.read().is_01() || !tmp_1046_reg_227266.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1047_reg_227271.read()) + sc_biguint<15>(tmp_1046_reg_227266.read()));
}

void a0_conv2d_1::thread_tmp_1192_fu_169898_p2() {
    tmp_1192_fu_169898_p2 = (!tmp_904_fu_169810_p2.read().is_01() || !tmp_905_fu_169815_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_904_fu_169810_p2.read()) + sc_biguint<15>(tmp_905_fu_169815_p2.read()));
}

void a0_conv2d_1::thread_tmp_1193_fu_169904_p2() {
    tmp_1193_fu_169904_p2 = (!tmp_1190_fu_169882_p2.read().is_01() || !tmp_1191_fu_169888_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1190_fu_169882_p2.read()) + sc_biguint<15>(tmp_1191_fu_169888_p2.read()));
}

void a0_conv2d_1::thread_tmp_1194_fu_169916_p2() {
    tmp_1194_fu_169916_p2 = (!tmp_1193_fu_169904_p2.read().is_01() || !tmp_1192_fu_169898_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1193_fu_169904_p2.read()) + sc_biguint<15>(tmp_1192_fu_169898_p2.read()));
}

void a0_conv2d_1::thread_tmp_1195_fu_169922_p2() {
    tmp_1195_fu_169922_p2 = (!tmp_619_fu_169757_p2.read().is_01() || !tmp_618_fu_169751_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_619_fu_169757_p2.read()) + sc_biguint<15>(tmp_618_fu_169751_p2.read()));
}

void a0_conv2d_1::thread_tmp_1196_fu_145647_p4() {
    tmp_1196_fu_145647_p4 = r_V_87_62_fu_189939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1197_fu_145656_p4() {
    tmp_1197_fu_145656_p4 = r_V_88_62_fu_189947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1198_fu_145671_p4() {
    tmp_1198_fu_145671_p4 = r_V_86_62_fu_189931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1199_fu_145680_p4() {
    tmp_1199_fu_145680_p4 = r_V_85_62_fu_189923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_119_fu_138657_p4() {
    tmp_119_fu_138657_p4 = r_V_73_55_fu_187811_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1200_fu_145695_p2() {
    tmp_1200_fu_145695_p2 = (!tmp_1196_fu_145647_p4.read().is_01() || !tmp_1197_fu_145656_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1196_fu_145647_p4.read()) + sc_biguint<15>(tmp_1197_fu_145656_p4.read()));
}

void a0_conv2d_1::thread_tmp_1201_fu_145701_p2() {
    tmp_1201_fu_145701_p2 = (!tmp_1198_fu_145671_p4.read().is_01() || !tmp_1199_fu_145680_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1198_fu_145671_p4.read()) + sc_biguint<15>(tmp_1199_fu_145680_p4.read()));
}

void a0_conv2d_1::thread_tmp_1202_fu_145713_p4() {
    tmp_1202_fu_145713_p4 = r_V_84_62_fu_189915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1203_fu_145722_p4() {
    tmp_1203_fu_145722_p4 = r_V_81_62_fu_189891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1204_fu_145737_p4() {
    tmp_1204_fu_145737_p4 = r_V_82_62_fu_189899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1205_fu_145746_p4() {
    tmp_1205_fu_145746_p4 = r_V_83_62_fu_189907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1206_fu_145761_p2() {
    tmp_1206_fu_145761_p2 = (!tmp_1205_fu_145746_p4.read().is_01() || !tmp_1204_fu_145737_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1205_fu_145746_p4.read()) + sc_biguint<15>(tmp_1204_fu_145737_p4.read()));
}

void a0_conv2d_1::thread_tmp_1207_fu_145767_p4() {
    tmp_1207_fu_145767_p4 = r_V_89_61_fu_189667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1208_fu_145782_p2() {
    tmp_1208_fu_145782_p2 = (!tmp_1202_fu_145713_p4.read().is_01() || !tmp_1203_fu_145722_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1202_fu_145713_p4.read()) + sc_biguint<15>(tmp_1203_fu_145722_p4.read()));
}

void a0_conv2d_1::thread_tmp_1209_fu_145788_p2() {
    tmp_1209_fu_145788_p2 = (!tmp_1206_fu_145761_p2.read().is_01() || !tmp_1207_fu_145767_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1206_fu_145761_p2.read()) + sc_biguint<15>(tmp_1207_fu_145767_p4.read()));
}

void a0_conv2d_1::thread_tmp_120_fu_138672_p2() {
    tmp_120_fu_138672_p2 = (!tmp_116_fu_138624_p4.read().is_01() || !tmp_117_fu_138633_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_116_fu_138624_p4.read()) + sc_biguint<15>(tmp_117_fu_138633_p4.read()));
}

void a0_conv2d_1::thread_tmp_1210_fu_145800_p2() {
    tmp_1210_fu_145800_p2 = (!tmp_1209_fu_145788_p2.read().is_01() || !tmp_1208_fu_145782_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1209_fu_145788_p2.read()) + sc_biguint<15>(tmp_1208_fu_145782_p2.read()));
}

void a0_conv2d_1::thread_tmp_1211_fu_145806_p2() {
    tmp_1211_fu_145806_p2 = (!tmp_1201_fu_145701_p2.read().is_01() || !tmp_1200_fu_145695_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1201_fu_145701_p2.read()) + sc_biguint<15>(tmp_1200_fu_145695_p2.read()));
}

void a0_conv2d_1::thread_tmp_1212_fu_145818_p4() {
    tmp_1212_fu_145818_p4 = r_V_81_61_fu_189603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1213_fu_145827_p4() {
    tmp_1213_fu_145827_p4 = r_V_89_60_fu_189379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1214_fu_145842_p4() {
    tmp_1214_fu_145842_p4 = r_V_83_61_fu_189619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1215_fu_145851_p4() {
    tmp_1215_fu_145851_p4 = r_V_82_61_fu_189611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1216_fu_145866_p2() {
    tmp_1216_fu_145866_p2 = (!tmp_1212_fu_145818_p4.read().is_01() || !tmp_1213_fu_145827_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1212_fu_145818_p4.read()) + sc_biguint<15>(tmp_1213_fu_145827_p4.read()));
}

void a0_conv2d_1::thread_tmp_1217_fu_145872_p2() {
    tmp_1217_fu_145872_p2 = (!tmp_1214_fu_145842_p4.read().is_01() || !tmp_1215_fu_145851_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1214_fu_145842_p4.read()) + sc_biguint<15>(tmp_1215_fu_145851_p4.read()));
}

void a0_conv2d_1::thread_tmp_1218_fu_145884_p4() {
    tmp_1218_fu_145884_p4 = r_V_85_61_fu_189635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1219_fu_145893_p4() {
    tmp_1219_fu_145893_p4 = r_V_84_61_fu_189627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_121_fu_138678_p2() {
    tmp_121_fu_138678_p2 = (!tmp_118_fu_138648_p4.read().is_01() || !tmp_119_fu_138657_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_118_fu_138648_p4.read()) + sc_biguint<15>(tmp_119_fu_138657_p4.read()));
}

void a0_conv2d_1::thread_tmp_1220_fu_145908_p4() {
    tmp_1220_fu_145908_p4 = r_V_87_61_fu_189651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1221_fu_145917_p4() {
    tmp_1221_fu_145917_p4 = r_V_88_61_fu_189659_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1222_fu_145932_p2() {
    tmp_1222_fu_145932_p2 = (!tmp_1221_fu_145917_p4.read().is_01() || !tmp_1220_fu_145908_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1221_fu_145917_p4.read()) + sc_biguint<15>(tmp_1220_fu_145908_p4.read()));
}

void a0_conv2d_1::thread_tmp_1223_fu_145938_p4() {
    tmp_1223_fu_145938_p4 = r_V_86_61_fu_189643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1224_fu_145953_p2() {
    tmp_1224_fu_145953_p2 = (!tmp_1218_fu_145884_p4.read().is_01() || !tmp_1219_fu_145893_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1218_fu_145884_p4.read()) + sc_biguint<15>(tmp_1219_fu_145893_p4.read()));
}

void a0_conv2d_1::thread_tmp_1225_fu_145959_p2() {
    tmp_1225_fu_145959_p2 = (!tmp_1222_fu_145932_p2.read().is_01() || !tmp_1223_fu_145938_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1222_fu_145932_p2.read()) + sc_biguint<15>(tmp_1223_fu_145938_p4.read()));
}

void a0_conv2d_1::thread_tmp_1226_fu_145971_p2() {
    tmp_1226_fu_145971_p2 = (!tmp_1225_fu_145959_p2.read().is_01() || !tmp_1224_fu_145953_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1225_fu_145959_p2.read()) + sc_biguint<15>(tmp_1224_fu_145953_p2.read()));
}

void a0_conv2d_1::thread_tmp_1227_fu_145977_p2() {
    tmp_1227_fu_145977_p2 = (!tmp_1217_fu_145872_p2.read().is_01() || !tmp_1216_fu_145866_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1217_fu_145872_p2.read()) + sc_biguint<15>(tmp_1216_fu_145866_p2.read()));
}

void a0_conv2d_1::thread_tmp_1228_fu_145989_p2() {
    tmp_1228_fu_145989_p2 = (!tmp_1210_fu_145800_p2.read().is_01() || !tmp_1211_fu_145806_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1210_fu_145800_p2.read()) + sc_biguint<15>(tmp_1211_fu_145806_p2.read()));
}

void a0_conv2d_1::thread_tmp_1229_fu_145995_p2() {
    tmp_1229_fu_145995_p2 = (!tmp_1226_fu_145971_p2.read().is_01() || !tmp_1227_fu_145977_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1226_fu_145971_p2.read()) + sc_biguint<15>(tmp_1227_fu_145977_p2.read()));
}

void a0_conv2d_1::thread_tmp_122_fu_138690_p4() {
    tmp_122_fu_138690_p4 = r_V_76_55_fu_187835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1230_fu_146007_p4() {
    tmp_1230_fu_146007_p4 = r_V_81_59_fu_189027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1231_fu_146016_p4() {
    tmp_1231_fu_146016_p4 = r_V_89_58_fu_188803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1232_fu_146031_p4() {
    tmp_1232_fu_146031_p4 = r_V_83_59_fu_189043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1233_fu_146040_p4() {
    tmp_1233_fu_146040_p4 = r_V_82_59_fu_189035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1234_fu_146055_p2() {
    tmp_1234_fu_146055_p2 = (!tmp_1230_fu_146007_p4.read().is_01() || !tmp_1231_fu_146016_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1230_fu_146007_p4.read()) + sc_biguint<15>(tmp_1231_fu_146016_p4.read()));
}

void a0_conv2d_1::thread_tmp_1235_fu_146061_p2() {
    tmp_1235_fu_146061_p2 = (!tmp_1232_fu_146031_p4.read().is_01() || !tmp_1233_fu_146040_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1232_fu_146031_p4.read()) + sc_biguint<15>(tmp_1233_fu_146040_p4.read()));
}

void a0_conv2d_1::thread_tmp_1236_fu_146073_p4() {
    tmp_1236_fu_146073_p4 = r_V_85_59_fu_189059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1237_fu_146082_p4() {
    tmp_1237_fu_146082_p4 = r_V_84_59_fu_189051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1238_fu_146097_p4() {
    tmp_1238_fu_146097_p4 = r_V_87_59_fu_189075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1239_fu_146106_p4() {
    tmp_1239_fu_146106_p4 = r_V_88_59_fu_189083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_123_fu_138699_p4() {
    tmp_123_fu_138699_p4 = r_V_75_55_fu_187827_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1240_fu_146121_p2() {
    tmp_1240_fu_146121_p2 = (!tmp_1239_fu_146106_p4.read().is_01() || !tmp_1238_fu_146097_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1239_fu_146106_p4.read()) + sc_biguint<15>(tmp_1238_fu_146097_p4.read()));
}

void a0_conv2d_1::thread_tmp_1241_fu_146127_p4() {
    tmp_1241_fu_146127_p4 = r_V_86_59_fu_189067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1242_fu_146142_p2() {
    tmp_1242_fu_146142_p2 = (!tmp_1236_fu_146073_p4.read().is_01() || !tmp_1237_fu_146082_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1236_fu_146073_p4.read()) + sc_biguint<15>(tmp_1237_fu_146082_p4.read()));
}

void a0_conv2d_1::thread_tmp_1243_fu_146148_p2() {
    tmp_1243_fu_146148_p2 = (!tmp_1240_fu_146121_p2.read().is_01() || !tmp_1241_fu_146127_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1240_fu_146121_p2.read()) + sc_biguint<15>(tmp_1241_fu_146127_p4.read()));
}

void a0_conv2d_1::thread_tmp_1244_fu_146160_p2() {
    tmp_1244_fu_146160_p2 = (!tmp_1243_fu_146148_p2.read().is_01() || !tmp_1242_fu_146142_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1243_fu_146148_p2.read()) + sc_biguint<15>(tmp_1242_fu_146142_p2.read()));
}

void a0_conv2d_1::thread_tmp_1245_fu_146166_p2() {
    tmp_1245_fu_146166_p2 = (!tmp_1235_fu_146061_p2.read().is_01() || !tmp_1234_fu_146055_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1235_fu_146061_p2.read()) + sc_biguint<15>(tmp_1234_fu_146055_p2.read()));
}

void a0_conv2d_1::thread_tmp_1246_fu_146178_p4() {
    tmp_1246_fu_146178_p4 = r_V_81_60_fu_189315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1247_fu_146187_p4() {
    tmp_1247_fu_146187_p4 = r_V_89_59_fu_189091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1248_fu_146202_p4() {
    tmp_1248_fu_146202_p4 = r_V_83_60_fu_189331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1249_fu_146211_p4() {
    tmp_1249_fu_146211_p4 = r_V_82_60_fu_189323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_124_fu_138714_p4() {
    tmp_124_fu_138714_p4 = r_V_78_55_fu_187851_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1250_fu_146226_p2() {
    tmp_1250_fu_146226_p2 = (!tmp_1246_fu_146178_p4.read().is_01() || !tmp_1247_fu_146187_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1246_fu_146178_p4.read()) + sc_biguint<15>(tmp_1247_fu_146187_p4.read()));
}

void a0_conv2d_1::thread_tmp_1251_fu_146232_p2() {
    tmp_1251_fu_146232_p2 = (!tmp_1248_fu_146202_p4.read().is_01() || !tmp_1249_fu_146211_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1248_fu_146202_p4.read()) + sc_biguint<15>(tmp_1249_fu_146211_p4.read()));
}

void a0_conv2d_1::thread_tmp_1252_fu_146244_p4() {
    tmp_1252_fu_146244_p4 = r_V_85_60_fu_189347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1253_fu_146253_p4() {
    tmp_1253_fu_146253_p4 = r_V_84_60_fu_189339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1254_fu_146268_p4() {
    tmp_1254_fu_146268_p4 = r_V_87_60_fu_189363_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1255_fu_146277_p4() {
    tmp_1255_fu_146277_p4 = r_V_88_60_fu_189371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1256_fu_146292_p2() {
    tmp_1256_fu_146292_p2 = (!tmp_1255_fu_146277_p4.read().is_01() || !tmp_1254_fu_146268_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1255_fu_146277_p4.read()) + sc_biguint<15>(tmp_1254_fu_146268_p4.read()));
}

void a0_conv2d_1::thread_tmp_1257_fu_146298_p4() {
    tmp_1257_fu_146298_p4 = r_V_86_60_fu_189355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1258_fu_146313_p2() {
    tmp_1258_fu_146313_p2 = (!tmp_1252_fu_146244_p4.read().is_01() || !tmp_1253_fu_146253_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1252_fu_146244_p4.read()) + sc_biguint<15>(tmp_1253_fu_146253_p4.read()));
}

void a0_conv2d_1::thread_tmp_1259_fu_146319_p2() {
    tmp_1259_fu_146319_p2 = (!tmp_1256_fu_146292_p2.read().is_01() || !tmp_1257_fu_146298_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1256_fu_146292_p2.read()) + sc_biguint<15>(tmp_1257_fu_146298_p4.read()));
}

void a0_conv2d_1::thread_tmp_125_fu_138723_p4() {
    tmp_125_fu_138723_p4 = r_V_79_55_fu_187859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1260_fu_146331_p2() {
    tmp_1260_fu_146331_p2 = (!tmp_1259_fu_146319_p2.read().is_01() || !tmp_1258_fu_146313_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1259_fu_146319_p2.read()) + sc_biguint<15>(tmp_1258_fu_146313_p2.read()));
}

void a0_conv2d_1::thread_tmp_1261_fu_146337_p2() {
    tmp_1261_fu_146337_p2 = (!tmp_1251_fu_146232_p2.read().is_01() || !tmp_1250_fu_146226_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1251_fu_146232_p2.read()) + sc_biguint<15>(tmp_1250_fu_146226_p2.read()));
}

void a0_conv2d_1::thread_tmp_1262_fu_146349_p2() {
    tmp_1262_fu_146349_p2 = (!tmp_1244_fu_146160_p2.read().is_01() || !tmp_1245_fu_146166_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1244_fu_146160_p2.read()) + sc_biguint<15>(tmp_1245_fu_146166_p2.read()));
}

void a0_conv2d_1::thread_tmp_1263_fu_146355_p2() {
    tmp_1263_fu_146355_p2 = (!tmp_1260_fu_146331_p2.read().is_01() || !tmp_1261_fu_146337_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1260_fu_146331_p2.read()) + sc_biguint<15>(tmp_1261_fu_146337_p2.read()));
}

void a0_conv2d_1::thread_tmp_1264_fu_146367_p2() {
    tmp_1264_fu_146367_p2 = (!tmp_1263_fu_146355_p2.read().is_01() || !tmp_1262_fu_146349_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1263_fu_146355_p2.read()) + sc_biguint<15>(tmp_1262_fu_146349_p2.read()));
}

void a0_conv2d_1::thread_tmp_1265_fu_146373_p2() {
    tmp_1265_fu_146373_p2 = (!tmp_1229_fu_145995_p2.read().is_01() || !tmp_1228_fu_145989_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1229_fu_145995_p2.read()) + sc_biguint<15>(tmp_1228_fu_145989_p2.read()));
}

void a0_conv2d_1::thread_tmp_1266_fu_146385_p4() {
    tmp_1266_fu_146385_p4 = r_V_81_55_fu_187875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1267_fu_146394_p4() {
    tmp_1267_fu_146394_p4 = r_V_89_54_fu_187651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1268_fu_146409_p4() {
    tmp_1268_fu_146409_p4 = r_V_83_55_fu_187891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1269_fu_146418_p4() {
    tmp_1269_fu_146418_p4 = r_V_82_55_fu_187883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_126_fu_138738_p2() {
    tmp_126_fu_138738_p2 = (!tmp_125_fu_138723_p4.read().is_01() || !tmp_124_fu_138714_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_125_fu_138723_p4.read()) + sc_biguint<15>(tmp_124_fu_138714_p4.read()));
}

void a0_conv2d_1::thread_tmp_1270_fu_146433_p2() {
    tmp_1270_fu_146433_p2 = (!tmp_1266_fu_146385_p4.read().is_01() || !tmp_1267_fu_146394_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1266_fu_146385_p4.read()) + sc_biguint<15>(tmp_1267_fu_146394_p4.read()));
}

void a0_conv2d_1::thread_tmp_1271_fu_146439_p2() {
    tmp_1271_fu_146439_p2 = (!tmp_1268_fu_146409_p4.read().is_01() || !tmp_1269_fu_146418_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1268_fu_146409_p4.read()) + sc_biguint<15>(tmp_1269_fu_146418_p4.read()));
}

void a0_conv2d_1::thread_tmp_1272_fu_146451_p4() {
    tmp_1272_fu_146451_p4 = r_V_85_55_fu_187907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1273_fu_146460_p4() {
    tmp_1273_fu_146460_p4 = r_V_84_55_fu_187899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1274_fu_146475_p4() {
    tmp_1274_fu_146475_p4 = r_V_87_55_fu_187923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1275_fu_146484_p4() {
    tmp_1275_fu_146484_p4 = r_V_88_55_fu_187931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1276_fu_146499_p2() {
    tmp_1276_fu_146499_p2 = (!tmp_1275_fu_146484_p4.read().is_01() || !tmp_1274_fu_146475_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1275_fu_146484_p4.read()) + sc_biguint<15>(tmp_1274_fu_146475_p4.read()));
}

void a0_conv2d_1::thread_tmp_1277_fu_146505_p4() {
    tmp_1277_fu_146505_p4 = r_V_86_55_fu_187915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1278_fu_146520_p2() {
    tmp_1278_fu_146520_p2 = (!tmp_1272_fu_146451_p4.read().is_01() || !tmp_1273_fu_146460_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1272_fu_146451_p4.read()) + sc_biguint<15>(tmp_1273_fu_146460_p4.read()));
}

void a0_conv2d_1::thread_tmp_1279_fu_146526_p2() {
    tmp_1279_fu_146526_p2 = (!tmp_1276_fu_146499_p2.read().is_01() || !tmp_1277_fu_146505_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1276_fu_146499_p2.read()) + sc_biguint<15>(tmp_1277_fu_146505_p4.read()));
}

void a0_conv2d_1::thread_tmp_127_fu_138744_p4() {
    tmp_127_fu_138744_p4 = r_V_77_55_fu_187843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1280_fu_146538_p2() {
    tmp_1280_fu_146538_p2 = (!tmp_1279_fu_146526_p2.read().is_01() || !tmp_1278_fu_146520_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1279_fu_146526_p2.read()) + sc_biguint<15>(tmp_1278_fu_146520_p2.read()));
}

void a0_conv2d_1::thread_tmp_1281_fu_146544_p2() {
    tmp_1281_fu_146544_p2 = (!tmp_1271_fu_146439_p2.read().is_01() || !tmp_1270_fu_146433_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1271_fu_146439_p2.read()) + sc_biguint<15>(tmp_1270_fu_146433_p2.read()));
}

void a0_conv2d_1::thread_tmp_1282_fu_146556_p4() {
    tmp_1282_fu_146556_p4 = r_V_81_56_fu_188163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1283_fu_146565_p4() {
    tmp_1283_fu_146565_p4 = r_V_89_55_fu_187939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1284_fu_146580_p4() {
    tmp_1284_fu_146580_p4 = r_V_83_56_fu_188179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1285_fu_146589_p4() {
    tmp_1285_fu_146589_p4 = r_V_82_56_fu_188171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1286_fu_146604_p2() {
    tmp_1286_fu_146604_p2 = (!tmp_1282_fu_146556_p4.read().is_01() || !tmp_1283_fu_146565_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1282_fu_146556_p4.read()) + sc_biguint<15>(tmp_1283_fu_146565_p4.read()));
}

void a0_conv2d_1::thread_tmp_1287_fu_146610_p2() {
    tmp_1287_fu_146610_p2 = (!tmp_1284_fu_146580_p4.read().is_01() || !tmp_1285_fu_146589_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1284_fu_146580_p4.read()) + sc_biguint<15>(tmp_1285_fu_146589_p4.read()));
}

void a0_conv2d_1::thread_tmp_1288_fu_146622_p4() {
    tmp_1288_fu_146622_p4 = r_V_85_56_fu_188195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1289_fu_146631_p4() {
    tmp_1289_fu_146631_p4 = r_V_84_56_fu_188187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_128_fu_138759_p2() {
    tmp_128_fu_138759_p2 = (!tmp_122_fu_138690_p4.read().is_01() || !tmp_123_fu_138699_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_122_fu_138690_p4.read()) + sc_biguint<15>(tmp_123_fu_138699_p4.read()));
}

void a0_conv2d_1::thread_tmp_1290_fu_146646_p4() {
    tmp_1290_fu_146646_p4 = r_V_87_56_fu_188211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1291_fu_146655_p4() {
    tmp_1291_fu_146655_p4 = r_V_88_56_fu_188219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1292_fu_146670_p2() {
    tmp_1292_fu_146670_p2 = (!tmp_1291_fu_146655_p4.read().is_01() || !tmp_1290_fu_146646_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1291_fu_146655_p4.read()) + sc_biguint<15>(tmp_1290_fu_146646_p4.read()));
}

void a0_conv2d_1::thread_tmp_1293_fu_146676_p4() {
    tmp_1293_fu_146676_p4 = r_V_86_56_fu_188203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1294_fu_146691_p2() {
    tmp_1294_fu_146691_p2 = (!tmp_1288_fu_146622_p4.read().is_01() || !tmp_1289_fu_146631_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1288_fu_146622_p4.read()) + sc_biguint<15>(tmp_1289_fu_146631_p4.read()));
}

void a0_conv2d_1::thread_tmp_1295_fu_146697_p2() {
    tmp_1295_fu_146697_p2 = (!tmp_1292_fu_146670_p2.read().is_01() || !tmp_1293_fu_146676_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1292_fu_146670_p2.read()) + sc_biguint<15>(tmp_1293_fu_146676_p4.read()));
}

void a0_conv2d_1::thread_tmp_1296_fu_146709_p2() {
    tmp_1296_fu_146709_p2 = (!tmp_1295_fu_146697_p2.read().is_01() || !tmp_1294_fu_146691_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1295_fu_146697_p2.read()) + sc_biguint<15>(tmp_1294_fu_146691_p2.read()));
}

void a0_conv2d_1::thread_tmp_1297_fu_146715_p2() {
    tmp_1297_fu_146715_p2 = (!tmp_1287_fu_146610_p2.read().is_01() || !tmp_1286_fu_146604_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1287_fu_146610_p2.read()) + sc_biguint<15>(tmp_1286_fu_146604_p2.read()));
}

void a0_conv2d_1::thread_tmp_1298_fu_146727_p2() {
    tmp_1298_fu_146727_p2 = (!tmp_1280_fu_146538_p2.read().is_01() || !tmp_1281_fu_146544_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1280_fu_146538_p2.read()) + sc_biguint<15>(tmp_1281_fu_146544_p2.read()));
}

void a0_conv2d_1::thread_tmp_1299_fu_146733_p2() {
    tmp_1299_fu_146733_p2 = (!tmp_1296_fu_146709_p2.read().is_01() || !tmp_1297_fu_146715_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1296_fu_146709_p2.read()) + sc_biguint<15>(tmp_1297_fu_146715_p2.read()));
}

void a0_conv2d_1::thread_tmp_129_fu_138765_p2() {
    tmp_129_fu_138765_p2 = (!tmp_126_fu_138738_p2.read().is_01() || !tmp_127_fu_138744_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_126_fu_138738_p2.read()) + sc_biguint<15>(tmp_127_fu_138744_p4.read()));
}

void a0_conv2d_1::thread_tmp_1300_fu_146745_p4() {
    tmp_1300_fu_146745_p4 = r_V_81_57_fu_188451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1301_fu_146754_p4() {
    tmp_1301_fu_146754_p4 = r_V_89_56_fu_188227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1302_fu_146769_p4() {
    tmp_1302_fu_146769_p4 = r_V_83_57_fu_188467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1303_fu_146778_p4() {
    tmp_1303_fu_146778_p4 = r_V_82_57_fu_188459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1304_fu_146793_p2() {
    tmp_1304_fu_146793_p2 = (!tmp_1300_fu_146745_p4.read().is_01() || !tmp_1301_fu_146754_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1300_fu_146745_p4.read()) + sc_biguint<15>(tmp_1301_fu_146754_p4.read()));
}

void a0_conv2d_1::thread_tmp_1305_fu_146799_p2() {
    tmp_1305_fu_146799_p2 = (!tmp_1302_fu_146769_p4.read().is_01() || !tmp_1303_fu_146778_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1302_fu_146769_p4.read()) + sc_biguint<15>(tmp_1303_fu_146778_p4.read()));
}

void a0_conv2d_1::thread_tmp_1306_fu_146811_p4() {
    tmp_1306_fu_146811_p4 = r_V_85_57_fu_188483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1307_fu_146820_p4() {
    tmp_1307_fu_146820_p4 = r_V_84_57_fu_188475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1308_fu_146835_p4() {
    tmp_1308_fu_146835_p4 = r_V_87_57_fu_188499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1309_fu_146844_p4() {
    tmp_1309_fu_146844_p4 = r_V_88_57_fu_188507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_130_fu_138777_p2() {
    tmp_130_fu_138777_p2 = (!tmp_129_fu_138765_p2.read().is_01() || !tmp_128_fu_138759_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_129_fu_138765_p2.read()) + sc_biguint<15>(tmp_128_fu_138759_p2.read()));
}

void a0_conv2d_1::thread_tmp_1310_fu_146859_p2() {
    tmp_1310_fu_146859_p2 = (!tmp_1309_fu_146844_p4.read().is_01() || !tmp_1308_fu_146835_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1309_fu_146844_p4.read()) + sc_biguint<15>(tmp_1308_fu_146835_p4.read()));
}

void a0_conv2d_1::thread_tmp_1311_fu_146865_p4() {
    tmp_1311_fu_146865_p4 = r_V_86_57_fu_188491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1312_fu_146880_p2() {
    tmp_1312_fu_146880_p2 = (!tmp_1306_fu_146811_p4.read().is_01() || !tmp_1307_fu_146820_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1306_fu_146811_p4.read()) + sc_biguint<15>(tmp_1307_fu_146820_p4.read()));
}

void a0_conv2d_1::thread_tmp_1313_fu_146886_p2() {
    tmp_1313_fu_146886_p2 = (!tmp_1310_fu_146859_p2.read().is_01() || !tmp_1311_fu_146865_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1310_fu_146859_p2.read()) + sc_biguint<15>(tmp_1311_fu_146865_p4.read()));
}

void a0_conv2d_1::thread_tmp_1314_fu_146898_p2() {
    tmp_1314_fu_146898_p2 = (!tmp_1313_fu_146886_p2.read().is_01() || !tmp_1312_fu_146880_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1313_fu_146886_p2.read()) + sc_biguint<15>(tmp_1312_fu_146880_p2.read()));
}

void a0_conv2d_1::thread_tmp_1315_fu_146904_p2() {
    tmp_1315_fu_146904_p2 = (!tmp_1305_fu_146799_p2.read().is_01() || !tmp_1304_fu_146793_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1305_fu_146799_p2.read()) + sc_biguint<15>(tmp_1304_fu_146793_p2.read()));
}

void a0_conv2d_1::thread_tmp_1316_fu_146916_p4() {
    tmp_1316_fu_146916_p4 = r_V_81_58_fu_188739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1317_fu_146925_p4() {
    tmp_1317_fu_146925_p4 = r_V_89_57_fu_188515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1318_fu_146940_p4() {
    tmp_1318_fu_146940_p4 = r_V_83_58_fu_188755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1319_fu_146949_p4() {
    tmp_1319_fu_146949_p4 = r_V_82_58_fu_188747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_131_fu_138783_p2() {
    tmp_131_fu_138783_p2 = (!tmp_121_fu_138678_p2.read().is_01() || !tmp_120_fu_138672_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_121_fu_138678_p2.read()) + sc_biguint<15>(tmp_120_fu_138672_p2.read()));
}

void a0_conv2d_1::thread_tmp_1320_fu_146964_p2() {
    tmp_1320_fu_146964_p2 = (!tmp_1316_fu_146916_p4.read().is_01() || !tmp_1317_fu_146925_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1316_fu_146916_p4.read()) + sc_biguint<15>(tmp_1317_fu_146925_p4.read()));
}

void a0_conv2d_1::thread_tmp_1321_fu_146970_p2() {
    tmp_1321_fu_146970_p2 = (!tmp_1318_fu_146940_p4.read().is_01() || !tmp_1319_fu_146949_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1318_fu_146940_p4.read()) + sc_biguint<15>(tmp_1319_fu_146949_p4.read()));
}

void a0_conv2d_1::thread_tmp_1322_fu_146982_p4() {
    tmp_1322_fu_146982_p4 = r_V_85_58_fu_188771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1323_fu_146991_p4() {
    tmp_1323_fu_146991_p4 = r_V_84_58_fu_188763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1324_fu_147006_p4() {
    tmp_1324_fu_147006_p4 = r_V_87_58_fu_188787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1325_fu_147015_p4() {
    tmp_1325_fu_147015_p4 = r_V_88_58_fu_188795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1326_fu_147030_p2() {
    tmp_1326_fu_147030_p2 = (!tmp_1325_fu_147015_p4.read().is_01() || !tmp_1324_fu_147006_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1325_fu_147015_p4.read()) + sc_biguint<15>(tmp_1324_fu_147006_p4.read()));
}

void a0_conv2d_1::thread_tmp_1327_fu_147036_p4() {
    tmp_1327_fu_147036_p4 = r_V_86_58_fu_188779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1328_fu_147051_p2() {
    tmp_1328_fu_147051_p2 = (!tmp_1322_fu_146982_p4.read().is_01() || !tmp_1323_fu_146991_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1322_fu_146982_p4.read()) + sc_biguint<15>(tmp_1323_fu_146991_p4.read()));
}

void a0_conv2d_1::thread_tmp_1329_fu_147057_p2() {
    tmp_1329_fu_147057_p2 = (!tmp_1326_fu_147030_p2.read().is_01() || !tmp_1327_fu_147036_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1326_fu_147030_p2.read()) + sc_biguint<15>(tmp_1327_fu_147036_p4.read()));
}

void a0_conv2d_1::thread_tmp_132_fu_138795_p4() {
    tmp_132_fu_138795_p4 = r_V_72_56_fu_188091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1330_fu_147069_p2() {
    tmp_1330_fu_147069_p2 = (!tmp_1329_fu_147057_p2.read().is_01() || !tmp_1328_fu_147051_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1329_fu_147057_p2.read()) + sc_biguint<15>(tmp_1328_fu_147051_p2.read()));
}

void a0_conv2d_1::thread_tmp_1331_fu_147075_p2() {
    tmp_1331_fu_147075_p2 = (!tmp_1321_fu_146970_p2.read().is_01() || !tmp_1320_fu_146964_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1321_fu_146970_p2.read()) + sc_biguint<15>(tmp_1320_fu_146964_p2.read()));
}

void a0_conv2d_1::thread_tmp_1332_fu_147087_p2() {
    tmp_1332_fu_147087_p2 = (!tmp_1314_fu_146898_p2.read().is_01() || !tmp_1315_fu_146904_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1314_fu_146898_p2.read()) + sc_biguint<15>(tmp_1315_fu_146904_p2.read()));
}

void a0_conv2d_1::thread_tmp_1333_fu_147093_p2() {
    tmp_1333_fu_147093_p2 = (!tmp_1330_fu_147069_p2.read().is_01() || !tmp_1331_fu_147075_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1330_fu_147069_p2.read()) + sc_biguint<15>(tmp_1331_fu_147075_p2.read()));
}

void a0_conv2d_1::thread_tmp_1334_fu_147105_p2() {
    tmp_1334_fu_147105_p2 = (!tmp_1333_fu_147093_p2.read().is_01() || !tmp_1332_fu_147087_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1333_fu_147093_p2.read()) + sc_biguint<15>(tmp_1332_fu_147087_p2.read()));
}

void a0_conv2d_1::thread_tmp_1335_fu_169935_p2() {
    tmp_1335_fu_169935_p2 = (!tmp_1299_reg_227351.read().is_01() || !tmp_1298_reg_227346.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1299_reg_227351.read()) + sc_biguint<15>(tmp_1298_reg_227346.read()));
}

void a0_conv2d_1::thread_tmp_1336_fu_169943_p2() {
    tmp_1336_fu_169943_p2 = (!tmp_1264_reg_227331.read().is_01() || !tmp_1265_reg_227336.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1264_reg_227331.read()) + sc_biguint<15>(tmp_1265_reg_227336.read()));
}

void a0_conv2d_1::thread_tmp_1337_fu_169947_p2() {
    tmp_1337_fu_169947_p2 = (!tmp_1334_reg_227366.read().is_01() || !tmp_1335_fu_169935_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1334_reg_227366.read()) + sc_biguint<15>(tmp_1335_fu_169935_p2.read()));
}

void a0_conv2d_1::thread_tmp_1338_fu_147111_p4() {
    tmp_1338_fu_147111_p4 = r_V_81_47_fu_185571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1339_fu_147120_p4() {
    tmp_1339_fu_147120_p4 = r_V_89_46_fu_185443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_133_fu_138804_p4() {
    tmp_133_fu_138804_p4 = r_V_80_55_fu_187867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1340_fu_147135_p4() {
    tmp_1340_fu_147135_p4 = r_V_83_47_fu_185587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1341_fu_147144_p4() {
    tmp_1341_fu_147144_p4 = r_V_82_47_fu_185579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1342_fu_147159_p2() {
    tmp_1342_fu_147159_p2 = (!tmp_1338_fu_147111_p4.read().is_01() || !tmp_1339_fu_147120_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1338_fu_147111_p4.read()) + sc_biguint<15>(tmp_1339_fu_147120_p4.read()));
}

void a0_conv2d_1::thread_tmp_1343_fu_147165_p2() {
    tmp_1343_fu_147165_p2 = (!tmp_1340_fu_147135_p4.read().is_01() || !tmp_1341_fu_147144_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1340_fu_147135_p4.read()) + sc_biguint<15>(tmp_1341_fu_147144_p4.read()));
}

void a0_conv2d_1::thread_tmp_1344_fu_147177_p4() {
    tmp_1344_fu_147177_p4 = r_V_85_47_fu_185603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1345_fu_147186_p4() {
    tmp_1345_fu_147186_p4 = r_V_84_47_fu_185595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1346_fu_147201_p4() {
    tmp_1346_fu_147201_p4 = r_V_87_47_fu_185619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1347_fu_147210_p4() {
    tmp_1347_fu_147210_p4 = r_V_88_47_fu_185627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1348_fu_147225_p2() {
    tmp_1348_fu_147225_p2 = (!tmp_1347_fu_147210_p4.read().is_01() || !tmp_1346_fu_147201_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1347_fu_147210_p4.read()) + sc_biguint<15>(tmp_1346_fu_147201_p4.read()));
}

void a0_conv2d_1::thread_tmp_1349_fu_147231_p4() {
    tmp_1349_fu_147231_p4 = r_V_86_47_fu_185611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_134_fu_138819_p4() {
    tmp_134_fu_138819_p4 = r_V_74_56_fu_188107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1350_fu_147246_p2() {
    tmp_1350_fu_147246_p2 = (!tmp_1344_fu_147177_p4.read().is_01() || !tmp_1345_fu_147186_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1344_fu_147177_p4.read()) + sc_biguint<15>(tmp_1345_fu_147186_p4.read()));
}

void a0_conv2d_1::thread_tmp_1351_fu_147252_p2() {
    tmp_1351_fu_147252_p2 = (!tmp_1348_fu_147225_p2.read().is_01() || !tmp_1349_fu_147231_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1348_fu_147225_p2.read()) + sc_biguint<15>(tmp_1349_fu_147231_p4.read()));
}

void a0_conv2d_1::thread_tmp_1352_fu_147264_p2() {
    tmp_1352_fu_147264_p2 = (!tmp_1351_fu_147252_p2.read().is_01() || !tmp_1350_fu_147246_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1351_fu_147252_p2.read()) + sc_biguint<15>(tmp_1350_fu_147246_p2.read()));
}

void a0_conv2d_1::thread_tmp_1353_fu_147270_p2() {
    tmp_1353_fu_147270_p2 = (!tmp_1343_fu_147165_p2.read().is_01() || !tmp_1342_fu_147159_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1343_fu_147165_p2.read()) + sc_biguint<15>(tmp_1342_fu_147159_p2.read()));
}

void a0_conv2d_1::thread_tmp_1354_fu_147282_p4() {
    tmp_1354_fu_147282_p4 = r_V_81_48_fu_185859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1355_fu_147291_p4() {
    tmp_1355_fu_147291_p4 = r_V_89_47_fu_185635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1356_fu_147306_p4() {
    tmp_1356_fu_147306_p4 = r_V_83_48_fu_185875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1357_fu_147315_p4() {
    tmp_1357_fu_147315_p4 = r_V_82_48_fu_185867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1358_fu_147330_p2() {
    tmp_1358_fu_147330_p2 = (!tmp_1354_fu_147282_p4.read().is_01() || !tmp_1355_fu_147291_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1354_fu_147282_p4.read()) + sc_biguint<15>(tmp_1355_fu_147291_p4.read()));
}

void a0_conv2d_1::thread_tmp_1359_fu_147336_p2() {
    tmp_1359_fu_147336_p2 = (!tmp_1356_fu_147306_p4.read().is_01() || !tmp_1357_fu_147315_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1356_fu_147306_p4.read()) + sc_biguint<15>(tmp_1357_fu_147315_p4.read()));
}

void a0_conv2d_1::thread_tmp_135_fu_138828_p4() {
    tmp_135_fu_138828_p4 = r_V_73_56_fu_188099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1360_fu_147348_p4() {
    tmp_1360_fu_147348_p4 = r_V_85_48_fu_185891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1361_fu_147357_p4() {
    tmp_1361_fu_147357_p4 = r_V_84_48_fu_185883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1362_fu_147372_p4() {
    tmp_1362_fu_147372_p4 = r_V_87_48_fu_185907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1363_fu_147381_p4() {
    tmp_1363_fu_147381_p4 = r_V_88_48_fu_185915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1364_fu_147396_p2() {
    tmp_1364_fu_147396_p2 = (!tmp_1363_fu_147381_p4.read().is_01() || !tmp_1362_fu_147372_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1363_fu_147381_p4.read()) + sc_biguint<15>(tmp_1362_fu_147372_p4.read()));
}

void a0_conv2d_1::thread_tmp_1365_fu_147402_p4() {
    tmp_1365_fu_147402_p4 = r_V_86_48_fu_185899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1366_fu_147417_p2() {
    tmp_1366_fu_147417_p2 = (!tmp_1360_fu_147348_p4.read().is_01() || !tmp_1361_fu_147357_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1360_fu_147348_p4.read()) + sc_biguint<15>(tmp_1361_fu_147357_p4.read()));
}

void a0_conv2d_1::thread_tmp_1367_fu_147423_p2() {
    tmp_1367_fu_147423_p2 = (!tmp_1364_fu_147396_p2.read().is_01() || !tmp_1365_fu_147402_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1364_fu_147396_p2.read()) + sc_biguint<15>(tmp_1365_fu_147402_p4.read()));
}

void a0_conv2d_1::thread_tmp_1368_fu_147435_p2() {
    tmp_1368_fu_147435_p2 = (!tmp_1367_fu_147423_p2.read().is_01() || !tmp_1366_fu_147417_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1367_fu_147423_p2.read()) + sc_biguint<15>(tmp_1366_fu_147417_p2.read()));
}

void a0_conv2d_1::thread_tmp_1369_fu_147441_p2() {
    tmp_1369_fu_147441_p2 = (!tmp_1359_fu_147336_p2.read().is_01() || !tmp_1358_fu_147330_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1359_fu_147336_p2.read()) + sc_biguint<15>(tmp_1358_fu_147330_p2.read()));
}

void a0_conv2d_1::thread_tmp_136_fu_138843_p2() {
    tmp_136_fu_138843_p2 = (!tmp_132_fu_138795_p4.read().is_01() || !tmp_133_fu_138804_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_132_fu_138795_p4.read()) + sc_biguint<15>(tmp_133_fu_138804_p4.read()));
}

void a0_conv2d_1::thread_tmp_1370_fu_147453_p2() {
    tmp_1370_fu_147453_p2 = (!tmp_1352_fu_147264_p2.read().is_01() || !tmp_1353_fu_147270_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1352_fu_147264_p2.read()) + sc_biguint<15>(tmp_1353_fu_147270_p2.read()));
}

void a0_conv2d_1::thread_tmp_1371_fu_147459_p2() {
    tmp_1371_fu_147459_p2 = (!tmp_1368_fu_147435_p2.read().is_01() || !tmp_1369_fu_147441_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1368_fu_147435_p2.read()) + sc_biguint<15>(tmp_1369_fu_147441_p2.read()));
}

void a0_conv2d_1::thread_tmp_1372_fu_147471_p4() {
    tmp_1372_fu_147471_p4 = r_V_81_49_fu_186147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1373_fu_147480_p4() {
    tmp_1373_fu_147480_p4 = r_V_89_48_fu_185923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1374_fu_147495_p4() {
    tmp_1374_fu_147495_p4 = r_V_83_49_fu_186163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1375_fu_147504_p4() {
    tmp_1375_fu_147504_p4 = r_V_82_49_fu_186155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1376_fu_147519_p2() {
    tmp_1376_fu_147519_p2 = (!tmp_1372_fu_147471_p4.read().is_01() || !tmp_1373_fu_147480_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1372_fu_147471_p4.read()) + sc_biguint<15>(tmp_1373_fu_147480_p4.read()));
}

void a0_conv2d_1::thread_tmp_1377_fu_147525_p2() {
    tmp_1377_fu_147525_p2 = (!tmp_1374_fu_147495_p4.read().is_01() || !tmp_1375_fu_147504_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1374_fu_147495_p4.read()) + sc_biguint<15>(tmp_1375_fu_147504_p4.read()));
}

void a0_conv2d_1::thread_tmp_1378_fu_147537_p4() {
    tmp_1378_fu_147537_p4 = r_V_85_49_fu_186179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1379_fu_147546_p4() {
    tmp_1379_fu_147546_p4 = r_V_84_49_fu_186171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_137_fu_138849_p2() {
    tmp_137_fu_138849_p2 = (!tmp_134_fu_138819_p4.read().is_01() || !tmp_135_fu_138828_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_134_fu_138819_p4.read()) + sc_biguint<15>(tmp_135_fu_138828_p4.read()));
}

void a0_conv2d_1::thread_tmp_1380_fu_147561_p4() {
    tmp_1380_fu_147561_p4 = r_V_87_49_fu_186195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1381_fu_147570_p4() {
    tmp_1381_fu_147570_p4 = r_V_88_49_fu_186203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1382_fu_147585_p2() {
    tmp_1382_fu_147585_p2 = (!tmp_1381_fu_147570_p4.read().is_01() || !tmp_1380_fu_147561_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1381_fu_147570_p4.read()) + sc_biguint<15>(tmp_1380_fu_147561_p4.read()));
}

void a0_conv2d_1::thread_tmp_1383_fu_147591_p4() {
    tmp_1383_fu_147591_p4 = r_V_86_49_fu_186187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1384_fu_147606_p2() {
    tmp_1384_fu_147606_p2 = (!tmp_1378_fu_147537_p4.read().is_01() || !tmp_1379_fu_147546_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1378_fu_147537_p4.read()) + sc_biguint<15>(tmp_1379_fu_147546_p4.read()));
}

void a0_conv2d_1::thread_tmp_1385_fu_147612_p2() {
    tmp_1385_fu_147612_p2 = (!tmp_1382_fu_147585_p2.read().is_01() || !tmp_1383_fu_147591_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1382_fu_147585_p2.read()) + sc_biguint<15>(tmp_1383_fu_147591_p4.read()));
}

void a0_conv2d_1::thread_tmp_1386_fu_147624_p2() {
    tmp_1386_fu_147624_p2 = (!tmp_1385_fu_147612_p2.read().is_01() || !tmp_1384_fu_147606_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1385_fu_147612_p2.read()) + sc_biguint<15>(tmp_1384_fu_147606_p2.read()));
}

void a0_conv2d_1::thread_tmp_1387_fu_147630_p2() {
    tmp_1387_fu_147630_p2 = (!tmp_1377_fu_147525_p2.read().is_01() || !tmp_1376_fu_147519_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1377_fu_147525_p2.read()) + sc_biguint<15>(tmp_1376_fu_147519_p2.read()));
}

void a0_conv2d_1::thread_tmp_1388_fu_147642_p4() {
    tmp_1388_fu_147642_p4 = r_V_81_50_fu_186435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1389_fu_147651_p4() {
    tmp_1389_fu_147651_p4 = r_V_89_49_fu_186211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_138_fu_138861_p4() {
    tmp_138_fu_138861_p4 = r_V_76_56_fu_188123_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1390_fu_147666_p4() {
    tmp_1390_fu_147666_p4 = r_V_83_50_fu_186451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1391_fu_147675_p4() {
    tmp_1391_fu_147675_p4 = r_V_82_50_fu_186443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1392_fu_147690_p2() {
    tmp_1392_fu_147690_p2 = (!tmp_1388_fu_147642_p4.read().is_01() || !tmp_1389_fu_147651_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1388_fu_147642_p4.read()) + sc_biguint<15>(tmp_1389_fu_147651_p4.read()));
}

void a0_conv2d_1::thread_tmp_1393_fu_147696_p2() {
    tmp_1393_fu_147696_p2 = (!tmp_1390_fu_147666_p4.read().is_01() || !tmp_1391_fu_147675_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1390_fu_147666_p4.read()) + sc_biguint<15>(tmp_1391_fu_147675_p4.read()));
}

void a0_conv2d_1::thread_tmp_1394_fu_147708_p4() {
    tmp_1394_fu_147708_p4 = r_V_85_50_fu_186467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1395_fu_147717_p4() {
    tmp_1395_fu_147717_p4 = r_V_84_50_fu_186459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1396_fu_147732_p4() {
    tmp_1396_fu_147732_p4 = r_V_87_50_fu_186483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1397_fu_147741_p4() {
    tmp_1397_fu_147741_p4 = r_V_88_50_fu_186491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1398_fu_147756_p2() {
    tmp_1398_fu_147756_p2 = (!tmp_1397_fu_147741_p4.read().is_01() || !tmp_1396_fu_147732_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1397_fu_147741_p4.read()) + sc_biguint<15>(tmp_1396_fu_147732_p4.read()));
}

void a0_conv2d_1::thread_tmp_1399_fu_147762_p4() {
    tmp_1399_fu_147762_p4 = r_V_86_50_fu_186475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_139_fu_138870_p4() {
    tmp_139_fu_138870_p4 = r_V_75_56_fu_188115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1400_fu_147777_p2() {
    tmp_1400_fu_147777_p2 = (!tmp_1394_fu_147708_p4.read().is_01() || !tmp_1395_fu_147717_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1394_fu_147708_p4.read()) + sc_biguint<15>(tmp_1395_fu_147717_p4.read()));
}

void a0_conv2d_1::thread_tmp_1401_fu_147783_p2() {
    tmp_1401_fu_147783_p2 = (!tmp_1398_fu_147756_p2.read().is_01() || !tmp_1399_fu_147762_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1398_fu_147756_p2.read()) + sc_biguint<15>(tmp_1399_fu_147762_p4.read()));
}

void a0_conv2d_1::thread_tmp_1402_fu_147795_p2() {
    tmp_1402_fu_147795_p2 = (!tmp_1401_fu_147783_p2.read().is_01() || !tmp_1400_fu_147777_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1401_fu_147783_p2.read()) + sc_biguint<15>(tmp_1400_fu_147777_p2.read()));
}

void a0_conv2d_1::thread_tmp_1403_fu_147801_p2() {
    tmp_1403_fu_147801_p2 = (!tmp_1393_fu_147696_p2.read().is_01() || !tmp_1392_fu_147690_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1393_fu_147696_p2.read()) + sc_biguint<15>(tmp_1392_fu_147690_p2.read()));
}

void a0_conv2d_1::thread_tmp_1404_fu_147813_p2() {
    tmp_1404_fu_147813_p2 = (!tmp_1386_fu_147624_p2.read().is_01() || !tmp_1387_fu_147630_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1386_fu_147624_p2.read()) + sc_biguint<15>(tmp_1387_fu_147630_p2.read()));
}

void a0_conv2d_1::thread_tmp_1405_fu_147819_p2() {
    tmp_1405_fu_147819_p2 = (!tmp_1402_fu_147795_p2.read().is_01() || !tmp_1403_fu_147801_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1402_fu_147795_p2.read()) + sc_biguint<15>(tmp_1403_fu_147801_p2.read()));
}

void a0_conv2d_1::thread_tmp_1406_fu_147825_p2() {
    tmp_1406_fu_147825_p2 = (!tmp_1405_fu_147819_p2.read().is_01() || !tmp_1404_fu_147813_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1405_fu_147819_p2.read()) + sc_biguint<15>(tmp_1404_fu_147813_p2.read()));
}

void a0_conv2d_1::thread_tmp_1407_fu_147831_p2() {
    tmp_1407_fu_147831_p2 = (!tmp_1371_fu_147459_p2.read().is_01() || !tmp_1370_fu_147453_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1371_fu_147459_p2.read()) + sc_biguint<15>(tmp_1370_fu_147453_p2.read()));
}

void a0_conv2d_1::thread_tmp_1408_fu_147837_p4() {
    tmp_1408_fu_147837_p4 = r_V_81_51_fu_186723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1409_fu_147846_p4() {
    tmp_1409_fu_147846_p4 = r_V_89_50_fu_186499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_140_fu_138885_p4() {
    tmp_140_fu_138885_p4 = r_V_78_56_fu_188139_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1410_fu_147861_p4() {
    tmp_1410_fu_147861_p4 = r_V_83_51_fu_186739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1411_fu_147870_p4() {
    tmp_1411_fu_147870_p4 = r_V_82_51_fu_186731_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1412_fu_147885_p2() {
    tmp_1412_fu_147885_p2 = (!tmp_1408_fu_147837_p4.read().is_01() || !tmp_1409_fu_147846_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1408_fu_147837_p4.read()) + sc_biguint<15>(tmp_1409_fu_147846_p4.read()));
}

void a0_conv2d_1::thread_tmp_1413_fu_147891_p2() {
    tmp_1413_fu_147891_p2 = (!tmp_1410_fu_147861_p4.read().is_01() || !tmp_1411_fu_147870_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1410_fu_147861_p4.read()) + sc_biguint<15>(tmp_1411_fu_147870_p4.read()));
}

void a0_conv2d_1::thread_tmp_1414_fu_147903_p4() {
    tmp_1414_fu_147903_p4 = r_V_85_51_fu_186755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1415_fu_147912_p4() {
    tmp_1415_fu_147912_p4 = r_V_84_51_fu_186747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1416_fu_147927_p4() {
    tmp_1416_fu_147927_p4 = r_V_87_51_fu_186771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1417_fu_147936_p4() {
    tmp_1417_fu_147936_p4 = r_V_88_51_fu_186779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1418_fu_147951_p2() {
    tmp_1418_fu_147951_p2 = (!tmp_1417_fu_147936_p4.read().is_01() || !tmp_1416_fu_147927_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1417_fu_147936_p4.read()) + sc_biguint<15>(tmp_1416_fu_147927_p4.read()));
}

void a0_conv2d_1::thread_tmp_1419_fu_147957_p4() {
    tmp_1419_fu_147957_p4 = r_V_86_51_fu_186763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_141_fu_138894_p4() {
    tmp_141_fu_138894_p4 = r_V_79_56_fu_188147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1420_fu_147972_p2() {
    tmp_1420_fu_147972_p2 = (!tmp_1414_fu_147903_p4.read().is_01() || !tmp_1415_fu_147912_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1414_fu_147903_p4.read()) + sc_biguint<15>(tmp_1415_fu_147912_p4.read()));
}

void a0_conv2d_1::thread_tmp_1421_fu_147978_p2() {
    tmp_1421_fu_147978_p2 = (!tmp_1418_fu_147951_p2.read().is_01() || !tmp_1419_fu_147957_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1418_fu_147951_p2.read()) + sc_biguint<15>(tmp_1419_fu_147957_p4.read()));
}

void a0_conv2d_1::thread_tmp_1422_fu_147990_p2() {
    tmp_1422_fu_147990_p2 = (!tmp_1421_fu_147978_p2.read().is_01() || !tmp_1420_fu_147972_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1421_fu_147978_p2.read()) + sc_biguint<15>(tmp_1420_fu_147972_p2.read()));
}

void a0_conv2d_1::thread_tmp_1423_fu_147996_p2() {
    tmp_1423_fu_147996_p2 = (!tmp_1413_fu_147891_p2.read().is_01() || !tmp_1412_fu_147885_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1413_fu_147891_p2.read()) + sc_biguint<15>(tmp_1412_fu_147885_p2.read()));
}

void a0_conv2d_1::thread_tmp_1424_fu_148008_p4() {
    tmp_1424_fu_148008_p4 = r_V_81_52_fu_187011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1425_fu_148017_p4() {
    tmp_1425_fu_148017_p4 = r_V_89_51_fu_186787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1426_fu_148032_p4() {
    tmp_1426_fu_148032_p4 = r_V_83_52_fu_187027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1427_fu_148041_p4() {
    tmp_1427_fu_148041_p4 = r_V_82_52_fu_187019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1428_fu_148056_p2() {
    tmp_1428_fu_148056_p2 = (!tmp_1424_fu_148008_p4.read().is_01() || !tmp_1425_fu_148017_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1424_fu_148008_p4.read()) + sc_biguint<15>(tmp_1425_fu_148017_p4.read()));
}

void a0_conv2d_1::thread_tmp_1429_fu_148062_p2() {
    tmp_1429_fu_148062_p2 = (!tmp_1426_fu_148032_p4.read().is_01() || !tmp_1427_fu_148041_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1426_fu_148032_p4.read()) + sc_biguint<15>(tmp_1427_fu_148041_p4.read()));
}

void a0_conv2d_1::thread_tmp_142_fu_138909_p2() {
    tmp_142_fu_138909_p2 = (!tmp_141_fu_138894_p4.read().is_01() || !tmp_140_fu_138885_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_141_fu_138894_p4.read()) + sc_biguint<15>(tmp_140_fu_138885_p4.read()));
}

void a0_conv2d_1::thread_tmp_1430_fu_148074_p4() {
    tmp_1430_fu_148074_p4 = r_V_85_52_fu_187043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1431_fu_148083_p4() {
    tmp_1431_fu_148083_p4 = r_V_84_52_fu_187035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1432_fu_148098_p4() {
    tmp_1432_fu_148098_p4 = r_V_87_52_fu_187059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1433_fu_148107_p4() {
    tmp_1433_fu_148107_p4 = r_V_88_52_fu_187067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1434_fu_148122_p2() {
    tmp_1434_fu_148122_p2 = (!tmp_1433_fu_148107_p4.read().is_01() || !tmp_1432_fu_148098_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1433_fu_148107_p4.read()) + sc_biguint<15>(tmp_1432_fu_148098_p4.read()));
}

void a0_conv2d_1::thread_tmp_1435_fu_148128_p4() {
    tmp_1435_fu_148128_p4 = r_V_86_52_fu_187051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1436_fu_148143_p2() {
    tmp_1436_fu_148143_p2 = (!tmp_1430_fu_148074_p4.read().is_01() || !tmp_1431_fu_148083_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1430_fu_148074_p4.read()) + sc_biguint<15>(tmp_1431_fu_148083_p4.read()));
}

void a0_conv2d_1::thread_tmp_1437_fu_148149_p2() {
    tmp_1437_fu_148149_p2 = (!tmp_1434_fu_148122_p2.read().is_01() || !tmp_1435_fu_148128_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1434_fu_148122_p2.read()) + sc_biguint<15>(tmp_1435_fu_148128_p4.read()));
}

void a0_conv2d_1::thread_tmp_1438_fu_148161_p2() {
    tmp_1438_fu_148161_p2 = (!tmp_1437_fu_148149_p2.read().is_01() || !tmp_1436_fu_148143_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1437_fu_148149_p2.read()) + sc_biguint<15>(tmp_1436_fu_148143_p2.read()));
}

void a0_conv2d_1::thread_tmp_1439_fu_148167_p2() {
    tmp_1439_fu_148167_p2 = (!tmp_1429_fu_148062_p2.read().is_01() || !tmp_1428_fu_148056_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1429_fu_148062_p2.read()) + sc_biguint<15>(tmp_1428_fu_148056_p2.read()));
}

void a0_conv2d_1::thread_tmp_143_fu_138915_p4() {
    tmp_143_fu_138915_p4 = r_V_77_56_fu_188131_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1440_fu_148179_p2() {
    tmp_1440_fu_148179_p2 = (!tmp_1422_fu_147990_p2.read().is_01() || !tmp_1423_fu_147996_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1422_fu_147990_p2.read()) + sc_biguint<15>(tmp_1423_fu_147996_p2.read()));
}

void a0_conv2d_1::thread_tmp_1441_fu_148185_p2() {
    tmp_1441_fu_148185_p2 = (!tmp_1438_fu_148161_p2.read().is_01() || !tmp_1439_fu_148167_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1438_fu_148161_p2.read()) + sc_biguint<15>(tmp_1439_fu_148167_p2.read()));
}

void a0_conv2d_1::thread_tmp_1442_fu_148197_p4() {
    tmp_1442_fu_148197_p4 = r_V_81_53_fu_187299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1443_fu_148206_p4() {
    tmp_1443_fu_148206_p4 = r_V_89_52_fu_187075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1444_fu_148221_p4() {
    tmp_1444_fu_148221_p4 = r_V_83_53_fu_187315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1445_fu_148230_p4() {
    tmp_1445_fu_148230_p4 = r_V_82_53_fu_187307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1446_fu_148245_p2() {
    tmp_1446_fu_148245_p2 = (!tmp_1442_fu_148197_p4.read().is_01() || !tmp_1443_fu_148206_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1442_fu_148197_p4.read()) + sc_biguint<15>(tmp_1443_fu_148206_p4.read()));
}

void a0_conv2d_1::thread_tmp_1447_fu_148251_p2() {
    tmp_1447_fu_148251_p2 = (!tmp_1444_fu_148221_p4.read().is_01() || !tmp_1445_fu_148230_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1444_fu_148221_p4.read()) + sc_biguint<15>(tmp_1445_fu_148230_p4.read()));
}

void a0_conv2d_1::thread_tmp_1448_fu_148263_p4() {
    tmp_1448_fu_148263_p4 = r_V_85_53_fu_187331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1449_fu_148272_p4() {
    tmp_1449_fu_148272_p4 = r_V_84_53_fu_187323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_144_fu_138930_p2() {
    tmp_144_fu_138930_p2 = (!tmp_138_fu_138861_p4.read().is_01() || !tmp_139_fu_138870_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_138_fu_138861_p4.read()) + sc_biguint<15>(tmp_139_fu_138870_p4.read()));
}

void a0_conv2d_1::thread_tmp_1450_fu_148287_p4() {
    tmp_1450_fu_148287_p4 = r_V_87_53_fu_187347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1451_fu_148296_p4() {
    tmp_1451_fu_148296_p4 = r_V_88_53_fu_187355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1452_fu_148311_p2() {
    tmp_1452_fu_148311_p2 = (!tmp_1451_fu_148296_p4.read().is_01() || !tmp_1450_fu_148287_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1451_fu_148296_p4.read()) + sc_biguint<15>(tmp_1450_fu_148287_p4.read()));
}

void a0_conv2d_1::thread_tmp_1453_fu_148317_p4() {
    tmp_1453_fu_148317_p4 = r_V_86_53_fu_187339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1454_fu_148332_p2() {
    tmp_1454_fu_148332_p2 = (!tmp_1448_fu_148263_p4.read().is_01() || !tmp_1449_fu_148272_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1448_fu_148263_p4.read()) + sc_biguint<15>(tmp_1449_fu_148272_p4.read()));
}

void a0_conv2d_1::thread_tmp_1455_fu_148338_p2() {
    tmp_1455_fu_148338_p2 = (!tmp_1452_fu_148311_p2.read().is_01() || !tmp_1453_fu_148317_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1452_fu_148311_p2.read()) + sc_biguint<15>(tmp_1453_fu_148317_p4.read()));
}

void a0_conv2d_1::thread_tmp_1456_fu_148350_p2() {
    tmp_1456_fu_148350_p2 = (!tmp_1455_fu_148338_p2.read().is_01() || !tmp_1454_fu_148332_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1455_fu_148338_p2.read()) + sc_biguint<15>(tmp_1454_fu_148332_p2.read()));
}

void a0_conv2d_1::thread_tmp_1457_fu_148356_p2() {
    tmp_1457_fu_148356_p2 = (!tmp_1447_fu_148251_p2.read().is_01() || !tmp_1446_fu_148245_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1447_fu_148251_p2.read()) + sc_biguint<15>(tmp_1446_fu_148245_p2.read()));
}

void a0_conv2d_1::thread_tmp_1458_fu_148368_p4() {
    tmp_1458_fu_148368_p4 = r_V_81_54_fu_187587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1459_fu_148377_p4() {
    tmp_1459_fu_148377_p4 = r_V_89_53_fu_187363_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_145_fu_138936_p2() {
    tmp_145_fu_138936_p2 = (!tmp_142_fu_138909_p2.read().is_01() || !tmp_143_fu_138915_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_142_fu_138909_p2.read()) + sc_biguint<15>(tmp_143_fu_138915_p4.read()));
}

void a0_conv2d_1::thread_tmp_1460_fu_148392_p4() {
    tmp_1460_fu_148392_p4 = r_V_83_54_fu_187603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1461_fu_148401_p4() {
    tmp_1461_fu_148401_p4 = r_V_82_54_fu_187595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1462_fu_148416_p2() {
    tmp_1462_fu_148416_p2 = (!tmp_1458_fu_148368_p4.read().is_01() || !tmp_1459_fu_148377_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1458_fu_148368_p4.read()) + sc_biguint<15>(tmp_1459_fu_148377_p4.read()));
}

void a0_conv2d_1::thread_tmp_1463_fu_148422_p2() {
    tmp_1463_fu_148422_p2 = (!tmp_1460_fu_148392_p4.read().is_01() || !tmp_1461_fu_148401_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1460_fu_148392_p4.read()) + sc_biguint<15>(tmp_1461_fu_148401_p4.read()));
}

void a0_conv2d_1::thread_tmp_1464_fu_148434_p4() {
    tmp_1464_fu_148434_p4 = r_V_85_54_fu_187619_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1465_fu_148443_p4() {
    tmp_1465_fu_148443_p4 = r_V_84_54_fu_187611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1466_fu_148458_p4() {
    tmp_1466_fu_148458_p4 = r_V_87_54_fu_187635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1467_fu_148467_p4() {
    tmp_1467_fu_148467_p4 = r_V_88_54_fu_187643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1468_fu_148482_p2() {
    tmp_1468_fu_148482_p2 = (!tmp_1467_fu_148467_p4.read().is_01() || !tmp_1466_fu_148458_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1467_fu_148467_p4.read()) + sc_biguint<15>(tmp_1466_fu_148458_p4.read()));
}

void a0_conv2d_1::thread_tmp_1469_fu_148488_p4() {
    tmp_1469_fu_148488_p4 = r_V_86_54_fu_187627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_146_fu_138948_p2() {
    tmp_146_fu_138948_p2 = (!tmp_145_fu_138936_p2.read().is_01() || !tmp_144_fu_138930_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_145_fu_138936_p2.read()) + sc_biguint<15>(tmp_144_fu_138930_p2.read()));
}

void a0_conv2d_1::thread_tmp_1470_fu_148503_p2() {
    tmp_1470_fu_148503_p2 = (!tmp_1464_fu_148434_p4.read().is_01() || !tmp_1465_fu_148443_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1464_fu_148434_p4.read()) + sc_biguint<15>(tmp_1465_fu_148443_p4.read()));
}

void a0_conv2d_1::thread_tmp_1471_fu_148509_p2() {
    tmp_1471_fu_148509_p2 = (!tmp_1468_fu_148482_p2.read().is_01() || !tmp_1469_fu_148488_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1468_fu_148482_p2.read()) + sc_biguint<15>(tmp_1469_fu_148488_p4.read()));
}

void a0_conv2d_1::thread_tmp_1472_fu_148521_p2() {
    tmp_1472_fu_148521_p2 = (!tmp_1471_fu_148509_p2.read().is_01() || !tmp_1470_fu_148503_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1471_fu_148509_p2.read()) + sc_biguint<15>(tmp_1470_fu_148503_p2.read()));
}

void a0_conv2d_1::thread_tmp_1473_fu_148527_p2() {
    tmp_1473_fu_148527_p2 = (!tmp_1463_fu_148422_p2.read().is_01() || !tmp_1462_fu_148416_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1463_fu_148422_p2.read()) + sc_biguint<15>(tmp_1462_fu_148416_p2.read()));
}

void a0_conv2d_1::thread_tmp_1474_fu_148539_p2() {
    tmp_1474_fu_148539_p2 = (!tmp_1456_fu_148350_p2.read().is_01() || !tmp_1457_fu_148356_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1456_fu_148350_p2.read()) + sc_biguint<15>(tmp_1457_fu_148356_p2.read()));
}

void a0_conv2d_1::thread_tmp_1475_fu_148545_p2() {
    tmp_1475_fu_148545_p2 = (!tmp_1472_fu_148521_p2.read().is_01() || !tmp_1473_fu_148527_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1472_fu_148521_p2.read()) + sc_biguint<15>(tmp_1473_fu_148527_p2.read()));
}

void a0_conv2d_1::thread_tmp_1476_fu_148551_p2() {
    tmp_1476_fu_148551_p2 = (!tmp_1475_fu_148545_p2.read().is_01() || !tmp_1474_fu_148539_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1475_fu_148545_p2.read()) + sc_biguint<15>(tmp_1474_fu_148539_p2.read()));
}

void a0_conv2d_1::thread_tmp_1477_fu_169970_p2() {
    tmp_1477_fu_169970_p2 = (!tmp_1441_reg_227401.read().is_01() || !tmp_1440_reg_227396.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1441_reg_227401.read()) + sc_biguint<15>(tmp_1440_reg_227396.read()));
}

void a0_conv2d_1::thread_tmp_1478_fu_169979_p2() {
    tmp_1478_fu_169979_p2 = (!tmp_1406_reg_227386.read().is_01() || !tmp_1407_reg_227391.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1406_reg_227386.read()) + sc_biguint<15>(tmp_1407_reg_227391.read()));
}

void a0_conv2d_1::thread_tmp_1479_fu_169983_p2() {
    tmp_1479_fu_169983_p2 = (!tmp_1476_reg_227421.read().is_01() || !tmp_1477_fu_169970_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1476_reg_227421.read()) + sc_biguint<15>(tmp_1477_fu_169970_p2.read()));
}

void a0_conv2d_1::thread_tmp_147_fu_138954_p2() {
    tmp_147_fu_138954_p2 = (!tmp_137_fu_138849_p2.read().is_01() || !tmp_136_fu_138843_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_137_fu_138849_p2.read()) + sc_biguint<15>(tmp_136_fu_138843_p2.read()));
}

void a0_conv2d_1::thread_tmp_1480_fu_169994_p2() {
    tmp_1480_fu_169994_p2 = (!tmp_1479_fu_169983_p2.read().is_01() || !tmp_1478_fu_169979_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1479_fu_169983_p2.read()) + sc_biguint<15>(tmp_1478_fu_169979_p2.read()));
}

void a0_conv2d_1::thread_tmp_1481_fu_170000_p2() {
    tmp_1481_fu_170000_p2 = (!tmp_1337_fu_169947_p2.read().is_01() || !tmp_1336_fu_169943_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1337_fu_169947_p2.read()) + sc_biguint<15>(tmp_1336_fu_169943_p2.read()));
}

void a0_conv2d_1::thread_tmp_1483_fu_148557_p4() {
    tmp_1483_fu_148557_p4 = r_V_89_30_fu_183907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1484_fu_148571_p4() {
    tmp_1484_fu_148571_p4 = r_V_83_31_fu_183987_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1486_fu_148585_p2() {
    tmp_1486_fu_148585_p2 = (!tmp_1482_reg_223141.read().is_01() || !tmp_1483_fu_148557_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1482_reg_223141.read()) + sc_biguint<15>(tmp_1483_fu_148557_p4.read()));
}

void a0_conv2d_1::thread_tmp_1487_fu_148590_p2() {
    tmp_1487_fu_148590_p2 = (!tmp_1484_fu_148571_p4.read().is_01() || !tmp_1485_reg_223146.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1484_fu_148571_p4.read()) + sc_biguint<15>(tmp_1485_reg_223146.read()));
}

void a0_conv2d_1::thread_tmp_148_fu_138966_p2() {
    tmp_148_fu_138966_p2 = (!tmp_130_fu_138777_p2.read().is_01() || !tmp_131_fu_138783_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_130_fu_138777_p2.read()) + sc_biguint<15>(tmp_131_fu_138783_p2.read()));
}

void a0_conv2d_1::thread_tmp_1492_fu_148605_p2() {
    tmp_1492_fu_148605_p2 = (!tmp_1491_reg_223171.read().is_01() || !tmp_1490_reg_223166.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1491_reg_223171.read()) + sc_biguint<15>(tmp_1490_reg_223166.read()));
}

void a0_conv2d_1::thread_tmp_1493_fu_148609_p4() {
    tmp_1493_fu_148609_p4 = r_V_86_31_fu_183995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1494_fu_148624_p2() {
    tmp_1494_fu_148624_p2 = (!tmp_1488_reg_223151.read().is_01() || !tmp_1489_reg_223156.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1488_reg_223151.read()) + sc_biguint<15>(tmp_1489_reg_223156.read()));
}

void a0_conv2d_1::thread_tmp_1495_fu_148628_p2() {
    tmp_1495_fu_148628_p2 = (!tmp_1492_fu_148605_p2.read().is_01() || !tmp_1493_fu_148609_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1492_fu_148605_p2.read()) + sc_biguint<15>(tmp_1493_fu_148609_p4.read()));
}

void a0_conv2d_1::thread_tmp_1496_fu_148639_p2() {
    tmp_1496_fu_148639_p2 = (!tmp_1495_fu_148628_p2.read().is_01() || !tmp_1494_fu_148624_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1495_fu_148628_p2.read()) + sc_biguint<15>(tmp_1494_fu_148624_p2.read()));
}

void a0_conv2d_1::thread_tmp_1497_fu_148645_p2() {
    tmp_1497_fu_148645_p2 = (!tmp_1487_fu_148590_p2.read().is_01() || !tmp_1486_fu_148585_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1487_fu_148590_p2.read()) + sc_biguint<15>(tmp_1486_fu_148585_p2.read()));
}

void a0_conv2d_1::thread_tmp_1499_fu_148657_p4() {
    tmp_1499_fu_148657_p4 = r_V_89_31_fu_184003_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_149_fu_138972_p2() {
    tmp_149_fu_138972_p2 = (!tmp_146_fu_138948_p2.read().is_01() || !tmp_147_fu_138954_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_146_fu_138948_p2.read()) + sc_biguint<15>(tmp_147_fu_138954_p2.read()));
}

void a0_conv2d_1::thread_tmp_14_fu_72250_p2() {
    tmp_14_fu_72250_p2 = (!p_shl_cast_fu_72234_p1.read().is_01() || !p_shl1_cast_fu_72246_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl_cast_fu_72234_p1.read()) + sc_biguint<16>(p_shl1_cast_fu_72246_p1.read()));
}

void a0_conv2d_1::thread_tmp_1500_fu_148671_p4() {
    tmp_1500_fu_148671_p4 = r_V_83_32_fu_184083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1502_fu_148685_p2() {
    tmp_1502_fu_148685_p2 = (!tmp_1498_reg_223176.read().is_01() || !tmp_1499_fu_148657_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1498_reg_223176.read()) + sc_biguint<15>(tmp_1499_fu_148657_p4.read()));
}

void a0_conv2d_1::thread_tmp_1503_fu_148690_p2() {
    tmp_1503_fu_148690_p2 = (!tmp_1500_fu_148671_p4.read().is_01() || !tmp_1501_reg_223181.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1500_fu_148671_p4.read()) + sc_biguint<15>(tmp_1501_reg_223181.read()));
}

void a0_conv2d_1::thread_tmp_1508_fu_148701_p2() {
    tmp_1508_fu_148701_p2 = (!tmp_1507_reg_223206.read().is_01() || !tmp_1506_reg_223201.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1507_reg_223206.read()) + sc_biguint<15>(tmp_1506_reg_223201.read()));
}

void a0_conv2d_1::thread_tmp_1509_fu_148705_p4() {
    tmp_1509_fu_148705_p4 = r_V_86_32_fu_184091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_150_fu_138984_p4() {
    tmp_150_fu_138984_p4 = r_V_72_57_fu_188379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1510_fu_148719_p2() {
    tmp_1510_fu_148719_p2 = (!tmp_1504_reg_223186.read().is_01() || !tmp_1505_reg_223191.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1504_reg_223186.read()) + sc_biguint<15>(tmp_1505_reg_223191.read()));
}

void a0_conv2d_1::thread_tmp_1511_fu_148723_p2() {
    tmp_1511_fu_148723_p2 = (!tmp_1508_fu_148701_p2.read().is_01() || !tmp_1509_fu_148705_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1508_fu_148701_p2.read()) + sc_biguint<15>(tmp_1509_fu_148705_p4.read()));
}

void a0_conv2d_1::thread_tmp_1512_fu_148734_p2() {
    tmp_1512_fu_148734_p2 = (!tmp_1511_fu_148723_p2.read().is_01() || !tmp_1510_fu_148719_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1511_fu_148723_p2.read()) + sc_biguint<15>(tmp_1510_fu_148719_p2.read()));
}

void a0_conv2d_1::thread_tmp_1513_fu_148740_p2() {
    tmp_1513_fu_148740_p2 = (!tmp_1503_fu_148690_p2.read().is_01() || !tmp_1502_fu_148685_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1503_fu_148690_p2.read()) + sc_biguint<15>(tmp_1502_fu_148685_p2.read()));
}

void a0_conv2d_1::thread_tmp_1514_fu_148752_p2() {
    tmp_1514_fu_148752_p2 = (!tmp_1496_fu_148639_p2.read().is_01() || !tmp_1497_fu_148645_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1496_fu_148639_p2.read()) + sc_biguint<15>(tmp_1497_fu_148645_p2.read()));
}

void a0_conv2d_1::thread_tmp_1515_fu_148758_p2() {
    tmp_1515_fu_148758_p2 = (!tmp_1512_fu_148734_p2.read().is_01() || !tmp_1513_fu_148740_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1512_fu_148734_p2.read()) + sc_biguint<15>(tmp_1513_fu_148740_p2.read()));
}

void a0_conv2d_1::thread_tmp_1517_fu_148770_p4() {
    tmp_1517_fu_148770_p4 = r_V_89_32_fu_184099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1518_fu_148784_p4() {
    tmp_1518_fu_148784_p4 = r_V_83_33_fu_184179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_151_fu_138993_p4() {
    tmp_151_fu_138993_p4 = r_V_80_56_fu_188155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1520_fu_148798_p2() {
    tmp_1520_fu_148798_p2 = (!tmp_1516_reg_223216.read().is_01() || !tmp_1517_fu_148770_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1516_reg_223216.read()) + sc_biguint<15>(tmp_1517_fu_148770_p4.read()));
}

void a0_conv2d_1::thread_tmp_1521_fu_148803_p2() {
    tmp_1521_fu_148803_p2 = (!tmp_1518_fu_148784_p4.read().is_01() || !tmp_1519_reg_223221.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1518_fu_148784_p4.read()) + sc_biguint<15>(tmp_1519_reg_223221.read()));
}

void a0_conv2d_1::thread_tmp_1526_fu_148818_p2() {
    tmp_1526_fu_148818_p2 = (!tmp_1525_reg_223246.read().is_01() || !tmp_1524_reg_223241.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1525_reg_223246.read()) + sc_biguint<15>(tmp_1524_reg_223241.read()));
}

void a0_conv2d_1::thread_tmp_1527_fu_148822_p4() {
    tmp_1527_fu_148822_p4 = r_V_86_33_fu_184187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1528_fu_148837_p2() {
    tmp_1528_fu_148837_p2 = (!tmp_1522_reg_223226.read().is_01() || !tmp_1523_reg_223231.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1522_reg_223226.read()) + sc_biguint<15>(tmp_1523_reg_223231.read()));
}

void a0_conv2d_1::thread_tmp_1529_fu_148841_p2() {
    tmp_1529_fu_148841_p2 = (!tmp_1526_fu_148818_p2.read().is_01() || !tmp_1527_fu_148822_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1526_fu_148818_p2.read()) + sc_biguint<15>(tmp_1527_fu_148822_p4.read()));
}

void a0_conv2d_1::thread_tmp_152_fu_139008_p4() {
    tmp_152_fu_139008_p4 = r_V_74_57_fu_188395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1530_fu_148852_p2() {
    tmp_1530_fu_148852_p2 = (!tmp_1529_fu_148841_p2.read().is_01() || !tmp_1528_fu_148837_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1529_fu_148841_p2.read()) + sc_biguint<15>(tmp_1528_fu_148837_p2.read()));
}

void a0_conv2d_1::thread_tmp_1531_fu_148858_p2() {
    tmp_1531_fu_148858_p2 = (!tmp_1521_fu_148803_p2.read().is_01() || !tmp_1520_fu_148798_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1521_fu_148803_p2.read()) + sc_biguint<15>(tmp_1520_fu_148798_p2.read()));
}

void a0_conv2d_1::thread_tmp_1533_fu_148870_p4() {
    tmp_1533_fu_148870_p4 = r_V_89_33_fu_184195_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1534_fu_148884_p4() {
    tmp_1534_fu_148884_p4 = r_V_83_34_fu_184275_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1536_fu_148898_p2() {
    tmp_1536_fu_148898_p2 = (!tmp_1532_reg_223251.read().is_01() || !tmp_1533_fu_148870_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1532_reg_223251.read()) + sc_biguint<15>(tmp_1533_fu_148870_p4.read()));
}

void a0_conv2d_1::thread_tmp_1537_fu_148903_p2() {
    tmp_1537_fu_148903_p2 = (!tmp_1534_fu_148884_p4.read().is_01() || !tmp_1535_reg_223256.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1534_fu_148884_p4.read()) + sc_biguint<15>(tmp_1535_reg_223256.read()));
}

void a0_conv2d_1::thread_tmp_153_fu_139017_p4() {
    tmp_153_fu_139017_p4 = r_V_73_57_fu_188387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1542_fu_148918_p2() {
    tmp_1542_fu_148918_p2 = (!tmp_1541_reg_223281.read().is_01() || !tmp_1540_reg_223276.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1541_reg_223281.read()) + sc_biguint<15>(tmp_1540_reg_223276.read()));
}

void a0_conv2d_1::thread_tmp_1543_fu_148922_p4() {
    tmp_1543_fu_148922_p4 = r_V_86_34_fu_184283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1544_fu_148937_p2() {
    tmp_1544_fu_148937_p2 = (!tmp_1538_reg_223261.read().is_01() || !tmp_1539_reg_223266.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1538_reg_223261.read()) + sc_biguint<15>(tmp_1539_reg_223266.read()));
}

void a0_conv2d_1::thread_tmp_1545_fu_148941_p2() {
    tmp_1545_fu_148941_p2 = (!tmp_1542_fu_148918_p2.read().is_01() || !tmp_1543_fu_148922_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1542_fu_148918_p2.read()) + sc_biguint<15>(tmp_1543_fu_148922_p4.read()));
}

void a0_conv2d_1::thread_tmp_1546_fu_148952_p2() {
    tmp_1546_fu_148952_p2 = (!tmp_1545_fu_148941_p2.read().is_01() || !tmp_1544_fu_148937_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1545_fu_148941_p2.read()) + sc_biguint<15>(tmp_1544_fu_148937_p2.read()));
}

void a0_conv2d_1::thread_tmp_1547_fu_148958_p2() {
    tmp_1547_fu_148958_p2 = (!tmp_1537_fu_148903_p2.read().is_01() || !tmp_1536_fu_148898_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1537_fu_148903_p2.read()) + sc_biguint<15>(tmp_1536_fu_148898_p2.read()));
}

void a0_conv2d_1::thread_tmp_1548_fu_148970_p2() {
    tmp_1548_fu_148970_p2 = (!tmp_1530_fu_148852_p2.read().is_01() || !tmp_1531_fu_148858_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1530_fu_148852_p2.read()) + sc_biguint<15>(tmp_1531_fu_148858_p2.read()));
}

void a0_conv2d_1::thread_tmp_1549_fu_148976_p2() {
    tmp_1549_fu_148976_p2 = (!tmp_1546_fu_148952_p2.read().is_01() || !tmp_1547_fu_148958_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1546_fu_148952_p2.read()) + sc_biguint<15>(tmp_1547_fu_148958_p2.read()));
}

void a0_conv2d_1::thread_tmp_154_fu_139032_p2() {
    tmp_154_fu_139032_p2 = (!tmp_150_fu_138984_p4.read().is_01() || !tmp_151_fu_138993_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_150_fu_138984_p4.read()) + sc_biguint<15>(tmp_151_fu_138993_p4.read()));
}

void a0_conv2d_1::thread_tmp_1550_fu_148982_p2() {
    tmp_1550_fu_148982_p2 = (!tmp_1549_fu_148976_p2.read().is_01() || !tmp_1548_fu_148970_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1549_fu_148976_p2.read()) + sc_biguint<15>(tmp_1548_fu_148970_p2.read()));
}

void a0_conv2d_1::thread_tmp_1551_fu_170016_p2() {
    tmp_1551_fu_170016_p2 = (!tmp_1515_reg_227431.read().is_01() || !tmp_1514_reg_227426.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1515_reg_227431.read()) + sc_biguint<15>(tmp_1514_reg_227426.read()));
}

void a0_conv2d_1::thread_tmp_1553_fu_148988_p4() {
    tmp_1553_fu_148988_p4 = r_V_89_34_fu_184291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1554_fu_149002_p4() {
    tmp_1554_fu_149002_p4 = r_V_83_35_fu_184371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1556_fu_149016_p2() {
    tmp_1556_fu_149016_p2 = (!tmp_1552_reg_223286.read().is_01() || !tmp_1553_fu_148988_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1552_reg_223286.read()) + sc_biguint<15>(tmp_1553_fu_148988_p4.read()));
}

void a0_conv2d_1::thread_tmp_1557_fu_149021_p2() {
    tmp_1557_fu_149021_p2 = (!tmp_1554_fu_149002_p4.read().is_01() || !tmp_1555_reg_223291.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1554_fu_149002_p4.read()) + sc_biguint<15>(tmp_1555_reg_223291.read()));
}

void a0_conv2d_1::thread_tmp_155_fu_139038_p2() {
    tmp_155_fu_139038_p2 = (!tmp_152_fu_139008_p4.read().is_01() || !tmp_153_fu_139017_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_152_fu_139008_p4.read()) + sc_biguint<15>(tmp_153_fu_139017_p4.read()));
}

void a0_conv2d_1::thread_tmp_1562_fu_149036_p2() {
    tmp_1562_fu_149036_p2 = (!tmp_1561_reg_223316.read().is_01() || !tmp_1560_reg_223311.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1561_reg_223316.read()) + sc_biguint<15>(tmp_1560_reg_223311.read()));
}

void a0_conv2d_1::thread_tmp_1563_fu_149040_p4() {
    tmp_1563_fu_149040_p4 = r_V_86_35_fu_184379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1564_fu_149055_p2() {
    tmp_1564_fu_149055_p2 = (!tmp_1558_reg_223296.read().is_01() || !tmp_1559_reg_223301.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1558_reg_223296.read()) + sc_biguint<15>(tmp_1559_reg_223301.read()));
}

void a0_conv2d_1::thread_tmp_1565_fu_149059_p2() {
    tmp_1565_fu_149059_p2 = (!tmp_1562_fu_149036_p2.read().is_01() || !tmp_1563_fu_149040_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1562_fu_149036_p2.read()) + sc_biguint<15>(tmp_1563_fu_149040_p4.read()));
}

void a0_conv2d_1::thread_tmp_1566_fu_149070_p2() {
    tmp_1566_fu_149070_p2 = (!tmp_1565_fu_149059_p2.read().is_01() || !tmp_1564_fu_149055_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1565_fu_149059_p2.read()) + sc_biguint<15>(tmp_1564_fu_149055_p2.read()));
}

void a0_conv2d_1::thread_tmp_1567_fu_149076_p2() {
    tmp_1567_fu_149076_p2 = (!tmp_1557_fu_149021_p2.read().is_01() || !tmp_1556_fu_149016_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1557_fu_149021_p2.read()) + sc_biguint<15>(tmp_1556_fu_149016_p2.read()));
}

void a0_conv2d_1::thread_tmp_1569_fu_149088_p4() {
    tmp_1569_fu_149088_p4 = r_V_89_35_fu_184387_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_156_fu_139050_p4() {
    tmp_156_fu_139050_p4 = r_V_76_57_fu_188411_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1570_fu_149102_p4() {
    tmp_1570_fu_149102_p4 = r_V_83_36_fu_184467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1572_fu_149116_p2() {
    tmp_1572_fu_149116_p2 = (!tmp_1568_reg_223321.read().is_01() || !tmp_1569_fu_149088_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1568_reg_223321.read()) + sc_biguint<15>(tmp_1569_fu_149088_p4.read()));
}

void a0_conv2d_1::thread_tmp_1573_fu_149121_p2() {
    tmp_1573_fu_149121_p2 = (!tmp_1570_fu_149102_p4.read().is_01() || !tmp_1571_reg_223326.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1570_fu_149102_p4.read()) + sc_biguint<15>(tmp_1571_reg_223326.read()));
}

void a0_conv2d_1::thread_tmp_1578_fu_149132_p2() {
    tmp_1578_fu_149132_p2 = (!tmp_1577_reg_223351.read().is_01() || !tmp_1576_reg_223346.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1577_reg_223351.read()) + sc_biguint<15>(tmp_1576_reg_223346.read()));
}

void a0_conv2d_1::thread_tmp_1579_fu_149136_p4() {
    tmp_1579_fu_149136_p4 = r_V_86_36_fu_184475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_157_fu_139059_p4() {
    tmp_157_fu_139059_p4 = r_V_75_57_fu_188403_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1580_fu_149150_p2() {
    tmp_1580_fu_149150_p2 = (!tmp_1574_reg_223331.read().is_01() || !tmp_1575_reg_223336.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1574_reg_223331.read()) + sc_biguint<15>(tmp_1575_reg_223336.read()));
}

void a0_conv2d_1::thread_tmp_1581_fu_149154_p2() {
    tmp_1581_fu_149154_p2 = (!tmp_1578_fu_149132_p2.read().is_01() || !tmp_1579_fu_149136_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1578_fu_149132_p2.read()) + sc_biguint<15>(tmp_1579_fu_149136_p4.read()));
}

void a0_conv2d_1::thread_tmp_1582_fu_149165_p2() {
    tmp_1582_fu_149165_p2 = (!tmp_1581_fu_149154_p2.read().is_01() || !tmp_1580_fu_149150_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1581_fu_149154_p2.read()) + sc_biguint<15>(tmp_1580_fu_149150_p2.read()));
}

void a0_conv2d_1::thread_tmp_1583_fu_149171_p2() {
    tmp_1583_fu_149171_p2 = (!tmp_1573_fu_149121_p2.read().is_01() || !tmp_1572_fu_149116_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1573_fu_149121_p2.read()) + sc_biguint<15>(tmp_1572_fu_149116_p2.read()));
}

void a0_conv2d_1::thread_tmp_1584_fu_149183_p2() {
    tmp_1584_fu_149183_p2 = (!tmp_1566_fu_149070_p2.read().is_01() || !tmp_1567_fu_149076_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1566_fu_149070_p2.read()) + sc_biguint<15>(tmp_1567_fu_149076_p2.read()));
}

void a0_conv2d_1::thread_tmp_1585_fu_149189_p2() {
    tmp_1585_fu_149189_p2 = (!tmp_1582_fu_149165_p2.read().is_01() || !tmp_1583_fu_149171_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1582_fu_149165_p2.read()) + sc_biguint<15>(tmp_1583_fu_149171_p2.read()));
}

void a0_conv2d_1::thread_tmp_1587_fu_149201_p4() {
    tmp_1587_fu_149201_p4 = r_V_89_36_fu_184483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1588_fu_149215_p4() {
    tmp_1588_fu_149215_p4 = r_V_83_37_fu_184563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_158_fu_139074_p4() {
    tmp_158_fu_139074_p4 = r_V_78_57_fu_188427_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1590_fu_149229_p2() {
    tmp_1590_fu_149229_p2 = (!tmp_1586_reg_223361.read().is_01() || !tmp_1587_fu_149201_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1586_reg_223361.read()) + sc_biguint<15>(tmp_1587_fu_149201_p4.read()));
}

void a0_conv2d_1::thread_tmp_1591_fu_149234_p2() {
    tmp_1591_fu_149234_p2 = (!tmp_1588_fu_149215_p4.read().is_01() || !tmp_1589_reg_223366.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1588_fu_149215_p4.read()) + sc_biguint<15>(tmp_1589_reg_223366.read()));
}

void a0_conv2d_1::thread_tmp_1596_fu_149249_p2() {
    tmp_1596_fu_149249_p2 = (!tmp_1595_reg_223391.read().is_01() || !tmp_1594_reg_223386.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1595_reg_223391.read()) + sc_biguint<15>(tmp_1594_reg_223386.read()));
}

void a0_conv2d_1::thread_tmp_1597_fu_149253_p4() {
    tmp_1597_fu_149253_p4 = r_V_86_37_fu_184571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1598_fu_149268_p2() {
    tmp_1598_fu_149268_p2 = (!tmp_1592_reg_223371.read().is_01() || !tmp_1593_reg_223376.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1592_reg_223371.read()) + sc_biguint<15>(tmp_1593_reg_223376.read()));
}

void a0_conv2d_1::thread_tmp_1599_fu_149272_p2() {
    tmp_1599_fu_149272_p2 = (!tmp_1596_fu_149249_p2.read().is_01() || !tmp_1597_fu_149253_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1596_fu_149249_p2.read()) + sc_biguint<15>(tmp_1597_fu_149253_p4.read()));
}

void a0_conv2d_1::thread_tmp_159_fu_139083_p4() {
    tmp_159_fu_139083_p4 = r_V_79_57_fu_188435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1600_fu_149283_p2() {
    tmp_1600_fu_149283_p2 = (!tmp_1599_fu_149272_p2.read().is_01() || !tmp_1598_fu_149268_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1599_fu_149272_p2.read()) + sc_biguint<15>(tmp_1598_fu_149268_p2.read()));
}

void a0_conv2d_1::thread_tmp_1601_fu_149289_p2() {
    tmp_1601_fu_149289_p2 = (!tmp_1591_fu_149234_p2.read().is_01() || !tmp_1590_fu_149229_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1591_fu_149234_p2.read()) + sc_biguint<15>(tmp_1590_fu_149229_p2.read()));
}

void a0_conv2d_1::thread_tmp_1603_fu_149301_p4() {
    tmp_1603_fu_149301_p4 = r_V_89_37_fu_184579_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1604_fu_149315_p4() {
    tmp_1604_fu_149315_p4 = r_V_83_38_fu_184659_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1606_fu_149329_p2() {
    tmp_1606_fu_149329_p2 = (!tmp_1602_reg_223396.read().is_01() || !tmp_1603_fu_149301_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1602_reg_223396.read()) + sc_biguint<15>(tmp_1603_fu_149301_p4.read()));
}

void a0_conv2d_1::thread_tmp_1607_fu_149334_p2() {
    tmp_1607_fu_149334_p2 = (!tmp_1604_fu_149315_p4.read().is_01() || !tmp_1605_reg_223401.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1604_fu_149315_p4.read()) + sc_biguint<15>(tmp_1605_reg_223401.read()));
}

void a0_conv2d_1::thread_tmp_160_fu_139098_p2() {
    tmp_160_fu_139098_p2 = (!tmp_159_fu_139083_p4.read().is_01() || !tmp_158_fu_139074_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_159_fu_139083_p4.read()) + sc_biguint<15>(tmp_158_fu_139074_p4.read()));
}

void a0_conv2d_1::thread_tmp_1612_fu_149345_p2() {
    tmp_1612_fu_149345_p2 = (!tmp_1611_reg_223426.read().is_01() || !tmp_1610_reg_223421.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1611_reg_223426.read()) + sc_biguint<15>(tmp_1610_reg_223421.read()));
}

void a0_conv2d_1::thread_tmp_1613_fu_149349_p4() {
    tmp_1613_fu_149349_p4 = r_V_86_38_fu_184667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1614_fu_149363_p2() {
    tmp_1614_fu_149363_p2 = (!tmp_1608_reg_223406.read().is_01() || !tmp_1609_reg_223411.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1608_reg_223406.read()) + sc_biguint<15>(tmp_1609_reg_223411.read()));
}

void a0_conv2d_1::thread_tmp_1615_fu_149367_p2() {
    tmp_1615_fu_149367_p2 = (!tmp_1612_fu_149345_p2.read().is_01() || !tmp_1613_fu_149349_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1612_fu_149345_p2.read()) + sc_biguint<15>(tmp_1613_fu_149349_p4.read()));
}

void a0_conv2d_1::thread_tmp_1616_fu_149378_p2() {
    tmp_1616_fu_149378_p2 = (!tmp_1615_fu_149367_p2.read().is_01() || !tmp_1614_fu_149363_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1615_fu_149367_p2.read()) + sc_biguint<15>(tmp_1614_fu_149363_p2.read()));
}

void a0_conv2d_1::thread_tmp_1617_fu_149384_p2() {
    tmp_1617_fu_149384_p2 = (!tmp_1607_fu_149334_p2.read().is_01() || !tmp_1606_fu_149329_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1607_fu_149334_p2.read()) + sc_biguint<15>(tmp_1606_fu_149329_p2.read()));
}

void a0_conv2d_1::thread_tmp_1618_fu_149396_p2() {
    tmp_1618_fu_149396_p2 = (!tmp_1600_fu_149283_p2.read().is_01() || !tmp_1601_fu_149289_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1600_fu_149283_p2.read()) + sc_biguint<15>(tmp_1601_fu_149289_p2.read()));
}

void a0_conv2d_1::thread_tmp_1619_fu_149402_p2() {
    tmp_1619_fu_149402_p2 = (!tmp_1616_fu_149378_p2.read().is_01() || !tmp_1617_fu_149384_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1616_fu_149378_p2.read()) + sc_biguint<15>(tmp_1617_fu_149384_p2.read()));
}

void a0_conv2d_1::thread_tmp_161_fu_139104_p4() {
    tmp_161_fu_139104_p4 = r_V_77_57_fu_188419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1620_fu_149414_p2() {
    tmp_1620_fu_149414_p2 = (!tmp_1619_fu_149402_p2.read().is_01() || !tmp_1618_fu_149396_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1619_fu_149402_p2.read()) + sc_biguint<15>(tmp_1618_fu_149396_p2.read()));
}

void a0_conv2d_1::thread_tmp_1621_fu_170025_p2() {
    tmp_1621_fu_170025_p2 = (!tmp_1585_reg_227461.read().is_01() || !tmp_1584_reg_227456.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1585_reg_227461.read()) + sc_biguint<15>(tmp_1584_reg_227456.read()));
}

void a0_conv2d_1::thread_tmp_1622_fu_170033_p2() {
    tmp_1622_fu_170033_p2 = (!tmp_1550_reg_227451.read().is_01() || !tmp_1551_fu_170016_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1550_reg_227451.read()) + sc_biguint<15>(tmp_1551_fu_170016_p2.read()));
}

void a0_conv2d_1::thread_tmp_1623_fu_170038_p2() {
    tmp_1623_fu_170038_p2 = (!tmp_1620_reg_227476.read().is_01() || !tmp_1621_fu_170025_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1620_reg_227476.read()) + sc_biguint<15>(tmp_1621_fu_170025_p2.read()));
}

void a0_conv2d_1::thread_tmp_1625_fu_149420_p4() {
    tmp_1625_fu_149420_p4 = r_V_89_38_fu_184675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1626_fu_149434_p4() {
    tmp_1626_fu_149434_p4 = r_V_83_39_fu_184755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1628_fu_149448_p2() {
    tmp_1628_fu_149448_p2 = (!tmp_1624_reg_223436.read().is_01() || !tmp_1625_fu_149420_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1624_reg_223436.read()) + sc_biguint<15>(tmp_1625_fu_149420_p4.read()));
}

void a0_conv2d_1::thread_tmp_1629_fu_149453_p2() {
    tmp_1629_fu_149453_p2 = (!tmp_1626_fu_149434_p4.read().is_01() || !tmp_1627_reg_223441.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1626_fu_149434_p4.read()) + sc_biguint<15>(tmp_1627_reg_223441.read()));
}

void a0_conv2d_1::thread_tmp_162_fu_139119_p2() {
    tmp_162_fu_139119_p2 = (!tmp_156_fu_139050_p4.read().is_01() || !tmp_157_fu_139059_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_156_fu_139050_p4.read()) + sc_biguint<15>(tmp_157_fu_139059_p4.read()));
}

void a0_conv2d_1::thread_tmp_1634_fu_149468_p2() {
    tmp_1634_fu_149468_p2 = (!tmp_1633_reg_223466.read().is_01() || !tmp_1632_reg_223461.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1633_reg_223466.read()) + sc_biguint<15>(tmp_1632_reg_223461.read()));
}

void a0_conv2d_1::thread_tmp_1635_fu_149472_p4() {
    tmp_1635_fu_149472_p4 = r_V_86_39_fu_184763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1636_fu_149487_p2() {
    tmp_1636_fu_149487_p2 = (!tmp_1630_reg_223446.read().is_01() || !tmp_1631_reg_223451.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1630_reg_223446.read()) + sc_biguint<15>(tmp_1631_reg_223451.read()));
}

void a0_conv2d_1::thread_tmp_1637_fu_149491_p2() {
    tmp_1637_fu_149491_p2 = (!tmp_1634_fu_149468_p2.read().is_01() || !tmp_1635_fu_149472_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1634_fu_149468_p2.read()) + sc_biguint<15>(tmp_1635_fu_149472_p4.read()));
}

void a0_conv2d_1::thread_tmp_1638_fu_149502_p2() {
    tmp_1638_fu_149502_p2 = (!tmp_1637_fu_149491_p2.read().is_01() || !tmp_1636_fu_149487_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1637_fu_149491_p2.read()) + sc_biguint<15>(tmp_1636_fu_149487_p2.read()));
}

void a0_conv2d_1::thread_tmp_1639_fu_149508_p2() {
    tmp_1639_fu_149508_p2 = (!tmp_1629_fu_149453_p2.read().is_01() || !tmp_1628_fu_149448_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1629_fu_149453_p2.read()) + sc_biguint<15>(tmp_1628_fu_149448_p2.read()));
}

void a0_conv2d_1::thread_tmp_163_fu_139125_p2() {
    tmp_163_fu_139125_p2 = (!tmp_160_fu_139098_p2.read().is_01() || !tmp_161_fu_139104_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_160_fu_139098_p2.read()) + sc_biguint<15>(tmp_161_fu_139104_p4.read()));
}

void a0_conv2d_1::thread_tmp_1641_fu_149520_p4() {
    tmp_1641_fu_149520_p4 = r_V_89_39_fu_184771_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1642_fu_149534_p4() {
    tmp_1642_fu_149534_p4 = r_V_83_40_fu_184851_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1644_fu_149548_p2() {
    tmp_1644_fu_149548_p2 = (!tmp_1640_reg_223471.read().is_01() || !tmp_1641_fu_149520_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1640_reg_223471.read()) + sc_biguint<15>(tmp_1641_fu_149520_p4.read()));
}

void a0_conv2d_1::thread_tmp_1645_fu_149553_p2() {
    tmp_1645_fu_149553_p2 = (!tmp_1642_fu_149534_p4.read().is_01() || !tmp_1643_reg_223476.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1642_fu_149534_p4.read()) + sc_biguint<15>(tmp_1643_reg_223476.read()));
}

void a0_conv2d_1::thread_tmp_164_fu_139137_p2() {
    tmp_164_fu_139137_p2 = (!tmp_163_fu_139125_p2.read().is_01() || !tmp_162_fu_139119_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_163_fu_139125_p2.read()) + sc_biguint<15>(tmp_162_fu_139119_p2.read()));
}

void a0_conv2d_1::thread_tmp_1650_fu_149564_p2() {
    tmp_1650_fu_149564_p2 = (!tmp_1649_reg_223501.read().is_01() || !tmp_1648_reg_223496.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1649_reg_223501.read()) + sc_biguint<15>(tmp_1648_reg_223496.read()));
}

void a0_conv2d_1::thread_tmp_1651_fu_149568_p4() {
    tmp_1651_fu_149568_p4 = r_V_86_40_fu_184859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1652_fu_149582_p2() {
    tmp_1652_fu_149582_p2 = (!tmp_1646_reg_223481.read().is_01() || !tmp_1647_reg_223486.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1646_reg_223481.read()) + sc_biguint<15>(tmp_1647_reg_223486.read()));
}

void a0_conv2d_1::thread_tmp_1653_fu_149586_p2() {
    tmp_1653_fu_149586_p2 = (!tmp_1650_fu_149564_p2.read().is_01() || !tmp_1651_fu_149568_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1650_fu_149564_p2.read()) + sc_biguint<15>(tmp_1651_fu_149568_p4.read()));
}

void a0_conv2d_1::thread_tmp_1654_fu_149597_p2() {
    tmp_1654_fu_149597_p2 = (!tmp_1653_fu_149586_p2.read().is_01() || !tmp_1652_fu_149582_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1653_fu_149586_p2.read()) + sc_biguint<15>(tmp_1652_fu_149582_p2.read()));
}

void a0_conv2d_1::thread_tmp_1655_fu_149603_p2() {
    tmp_1655_fu_149603_p2 = (!tmp_1645_fu_149553_p2.read().is_01() || !tmp_1644_fu_149548_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1645_fu_149553_p2.read()) + sc_biguint<15>(tmp_1644_fu_149548_p2.read()));
}

void a0_conv2d_1::thread_tmp_1656_fu_149615_p2() {
    tmp_1656_fu_149615_p2 = (!tmp_1638_fu_149502_p2.read().is_01() || !tmp_1639_fu_149508_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1638_fu_149502_p2.read()) + sc_biguint<15>(tmp_1639_fu_149508_p2.read()));
}

void a0_conv2d_1::thread_tmp_1657_fu_149621_p2() {
    tmp_1657_fu_149621_p2 = (!tmp_1654_fu_149597_p2.read().is_01() || !tmp_1655_fu_149603_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1654_fu_149597_p2.read()) + sc_biguint<15>(tmp_1655_fu_149603_p2.read()));
}

void a0_conv2d_1::thread_tmp_1659_fu_149633_p4() {
    tmp_1659_fu_149633_p4 = r_V_89_40_fu_184867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_165_fu_139143_p2() {
    tmp_165_fu_139143_p2 = (!tmp_155_fu_139038_p2.read().is_01() || !tmp_154_fu_139032_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_155_fu_139038_p2.read()) + sc_biguint<15>(tmp_154_fu_139032_p2.read()));
}

void a0_conv2d_1::thread_tmp_1660_fu_149647_p4() {
    tmp_1660_fu_149647_p4 = r_V_83_41_fu_184947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1662_fu_149661_p2() {
    tmp_1662_fu_149661_p2 = (!tmp_1658_reg_223511.read().is_01() || !tmp_1659_fu_149633_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1658_reg_223511.read()) + sc_biguint<15>(tmp_1659_fu_149633_p4.read()));
}

void a0_conv2d_1::thread_tmp_1663_fu_149666_p2() {
    tmp_1663_fu_149666_p2 = (!tmp_1660_fu_149647_p4.read().is_01() || !tmp_1661_reg_223516.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1660_fu_149647_p4.read()) + sc_biguint<15>(tmp_1661_reg_223516.read()));
}

void a0_conv2d_1::thread_tmp_1668_fu_149681_p2() {
    tmp_1668_fu_149681_p2 = (!tmp_1667_reg_223541.read().is_01() || !tmp_1666_reg_223536.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1667_reg_223541.read()) + sc_biguint<15>(tmp_1666_reg_223536.read()));
}

void a0_conv2d_1::thread_tmp_1669_fu_149685_p4() {
    tmp_1669_fu_149685_p4 = r_V_86_41_fu_184955_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_166_fu_139155_p4() {
    tmp_166_fu_139155_p4 = r_V_72_58_fu_188667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1670_fu_149700_p2() {
    tmp_1670_fu_149700_p2 = (!tmp_1664_reg_223521.read().is_01() || !tmp_1665_reg_223526.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1664_reg_223521.read()) + sc_biguint<15>(tmp_1665_reg_223526.read()));
}

void a0_conv2d_1::thread_tmp_1671_fu_149704_p2() {
    tmp_1671_fu_149704_p2 = (!tmp_1668_fu_149681_p2.read().is_01() || !tmp_1669_fu_149685_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1668_fu_149681_p2.read()) + sc_biguint<15>(tmp_1669_fu_149685_p4.read()));
}

void a0_conv2d_1::thread_tmp_1672_fu_149715_p2() {
    tmp_1672_fu_149715_p2 = (!tmp_1671_fu_149704_p2.read().is_01() || !tmp_1670_fu_149700_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1671_fu_149704_p2.read()) + sc_biguint<15>(tmp_1670_fu_149700_p2.read()));
}

void a0_conv2d_1::thread_tmp_1673_fu_149721_p2() {
    tmp_1673_fu_149721_p2 = (!tmp_1663_fu_149666_p2.read().is_01() || !tmp_1662_fu_149661_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1663_fu_149666_p2.read()) + sc_biguint<15>(tmp_1662_fu_149661_p2.read()));
}

void a0_conv2d_1::thread_tmp_1675_fu_149733_p4() {
    tmp_1675_fu_149733_p4 = r_V_89_41_fu_184963_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1676_fu_149747_p4() {
    tmp_1676_fu_149747_p4 = r_V_83_42_fu_185043_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1678_fu_149761_p2() {
    tmp_1678_fu_149761_p2 = (!tmp_1674_reg_223546.read().is_01() || !tmp_1675_fu_149733_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1674_reg_223546.read()) + sc_biguint<15>(tmp_1675_fu_149733_p4.read()));
}

void a0_conv2d_1::thread_tmp_1679_fu_149766_p2() {
    tmp_1679_fu_149766_p2 = (!tmp_1676_fu_149747_p4.read().is_01() || !tmp_1677_reg_223551.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1676_fu_149747_p4.read()) + sc_biguint<15>(tmp_1677_reg_223551.read()));
}

void a0_conv2d_1::thread_tmp_167_fu_139164_p4() {
    tmp_167_fu_139164_p4 = r_V_80_57_fu_188443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1684_fu_149781_p2() {
    tmp_1684_fu_149781_p2 = (!tmp_1683_reg_223576.read().is_01() || !tmp_1682_reg_223571.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1683_reg_223576.read()) + sc_biguint<15>(tmp_1682_reg_223571.read()));
}

void a0_conv2d_1::thread_tmp_1685_fu_149785_p4() {
    tmp_1685_fu_149785_p4 = r_V_86_42_fu_185051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1686_fu_149800_p2() {
    tmp_1686_fu_149800_p2 = (!tmp_1680_reg_223556.read().is_01() || !tmp_1681_reg_223561.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1680_reg_223556.read()) + sc_biguint<15>(tmp_1681_reg_223561.read()));
}

void a0_conv2d_1::thread_tmp_1687_fu_149804_p2() {
    tmp_1687_fu_149804_p2 = (!tmp_1684_fu_149781_p2.read().is_01() || !tmp_1685_fu_149785_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1684_fu_149781_p2.read()) + sc_biguint<15>(tmp_1685_fu_149785_p4.read()));
}

void a0_conv2d_1::thread_tmp_1688_fu_149815_p2() {
    tmp_1688_fu_149815_p2 = (!tmp_1687_fu_149804_p2.read().is_01() || !tmp_1686_fu_149800_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1687_fu_149804_p2.read()) + sc_biguint<15>(tmp_1686_fu_149800_p2.read()));
}

void a0_conv2d_1::thread_tmp_1689_fu_149821_p2() {
    tmp_1689_fu_149821_p2 = (!tmp_1679_fu_149766_p2.read().is_01() || !tmp_1678_fu_149761_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1679_fu_149766_p2.read()) + sc_biguint<15>(tmp_1678_fu_149761_p2.read()));
}

void a0_conv2d_1::thread_tmp_168_fu_139179_p4() {
    tmp_168_fu_139179_p4 = r_V_74_58_fu_188683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1690_fu_149833_p2() {
    tmp_1690_fu_149833_p2 = (!tmp_1672_fu_149715_p2.read().is_01() || !tmp_1673_fu_149721_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1672_fu_149715_p2.read()) + sc_biguint<15>(tmp_1673_fu_149721_p2.read()));
}

void a0_conv2d_1::thread_tmp_1691_fu_149839_p2() {
    tmp_1691_fu_149839_p2 = (!tmp_1688_fu_149815_p2.read().is_01() || !tmp_1689_fu_149821_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1688_fu_149815_p2.read()) + sc_biguint<15>(tmp_1689_fu_149821_p2.read()));
}

void a0_conv2d_1::thread_tmp_1692_fu_149845_p2() {
    tmp_1692_fu_149845_p2 = (!tmp_1691_fu_149839_p2.read().is_01() || !tmp_1690_fu_149833_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1691_fu_149839_p2.read()) + sc_biguint<15>(tmp_1690_fu_149833_p2.read()));
}

void a0_conv2d_1::thread_tmp_1693_fu_149851_p2() {
    tmp_1693_fu_149851_p2 = (!tmp_1657_fu_149621_p2.read().is_01() || !tmp_1656_fu_149615_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1657_fu_149621_p2.read()) + sc_biguint<15>(tmp_1656_fu_149615_p2.read()));
}

void a0_conv2d_1::thread_tmp_1695_fu_149857_p4() {
    tmp_1695_fu_149857_p4 = r_V_89_42_fu_185059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1696_fu_149871_p4() {
    tmp_1696_fu_149871_p4 = r_V_83_43_fu_185139_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1698_fu_149885_p2() {
    tmp_1698_fu_149885_p2 = (!tmp_1694_reg_223581.read().is_01() || !tmp_1695_fu_149857_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1694_reg_223581.read()) + sc_biguint<15>(tmp_1695_fu_149857_p4.read()));
}

void a0_conv2d_1::thread_tmp_1699_fu_149890_p2() {
    tmp_1699_fu_149890_p2 = (!tmp_1696_fu_149871_p4.read().is_01() || !tmp_1697_reg_223586.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1696_fu_149871_p4.read()) + sc_biguint<15>(tmp_1697_reg_223586.read()));
}

void a0_conv2d_1::thread_tmp_169_fu_139188_p4() {
    tmp_169_fu_139188_p4 = r_V_73_58_fu_188675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1704_fu_149905_p2() {
    tmp_1704_fu_149905_p2 = (!tmp_1703_reg_223611.read().is_01() || !tmp_1702_reg_223606.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1703_reg_223611.read()) + sc_biguint<15>(tmp_1702_reg_223606.read()));
}

void a0_conv2d_1::thread_tmp_1705_fu_149909_p4() {
    tmp_1705_fu_149909_p4 = r_V_86_43_fu_185147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1706_fu_149924_p2() {
    tmp_1706_fu_149924_p2 = (!tmp_1700_reg_223591.read().is_01() || !tmp_1701_reg_223596.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1700_reg_223591.read()) + sc_biguint<15>(tmp_1701_reg_223596.read()));
}

void a0_conv2d_1::thread_tmp_1707_fu_149928_p2() {
    tmp_1707_fu_149928_p2 = (!tmp_1704_fu_149905_p2.read().is_01() || !tmp_1705_fu_149909_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1704_fu_149905_p2.read()) + sc_biguint<15>(tmp_1705_fu_149909_p4.read()));
}

void a0_conv2d_1::thread_tmp_1708_fu_149939_p2() {
    tmp_1708_fu_149939_p2 = (!tmp_1707_fu_149928_p2.read().is_01() || !tmp_1706_fu_149924_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1707_fu_149928_p2.read()) + sc_biguint<15>(tmp_1706_fu_149924_p2.read()));
}

void a0_conv2d_1::thread_tmp_1709_fu_149945_p2() {
    tmp_1709_fu_149945_p2 = (!tmp_1699_fu_149890_p2.read().is_01() || !tmp_1698_fu_149885_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1699_fu_149890_p2.read()) + sc_biguint<15>(tmp_1698_fu_149885_p2.read()));
}

void a0_conv2d_1::thread_tmp_170_fu_139203_p2() {
    tmp_170_fu_139203_p2 = (!tmp_166_fu_139155_p4.read().is_01() || !tmp_167_fu_139164_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_166_fu_139155_p4.read()) + sc_biguint<15>(tmp_167_fu_139164_p4.read()));
}

void a0_conv2d_1::thread_tmp_1711_fu_149957_p4() {
    tmp_1711_fu_149957_p4 = r_V_89_43_fu_185155_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1712_fu_149971_p4() {
    tmp_1712_fu_149971_p4 = r_V_83_44_fu_185235_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1714_fu_149985_p2() {
    tmp_1714_fu_149985_p2 = (!tmp_1710_reg_223616.read().is_01() || !tmp_1711_fu_149957_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1710_reg_223616.read()) + sc_biguint<15>(tmp_1711_fu_149957_p4.read()));
}

void a0_conv2d_1::thread_tmp_1715_fu_149990_p2() {
    tmp_1715_fu_149990_p2 = (!tmp_1712_fu_149971_p4.read().is_01() || !tmp_1713_reg_223621.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1712_fu_149971_p4.read()) + sc_biguint<15>(tmp_1713_reg_223621.read()));
}

void a0_conv2d_1::thread_tmp_171_fu_139209_p2() {
    tmp_171_fu_139209_p2 = (!tmp_168_fu_139179_p4.read().is_01() || !tmp_169_fu_139188_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_168_fu_139179_p4.read()) + sc_biguint<15>(tmp_169_fu_139188_p4.read()));
}

void a0_conv2d_1::thread_tmp_1720_fu_150001_p2() {
    tmp_1720_fu_150001_p2 = (!tmp_1719_reg_223646.read().is_01() || !tmp_1718_reg_223641.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1719_reg_223646.read()) + sc_biguint<15>(tmp_1718_reg_223641.read()));
}

void a0_conv2d_1::thread_tmp_1721_fu_150005_p4() {
    tmp_1721_fu_150005_p4 = r_V_86_44_fu_185243_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1722_fu_150019_p2() {
    tmp_1722_fu_150019_p2 = (!tmp_1716_reg_223626.read().is_01() || !tmp_1717_reg_223631.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1716_reg_223626.read()) + sc_biguint<15>(tmp_1717_reg_223631.read()));
}

void a0_conv2d_1::thread_tmp_1723_fu_150023_p2() {
    tmp_1723_fu_150023_p2 = (!tmp_1720_fu_150001_p2.read().is_01() || !tmp_1721_fu_150005_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1720_fu_150001_p2.read()) + sc_biguint<15>(tmp_1721_fu_150005_p4.read()));
}

void a0_conv2d_1::thread_tmp_1724_fu_150034_p2() {
    tmp_1724_fu_150034_p2 = (!tmp_1723_fu_150023_p2.read().is_01() || !tmp_1722_fu_150019_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1723_fu_150023_p2.read()) + sc_biguint<15>(tmp_1722_fu_150019_p2.read()));
}

void a0_conv2d_1::thread_tmp_1725_fu_150040_p2() {
    tmp_1725_fu_150040_p2 = (!tmp_1715_fu_149990_p2.read().is_01() || !tmp_1714_fu_149985_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1715_fu_149990_p2.read()) + sc_biguint<15>(tmp_1714_fu_149985_p2.read()));
}

void a0_conv2d_1::thread_tmp_1726_fu_150052_p2() {
    tmp_1726_fu_150052_p2 = (!tmp_1708_fu_149939_p2.read().is_01() || !tmp_1709_fu_149945_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1708_fu_149939_p2.read()) + sc_biguint<15>(tmp_1709_fu_149945_p2.read()));
}

void a0_conv2d_1::thread_tmp_1727_fu_150058_p2() {
    tmp_1727_fu_150058_p2 = (!tmp_1724_fu_150034_p2.read().is_01() || !tmp_1725_fu_150040_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1724_fu_150034_p2.read()) + sc_biguint<15>(tmp_1725_fu_150040_p2.read()));
}

void a0_conv2d_1::thread_tmp_1729_fu_150070_p4() {
    tmp_1729_fu_150070_p4 = r_V_89_44_fu_185251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_172_fu_139221_p4() {
    tmp_172_fu_139221_p4 = r_V_76_58_fu_188699_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1730_fu_150084_p4() {
    tmp_1730_fu_150084_p4 = r_V_83_45_fu_185331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1732_fu_150098_p2() {
    tmp_1732_fu_150098_p2 = (!tmp_1728_reg_223656.read().is_01() || !tmp_1729_fu_150070_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1728_reg_223656.read()) + sc_biguint<15>(tmp_1729_fu_150070_p4.read()));
}

void a0_conv2d_1::thread_tmp_1733_fu_150103_p2() {
    tmp_1733_fu_150103_p2 = (!tmp_1730_fu_150084_p4.read().is_01() || !tmp_1731_reg_223661.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1730_fu_150084_p4.read()) + sc_biguint<15>(tmp_1731_reg_223661.read()));
}

void a0_conv2d_1::thread_tmp_1738_fu_150118_p2() {
    tmp_1738_fu_150118_p2 = (!tmp_1737_reg_223686.read().is_01() || !tmp_1736_reg_223681.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1737_reg_223686.read()) + sc_biguint<15>(tmp_1736_reg_223681.read()));
}

void a0_conv2d_1::thread_tmp_1739_fu_150122_p4() {
    tmp_1739_fu_150122_p4 = r_V_86_45_fu_185339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_173_fu_139230_p4() {
    tmp_173_fu_139230_p4 = r_V_75_58_fu_188691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1740_fu_150137_p2() {
    tmp_1740_fu_150137_p2 = (!tmp_1734_reg_223666.read().is_01() || !tmp_1735_reg_223671.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1734_reg_223666.read()) + sc_biguint<15>(tmp_1735_reg_223671.read()));
}

void a0_conv2d_1::thread_tmp_1741_fu_150141_p2() {
    tmp_1741_fu_150141_p2 = (!tmp_1738_fu_150118_p2.read().is_01() || !tmp_1739_fu_150122_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1738_fu_150118_p2.read()) + sc_biguint<15>(tmp_1739_fu_150122_p4.read()));
}

void a0_conv2d_1::thread_tmp_1742_fu_150152_p2() {
    tmp_1742_fu_150152_p2 = (!tmp_1741_fu_150141_p2.read().is_01() || !tmp_1740_fu_150137_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1741_fu_150141_p2.read()) + sc_biguint<15>(tmp_1740_fu_150137_p2.read()));
}

void a0_conv2d_1::thread_tmp_1743_fu_150158_p2() {
    tmp_1743_fu_150158_p2 = (!tmp_1733_fu_150103_p2.read().is_01() || !tmp_1732_fu_150098_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1733_fu_150103_p2.read()) + sc_biguint<15>(tmp_1732_fu_150098_p2.read()));
}

void a0_conv2d_1::thread_tmp_1745_fu_150170_p4() {
    tmp_1745_fu_150170_p4 = r_V_89_45_fu_185347_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1746_fu_150184_p4() {
    tmp_1746_fu_150184_p4 = r_V_83_46_fu_185427_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1748_fu_150198_p2() {
    tmp_1748_fu_150198_p2 = (!tmp_1744_reg_223691.read().is_01() || !tmp_1745_fu_150170_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1744_reg_223691.read()) + sc_biguint<15>(tmp_1745_fu_150170_p4.read()));
}

void a0_conv2d_1::thread_tmp_1749_fu_150203_p2() {
    tmp_1749_fu_150203_p2 = (!tmp_1746_fu_150184_p4.read().is_01() || !tmp_1747_reg_223696.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1746_fu_150184_p4.read()) + sc_biguint<15>(tmp_1747_reg_223696.read()));
}

void a0_conv2d_1::thread_tmp_174_fu_139245_p4() {
    tmp_174_fu_139245_p4 = r_V_78_58_fu_188715_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1754_fu_150214_p2() {
    tmp_1754_fu_150214_p2 = (!tmp_1753_reg_223721.read().is_01() || !tmp_1752_reg_223716.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1753_reg_223721.read()) + sc_biguint<15>(tmp_1752_reg_223716.read()));
}

void a0_conv2d_1::thread_tmp_1755_fu_150218_p4() {
    tmp_1755_fu_150218_p4 = r_V_86_46_fu_185435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1756_fu_150232_p2() {
    tmp_1756_fu_150232_p2 = (!tmp_1750_reg_223701.read().is_01() || !tmp_1751_reg_223706.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1750_reg_223701.read()) + sc_biguint<15>(tmp_1751_reg_223706.read()));
}

void a0_conv2d_1::thread_tmp_1757_fu_150236_p2() {
    tmp_1757_fu_150236_p2 = (!tmp_1754_fu_150214_p2.read().is_01() || !tmp_1755_fu_150218_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1754_fu_150214_p2.read()) + sc_biguint<15>(tmp_1755_fu_150218_p4.read()));
}

void a0_conv2d_1::thread_tmp_1758_fu_150247_p2() {
    tmp_1758_fu_150247_p2 = (!tmp_1757_fu_150236_p2.read().is_01() || !tmp_1756_fu_150232_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1757_fu_150236_p2.read()) + sc_biguint<15>(tmp_1756_fu_150232_p2.read()));
}

void a0_conv2d_1::thread_tmp_1759_fu_150253_p2() {
    tmp_1759_fu_150253_p2 = (!tmp_1749_fu_150203_p2.read().is_01() || !tmp_1748_fu_150198_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1749_fu_150203_p2.read()) + sc_biguint<15>(tmp_1748_fu_150198_p2.read()));
}

void a0_conv2d_1::thread_tmp_175_fu_139254_p4() {
    tmp_175_fu_139254_p4 = r_V_79_58_fu_188723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1760_fu_150265_p2() {
    tmp_1760_fu_150265_p2 = (!tmp_1742_fu_150152_p2.read().is_01() || !tmp_1743_fu_150158_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1742_fu_150152_p2.read()) + sc_biguint<15>(tmp_1743_fu_150158_p2.read()));
}

void a0_conv2d_1::thread_tmp_1761_fu_150271_p2() {
    tmp_1761_fu_150271_p2 = (!tmp_1758_fu_150247_p2.read().is_01() || !tmp_1759_fu_150253_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1758_fu_150247_p2.read()) + sc_biguint<15>(tmp_1759_fu_150253_p2.read()));
}

void a0_conv2d_1::thread_tmp_1762_fu_150283_p2() {
    tmp_1762_fu_150283_p2 = (!tmp_1761_fu_150271_p2.read().is_01() || !tmp_1760_fu_150265_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1761_fu_150271_p2.read()) + sc_biguint<15>(tmp_1760_fu_150265_p2.read()));
}

void a0_conv2d_1::thread_tmp_1763_fu_170058_p2() {
    tmp_1763_fu_170058_p2 = (!tmp_1727_reg_227511.read().is_01() || !tmp_1726_reg_227506.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1727_reg_227511.read()) + sc_biguint<15>(tmp_1726_reg_227506.read()));
}

void a0_conv2d_1::thread_tmp_1764_fu_170066_p2() {
    tmp_1764_fu_170066_p2 = (!tmp_1692_reg_227496.read().is_01() || !tmp_1693_reg_227501.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1692_reg_227496.read()) + sc_biguint<15>(tmp_1693_reg_227501.read()));
}

void a0_conv2d_1::thread_tmp_1765_fu_170070_p2() {
    tmp_1765_fu_170070_p2 = (!tmp_1762_reg_227526.read().is_01() || !tmp_1763_fu_170058_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1762_reg_227526.read()) + sc_biguint<15>(tmp_1763_fu_170058_p2.read()));
}

void a0_conv2d_1::thread_tmp_1766_fu_170081_p2() {
    tmp_1766_fu_170081_p2 = (!tmp_1765_fu_170070_p2.read().is_01() || !tmp_1764_fu_170066_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1765_fu_170070_p2.read()) + sc_biguint<15>(tmp_1764_fu_170066_p2.read()));
}

void a0_conv2d_1::thread_tmp_1767_fu_170087_p2() {
    tmp_1767_fu_170087_p2 = (!tmp_1623_fu_170038_p2.read().is_01() || !tmp_1622_fu_170033_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1623_fu_170038_p2.read()) + sc_biguint<15>(tmp_1622_fu_170033_p2.read()));
}

void a0_conv2d_1::thread_tmp_1768_fu_170099_p2() {
    tmp_1768_fu_170099_p2 = (!tmp_1480_fu_169994_p2.read().is_01() || !tmp_1481_fu_170000_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1480_fu_169994_p2.read()) + sc_biguint<15>(tmp_1481_fu_170000_p2.read()));
}

void a0_conv2d_1::thread_tmp_1769_fu_170105_p2() {
    tmp_1769_fu_170105_p2 = (!tmp_1766_fu_170081_p2.read().is_01() || !tmp_1767_fu_170087_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1766_fu_170081_p2.read()) + sc_biguint<15>(tmp_1767_fu_170087_p2.read()));
}

void a0_conv2d_1::thread_tmp_176_fu_139269_p2() {
    tmp_176_fu_139269_p2 = (!tmp_175_fu_139254_p4.read().is_01() || !tmp_174_fu_139245_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_175_fu_139254_p4.read()) + sc_biguint<15>(tmp_174_fu_139245_p4.read()));
}

void a0_conv2d_1::thread_tmp_1773_fu_150289_p4() {
    tmp_1773_fu_150289_p4 = r_V_11_fu_180915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1774_fu_150303_p2() {
    tmp_1774_fu_150303_p2 = (!tmp_1770_reg_223731.read().is_01() || !tmp_1771_reg_223736.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1770_reg_223731.read()) + sc_biguint<15>(tmp_1771_reg_223736.read()));
}

void a0_conv2d_1::thread_tmp_1775_fu_150307_p2() {
    tmp_1775_fu_150307_p2 = (!tmp_1772_reg_223746.read().is_01() || !tmp_1773_fu_150289_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1772_reg_223746.read()) + sc_biguint<15>(tmp_1773_fu_150289_p4.read()));
}

void a0_conv2d_1::thread_tmp_1776_fu_150317_p4() {
    tmp_1776_fu_150317_p4 = r_V_14_fu_180923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1778_fu_109641_p4() {
    tmp_1778_fu_109641_p4 = r_V_81_1_fu_171915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1779_fu_109650_p4() {
    tmp_1779_fu_109650_p4 = r_V_15_fu_171755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_177_fu_139275_p4() {
    tmp_177_fu_139275_p4 = r_V_77_58_fu_188707_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1780_fu_109665_p2() {
    tmp_1780_fu_109665_p2 = (!tmp_1779_fu_109650_p4.read().is_01() || !tmp_1778_fu_109641_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1779_fu_109650_p4.read()) + sc_biguint<15>(tmp_1778_fu_109641_p4.read()));
}

void a0_conv2d_1::thread_tmp_1781_fu_109671_p4() {
    tmp_1781_fu_109671_p4 = r_V_16_fu_171763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1782_fu_150331_p2() {
    tmp_1782_fu_150331_p2 = (!tmp_1776_fu_150317_p4.read().is_01() || !tmp_1777_reg_223751.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1776_fu_150317_p4.read()) + sc_biguint<15>(tmp_1777_reg_223751.read()));
}

void a0_conv2d_1::thread_tmp_1783_fu_109686_p2() {
    tmp_1783_fu_109686_p2 = (!tmp_1780_fu_109665_p2.read().is_01() || !tmp_1781_fu_109671_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1780_fu_109665_p2.read()) + sc_biguint<15>(tmp_1781_fu_109671_p4.read()));
}

void a0_conv2d_1::thread_tmp_1784_fu_150341_p2() {
    tmp_1784_fu_150341_p2 = (!tmp_1783_reg_223761.read().is_01() || !tmp_1782_fu_150331_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1783_reg_223761.read()) + sc_biguint<15>(tmp_1782_fu_150331_p2.read()));
}

void a0_conv2d_1::thread_tmp_1785_fu_150346_p2() {
    tmp_1785_fu_150346_p2 = (!tmp_1775_fu_150307_p2.read().is_01() || !tmp_1774_fu_150303_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1775_fu_150307_p2.read()) + sc_biguint<15>(tmp_1774_fu_150303_p2.read()));
}

void a0_conv2d_1::thread_tmp_1786_fu_150358_p4() {
    tmp_1786_fu_150358_p4 = r_V_17_fu_180931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1787_fu_150367_p4() {
    tmp_1787_fu_150367_p4 = r_V_83_1_fu_181011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1788_fu_109692_p4() {
    tmp_1788_fu_109692_p4 = r_V_82_1_fu_171923_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1789_fu_109701_p4() {
    tmp_1789_fu_109701_p4 = r_V_85_1_fu_171939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_178_fu_139290_p2() {
    tmp_178_fu_139290_p2 = (!tmp_172_fu_139221_p4.read().is_01() || !tmp_173_fu_139230_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_172_fu_139221_p4.read()) + sc_biguint<15>(tmp_173_fu_139230_p4.read()));
}

void a0_conv2d_1::thread_tmp_1790_fu_150386_p2() {
    tmp_1790_fu_150386_p2 = (!tmp_1786_fu_150358_p4.read().is_01() || !tmp_1787_fu_150367_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1786_fu_150358_p4.read()) + sc_biguint<15>(tmp_1787_fu_150367_p4.read()));
}

void a0_conv2d_1::thread_tmp_1791_fu_109710_p2() {
    tmp_1791_fu_109710_p2 = (!tmp_1788_fu_109692_p4.read().is_01() || !tmp_1789_fu_109701_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1788_fu_109692_p4.read()) + sc_biguint<15>(tmp_1789_fu_109701_p4.read()));
}

void a0_conv2d_1::thread_tmp_1793_fu_150398_p4() {
    tmp_1793_fu_150398_p4 = r_V_86_1_fu_181019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1794_fu_109725_p4() {
    tmp_1794_fu_109725_p4 = r_V_81_2_fu_172107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1795_fu_109734_p4() {
    tmp_1795_fu_109734_p4 = r_V_87_1_fu_171947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1796_fu_109749_p2() {
    tmp_1796_fu_109749_p2 = (!tmp_1795_fu_109734_p4.read().is_01() || !tmp_1794_fu_109725_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1795_fu_109734_p4.read()) + sc_biguint<15>(tmp_1794_fu_109725_p4.read()));
}

void a0_conv2d_1::thread_tmp_1797_fu_109755_p4() {
    tmp_1797_fu_109755_p4 = r_V_88_1_fu_171955_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1798_fu_150416_p2() {
    tmp_1798_fu_150416_p2 = (!tmp_1792_reg_223771.read().is_01() || !tmp_1793_fu_150398_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1792_reg_223771.read()) + sc_biguint<15>(tmp_1793_fu_150398_p4.read()));
}

void a0_conv2d_1::thread_tmp_1799_fu_109764_p2() {
    tmp_1799_fu_109764_p2 = (!tmp_1796_fu_109749_p2.read().is_01() || !tmp_1797_fu_109755_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1796_fu_109749_p2.read()) + sc_biguint<15>(tmp_1797_fu_109755_p4.read()));
}

void a0_conv2d_1::thread_tmp_179_fu_139296_p2() {
    tmp_179_fu_139296_p2 = (!tmp_176_fu_139269_p2.read().is_01() || !tmp_177_fu_139275_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_176_fu_139269_p2.read()) + sc_biguint<15>(tmp_177_fu_139275_p4.read()));
}

void a0_conv2d_1::thread_tmp_17_fu_67042_p1() {
    tmp_17_fu_67042_p1 = indvar_reg_66970.read().range(6-1, 0);
}

void a0_conv2d_1::thread_tmp_1800_fu_150427_p2() {
    tmp_1800_fu_150427_p2 = (!tmp_1799_reg_223781.read().is_01() || !tmp_1798_fu_150416_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1799_reg_223781.read()) + sc_biguint<15>(tmp_1798_fu_150416_p2.read()));
}

void a0_conv2d_1::thread_tmp_1801_fu_150432_p2() {
    tmp_1801_fu_150432_p2 = (!tmp_1791_reg_223766.read().is_01() || !tmp_1790_fu_150386_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1791_reg_223766.read()) + sc_biguint<15>(tmp_1790_fu_150386_p2.read()));
}

void a0_conv2d_1::thread_tmp_1802_fu_150443_p2() {
    tmp_1802_fu_150443_p2 = (!tmp_1784_fu_150341_p2.read().is_01() || !tmp_1785_fu_150346_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1784_fu_150341_p2.read()) + sc_biguint<15>(tmp_1785_fu_150346_p2.read()));
}

void a0_conv2d_1::thread_tmp_1803_fu_150449_p2() {
    tmp_1803_fu_150449_p2 = (!tmp_1800_fu_150427_p2.read().is_01() || !tmp_1801_fu_150432_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1800_fu_150427_p2.read()) + sc_biguint<15>(tmp_1801_fu_150432_p2.read()));
}

void a0_conv2d_1::thread_tmp_1804_fu_150461_p4() {
    tmp_1804_fu_150461_p4 = r_V_89_1_fu_181027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1805_fu_150470_p4() {
    tmp_1805_fu_150470_p4 = r_V_83_2_fu_181107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1806_fu_109770_p4() {
    tmp_1806_fu_109770_p4 = r_V_82_2_fu_172115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1807_fu_109779_p4() {
    tmp_1807_fu_109779_p4 = r_V_85_2_fu_172131_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1808_fu_150489_p2() {
    tmp_1808_fu_150489_p2 = (!tmp_1804_fu_150461_p4.read().is_01() || !tmp_1805_fu_150470_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1804_fu_150461_p4.read()) + sc_biguint<15>(tmp_1805_fu_150470_p4.read()));
}

void a0_conv2d_1::thread_tmp_1809_fu_109788_p2() {
    tmp_1809_fu_109788_p2 = (!tmp_1806_fu_109770_p4.read().is_01() || !tmp_1807_fu_109779_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1806_fu_109770_p4.read()) + sc_biguint<15>(tmp_1807_fu_109779_p4.read()));
}

void a0_conv2d_1::thread_tmp_180_fu_139308_p2() {
    tmp_180_fu_139308_p2 = (!tmp_179_fu_139296_p2.read().is_01() || !tmp_178_fu_139290_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_179_fu_139296_p2.read()) + sc_biguint<15>(tmp_178_fu_139290_p2.read()));
}

void a0_conv2d_1::thread_tmp_1811_fu_150501_p4() {
    tmp_1811_fu_150501_p4 = r_V_86_2_fu_181115_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1812_fu_109803_p4() {
    tmp_1812_fu_109803_p4 = r_V_81_3_fu_172299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1813_fu_109812_p4() {
    tmp_1813_fu_109812_p4 = r_V_87_2_fu_172139_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1814_fu_109827_p2() {
    tmp_1814_fu_109827_p2 = (!tmp_1813_fu_109812_p4.read().is_01() || !tmp_1812_fu_109803_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1813_fu_109812_p4.read()) + sc_biguint<15>(tmp_1812_fu_109803_p4.read()));
}

void a0_conv2d_1::thread_tmp_1815_fu_109833_p4() {
    tmp_1815_fu_109833_p4 = r_V_88_2_fu_172147_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1816_fu_150515_p2() {
    tmp_1816_fu_150515_p2 = (!tmp_1810_reg_223791.read().is_01() || !tmp_1811_fu_150501_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1810_reg_223791.read()) + sc_biguint<15>(tmp_1811_fu_150501_p4.read()));
}

void a0_conv2d_1::thread_tmp_1817_fu_109848_p2() {
    tmp_1817_fu_109848_p2 = (!tmp_1814_fu_109827_p2.read().is_01() || !tmp_1815_fu_109833_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1814_fu_109827_p2.read()) + sc_biguint<15>(tmp_1815_fu_109833_p4.read()));
}

void a0_conv2d_1::thread_tmp_1818_fu_150525_p2() {
    tmp_1818_fu_150525_p2 = (!tmp_1817_reg_223801.read().is_01() || !tmp_1816_fu_150515_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1817_reg_223801.read()) + sc_biguint<15>(tmp_1816_fu_150515_p2.read()));
}

void a0_conv2d_1::thread_tmp_1819_fu_150530_p2() {
    tmp_1819_fu_150530_p2 = (!tmp_1809_reg_223786.read().is_01() || !tmp_1808_fu_150489_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1809_reg_223786.read()) + sc_biguint<15>(tmp_1808_fu_150489_p2.read()));
}

void a0_conv2d_1::thread_tmp_181_fu_139314_p2() {
    tmp_181_fu_139314_p2 = (!tmp_171_fu_139209_p2.read().is_01() || !tmp_170_fu_139203_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_171_fu_139209_p2.read()) + sc_biguint<15>(tmp_170_fu_139203_p2.read()));
}

void a0_conv2d_1::thread_tmp_1820_fu_150541_p4() {
    tmp_1820_fu_150541_p4 = r_V_89_2_fu_181123_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1821_fu_150550_p4() {
    tmp_1821_fu_150550_p4 = r_V_83_3_fu_181203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1822_fu_109854_p4() {
    tmp_1822_fu_109854_p4 = r_V_82_3_fu_172307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1823_fu_109863_p4() {
    tmp_1823_fu_109863_p4 = r_V_85_3_fu_172323_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1824_fu_150569_p2() {
    tmp_1824_fu_150569_p2 = (!tmp_1820_fu_150541_p4.read().is_01() || !tmp_1821_fu_150550_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1820_fu_150541_p4.read()) + sc_biguint<15>(tmp_1821_fu_150550_p4.read()));
}

void a0_conv2d_1::thread_tmp_1825_fu_109872_p2() {
    tmp_1825_fu_109872_p2 = (!tmp_1822_fu_109854_p4.read().is_01() || !tmp_1823_fu_109863_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1822_fu_109854_p4.read()) + sc_biguint<15>(tmp_1823_fu_109863_p4.read()));
}

void a0_conv2d_1::thread_tmp_1827_fu_150581_p4() {
    tmp_1827_fu_150581_p4 = r_V_86_3_fu_181211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1828_fu_109887_p4() {
    tmp_1828_fu_109887_p4 = r_V_81_4_fu_172491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1829_fu_109896_p4() {
    tmp_1829_fu_109896_p4 = r_V_87_3_fu_172331_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_182_fu_139326_p2() {
    tmp_182_fu_139326_p2 = (!tmp_164_fu_139137_p2.read().is_01() || !tmp_165_fu_139143_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_164_fu_139137_p2.read()) + sc_biguint<15>(tmp_165_fu_139143_p2.read()));
}

void a0_conv2d_1::thread_tmp_1830_fu_109911_p2() {
    tmp_1830_fu_109911_p2 = (!tmp_1829_fu_109896_p4.read().is_01() || !tmp_1828_fu_109887_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1829_fu_109896_p4.read()) + sc_biguint<15>(tmp_1828_fu_109887_p4.read()));
}

void a0_conv2d_1::thread_tmp_1831_fu_109917_p4() {
    tmp_1831_fu_109917_p4 = r_V_88_3_fu_172339_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1832_fu_150595_p2() {
    tmp_1832_fu_150595_p2 = (!tmp_1826_reg_223811.read().is_01() || !tmp_1827_fu_150581_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1826_reg_223811.read()) + sc_biguint<15>(tmp_1827_fu_150581_p4.read()));
}

void a0_conv2d_1::thread_tmp_1833_fu_109932_p2() {
    tmp_1833_fu_109932_p2 = (!tmp_1830_fu_109911_p2.read().is_01() || !tmp_1831_fu_109917_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1830_fu_109911_p2.read()) + sc_biguint<15>(tmp_1831_fu_109917_p4.read()));
}

void a0_conv2d_1::thread_tmp_1834_fu_150605_p2() {
    tmp_1834_fu_150605_p2 = (!tmp_1833_reg_223821.read().is_01() || !tmp_1832_fu_150595_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1833_reg_223821.read()) + sc_biguint<15>(tmp_1832_fu_150595_p2.read()));
}

void a0_conv2d_1::thread_tmp_1835_fu_150610_p2() {
    tmp_1835_fu_150610_p2 = (!tmp_1825_reg_223806.read().is_01() || !tmp_1824_fu_150569_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1825_reg_223806.read()) + sc_biguint<15>(tmp_1824_fu_150569_p2.read()));
}

void a0_conv2d_1::thread_tmp_1836_fu_150621_p2() {
    tmp_1836_fu_150621_p2 = (!tmp_1818_fu_150525_p2.read().is_01() || !tmp_1819_fu_150530_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1818_fu_150525_p2.read()) + sc_biguint<15>(tmp_1819_fu_150530_p2.read()));
}

void a0_conv2d_1::thread_tmp_1837_fu_150627_p2() {
    tmp_1837_fu_150627_p2 = (!tmp_1834_fu_150605_p2.read().is_01() || !tmp_1835_fu_150610_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1834_fu_150605_p2.read()) + sc_biguint<15>(tmp_1835_fu_150610_p2.read()));
}

void a0_conv2d_1::thread_tmp_1838_fu_150639_p2() {
    tmp_1838_fu_150639_p2 = (!tmp_1837_fu_150627_p2.read().is_01() || !tmp_1836_fu_150621_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1837_fu_150627_p2.read()) + sc_biguint<15>(tmp_1836_fu_150621_p2.read()));
}

void a0_conv2d_1::thread_tmp_1839_fu_150645_p2() {
    tmp_1839_fu_150645_p2 = (!tmp_1803_fu_150449_p2.read().is_01() || !tmp_1802_fu_150443_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1803_fu_150449_p2.read()) + sc_biguint<15>(tmp_1802_fu_150443_p2.read()));
}

void a0_conv2d_1::thread_tmp_183_fu_139332_p2() {
    tmp_183_fu_139332_p2 = (!tmp_180_fu_139308_p2.read().is_01() || !tmp_181_fu_139314_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_180_fu_139308_p2.read()) + sc_biguint<15>(tmp_181_fu_139314_p2.read()));
}

void a0_conv2d_1::thread_tmp_1840_fu_150657_p4() {
    tmp_1840_fu_150657_p4 = r_V_89_3_fu_181219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1841_fu_150666_p4() {
    tmp_1841_fu_150666_p4 = r_V_83_4_fu_181299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1842_fu_109938_p4() {
    tmp_1842_fu_109938_p4 = r_V_82_4_fu_172499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1843_fu_109947_p4() {
    tmp_1843_fu_109947_p4 = r_V_85_4_fu_172515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1844_fu_150685_p2() {
    tmp_1844_fu_150685_p2 = (!tmp_1840_fu_150657_p4.read().is_01() || !tmp_1841_fu_150666_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1840_fu_150657_p4.read()) + sc_biguint<15>(tmp_1841_fu_150666_p4.read()));
}

void a0_conv2d_1::thread_tmp_1845_fu_109956_p2() {
    tmp_1845_fu_109956_p2 = (!tmp_1842_fu_109938_p4.read().is_01() || !tmp_1843_fu_109947_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1842_fu_109938_p4.read()) + sc_biguint<15>(tmp_1843_fu_109947_p4.read()));
}

void a0_conv2d_1::thread_tmp_1847_fu_150697_p4() {
    tmp_1847_fu_150697_p4 = r_V_86_4_fu_181307_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1848_fu_109971_p4() {
    tmp_1848_fu_109971_p4 = r_V_81_5_fu_172683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1849_fu_109980_p4() {
    tmp_1849_fu_109980_p4 = r_V_87_4_fu_172523_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_184_fu_139344_p2() {
    tmp_184_fu_139344_p2 = (!tmp_183_fu_139332_p2.read().is_01() || !tmp_182_fu_139326_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_183_fu_139332_p2.read()) + sc_biguint<15>(tmp_182_fu_139326_p2.read()));
}

void a0_conv2d_1::thread_tmp_1850_fu_109995_p2() {
    tmp_1850_fu_109995_p2 = (!tmp_1849_fu_109980_p4.read().is_01() || !tmp_1848_fu_109971_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1849_fu_109980_p4.read()) + sc_biguint<15>(tmp_1848_fu_109971_p4.read()));
}

void a0_conv2d_1::thread_tmp_1851_fu_110001_p4() {
    tmp_1851_fu_110001_p4 = r_V_88_4_fu_172531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1852_fu_150711_p2() {
    tmp_1852_fu_150711_p2 = (!tmp_1846_reg_223831.read().is_01() || !tmp_1847_fu_150697_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1846_reg_223831.read()) + sc_biguint<15>(tmp_1847_fu_150697_p4.read()));
}

void a0_conv2d_1::thread_tmp_1853_fu_110016_p2() {
    tmp_1853_fu_110016_p2 = (!tmp_1850_fu_109995_p2.read().is_01() || !tmp_1851_fu_110001_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1850_fu_109995_p2.read()) + sc_biguint<15>(tmp_1851_fu_110001_p4.read()));
}

void a0_conv2d_1::thread_tmp_1854_fu_150721_p2() {
    tmp_1854_fu_150721_p2 = (!tmp_1853_reg_223841.read().is_01() || !tmp_1852_fu_150711_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1853_reg_223841.read()) + sc_biguint<15>(tmp_1852_fu_150711_p2.read()));
}

void a0_conv2d_1::thread_tmp_1855_fu_150726_p2() {
    tmp_1855_fu_150726_p2 = (!tmp_1845_reg_223826.read().is_01() || !tmp_1844_fu_150685_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1845_reg_223826.read()) + sc_biguint<15>(tmp_1844_fu_150685_p2.read()));
}

void a0_conv2d_1::thread_tmp_1856_fu_150737_p4() {
    tmp_1856_fu_150737_p4 = r_V_89_4_fu_181315_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1857_fu_150746_p4() {
    tmp_1857_fu_150746_p4 = r_V_83_5_fu_181395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1858_fu_110022_p4() {
    tmp_1858_fu_110022_p4 = r_V_82_5_fu_172691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1859_fu_110031_p4() {
    tmp_1859_fu_110031_p4 = r_V_85_5_fu_172707_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_185_fu_169587_p2() {
    tmp_185_fu_169587_p2 = (!tmp_149_reg_226986.read().is_01() || !tmp_148_reg_226981.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_149_reg_226986.read()) + sc_biguint<15>(tmp_148_reg_226981.read()));
}

void a0_conv2d_1::thread_tmp_1860_fu_150765_p2() {
    tmp_1860_fu_150765_p2 = (!tmp_1856_fu_150737_p4.read().is_01() || !tmp_1857_fu_150746_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1856_fu_150737_p4.read()) + sc_biguint<15>(tmp_1857_fu_150746_p4.read()));
}

void a0_conv2d_1::thread_tmp_1861_fu_110040_p2() {
    tmp_1861_fu_110040_p2 = (!tmp_1858_fu_110022_p4.read().is_01() || !tmp_1859_fu_110031_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1858_fu_110022_p4.read()) + sc_biguint<15>(tmp_1859_fu_110031_p4.read()));
}

void a0_conv2d_1::thread_tmp_1863_fu_150777_p4() {
    tmp_1863_fu_150777_p4 = r_V_86_5_fu_181403_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1864_fu_110055_p4() {
    tmp_1864_fu_110055_p4 = r_V_81_6_fu_172875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1865_fu_110064_p4() {
    tmp_1865_fu_110064_p4 = r_V_87_5_fu_172715_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1866_fu_110079_p2() {
    tmp_1866_fu_110079_p2 = (!tmp_1865_fu_110064_p4.read().is_01() || !tmp_1864_fu_110055_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1865_fu_110064_p4.read()) + sc_biguint<15>(tmp_1864_fu_110055_p4.read()));
}

void a0_conv2d_1::thread_tmp_1867_fu_110085_p4() {
    tmp_1867_fu_110085_p4 = r_V_88_5_fu_172723_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1868_fu_150795_p2() {
    tmp_1868_fu_150795_p2 = (!tmp_1862_reg_223851.read().is_01() || !tmp_1863_fu_150777_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1862_reg_223851.read()) + sc_biguint<15>(tmp_1863_fu_150777_p4.read()));
}

void a0_conv2d_1::thread_tmp_1869_fu_110094_p2() {
    tmp_1869_fu_110094_p2 = (!tmp_1866_fu_110079_p2.read().is_01() || !tmp_1867_fu_110085_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1866_fu_110079_p2.read()) + sc_biguint<15>(tmp_1867_fu_110085_p4.read()));
}

void a0_conv2d_1::thread_tmp_186_fu_169595_p2() {
    tmp_186_fu_169595_p2 = (!tmp_114_reg_226966.read().is_01() || !tmp_115_reg_226971.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_114_reg_226966.read()) + sc_biguint<15>(tmp_115_reg_226971.read()));
}

void a0_conv2d_1::thread_tmp_1870_fu_150806_p2() {
    tmp_1870_fu_150806_p2 = (!tmp_1869_reg_223861.read().is_01() || !tmp_1868_fu_150795_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1869_reg_223861.read()) + sc_biguint<15>(tmp_1868_fu_150795_p2.read()));
}

void a0_conv2d_1::thread_tmp_1871_fu_150811_p2() {
    tmp_1871_fu_150811_p2 = (!tmp_1861_reg_223846.read().is_01() || !tmp_1860_fu_150765_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1861_reg_223846.read()) + sc_biguint<15>(tmp_1860_fu_150765_p2.read()));
}

void a0_conv2d_1::thread_tmp_1872_fu_150822_p2() {
    tmp_1872_fu_150822_p2 = (!tmp_1854_fu_150721_p2.read().is_01() || !tmp_1855_fu_150726_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1854_fu_150721_p2.read()) + sc_biguint<15>(tmp_1855_fu_150726_p2.read()));
}

void a0_conv2d_1::thread_tmp_1873_fu_150828_p2() {
    tmp_1873_fu_150828_p2 = (!tmp_1870_fu_150806_p2.read().is_01() || !tmp_1871_fu_150811_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1870_fu_150806_p2.read()) + sc_biguint<15>(tmp_1871_fu_150811_p2.read()));
}

void a0_conv2d_1::thread_tmp_1874_fu_150840_p4() {
    tmp_1874_fu_150840_p4 = r_V_89_5_fu_181411_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1875_fu_150849_p4() {
    tmp_1875_fu_150849_p4 = r_V_83_6_fu_181491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1876_fu_110100_p4() {
    tmp_1876_fu_110100_p4 = r_V_82_6_fu_172883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1877_fu_110109_p4() {
    tmp_1877_fu_110109_p4 = r_V_85_6_fu_172899_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1878_fu_150868_p2() {
    tmp_1878_fu_150868_p2 = (!tmp_1874_fu_150840_p4.read().is_01() || !tmp_1875_fu_150849_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1874_fu_150840_p4.read()) + sc_biguint<15>(tmp_1875_fu_150849_p4.read()));
}

void a0_conv2d_1::thread_tmp_1879_fu_110118_p2() {
    tmp_1879_fu_110118_p2 = (!tmp_1876_fu_110100_p4.read().is_01() || !tmp_1877_fu_110109_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1876_fu_110100_p4.read()) + sc_biguint<15>(tmp_1877_fu_110109_p4.read()));
}

void a0_conv2d_1::thread_tmp_187_fu_169599_p2() {
    tmp_187_fu_169599_p2 = (!tmp_184_reg_227001.read().is_01() || !tmp_185_fu_169587_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_184_reg_227001.read()) + sc_biguint<15>(tmp_185_fu_169587_p2.read()));
}

void a0_conv2d_1::thread_tmp_1881_fu_150880_p4() {
    tmp_1881_fu_150880_p4 = r_V_86_6_fu_181499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1882_fu_110133_p4() {
    tmp_1882_fu_110133_p4 = r_V_81_7_fu_173067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1883_fu_110142_p4() {
    tmp_1883_fu_110142_p4 = r_V_87_6_fu_172907_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1884_fu_110157_p2() {
    tmp_1884_fu_110157_p2 = (!tmp_1883_fu_110142_p4.read().is_01() || !tmp_1882_fu_110133_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1883_fu_110142_p4.read()) + sc_biguint<15>(tmp_1882_fu_110133_p4.read()));
}

void a0_conv2d_1::thread_tmp_1885_fu_110163_p4() {
    tmp_1885_fu_110163_p4 = r_V_88_6_fu_172915_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1886_fu_150894_p2() {
    tmp_1886_fu_150894_p2 = (!tmp_1880_reg_223871.read().is_01() || !tmp_1881_fu_150880_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1880_reg_223871.read()) + sc_biguint<15>(tmp_1881_fu_150880_p4.read()));
}

void a0_conv2d_1::thread_tmp_1887_fu_110178_p2() {
    tmp_1887_fu_110178_p2 = (!tmp_1884_fu_110157_p2.read().is_01() || !tmp_1885_fu_110163_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1884_fu_110157_p2.read()) + sc_biguint<15>(tmp_1885_fu_110163_p4.read()));
}

void a0_conv2d_1::thread_tmp_1888_fu_150904_p2() {
    tmp_1888_fu_150904_p2 = (!tmp_1887_reg_223881.read().is_01() || !tmp_1886_fu_150894_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1887_reg_223881.read()) + sc_biguint<15>(tmp_1886_fu_150894_p2.read()));
}

void a0_conv2d_1::thread_tmp_1889_fu_150909_p2() {
    tmp_1889_fu_150909_p2 = (!tmp_1879_reg_223866.read().is_01() || !tmp_1878_fu_150868_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1879_reg_223866.read()) + sc_biguint<15>(tmp_1878_fu_150868_p2.read()));
}

void a0_conv2d_1::thread_tmp_188_fu_139350_p4() {
    tmp_188_fu_139350_p4 = r_V_72_47_fu_185499_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1890_fu_150920_p4() {
    tmp_1890_fu_150920_p4 = r_V_89_6_fu_181507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1891_fu_150929_p4() {
    tmp_1891_fu_150929_p4 = r_V_83_7_fu_181587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1892_fu_110184_p4() {
    tmp_1892_fu_110184_p4 = r_V_82_7_fu_173075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1893_fu_110193_p4() {
    tmp_1893_fu_110193_p4 = r_V_85_7_fu_173091_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1894_fu_150948_p2() {
    tmp_1894_fu_150948_p2 = (!tmp_1890_fu_150920_p4.read().is_01() || !tmp_1891_fu_150929_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1890_fu_150920_p4.read()) + sc_biguint<15>(tmp_1891_fu_150929_p4.read()));
}

void a0_conv2d_1::thread_tmp_1895_fu_110202_p2() {
    tmp_1895_fu_110202_p2 = (!tmp_1892_fu_110184_p4.read().is_01() || !tmp_1893_fu_110193_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1892_fu_110184_p4.read()) + sc_biguint<15>(tmp_1893_fu_110193_p4.read()));
}

void a0_conv2d_1::thread_tmp_1897_fu_150960_p4() {
    tmp_1897_fu_150960_p4 = r_V_86_7_fu_181595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1898_fu_110217_p4() {
    tmp_1898_fu_110217_p4 = r_V_81_8_fu_173259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1899_fu_110226_p4() {
    tmp_1899_fu_110226_p4 = r_V_87_7_fu_173099_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_189_fu_139359_p4() {
    tmp_189_fu_139359_p4 = r_V_80_46_fu_185419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_18_fu_69908_p1() {
    tmp_18_fu_69908_p1 = ap_phi_mux_j_phi_fu_66996_p4.read().range(3-1, 0);
}

void a0_conv2d_1::thread_tmp_1900_fu_110241_p2() {
    tmp_1900_fu_110241_p2 = (!tmp_1899_fu_110226_p4.read().is_01() || !tmp_1898_fu_110217_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1899_fu_110226_p4.read()) + sc_biguint<15>(tmp_1898_fu_110217_p4.read()));
}

void a0_conv2d_1::thread_tmp_1901_fu_110247_p4() {
    tmp_1901_fu_110247_p4 = r_V_88_7_fu_173107_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1902_fu_150978_p2() {
    tmp_1902_fu_150978_p2 = (!tmp_1896_reg_223891.read().is_01() || !tmp_1897_fu_150960_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1896_reg_223891.read()) + sc_biguint<15>(tmp_1897_fu_150960_p4.read()));
}

void a0_conv2d_1::thread_tmp_1903_fu_110256_p2() {
    tmp_1903_fu_110256_p2 = (!tmp_1900_fu_110241_p2.read().is_01() || !tmp_1901_fu_110247_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1900_fu_110241_p2.read()) + sc_biguint<15>(tmp_1901_fu_110247_p4.read()));
}

void a0_conv2d_1::thread_tmp_1904_fu_150989_p2() {
    tmp_1904_fu_150989_p2 = (!tmp_1903_reg_223901.read().is_01() || !tmp_1902_fu_150978_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1903_reg_223901.read()) + sc_biguint<15>(tmp_1902_fu_150978_p2.read()));
}

void a0_conv2d_1::thread_tmp_1905_fu_150994_p2() {
    tmp_1905_fu_150994_p2 = (!tmp_1895_reg_223886.read().is_01() || !tmp_1894_fu_150948_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1895_reg_223886.read()) + sc_biguint<15>(tmp_1894_fu_150948_p2.read()));
}

void a0_conv2d_1::thread_tmp_1906_fu_151005_p2() {
    tmp_1906_fu_151005_p2 = (!tmp_1888_fu_150904_p2.read().is_01() || !tmp_1889_fu_150909_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1888_fu_150904_p2.read()) + sc_biguint<15>(tmp_1889_fu_150909_p2.read()));
}

void a0_conv2d_1::thread_tmp_1907_fu_151011_p2() {
    tmp_1907_fu_151011_p2 = (!tmp_1904_fu_150989_p2.read().is_01() || !tmp_1905_fu_150994_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1904_fu_150989_p2.read()) + sc_biguint<15>(tmp_1905_fu_150994_p2.read()));
}

void a0_conv2d_1::thread_tmp_1908_fu_151023_p2() {
    tmp_1908_fu_151023_p2 = (!tmp_1907_fu_151011_p2.read().is_01() || !tmp_1906_fu_151005_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1907_fu_151011_p2.read()) + sc_biguint<15>(tmp_1906_fu_151005_p2.read()));
}

void a0_conv2d_1::thread_tmp_1909_fu_151029_p2() {
    tmp_1909_fu_151029_p2 = (!tmp_1873_fu_150828_p2.read().is_01() || !tmp_1872_fu_150822_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1873_fu_150828_p2.read()) + sc_biguint<15>(tmp_1872_fu_150822_p2.read()));
}

void a0_conv2d_1::thread_tmp_190_fu_139374_p4() {
    tmp_190_fu_139374_p4 = r_V_74_47_fu_185515_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1910_fu_170121_p2() {
    tmp_1910_fu_170121_p2 = (!tmp_1838_reg_227531.read().is_01() || !tmp_1839_reg_227536.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1838_reg_227531.read()) + sc_biguint<15>(tmp_1839_reg_227536.read()));
}

void a0_conv2d_1::thread_tmp_1911_fu_151035_p2() {
    tmp_1911_fu_151035_p2 = (!tmp_1908_fu_151023_p2.read().is_01() || !tmp_1909_fu_151029_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1908_fu_151023_p2.read()) + sc_biguint<15>(tmp_1909_fu_151029_p2.read()));
}

void a0_conv2d_1::thread_tmp_1912_fu_151041_p4() {
    tmp_1912_fu_151041_p4 = r_V_89_7_fu_181603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1913_fu_151050_p4() {
    tmp_1913_fu_151050_p4 = r_V_83_8_fu_181683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1914_fu_110262_p4() {
    tmp_1914_fu_110262_p4 = r_V_82_8_fu_173267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1915_fu_110271_p4() {
    tmp_1915_fu_110271_p4 = r_V_85_8_fu_173283_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1916_fu_151069_p2() {
    tmp_1916_fu_151069_p2 = (!tmp_1912_fu_151041_p4.read().is_01() || !tmp_1913_fu_151050_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1912_fu_151041_p4.read()) + sc_biguint<15>(tmp_1913_fu_151050_p4.read()));
}

void a0_conv2d_1::thread_tmp_1917_fu_110280_p2() {
    tmp_1917_fu_110280_p2 = (!tmp_1914_fu_110262_p4.read().is_01() || !tmp_1915_fu_110271_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1914_fu_110262_p4.read()) + sc_biguint<15>(tmp_1915_fu_110271_p4.read()));
}

void a0_conv2d_1::thread_tmp_1919_fu_151081_p4() {
    tmp_1919_fu_151081_p4 = r_V_86_8_fu_181691_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_191_fu_139383_p4() {
    tmp_191_fu_139383_p4 = r_V_73_47_fu_185507_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1920_fu_110295_p4() {
    tmp_1920_fu_110295_p4 = r_V_81_9_fu_173451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1921_fu_110304_p4() {
    tmp_1921_fu_110304_p4 = r_V_87_8_fu_173291_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1922_fu_110319_p2() {
    tmp_1922_fu_110319_p2 = (!tmp_1921_fu_110304_p4.read().is_01() || !tmp_1920_fu_110295_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1921_fu_110304_p4.read()) + sc_biguint<15>(tmp_1920_fu_110295_p4.read()));
}

void a0_conv2d_1::thread_tmp_1923_fu_110325_p4() {
    tmp_1923_fu_110325_p4 = r_V_88_8_fu_173299_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1924_fu_151095_p2() {
    tmp_1924_fu_151095_p2 = (!tmp_1918_reg_223911.read().is_01() || !tmp_1919_fu_151081_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1918_reg_223911.read()) + sc_biguint<15>(tmp_1919_fu_151081_p4.read()));
}

void a0_conv2d_1::thread_tmp_1925_fu_110340_p2() {
    tmp_1925_fu_110340_p2 = (!tmp_1922_fu_110319_p2.read().is_01() || !tmp_1923_fu_110325_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1922_fu_110319_p2.read()) + sc_biguint<15>(tmp_1923_fu_110325_p4.read()));
}

void a0_conv2d_1::thread_tmp_1926_fu_151105_p2() {
    tmp_1926_fu_151105_p2 = (!tmp_1925_reg_223921.read().is_01() || !tmp_1924_fu_151095_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1925_reg_223921.read()) + sc_biguint<15>(tmp_1924_fu_151095_p2.read()));
}

void a0_conv2d_1::thread_tmp_1927_fu_151110_p2() {
    tmp_1927_fu_151110_p2 = (!tmp_1917_reg_223906.read().is_01() || !tmp_1916_fu_151069_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1917_reg_223906.read()) + sc_biguint<15>(tmp_1916_fu_151069_p2.read()));
}

void a0_conv2d_1::thread_tmp_1928_fu_151121_p4() {
    tmp_1928_fu_151121_p4 = r_V_89_8_fu_181699_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1929_fu_151130_p4() {
    tmp_1929_fu_151130_p4 = r_V_83_9_fu_181779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_192_fu_139398_p2() {
    tmp_192_fu_139398_p2 = (!tmp_188_fu_139350_p4.read().is_01() || !tmp_189_fu_139359_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_188_fu_139350_p4.read()) + sc_biguint<15>(tmp_189_fu_139359_p4.read()));
}

void a0_conv2d_1::thread_tmp_1930_fu_110346_p4() {
    tmp_1930_fu_110346_p4 = r_V_82_9_fu_173459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1931_fu_110355_p4() {
    tmp_1931_fu_110355_p4 = r_V_85_9_fu_173475_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1932_fu_151149_p2() {
    tmp_1932_fu_151149_p2 = (!tmp_1928_fu_151121_p4.read().is_01() || !tmp_1929_fu_151130_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1928_fu_151121_p4.read()) + sc_biguint<15>(tmp_1929_fu_151130_p4.read()));
}

void a0_conv2d_1::thread_tmp_1933_fu_110364_p2() {
    tmp_1933_fu_110364_p2 = (!tmp_1930_fu_110346_p4.read().is_01() || !tmp_1931_fu_110355_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1930_fu_110346_p4.read()) + sc_biguint<15>(tmp_1931_fu_110355_p4.read()));
}

void a0_conv2d_1::thread_tmp_1935_fu_151161_p4() {
    tmp_1935_fu_151161_p4 = r_V_86_9_fu_181787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1936_fu_110379_p4() {
    tmp_1936_fu_110379_p4 = r_V_81_s_fu_173643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1937_fu_110388_p4() {
    tmp_1937_fu_110388_p4 = r_V_87_9_fu_173483_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1938_fu_110403_p2() {
    tmp_1938_fu_110403_p2 = (!tmp_1937_fu_110388_p4.read().is_01() || !tmp_1936_fu_110379_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1937_fu_110388_p4.read()) + sc_biguint<15>(tmp_1936_fu_110379_p4.read()));
}

void a0_conv2d_1::thread_tmp_1939_fu_110409_p4() {
    tmp_1939_fu_110409_p4 = r_V_88_9_fu_173491_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_193_fu_139404_p2() {
    tmp_193_fu_139404_p2 = (!tmp_190_fu_139374_p4.read().is_01() || !tmp_191_fu_139383_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_190_fu_139374_p4.read()) + sc_biguint<15>(tmp_191_fu_139383_p4.read()));
}

void a0_conv2d_1::thread_tmp_1940_fu_151179_p2() {
    tmp_1940_fu_151179_p2 = (!tmp_1934_reg_223931.read().is_01() || !tmp_1935_fu_151161_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1934_reg_223931.read()) + sc_biguint<15>(tmp_1935_fu_151161_p4.read()));
}

void a0_conv2d_1::thread_tmp_1941_fu_110418_p2() {
    tmp_1941_fu_110418_p2 = (!tmp_1938_fu_110403_p2.read().is_01() || !tmp_1939_fu_110409_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1938_fu_110403_p2.read()) + sc_biguint<15>(tmp_1939_fu_110409_p4.read()));
}

void a0_conv2d_1::thread_tmp_1942_fu_151190_p2() {
    tmp_1942_fu_151190_p2 = (!tmp_1941_reg_223941.read().is_01() || !tmp_1940_fu_151179_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1941_reg_223941.read()) + sc_biguint<15>(tmp_1940_fu_151179_p2.read()));
}

void a0_conv2d_1::thread_tmp_1943_fu_151195_p2() {
    tmp_1943_fu_151195_p2 = (!tmp_1933_reg_223926.read().is_01() || !tmp_1932_fu_151149_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1933_reg_223926.read()) + sc_biguint<15>(tmp_1932_fu_151149_p2.read()));
}

void a0_conv2d_1::thread_tmp_1944_fu_151206_p2() {
    tmp_1944_fu_151206_p2 = (!tmp_1926_fu_151105_p2.read().is_01() || !tmp_1927_fu_151110_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1926_fu_151105_p2.read()) + sc_biguint<15>(tmp_1927_fu_151110_p2.read()));
}

void a0_conv2d_1::thread_tmp_1945_fu_151212_p2() {
    tmp_1945_fu_151212_p2 = (!tmp_1942_fu_151190_p2.read().is_01() || !tmp_1943_fu_151195_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1942_fu_151190_p2.read()) + sc_biguint<15>(tmp_1943_fu_151195_p2.read()));
}

void a0_conv2d_1::thread_tmp_1946_fu_151224_p4() {
    tmp_1946_fu_151224_p4 = r_V_89_9_fu_181795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1947_fu_151233_p4() {
    tmp_1947_fu_151233_p4 = r_V_83_s_fu_181875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1948_fu_110424_p4() {
    tmp_1948_fu_110424_p4 = r_V_82_s_fu_173651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1949_fu_110433_p4() {
    tmp_1949_fu_110433_p4 = r_V_85_s_fu_173667_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_194_fu_139416_p4() {
    tmp_194_fu_139416_p4 = r_V_76_47_fu_185531_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1950_fu_151252_p2() {
    tmp_1950_fu_151252_p2 = (!tmp_1946_fu_151224_p4.read().is_01() || !tmp_1947_fu_151233_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1946_fu_151224_p4.read()) + sc_biguint<15>(tmp_1947_fu_151233_p4.read()));
}

void a0_conv2d_1::thread_tmp_1951_fu_110442_p2() {
    tmp_1951_fu_110442_p2 = (!tmp_1948_fu_110424_p4.read().is_01() || !tmp_1949_fu_110433_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1948_fu_110424_p4.read()) + sc_biguint<15>(tmp_1949_fu_110433_p4.read()));
}

void a0_conv2d_1::thread_tmp_1953_fu_151264_p4() {
    tmp_1953_fu_151264_p4 = r_V_86_s_fu_181883_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1954_fu_110457_p4() {
    tmp_1954_fu_110457_p4 = r_V_81_10_fu_173835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1955_fu_110466_p4() {
    tmp_1955_fu_110466_p4 = r_V_87_s_fu_173675_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1956_fu_110481_p2() {
    tmp_1956_fu_110481_p2 = (!tmp_1955_fu_110466_p4.read().is_01() || !tmp_1954_fu_110457_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1955_fu_110466_p4.read()) + sc_biguint<15>(tmp_1954_fu_110457_p4.read()));
}

void a0_conv2d_1::thread_tmp_1957_fu_110487_p4() {
    tmp_1957_fu_110487_p4 = r_V_88_s_fu_173683_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1958_fu_151278_p2() {
    tmp_1958_fu_151278_p2 = (!tmp_1952_reg_223951.read().is_01() || !tmp_1953_fu_151264_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1952_reg_223951.read()) + sc_biguint<15>(tmp_1953_fu_151264_p4.read()));
}

void a0_conv2d_1::thread_tmp_1959_fu_110502_p2() {
    tmp_1959_fu_110502_p2 = (!tmp_1956_fu_110481_p2.read().is_01() || !tmp_1957_fu_110487_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1956_fu_110481_p2.read()) + sc_biguint<15>(tmp_1957_fu_110487_p4.read()));
}

void a0_conv2d_1::thread_tmp_195_fu_139425_p4() {
    tmp_195_fu_139425_p4 = r_V_75_47_fu_185523_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1960_fu_151288_p2() {
    tmp_1960_fu_151288_p2 = (!tmp_1959_reg_223961.read().is_01() || !tmp_1958_fu_151278_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1959_reg_223961.read()) + sc_biguint<15>(tmp_1958_fu_151278_p2.read()));
}

void a0_conv2d_1::thread_tmp_1961_fu_151293_p2() {
    tmp_1961_fu_151293_p2 = (!tmp_1951_reg_223946.read().is_01() || !tmp_1950_fu_151252_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1951_reg_223946.read()) + sc_biguint<15>(tmp_1950_fu_151252_p2.read()));
}

void a0_conv2d_1::thread_tmp_1962_fu_151304_p4() {
    tmp_1962_fu_151304_p4 = r_V_89_s_fu_181891_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1963_fu_151313_p4() {
    tmp_1963_fu_151313_p4 = r_V_83_10_fu_181971_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1964_fu_110508_p4() {
    tmp_1964_fu_110508_p4 = r_V_82_10_fu_173843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1965_fu_110517_p4() {
    tmp_1965_fu_110517_p4 = r_V_85_10_fu_173859_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1966_fu_151332_p2() {
    tmp_1966_fu_151332_p2 = (!tmp_1962_fu_151304_p4.read().is_01() || !tmp_1963_fu_151313_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1962_fu_151304_p4.read()) + sc_biguint<15>(tmp_1963_fu_151313_p4.read()));
}

void a0_conv2d_1::thread_tmp_1967_fu_110526_p2() {
    tmp_1967_fu_110526_p2 = (!tmp_1964_fu_110508_p4.read().is_01() || !tmp_1965_fu_110517_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1964_fu_110508_p4.read()) + sc_biguint<15>(tmp_1965_fu_110517_p4.read()));
}

void a0_conv2d_1::thread_tmp_1969_fu_151344_p4() {
    tmp_1969_fu_151344_p4 = r_V_86_10_fu_181979_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_196_fu_139440_p4() {
    tmp_196_fu_139440_p4 = r_V_78_47_fu_185547_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1970_fu_110541_p4() {
    tmp_1970_fu_110541_p4 = r_V_81_11_fu_174027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1971_fu_110550_p4() {
    tmp_1971_fu_110550_p4 = r_V_87_10_fu_173867_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1972_fu_110565_p2() {
    tmp_1972_fu_110565_p2 = (!tmp_1971_fu_110550_p4.read().is_01() || !tmp_1970_fu_110541_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1971_fu_110550_p4.read()) + sc_biguint<15>(tmp_1970_fu_110541_p4.read()));
}

void a0_conv2d_1::thread_tmp_1973_fu_110571_p4() {
    tmp_1973_fu_110571_p4 = r_V_88_10_fu_173875_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1974_fu_151358_p2() {
    tmp_1974_fu_151358_p2 = (!tmp_1968_reg_223971.read().is_01() || !tmp_1969_fu_151344_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1968_reg_223971.read()) + sc_biguint<15>(tmp_1969_fu_151344_p4.read()));
}

void a0_conv2d_1::thread_tmp_1975_fu_110586_p2() {
    tmp_1975_fu_110586_p2 = (!tmp_1972_fu_110565_p2.read().is_01() || !tmp_1973_fu_110571_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1972_fu_110565_p2.read()) + sc_biguint<15>(tmp_1973_fu_110571_p4.read()));
}

void a0_conv2d_1::thread_tmp_1976_fu_151368_p2() {
    tmp_1976_fu_151368_p2 = (!tmp_1975_reg_223981.read().is_01() || !tmp_1974_fu_151358_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1975_reg_223981.read()) + sc_biguint<15>(tmp_1974_fu_151358_p2.read()));
}

void a0_conv2d_1::thread_tmp_1977_fu_151373_p2() {
    tmp_1977_fu_151373_p2 = (!tmp_1967_reg_223966.read().is_01() || !tmp_1966_fu_151332_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1967_reg_223966.read()) + sc_biguint<15>(tmp_1966_fu_151332_p2.read()));
}

void a0_conv2d_1::thread_tmp_1978_fu_151384_p2() {
    tmp_1978_fu_151384_p2 = (!tmp_1960_fu_151288_p2.read().is_01() || !tmp_1961_fu_151293_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1960_fu_151288_p2.read()) + sc_biguint<15>(tmp_1961_fu_151293_p2.read()));
}

void a0_conv2d_1::thread_tmp_1979_fu_151390_p2() {
    tmp_1979_fu_151390_p2 = (!tmp_1976_fu_151368_p2.read().is_01() || !tmp_1977_fu_151373_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1976_fu_151368_p2.read()) + sc_biguint<15>(tmp_1977_fu_151373_p2.read()));
}

void a0_conv2d_1::thread_tmp_197_fu_139449_p4() {
    tmp_197_fu_139449_p4 = r_V_79_47_fu_185555_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1980_fu_151396_p2() {
    tmp_1980_fu_151396_p2 = (!tmp_1979_fu_151390_p2.read().is_01() || !tmp_1978_fu_151384_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1979_fu_151390_p2.read()) + sc_biguint<15>(tmp_1978_fu_151384_p2.read()));
}

void a0_conv2d_1::thread_tmp_1981_fu_151402_p2() {
    tmp_1981_fu_151402_p2 = (!tmp_1945_fu_151212_p2.read().is_01() || !tmp_1944_fu_151206_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1945_fu_151212_p2.read()) + sc_biguint<15>(tmp_1944_fu_151206_p2.read()));
}

void a0_conv2d_1::thread_tmp_1982_fu_151408_p4() {
    tmp_1982_fu_151408_p4 = r_V_89_10_fu_181987_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1983_fu_151417_p4() {
    tmp_1983_fu_151417_p4 = r_V_83_11_fu_182067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1984_fu_110592_p4() {
    tmp_1984_fu_110592_p4 = r_V_82_11_fu_174035_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1985_fu_110601_p4() {
    tmp_1985_fu_110601_p4 = r_V_85_11_fu_174051_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1986_fu_151436_p2() {
    tmp_1986_fu_151436_p2 = (!tmp_1982_fu_151408_p4.read().is_01() || !tmp_1983_fu_151417_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1982_fu_151408_p4.read()) + sc_biguint<15>(tmp_1983_fu_151417_p4.read()));
}

void a0_conv2d_1::thread_tmp_1987_fu_110610_p2() {
    tmp_1987_fu_110610_p2 = (!tmp_1984_fu_110592_p4.read().is_01() || !tmp_1985_fu_110601_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1984_fu_110592_p4.read()) + sc_biguint<15>(tmp_1985_fu_110601_p4.read()));
}

void a0_conv2d_1::thread_tmp_1989_fu_151448_p4() {
    tmp_1989_fu_151448_p4 = r_V_86_11_fu_182075_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_198_fu_139464_p2() {
    tmp_198_fu_139464_p2 = (!tmp_197_fu_139449_p4.read().is_01() || !tmp_196_fu_139440_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_197_fu_139449_p4.read()) + sc_biguint<15>(tmp_196_fu_139440_p4.read()));
}

void a0_conv2d_1::thread_tmp_1990_fu_110625_p4() {
    tmp_1990_fu_110625_p4 = r_V_81_12_fu_174219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1991_fu_110634_p4() {
    tmp_1991_fu_110634_p4 = r_V_87_11_fu_174059_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1992_fu_110649_p2() {
    tmp_1992_fu_110649_p2 = (!tmp_1991_fu_110634_p4.read().is_01() || !tmp_1990_fu_110625_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1991_fu_110634_p4.read()) + sc_biguint<15>(tmp_1990_fu_110625_p4.read()));
}

void a0_conv2d_1::thread_tmp_1993_fu_110655_p4() {
    tmp_1993_fu_110655_p4 = r_V_88_11_fu_174067_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1994_fu_151462_p2() {
    tmp_1994_fu_151462_p2 = (!tmp_1988_reg_223991.read().is_01() || !tmp_1989_fu_151448_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1988_reg_223991.read()) + sc_biguint<15>(tmp_1989_fu_151448_p4.read()));
}

void a0_conv2d_1::thread_tmp_1995_fu_110670_p2() {
    tmp_1995_fu_110670_p2 = (!tmp_1992_fu_110649_p2.read().is_01() || !tmp_1993_fu_110655_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1992_fu_110649_p2.read()) + sc_biguint<15>(tmp_1993_fu_110655_p4.read()));
}

void a0_conv2d_1::thread_tmp_1996_fu_151472_p2() {
    tmp_1996_fu_151472_p2 = (!tmp_1995_reg_224001.read().is_01() || !tmp_1994_fu_151462_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1995_reg_224001.read()) + sc_biguint<15>(tmp_1994_fu_151462_p2.read()));
}

void a0_conv2d_1::thread_tmp_1997_fu_151477_p2() {
    tmp_1997_fu_151477_p2 = (!tmp_1987_reg_223986.read().is_01() || !tmp_1986_fu_151436_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1987_reg_223986.read()) + sc_biguint<15>(tmp_1986_fu_151436_p2.read()));
}

void a0_conv2d_1::thread_tmp_1998_fu_151488_p4() {
    tmp_1998_fu_151488_p4 = r_V_89_11_fu_182083_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_1999_fu_151497_p4() {
    tmp_1999_fu_151497_p4 = r_V_83_12_fu_182163_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_199_fu_139470_p4() {
    tmp_199_fu_139470_p4 = r_V_77_47_fu_185539_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_19_fu_69912_p5() {
    tmp_19_fu_69912_p5 = esl_concat<8,1>(esl_concat<5,3>(esl_concat<3,2>(tmp_18_fu_69908_p1.read(), ap_const_lv2_0), tmp_18_fu_69908_p1.read()), ap_const_lv1_0);
}

void a0_conv2d_1::thread_tmp_19_mid1_fu_70130_p5() {
    tmp_19_mid1_fu_70130_p5 = esl_concat<8,1>(esl_concat<5,3>(esl_concat<3,2>(tmp_30_fu_70126_p1.read(), ap_const_lv2_0), tmp_30_fu_70126_p1.read()), ap_const_lv1_0);
}

void a0_conv2d_1::thread_tmp_2000_fu_110676_p4() {
    tmp_2000_fu_110676_p4 = r_V_82_12_fu_174227_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2001_fu_110685_p4() {
    tmp_2001_fu_110685_p4 = r_V_85_12_fu_174243_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2002_fu_151516_p2() {
    tmp_2002_fu_151516_p2 = (!tmp_1998_fu_151488_p4.read().is_01() || !tmp_1999_fu_151497_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1998_fu_151488_p4.read()) + sc_biguint<15>(tmp_1999_fu_151497_p4.read()));
}

void a0_conv2d_1::thread_tmp_2003_fu_110694_p2() {
    tmp_2003_fu_110694_p2 = (!tmp_2000_fu_110676_p4.read().is_01() || !tmp_2001_fu_110685_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2000_fu_110676_p4.read()) + sc_biguint<15>(tmp_2001_fu_110685_p4.read()));
}

void a0_conv2d_1::thread_tmp_2005_fu_151528_p4() {
    tmp_2005_fu_151528_p4 = r_V_86_12_fu_182171_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2006_fu_110709_p4() {
    tmp_2006_fu_110709_p4 = r_V_81_13_fu_174411_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2007_fu_110718_p4() {
    tmp_2007_fu_110718_p4 = r_V_87_12_fu_174251_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2008_fu_110733_p2() {
    tmp_2008_fu_110733_p2 = (!tmp_2007_fu_110718_p4.read().is_01() || !tmp_2006_fu_110709_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2007_fu_110718_p4.read()) + sc_biguint<15>(tmp_2006_fu_110709_p4.read()));
}

void a0_conv2d_1::thread_tmp_2009_fu_110739_p4() {
    tmp_2009_fu_110739_p4 = r_V_88_12_fu_174259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_200_fu_139485_p2() {
    tmp_200_fu_139485_p2 = (!tmp_194_fu_139416_p4.read().is_01() || !tmp_195_fu_139425_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_194_fu_139416_p4.read()) + sc_biguint<15>(tmp_195_fu_139425_p4.read()));
}

void a0_conv2d_1::thread_tmp_2010_fu_151546_p2() {
    tmp_2010_fu_151546_p2 = (!tmp_2004_reg_224011.read().is_01() || !tmp_2005_fu_151528_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2004_reg_224011.read()) + sc_biguint<15>(tmp_2005_fu_151528_p4.read()));
}

void a0_conv2d_1::thread_tmp_2011_fu_110748_p2() {
    tmp_2011_fu_110748_p2 = (!tmp_2008_fu_110733_p2.read().is_01() || !tmp_2009_fu_110739_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2008_fu_110733_p2.read()) + sc_biguint<15>(tmp_2009_fu_110739_p4.read()));
}

void a0_conv2d_1::thread_tmp_2012_fu_151557_p2() {
    tmp_2012_fu_151557_p2 = (!tmp_2011_reg_224021.read().is_01() || !tmp_2010_fu_151546_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2011_reg_224021.read()) + sc_biguint<15>(tmp_2010_fu_151546_p2.read()));
}

void a0_conv2d_1::thread_tmp_2013_fu_151562_p2() {
    tmp_2013_fu_151562_p2 = (!tmp_2003_reg_224006.read().is_01() || !tmp_2002_fu_151516_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2003_reg_224006.read()) + sc_biguint<15>(tmp_2002_fu_151516_p2.read()));
}

void a0_conv2d_1::thread_tmp_2014_fu_151573_p2() {
    tmp_2014_fu_151573_p2 = (!tmp_1996_fu_151472_p2.read().is_01() || !tmp_1997_fu_151477_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1996_fu_151472_p2.read()) + sc_biguint<15>(tmp_1997_fu_151477_p2.read()));
}

void a0_conv2d_1::thread_tmp_2015_fu_151579_p2() {
    tmp_2015_fu_151579_p2 = (!tmp_2012_fu_151557_p2.read().is_01() || !tmp_2013_fu_151562_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2012_fu_151557_p2.read()) + sc_biguint<15>(tmp_2013_fu_151562_p2.read()));
}

void a0_conv2d_1::thread_tmp_2016_fu_151591_p4() {
    tmp_2016_fu_151591_p4 = r_V_89_12_fu_182179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2017_fu_151600_p4() {
    tmp_2017_fu_151600_p4 = r_V_83_13_fu_182259_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2018_fu_110754_p4() {
    tmp_2018_fu_110754_p4 = r_V_82_13_fu_174419_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2019_fu_110763_p4() {
    tmp_2019_fu_110763_p4 = r_V_85_13_fu_174435_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_201_fu_139491_p2() {
    tmp_201_fu_139491_p2 = (!tmp_198_fu_139464_p2.read().is_01() || !tmp_199_fu_139470_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_198_fu_139464_p2.read()) + sc_biguint<15>(tmp_199_fu_139470_p4.read()));
}

void a0_conv2d_1::thread_tmp_2020_fu_151619_p2() {
    tmp_2020_fu_151619_p2 = (!tmp_2016_fu_151591_p4.read().is_01() || !tmp_2017_fu_151600_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2016_fu_151591_p4.read()) + sc_biguint<15>(tmp_2017_fu_151600_p4.read()));
}

void a0_conv2d_1::thread_tmp_2021_fu_110772_p2() {
    tmp_2021_fu_110772_p2 = (!tmp_2018_fu_110754_p4.read().is_01() || !tmp_2019_fu_110763_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2018_fu_110754_p4.read()) + sc_biguint<15>(tmp_2019_fu_110763_p4.read()));
}

void a0_conv2d_1::thread_tmp_2023_fu_151631_p4() {
    tmp_2023_fu_151631_p4 = r_V_86_13_fu_182267_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2024_fu_110787_p4() {
    tmp_2024_fu_110787_p4 = r_V_81_14_fu_174603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2025_fu_110796_p4() {
    tmp_2025_fu_110796_p4 = r_V_87_13_fu_174443_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2026_fu_110811_p2() {
    tmp_2026_fu_110811_p2 = (!tmp_2025_fu_110796_p4.read().is_01() || !tmp_2024_fu_110787_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2025_fu_110796_p4.read()) + sc_biguint<15>(tmp_2024_fu_110787_p4.read()));
}

void a0_conv2d_1::thread_tmp_2027_fu_110817_p4() {
    tmp_2027_fu_110817_p4 = r_V_88_13_fu_174451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2028_fu_151645_p2() {
    tmp_2028_fu_151645_p2 = (!tmp_2022_reg_224031.read().is_01() || !tmp_2023_fu_151631_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2022_reg_224031.read()) + sc_biguint<15>(tmp_2023_fu_151631_p4.read()));
}

void a0_conv2d_1::thread_tmp_2029_fu_110832_p2() {
    tmp_2029_fu_110832_p2 = (!tmp_2026_fu_110811_p2.read().is_01() || !tmp_2027_fu_110817_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2026_fu_110811_p2.read()) + sc_biguint<15>(tmp_2027_fu_110817_p4.read()));
}

void a0_conv2d_1::thread_tmp_202_fu_139503_p2() {
    tmp_202_fu_139503_p2 = (!tmp_201_fu_139491_p2.read().is_01() || !tmp_200_fu_139485_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_201_fu_139491_p2.read()) + sc_biguint<15>(tmp_200_fu_139485_p2.read()));
}

void a0_conv2d_1::thread_tmp_2030_fu_151655_p2() {
    tmp_2030_fu_151655_p2 = (!tmp_2029_reg_224041.read().is_01() || !tmp_2028_fu_151645_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2029_reg_224041.read()) + sc_biguint<15>(tmp_2028_fu_151645_p2.read()));
}

void a0_conv2d_1::thread_tmp_2031_fu_151660_p2() {
    tmp_2031_fu_151660_p2 = (!tmp_2021_reg_224026.read().is_01() || !tmp_2020_fu_151619_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2021_reg_224026.read()) + sc_biguint<15>(tmp_2020_fu_151619_p2.read()));
}

void a0_conv2d_1::thread_tmp_2032_fu_151671_p4() {
    tmp_2032_fu_151671_p4 = r_V_89_13_fu_182275_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2033_fu_151680_p4() {
    tmp_2033_fu_151680_p4 = r_V_83_14_fu_182355_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2034_fu_110838_p4() {
    tmp_2034_fu_110838_p4 = r_V_82_14_fu_174611_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2035_fu_110847_p4() {
    tmp_2035_fu_110847_p4 = r_V_85_14_fu_174627_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2036_fu_151699_p2() {
    tmp_2036_fu_151699_p2 = (!tmp_2032_fu_151671_p4.read().is_01() || !tmp_2033_fu_151680_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2032_fu_151671_p4.read()) + sc_biguint<15>(tmp_2033_fu_151680_p4.read()));
}

void a0_conv2d_1::thread_tmp_2037_fu_110856_p2() {
    tmp_2037_fu_110856_p2 = (!tmp_2034_fu_110838_p4.read().is_01() || !tmp_2035_fu_110847_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2034_fu_110838_p4.read()) + sc_biguint<15>(tmp_2035_fu_110847_p4.read()));
}

void a0_conv2d_1::thread_tmp_2039_fu_151711_p4() {
    tmp_2039_fu_151711_p4 = r_V_86_14_fu_182363_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_203_fu_139509_p2() {
    tmp_203_fu_139509_p2 = (!tmp_193_fu_139404_p2.read().is_01() || !tmp_192_fu_139398_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_193_fu_139404_p2.read()) + sc_biguint<15>(tmp_192_fu_139398_p2.read()));
}

void a0_conv2d_1::thread_tmp_2040_fu_110871_p4() {
    tmp_2040_fu_110871_p4 = r_V_81_15_fu_174795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2041_fu_110880_p4() {
    tmp_2041_fu_110880_p4 = r_V_87_14_fu_174635_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2042_fu_110895_p2() {
    tmp_2042_fu_110895_p2 = (!tmp_2041_fu_110880_p4.read().is_01() || !tmp_2040_fu_110871_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2041_fu_110880_p4.read()) + sc_biguint<15>(tmp_2040_fu_110871_p4.read()));
}

void a0_conv2d_1::thread_tmp_2043_fu_110901_p4() {
    tmp_2043_fu_110901_p4 = r_V_88_14_fu_174643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2044_fu_151725_p2() {
    tmp_2044_fu_151725_p2 = (!tmp_2038_reg_224051.read().is_01() || !tmp_2039_fu_151711_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2038_reg_224051.read()) + sc_biguint<15>(tmp_2039_fu_151711_p4.read()));
}

void a0_conv2d_1::thread_tmp_2045_fu_110916_p2() {
    tmp_2045_fu_110916_p2 = (!tmp_2042_fu_110895_p2.read().is_01() || !tmp_2043_fu_110901_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2042_fu_110895_p2.read()) + sc_biguint<15>(tmp_2043_fu_110901_p4.read()));
}

void a0_conv2d_1::thread_tmp_2046_fu_151735_p2() {
    tmp_2046_fu_151735_p2 = (!tmp_2045_reg_224061.read().is_01() || !tmp_2044_fu_151725_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2045_reg_224061.read()) + sc_biguint<15>(tmp_2044_fu_151725_p2.read()));
}

void a0_conv2d_1::thread_tmp_2047_fu_151740_p2() {
    tmp_2047_fu_151740_p2 = (!tmp_2037_reg_224046.read().is_01() || !tmp_2036_fu_151699_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2037_reg_224046.read()) + sc_biguint<15>(tmp_2036_fu_151699_p2.read()));
}

void a0_conv2d_1::thread_tmp_2048_fu_151751_p2() {
    tmp_2048_fu_151751_p2 = (!tmp_2030_fu_151655_p2.read().is_01() || !tmp_2031_fu_151660_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2030_fu_151655_p2.read()) + sc_biguint<15>(tmp_2031_fu_151660_p2.read()));
}

void a0_conv2d_1::thread_tmp_2049_fu_151757_p2() {
    tmp_2049_fu_151757_p2 = (!tmp_2046_fu_151735_p2.read().is_01() || !tmp_2047_fu_151740_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2046_fu_151735_p2.read()) + sc_biguint<15>(tmp_2047_fu_151740_p2.read()));
}

void a0_conv2d_1::thread_tmp_204_fu_139521_p4() {
    tmp_204_fu_139521_p4 = r_V_72_48_fu_185787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2050_fu_151763_p2() {
    tmp_2050_fu_151763_p2 = (!tmp_2049_fu_151757_p2.read().is_01() || !tmp_2048_fu_151751_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2049_fu_151757_p2.read()) + sc_biguint<15>(tmp_2048_fu_151751_p2.read()));
}

void a0_conv2d_1::thread_tmp_2051_fu_151769_p2() {
    tmp_2051_fu_151769_p2 = (!tmp_2015_fu_151579_p2.read().is_01() || !tmp_2014_fu_151573_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2015_fu_151579_p2.read()) + sc_biguint<15>(tmp_2014_fu_151573_p2.read()));
}

void a0_conv2d_1::thread_tmp_2052_fu_170148_p2() {
    tmp_2052_fu_170148_p2 = (!tmp_1980_reg_227576.read().is_01() || !tmp_1981_reg_227581.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1980_reg_227576.read()) + sc_biguint<15>(tmp_1981_reg_227581.read()));
}

void a0_conv2d_1::thread_tmp_2053_fu_151775_p2() {
    tmp_2053_fu_151775_p2 = (!tmp_2050_fu_151763_p2.read().is_01() || !tmp_2051_fu_151769_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2050_fu_151763_p2.read()) + sc_biguint<15>(tmp_2051_fu_151769_p2.read()));
}

void a0_conv2d_1::thread_tmp_2054_fu_170158_p2() {
    tmp_2054_fu_170158_p2 = (!tmp_2053_reg_227601.read().is_01() || !tmp_2052_fu_170148_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2053_reg_227601.read()) + sc_biguint<15>(tmp_2052_fu_170148_p2.read()));
}

void a0_conv2d_1::thread_tmp_2055_fu_170163_p2() {
    tmp_2055_fu_170163_p2 = (!tmp_1911_reg_227556.read().is_01() || !tmp_1910_fu_170121_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1911_reg_227556.read()) + sc_biguint<15>(tmp_1910_fu_170121_p2.read()));
}

void a0_conv2d_1::thread_tmp_2056_fu_151781_p4() {
    tmp_2056_fu_151781_p4 = r_V_89_14_fu_182371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2057_fu_151790_p4() {
    tmp_2057_fu_151790_p4 = r_V_83_15_fu_182451_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2058_fu_110922_p4() {
    tmp_2058_fu_110922_p4 = r_V_82_15_fu_174803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2059_fu_110931_p4() {
    tmp_2059_fu_110931_p4 = r_V_85_15_fu_174819_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_205_fu_139530_p4() {
    tmp_205_fu_139530_p4 = r_V_80_47_fu_185563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2060_fu_151809_p2() {
    tmp_2060_fu_151809_p2 = (!tmp_2056_fu_151781_p4.read().is_01() || !tmp_2057_fu_151790_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2056_fu_151781_p4.read()) + sc_biguint<15>(tmp_2057_fu_151790_p4.read()));
}

void a0_conv2d_1::thread_tmp_2061_fu_110940_p2() {
    tmp_2061_fu_110940_p2 = (!tmp_2058_fu_110922_p4.read().is_01() || !tmp_2059_fu_110931_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2058_fu_110922_p4.read()) + sc_biguint<15>(tmp_2059_fu_110931_p4.read()));
}

void a0_conv2d_1::thread_tmp_2063_fu_151821_p4() {
    tmp_2063_fu_151821_p4 = r_V_86_15_fu_182459_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2064_fu_110955_p4() {
    tmp_2064_fu_110955_p4 = r_V_81_16_fu_174987_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2065_fu_110964_p4() {
    tmp_2065_fu_110964_p4 = r_V_87_15_fu_174827_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2066_fu_110979_p2() {
    tmp_2066_fu_110979_p2 = (!tmp_2065_fu_110964_p4.read().is_01() || !tmp_2064_fu_110955_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2065_fu_110964_p4.read()) + sc_biguint<15>(tmp_2064_fu_110955_p4.read()));
}

void a0_conv2d_1::thread_tmp_2067_fu_110985_p4() {
    tmp_2067_fu_110985_p4 = r_V_88_15_fu_174835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2068_fu_151835_p2() {
    tmp_2068_fu_151835_p2 = (!tmp_2062_reg_224071.read().is_01() || !tmp_2063_fu_151821_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2062_reg_224071.read()) + sc_biguint<15>(tmp_2063_fu_151821_p4.read()));
}

void a0_conv2d_1::thread_tmp_2069_fu_111000_p2() {
    tmp_2069_fu_111000_p2 = (!tmp_2066_fu_110979_p2.read().is_01() || !tmp_2067_fu_110985_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2066_fu_110979_p2.read()) + sc_biguint<15>(tmp_2067_fu_110985_p4.read()));
}

void a0_conv2d_1::thread_tmp_206_fu_139545_p4() {
    tmp_206_fu_139545_p4 = r_V_74_48_fu_185803_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2070_fu_151845_p2() {
    tmp_2070_fu_151845_p2 = (!tmp_2069_reg_224081.read().is_01() || !tmp_2068_fu_151835_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2069_reg_224081.read()) + sc_biguint<15>(tmp_2068_fu_151835_p2.read()));
}

void a0_conv2d_1::thread_tmp_2071_fu_151850_p2() {
    tmp_2071_fu_151850_p2 = (!tmp_2061_reg_224066.read().is_01() || !tmp_2060_fu_151809_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2061_reg_224066.read()) + sc_biguint<15>(tmp_2060_fu_151809_p2.read()));
}

void a0_conv2d_1::thread_tmp_2072_fu_151861_p4() {
    tmp_2072_fu_151861_p4 = r_V_89_15_fu_182467_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2073_fu_151870_p4() {
    tmp_2073_fu_151870_p4 = r_V_83_16_fu_182547_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2074_fu_111006_p4() {
    tmp_2074_fu_111006_p4 = r_V_82_16_fu_174995_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2075_fu_111015_p4() {
    tmp_2075_fu_111015_p4 = r_V_85_16_fu_175011_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2076_fu_151889_p2() {
    tmp_2076_fu_151889_p2 = (!tmp_2072_fu_151861_p4.read().is_01() || !tmp_2073_fu_151870_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2072_fu_151861_p4.read()) + sc_biguint<15>(tmp_2073_fu_151870_p4.read()));
}

void a0_conv2d_1::thread_tmp_2077_fu_111024_p2() {
    tmp_2077_fu_111024_p2 = (!tmp_2074_fu_111006_p4.read().is_01() || !tmp_2075_fu_111015_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2074_fu_111006_p4.read()) + sc_biguint<15>(tmp_2075_fu_111015_p4.read()));
}

void a0_conv2d_1::thread_tmp_2079_fu_151901_p4() {
    tmp_2079_fu_151901_p4 = r_V_86_16_fu_182555_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_207_fu_139554_p4() {
    tmp_207_fu_139554_p4 = r_V_73_48_fu_185795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2080_fu_111039_p4() {
    tmp_2080_fu_111039_p4 = r_V_81_17_fu_175179_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2081_fu_111048_p4() {
    tmp_2081_fu_111048_p4 = r_V_87_16_fu_175019_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2082_fu_111063_p2() {
    tmp_2082_fu_111063_p2 = (!tmp_2081_fu_111048_p4.read().is_01() || !tmp_2080_fu_111039_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2081_fu_111048_p4.read()) + sc_biguint<15>(tmp_2080_fu_111039_p4.read()));
}

void a0_conv2d_1::thread_tmp_2083_fu_111069_p4() {
    tmp_2083_fu_111069_p4 = r_V_88_16_fu_175027_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2084_fu_151919_p2() {
    tmp_2084_fu_151919_p2 = (!tmp_2078_reg_224091.read().is_01() || !tmp_2079_fu_151901_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2078_reg_224091.read()) + sc_biguint<15>(tmp_2079_fu_151901_p4.read()));
}

void a0_conv2d_1::thread_tmp_2085_fu_111078_p2() {
    tmp_2085_fu_111078_p2 = (!tmp_2082_fu_111063_p2.read().is_01() || !tmp_2083_fu_111069_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2082_fu_111063_p2.read()) + sc_biguint<15>(tmp_2083_fu_111069_p4.read()));
}

void a0_conv2d_1::thread_tmp_2086_fu_151930_p2() {
    tmp_2086_fu_151930_p2 = (!tmp_2085_reg_224101.read().is_01() || !tmp_2084_fu_151919_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2085_reg_224101.read()) + sc_biguint<15>(tmp_2084_fu_151919_p2.read()));
}

void a0_conv2d_1::thread_tmp_2087_fu_151935_p2() {
    tmp_2087_fu_151935_p2 = (!tmp_2077_reg_224086.read().is_01() || !tmp_2076_fu_151889_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2077_reg_224086.read()) + sc_biguint<15>(tmp_2076_fu_151889_p2.read()));
}

void a0_conv2d_1::thread_tmp_2088_fu_151946_p2() {
    tmp_2088_fu_151946_p2 = (!tmp_2070_fu_151845_p2.read().is_01() || !tmp_2071_fu_151850_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2070_fu_151845_p2.read()) + sc_biguint<15>(tmp_2071_fu_151850_p2.read()));
}

void a0_conv2d_1::thread_tmp_2089_fu_151952_p2() {
    tmp_2089_fu_151952_p2 = (!tmp_2086_fu_151930_p2.read().is_01() || !tmp_2087_fu_151935_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2086_fu_151930_p2.read()) + sc_biguint<15>(tmp_2087_fu_151935_p2.read()));
}

void a0_conv2d_1::thread_tmp_208_fu_139569_p2() {
    tmp_208_fu_139569_p2 = (!tmp_204_fu_139521_p4.read().is_01() || !tmp_205_fu_139530_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_204_fu_139521_p4.read()) + sc_biguint<15>(tmp_205_fu_139530_p4.read()));
}

void a0_conv2d_1::thread_tmp_2090_fu_151964_p4() {
    tmp_2090_fu_151964_p4 = r_V_89_16_fu_182563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2091_fu_151973_p4() {
    tmp_2091_fu_151973_p4 = r_V_83_17_fu_182643_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2092_fu_111084_p4() {
    tmp_2092_fu_111084_p4 = r_V_82_17_fu_175187_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2093_fu_111093_p4() {
    tmp_2093_fu_111093_p4 = r_V_85_17_fu_175203_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2094_fu_151992_p2() {
    tmp_2094_fu_151992_p2 = (!tmp_2090_fu_151964_p4.read().is_01() || !tmp_2091_fu_151973_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2090_fu_151964_p4.read()) + sc_biguint<15>(tmp_2091_fu_151973_p4.read()));
}

void a0_conv2d_1::thread_tmp_2095_fu_111102_p2() {
    tmp_2095_fu_111102_p2 = (!tmp_2092_fu_111084_p4.read().is_01() || !tmp_2093_fu_111093_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2092_fu_111084_p4.read()) + sc_biguint<15>(tmp_2093_fu_111093_p4.read()));
}

void a0_conv2d_1::thread_tmp_2097_fu_152004_p4() {
    tmp_2097_fu_152004_p4 = r_V_86_17_fu_182651_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2098_fu_111117_p4() {
    tmp_2098_fu_111117_p4 = r_V_81_18_fu_175371_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2099_fu_111126_p4() {
    tmp_2099_fu_111126_p4 = r_V_87_17_fu_175211_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_209_fu_139575_p2() {
    tmp_209_fu_139575_p2 = (!tmp_206_fu_139545_p4.read().is_01() || !tmp_207_fu_139554_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_206_fu_139545_p4.read()) + sc_biguint<15>(tmp_207_fu_139554_p4.read()));
}

void a0_conv2d_1::thread_tmp_20_cast_fu_69924_p1() {
    tmp_20_cast_fu_69924_p1 = esl_zext<10,9>(tmp_19_fu_69912_p5.read());
}

void a0_conv2d_1::thread_tmp_20_cast_mid1_fu_70142_p1() {
    tmp_20_cast_mid1_fu_70142_p1 = esl_zext<10,9>(tmp_19_mid1_fu_70130_p5.read());
}

void a0_conv2d_1::thread_tmp_20_cast_mid2_cas_fu_70154_p1() {
    tmp_20_cast_mid2_cas_fu_70154_p1 = esl_zext<10,9>(tmp_20_cast_mid2_fu_70146_p3.read());
}

void a0_conv2d_1::thread_tmp_20_cast_mid2_fu_70146_p3() {
    tmp_20_cast_mid2_fu_70146_p3 = (!exitcond_flatten_fu_70106_p2.read()[0].is_01())? sc_lv<9>(): ((exitcond_flatten_fu_70106_p2.read()[0].to_bool())? tmp_19_mid1_fu_70130_p5.read(): tmp_19_fu_69912_p5.read());
}

void a0_conv2d_1::thread_tmp_20_fu_69936_p2() {
    tmp_20_fu_69936_p2 = (!tmp_20_cast_fu_69924_p1.read().is_01() || !tmp_23_cast_fu_69932_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_cast_fu_69924_p1.read()) + sc_biguint<10>(tmp_23_cast_fu_69932_p1.read()));
}

void a0_conv2d_1::thread_tmp_20_mid1_fu_70424_p2() {
    tmp_20_mid1_fu_70424_p2 = (!tmp_20_cast_mid2_cas_fu_70154_p1.read().is_01() || !tmp_23_cast_mid1_fu_70420_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_cast_mid2_cas_fu_70154_p1.read()) + sc_biguint<10>(tmp_23_cast_mid1_fu_70420_p1.read()));
}

void a0_conv2d_1::thread_tmp_2100_fu_111141_p2() {
    tmp_2100_fu_111141_p2 = (!tmp_2099_fu_111126_p4.read().is_01() || !tmp_2098_fu_111117_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2099_fu_111126_p4.read()) + sc_biguint<15>(tmp_2098_fu_111117_p4.read()));
}

void a0_conv2d_1::thread_tmp_2101_fu_111147_p4() {
    tmp_2101_fu_111147_p4 = r_V_88_17_fu_175219_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2102_fu_152018_p2() {
    tmp_2102_fu_152018_p2 = (!tmp_2096_reg_224111.read().is_01() || !tmp_2097_fu_152004_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2096_reg_224111.read()) + sc_biguint<15>(tmp_2097_fu_152004_p4.read()));
}

void a0_conv2d_1::thread_tmp_2103_fu_111162_p2() {
    tmp_2103_fu_111162_p2 = (!tmp_2100_fu_111141_p2.read().is_01() || !tmp_2101_fu_111147_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2100_fu_111141_p2.read()) + sc_biguint<15>(tmp_2101_fu_111147_p4.read()));
}

void a0_conv2d_1::thread_tmp_2104_fu_152028_p2() {
    tmp_2104_fu_152028_p2 = (!tmp_2103_reg_224121.read().is_01() || !tmp_2102_fu_152018_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2103_reg_224121.read()) + sc_biguint<15>(tmp_2102_fu_152018_p2.read()));
}

void a0_conv2d_1::thread_tmp_2105_fu_152033_p2() {
    tmp_2105_fu_152033_p2 = (!tmp_2095_reg_224106.read().is_01() || !tmp_2094_fu_151992_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2095_reg_224106.read()) + sc_biguint<15>(tmp_2094_fu_151992_p2.read()));
}

void a0_conv2d_1::thread_tmp_2106_fu_152044_p4() {
    tmp_2106_fu_152044_p4 = r_V_89_17_fu_182659_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2107_fu_152053_p4() {
    tmp_2107_fu_152053_p4 = r_V_83_18_fu_182739_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2108_fu_111168_p4() {
    tmp_2108_fu_111168_p4 = r_V_82_18_fu_175379_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2109_fu_111177_p4() {
    tmp_2109_fu_111177_p4 = r_V_85_18_fu_175395_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_210_fu_139587_p4() {
    tmp_210_fu_139587_p4 = r_V_76_48_fu_185819_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2110_fu_152072_p2() {
    tmp_2110_fu_152072_p2 = (!tmp_2106_fu_152044_p4.read().is_01() || !tmp_2107_fu_152053_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2106_fu_152044_p4.read()) + sc_biguint<15>(tmp_2107_fu_152053_p4.read()));
}

void a0_conv2d_1::thread_tmp_2111_fu_111186_p2() {
    tmp_2111_fu_111186_p2 = (!tmp_2108_fu_111168_p4.read().is_01() || !tmp_2109_fu_111177_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2108_fu_111168_p4.read()) + sc_biguint<15>(tmp_2109_fu_111177_p4.read()));
}

void a0_conv2d_1::thread_tmp_2113_fu_152084_p4() {
    tmp_2113_fu_152084_p4 = r_V_86_18_fu_182747_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2114_fu_111201_p4() {
    tmp_2114_fu_111201_p4 = r_V_81_19_fu_175563_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2115_fu_111210_p4() {
    tmp_2115_fu_111210_p4 = r_V_87_18_fu_175403_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2116_fu_111225_p2() {
    tmp_2116_fu_111225_p2 = (!tmp_2115_fu_111210_p4.read().is_01() || !tmp_2114_fu_111201_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2115_fu_111210_p4.read()) + sc_biguint<15>(tmp_2114_fu_111201_p4.read()));
}

void a0_conv2d_1::thread_tmp_2117_fu_111231_p4() {
    tmp_2117_fu_111231_p4 = r_V_88_18_fu_175411_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2118_fu_152098_p2() {
    tmp_2118_fu_152098_p2 = (!tmp_2112_reg_224131.read().is_01() || !tmp_2113_fu_152084_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2112_reg_224131.read()) + sc_biguint<15>(tmp_2113_fu_152084_p4.read()));
}

void a0_conv2d_1::thread_tmp_2119_fu_111246_p2() {
    tmp_2119_fu_111246_p2 = (!tmp_2116_fu_111225_p2.read().is_01() || !tmp_2117_fu_111231_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2116_fu_111225_p2.read()) + sc_biguint<15>(tmp_2117_fu_111231_p4.read()));
}

void a0_conv2d_1::thread_tmp_211_fu_139596_p4() {
    tmp_211_fu_139596_p4 = r_V_75_48_fu_185811_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2120_fu_152108_p2() {
    tmp_2120_fu_152108_p2 = (!tmp_2119_reg_224141.read().is_01() || !tmp_2118_fu_152098_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2119_reg_224141.read()) + sc_biguint<15>(tmp_2118_fu_152098_p2.read()));
}

void a0_conv2d_1::thread_tmp_2121_fu_152113_p2() {
    tmp_2121_fu_152113_p2 = (!tmp_2111_reg_224126.read().is_01() || !tmp_2110_fu_152072_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2111_reg_224126.read()) + sc_biguint<15>(tmp_2110_fu_152072_p2.read()));
}

void a0_conv2d_1::thread_tmp_2122_fu_152124_p2() {
    tmp_2122_fu_152124_p2 = (!tmp_2104_fu_152028_p2.read().is_01() || !tmp_2105_fu_152033_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2104_fu_152028_p2.read()) + sc_biguint<15>(tmp_2105_fu_152033_p2.read()));
}

void a0_conv2d_1::thread_tmp_2123_fu_152130_p2() {
    tmp_2123_fu_152130_p2 = (!tmp_2120_fu_152108_p2.read().is_01() || !tmp_2121_fu_152113_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2120_fu_152108_p2.read()) + sc_biguint<15>(tmp_2121_fu_152113_p2.read()));
}

void a0_conv2d_1::thread_tmp_2124_fu_152136_p2() {
    tmp_2124_fu_152136_p2 = (!tmp_2123_fu_152130_p2.read().is_01() || !tmp_2122_fu_152124_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2123_fu_152130_p2.read()) + sc_biguint<15>(tmp_2122_fu_152124_p2.read()));
}

void a0_conv2d_1::thread_tmp_2125_fu_152142_p2() {
    tmp_2125_fu_152142_p2 = (!tmp_2089_fu_151952_p2.read().is_01() || !tmp_2088_fu_151946_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2089_fu_151952_p2.read()) + sc_biguint<15>(tmp_2088_fu_151946_p2.read()));
}

void a0_conv2d_1::thread_tmp_2126_fu_152148_p4() {
    tmp_2126_fu_152148_p4 = r_V_89_18_fu_182755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2127_fu_152157_p4() {
    tmp_2127_fu_152157_p4 = r_V_83_19_fu_182835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2128_fu_111252_p4() {
    tmp_2128_fu_111252_p4 = r_V_82_19_fu_175571_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2129_fu_111261_p4() {
    tmp_2129_fu_111261_p4 = r_V_85_19_fu_175587_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_212_fu_139611_p4() {
    tmp_212_fu_139611_p4 = r_V_78_48_fu_185835_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2130_fu_152176_p2() {
    tmp_2130_fu_152176_p2 = (!tmp_2126_fu_152148_p4.read().is_01() || !tmp_2127_fu_152157_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2126_fu_152148_p4.read()) + sc_biguint<15>(tmp_2127_fu_152157_p4.read()));
}

void a0_conv2d_1::thread_tmp_2131_fu_111270_p2() {
    tmp_2131_fu_111270_p2 = (!tmp_2128_fu_111252_p4.read().is_01() || !tmp_2129_fu_111261_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2128_fu_111252_p4.read()) + sc_biguint<15>(tmp_2129_fu_111261_p4.read()));
}

void a0_conv2d_1::thread_tmp_2133_fu_152188_p4() {
    tmp_2133_fu_152188_p4 = r_V_86_19_fu_182843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2134_fu_111285_p4() {
    tmp_2134_fu_111285_p4 = r_V_81_20_fu_175755_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2135_fu_111294_p4() {
    tmp_2135_fu_111294_p4 = r_V_87_19_fu_175595_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2136_fu_111309_p2() {
    tmp_2136_fu_111309_p2 = (!tmp_2135_fu_111294_p4.read().is_01() || !tmp_2134_fu_111285_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2135_fu_111294_p4.read()) + sc_biguint<15>(tmp_2134_fu_111285_p4.read()));
}

void a0_conv2d_1::thread_tmp_2137_fu_111315_p4() {
    tmp_2137_fu_111315_p4 = r_V_88_19_fu_175603_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2138_fu_152202_p2() {
    tmp_2138_fu_152202_p2 = (!tmp_2132_reg_224151.read().is_01() || !tmp_2133_fu_152188_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2132_reg_224151.read()) + sc_biguint<15>(tmp_2133_fu_152188_p4.read()));
}

void a0_conv2d_1::thread_tmp_2139_fu_111330_p2() {
    tmp_2139_fu_111330_p2 = (!tmp_2136_fu_111309_p2.read().is_01() || !tmp_2137_fu_111315_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2136_fu_111309_p2.read()) + sc_biguint<15>(tmp_2137_fu_111315_p4.read()));
}

void a0_conv2d_1::thread_tmp_213_fu_139620_p4() {
    tmp_213_fu_139620_p4 = r_V_79_48_fu_185843_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2140_fu_152212_p2() {
    tmp_2140_fu_152212_p2 = (!tmp_2139_reg_224161.read().is_01() || !tmp_2138_fu_152202_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2139_reg_224161.read()) + sc_biguint<15>(tmp_2138_fu_152202_p2.read()));
}

void a0_conv2d_1::thread_tmp_2141_fu_152217_p2() {
    tmp_2141_fu_152217_p2 = (!tmp_2131_reg_224146.read().is_01() || !tmp_2130_fu_152176_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2131_reg_224146.read()) + sc_biguint<15>(tmp_2130_fu_152176_p2.read()));
}

void a0_conv2d_1::thread_tmp_2142_fu_152228_p4() {
    tmp_2142_fu_152228_p4 = r_V_89_19_fu_182851_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2143_fu_152237_p4() {
    tmp_2143_fu_152237_p4 = r_V_83_20_fu_182931_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2144_fu_111336_p4() {
    tmp_2144_fu_111336_p4 = r_V_82_20_fu_175763_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2145_fu_111345_p4() {
    tmp_2145_fu_111345_p4 = r_V_85_20_fu_175779_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2146_fu_152256_p2() {
    tmp_2146_fu_152256_p2 = (!tmp_2142_fu_152228_p4.read().is_01() || !tmp_2143_fu_152237_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2142_fu_152228_p4.read()) + sc_biguint<15>(tmp_2143_fu_152237_p4.read()));
}

void a0_conv2d_1::thread_tmp_2147_fu_111354_p2() {
    tmp_2147_fu_111354_p2 = (!tmp_2144_fu_111336_p4.read().is_01() || !tmp_2145_fu_111345_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2144_fu_111336_p4.read()) + sc_biguint<15>(tmp_2145_fu_111345_p4.read()));
}

void a0_conv2d_1::thread_tmp_2149_fu_152268_p4() {
    tmp_2149_fu_152268_p4 = r_V_86_20_fu_182939_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_214_fu_139635_p2() {
    tmp_214_fu_139635_p2 = (!tmp_213_fu_139620_p4.read().is_01() || !tmp_212_fu_139611_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_213_fu_139620_p4.read()) + sc_biguint<15>(tmp_212_fu_139611_p4.read()));
}

void a0_conv2d_1::thread_tmp_2150_fu_111369_p4() {
    tmp_2150_fu_111369_p4 = r_V_81_21_fu_175947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2151_fu_111378_p4() {
    tmp_2151_fu_111378_p4 = r_V_87_20_fu_175787_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2152_fu_111393_p2() {
    tmp_2152_fu_111393_p2 = (!tmp_2151_fu_111378_p4.read().is_01() || !tmp_2150_fu_111369_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2151_fu_111378_p4.read()) + sc_biguint<15>(tmp_2150_fu_111369_p4.read()));
}

void a0_conv2d_1::thread_tmp_2153_fu_111399_p4() {
    tmp_2153_fu_111399_p4 = r_V_88_20_fu_175795_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2154_fu_152286_p2() {
    tmp_2154_fu_152286_p2 = (!tmp_2148_reg_224171.read().is_01() || !tmp_2149_fu_152268_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2148_reg_224171.read()) + sc_biguint<15>(tmp_2149_fu_152268_p4.read()));
}

void a0_conv2d_1::thread_tmp_2155_fu_111408_p2() {
    tmp_2155_fu_111408_p2 = (!tmp_2152_fu_111393_p2.read().is_01() || !tmp_2153_fu_111399_p4.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2152_fu_111393_p2.read()) + sc_biguint<15>(tmp_2153_fu_111399_p4.read()));
}

void a0_conv2d_1::thread_tmp_2156_fu_152297_p2() {
    tmp_2156_fu_152297_p2 = (!tmp_2155_reg_224181.read().is_01() || !tmp_2154_fu_152286_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2155_reg_224181.read()) + sc_biguint<15>(tmp_2154_fu_152286_p2.read()));
}

void a0_conv2d_1::thread_tmp_2157_fu_152302_p2() {
    tmp_2157_fu_152302_p2 = (!tmp_2147_reg_224166.read().is_01() || !tmp_2146_fu_152256_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2147_reg_224166.read()) + sc_biguint<15>(tmp_2146_fu_152256_p2.read()));
}

void a0_conv2d_1::thread_tmp_2158_fu_152313_p2() {
    tmp_2158_fu_152313_p2 = (!tmp_2140_fu_152212_p2.read().is_01() || !tmp_2141_fu_152217_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2140_fu_152212_p2.read()) + sc_biguint<15>(tmp_2141_fu_152217_p2.read()));
}

void a0_conv2d_1::thread_tmp_2159_fu_152319_p2() {
    tmp_2159_fu_152319_p2 = (!tmp_2156_fu_152297_p2.read().is_01() || !tmp_2157_fu_152302_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_2156_fu_152297_p2.read()) + sc_biguint<15>(tmp_2157_fu_152302_p2.read()));
}

void a0_conv2d_1::thread_tmp_215_fu_139641_p4() {
    tmp_215_fu_139641_p4 = r_V_77_48_fu_185827_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2160_fu_152331_p4() {
    tmp_2160_fu_152331_p4 = r_V_89_20_fu_182947_p2.read().range(28, 14);
}

void a0_conv2d_1::thread_tmp_2161_fu_152340_p4() {
    tmp_2161_fu_152340_p4 = r_V_83_21_fu_183027_p2.read().range(28, 14);
}

}

