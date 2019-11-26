#include "a0_conv2d_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void a0_conv2d_1::thread_tmp1421_fu_157455_p2() {
    tmp1421_fu_157455_p2 = (!r3esult6_V_41_fu_130274_p4.read().is_01() || !tmp1420_fu_157438_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_41_fu_130274_p4.read()) + sc_biguint<16>(tmp1420_fu_157438_p2.read()));
}

void a0_conv2d_1::thread_tmp1422_fu_157471_p2() {
    tmp1422_fu_157471_p2 = (!tmp1419_reg_224821.read().is_01() || !tmp1421_fu_157455_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1419_reg_224821.read()) + sc_biguint<16>(tmp1421_fu_157455_p2.read()));
}

void a0_conv2d_1::thread_tmp1423_fu_157488_p2() {
    tmp1423_fu_157488_p2 = (!tmp1418_fu_157432_p2.read().is_01() || !tmp1422_fu_157471_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1418_fu_157432_p2.read()) + sc_biguint<16>(tmp1422_fu_157471_p2.read()));
}

void a0_conv2d_1::thread_tmp1424_fu_157503_p2() {
    tmp1424_fu_157503_p2 = (!r3esult9_V_41_fu_130287_p4.read().is_01() || !r3esult1_V_42_reg_218556.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_41_fu_130287_p4.read()) + sc_biguint<16>(r3esult1_V_42_reg_218556.read()));
}

void a0_conv2d_1::thread_tmp1425_fu_157517_p2() {
    tmp1425_fu_157517_p2 = (!r3esult2_V_42_reg_218561.read().is_01() || !r3esult3_V_42_fu_130417_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult2_V_42_reg_218561.read()) + sc_biguint<16>(r3esult3_V_42_fu_130417_p4.read()));
}

void a0_conv2d_1::thread_tmp1426_fu_157532_p2() {
    tmp1426_fu_157532_p2 = (!tmp1424_fu_157503_p2.read().is_01() || !tmp1425_fu_157517_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1424_fu_157503_p2.read()) + sc_biguint<16>(tmp1425_fu_157517_p2.read()));
}

void a0_conv2d_1::thread_tmp1427_fu_112923_p2() {
    tmp1427_fu_112923_p2 = (!r3esult4_V_42_fu_102249_p4.read().is_01() || !r3esult5_V_42_fu_102262_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult4_V_42_fu_102249_p4.read()) + sc_biguint<16>(r3esult5_V_42_fu_102262_p4.read()));
}

void a0_conv2d_1::thread_tmp1428_fu_157538_p2() {
    tmp1428_fu_157538_p2 = (!r3esult7_V_42_reg_218576.read().is_01() || !r3esult8_V_42_reg_218581.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult7_V_42_reg_218576.read()) + sc_biguint<16>(r3esult8_V_42_reg_218581.read()));
}

void a0_conv2d_1::thread_tmp1429_fu_157555_p2() {
    tmp1429_fu_157555_p2 = (!r3esult6_V_42_fu_130430_p4.read().is_01() || !tmp1428_fu_157538_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_42_fu_130430_p4.read()) + sc_biguint<16>(tmp1428_fu_157538_p2.read()));
}

void a0_conv2d_1::thread_tmp142_fu_169613_p2() {
    tmp142_fu_169613_p2 = (!tmp124_reg_227006.read().is_01() || !tmp141_fu_169609_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp124_reg_227006.read()) + sc_biguint<16>(tmp141_fu_169609_p2.read()));
}

void a0_conv2d_1::thread_tmp1430_fu_157571_p2() {
    tmp1430_fu_157571_p2 = (!tmp1427_reg_224856.read().is_01() || !tmp1429_fu_157555_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1427_reg_224856.read()) + sc_biguint<16>(tmp1429_fu_157555_p2.read()));
}

void a0_conv2d_1::thread_tmp1431_fu_157588_p2() {
    tmp1431_fu_157588_p2 = (!tmp1426_fu_157532_p2.read().is_01() || !tmp1430_fu_157571_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1426_fu_157532_p2.read()) + sc_biguint<16>(tmp1430_fu_157571_p2.read()));
}

void a0_conv2d_1::thread_tmp1432_fu_170397_p2() {
    tmp1432_fu_170397_p2 = (!tmp1423_reg_227851.read().is_01() || !tmp1431_reg_227856.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1423_reg_227851.read()) + sc_biguint<16>(tmp1431_reg_227856.read()));
}

void a0_conv2d_1::thread_tmp1433_fu_170401_p2() {
    tmp1433_fu_170401_p2 = (!tmp1415_reg_227846.read().is_01() || !tmp1432_fu_170397_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1415_reg_227846.read()) + sc_biguint<16>(tmp1432_fu_170397_p2.read()));
}

void a0_conv2d_1::thread_tmp1434_fu_157627_p2() {
    tmp1434_fu_157627_p2 = (!r3esult9_V_42_fu_130443_p4.read().is_01() || !r3esult1_V_43_reg_218696.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_42_fu_130443_p4.read()) + sc_biguint<16>(r3esult1_V_43_reg_218696.read()));
}

void a0_conv2d_1::thread_tmp1435_fu_157641_p2() {
    tmp1435_fu_157641_p2 = (!r3esult2_V_43_reg_218701.read().is_01() || !r3esult3_V_43_fu_130573_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult2_V_43_reg_218701.read()) + sc_biguint<16>(r3esult3_V_43_fu_130573_p4.read()));
}

void a0_conv2d_1::thread_tmp1436_fu_157656_p2() {
    tmp1436_fu_157656_p2 = (!tmp1434_fu_157627_p2.read().is_01() || !tmp1435_fu_157641_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1434_fu_157627_p2.read()) + sc_biguint<16>(tmp1435_fu_157641_p2.read()));
}

void a0_conv2d_1::thread_tmp1437_fu_112983_p2() {
    tmp1437_fu_112983_p2 = (!r3esult4_V_43_fu_102630_p4.read().is_01() || !r3esult5_V_43_fu_102643_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult4_V_43_fu_102630_p4.read()) + sc_biguint<16>(r3esult5_V_43_fu_102643_p4.read()));
}

void a0_conv2d_1::thread_tmp1438_fu_157662_p2() {
    tmp1438_fu_157662_p2 = (!r3esult7_V_43_reg_218716.read().is_01() || !r3esult8_V_43_reg_218721.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult7_V_43_reg_218716.read()) + sc_biguint<16>(r3esult8_V_43_reg_218721.read()));
}

void a0_conv2d_1::thread_tmp1439_fu_157679_p2() {
    tmp1439_fu_157679_p2 = (!r3esult6_V_43_fu_130586_p4.read().is_01() || !tmp1438_fu_157662_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_43_fu_130586_p4.read()) + sc_biguint<16>(tmp1438_fu_157662_p2.read()));
}

void a0_conv2d_1::thread_tmp143_fu_140094_p2() {
    tmp143_fu_140094_p2 = (!result9_V_50_fu_132549_p4.read().is_01() || !result1_V_51_fu_132894_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_50_fu_132549_p4.read()) + sc_biguint<16>(result1_V_51_fu_132894_p4.read()));
}

void a0_conv2d_1::thread_tmp1440_fu_157695_p2() {
    tmp1440_fu_157695_p2 = (!tmp1437_reg_224891.read().is_01() || !tmp1439_fu_157679_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1437_reg_224891.read()) + sc_biguint<16>(tmp1439_fu_157679_p2.read()));
}

void a0_conv2d_1::thread_tmp1441_fu_157712_p2() {
    tmp1441_fu_157712_p2 = (!tmp1436_fu_157656_p2.read().is_01() || !tmp1440_fu_157695_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1436_fu_157656_p2.read()) + sc_biguint<16>(tmp1440_fu_157695_p2.read()));
}

void a0_conv2d_1::thread_tmp1442_fu_157727_p2() {
    tmp1442_fu_157727_p2 = (!r3esult9_V_43_fu_130599_p4.read().is_01() || !r3esult1_V_44_reg_218816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_43_fu_130599_p4.read()) + sc_biguint<16>(r3esult1_V_44_reg_218816.read()));
}

void a0_conv2d_1::thread_tmp1443_fu_157741_p2() {
    tmp1443_fu_157741_p2 = (!r3esult2_V_44_reg_218821.read().is_01() || !r3esult3_V_44_fu_130729_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult2_V_44_reg_218821.read()) + sc_biguint<16>(r3esult3_V_44_fu_130729_p4.read()));
}

void a0_conv2d_1::thread_tmp1444_fu_157756_p2() {
    tmp1444_fu_157756_p2 = (!tmp1442_fu_157727_p2.read().is_01() || !tmp1443_fu_157741_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1442_fu_157727_p2.read()) + sc_biguint<16>(tmp1443_fu_157741_p2.read()));
}

void a0_conv2d_1::thread_tmp1445_fu_113043_p2() {
    tmp1445_fu_113043_p2 = (!r3esult4_V_44_fu_103011_p4.read().is_01() || !r3esult5_V_44_fu_103024_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult4_V_44_fu_103011_p4.read()) + sc_biguint<16>(r3esult5_V_44_fu_103024_p4.read()));
}

void a0_conv2d_1::thread_tmp1446_fu_113067_p2() {
    tmp1446_fu_113067_p2 = (!r3esult7_V_44_fu_103037_p4.read().is_01() || !r3esult8_V_44_fu_103050_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult7_V_44_fu_103037_p4.read()) + sc_biguint<16>(r3esult8_V_44_fu_103050_p4.read()));
}

void a0_conv2d_1::thread_tmp1447_fu_157775_p2() {
    tmp1447_fu_157775_p2 = (!r3esult6_V_44_fu_130742_p4.read().is_01() || !tmp1446_reg_224941.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_44_fu_130742_p4.read()) + sc_biguint<16>(tmp1446_reg_224941.read()));
}

void a0_conv2d_1::thread_tmp1448_fu_157790_p2() {
    tmp1448_fu_157790_p2 = (!tmp1445_reg_224926.read().is_01() || !tmp1447_fu_157775_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1445_reg_224926.read()) + sc_biguint<16>(tmp1447_fu_157775_p2.read()));
}

void a0_conv2d_1::thread_tmp1449_fu_157807_p2() {
    tmp1449_fu_157807_p2 = (!tmp1444_fu_157756_p2.read().is_01() || !tmp1448_fu_157790_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1444_fu_157756_p2.read()) + sc_biguint<16>(tmp1448_fu_157790_p2.read()));
}

void a0_conv2d_1::thread_tmp144_fu_140118_p2() {
    tmp144_fu_140118_p2 = (!result2_V_51_fu_132906_p4.read().is_01() || !result3_V_51_fu_132919_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_51_fu_132906_p4.read()) + sc_biguint<16>(result3_V_51_fu_132919_p4.read()));
}

void a0_conv2d_1::thread_tmp1450_fu_157825_p2() {
    tmp1450_fu_157825_p2 = (!tmp1441_fu_157712_p2.read().is_01() || !tmp1449_fu_157807_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1441_fu_157712_p2.read()) + sc_biguint<16>(tmp1449_fu_157807_p2.read()));
}

void a0_conv2d_1::thread_tmp1451_fu_157840_p2() {
    tmp1451_fu_157840_p2 = (!r3esult9_V_44_fu_130755_p4.read().is_01() || !r3esult1_V_45_reg_218936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_44_fu_130755_p4.read()) + sc_biguint<16>(r3esult1_V_45_reg_218936.read()));
}

void a0_conv2d_1::thread_tmp1452_fu_157854_p2() {
    tmp1452_fu_157854_p2 = (!r3esult2_V_45_reg_218941.read().is_01() || !r3esult3_V_45_fu_130885_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult2_V_45_reg_218941.read()) + sc_biguint<16>(r3esult3_V_45_fu_130885_p4.read()));
}

void a0_conv2d_1::thread_tmp1453_fu_157869_p2() {
    tmp1453_fu_157869_p2 = (!tmp1451_fu_157840_p2.read().is_01() || !tmp1452_fu_157854_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1451_fu_157840_p2.read()) + sc_biguint<16>(tmp1452_fu_157854_p2.read()));
}

void a0_conv2d_1::thread_tmp1454_fu_113109_p2() {
    tmp1454_fu_113109_p2 = (!r3esult4_V_45_fu_103392_p4.read().is_01() || !r3esult5_V_45_fu_103405_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult4_V_45_fu_103392_p4.read()) + sc_biguint<16>(r3esult5_V_45_fu_103405_p4.read()));
}

void a0_conv2d_1::thread_tmp1455_fu_157875_p2() {
    tmp1455_fu_157875_p2 = (!r3esult7_V_45_reg_218956.read().is_01() || !r3esult8_V_45_reg_218961.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult7_V_45_reg_218956.read()) + sc_biguint<16>(r3esult8_V_45_reg_218961.read()));
}

void a0_conv2d_1::thread_tmp1456_fu_157892_p2() {
    tmp1456_fu_157892_p2 = (!r3esult6_V_45_fu_130898_p4.read().is_01() || !tmp1455_fu_157875_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_45_fu_130898_p4.read()) + sc_biguint<16>(tmp1455_fu_157875_p2.read()));
}

void a0_conv2d_1::thread_tmp1457_fu_157908_p2() {
    tmp1457_fu_157908_p2 = (!tmp1454_reg_224966.read().is_01() || !tmp1456_fu_157892_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1454_reg_224966.read()) + sc_biguint<16>(tmp1456_fu_157892_p2.read()));
}

void a0_conv2d_1::thread_tmp1458_fu_157925_p2() {
    tmp1458_fu_157925_p2 = (!tmp1453_fu_157869_p2.read().is_01() || !tmp1457_fu_157908_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1453_fu_157869_p2.read()) + sc_biguint<16>(tmp1457_fu_157908_p2.read()));
}

void a0_conv2d_1::thread_tmp1459_fu_157940_p2() {
    tmp1459_fu_157940_p2 = (!r3esult9_V_45_fu_130911_p4.read().is_01() || !r3esult1_V_46_reg_219056.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_45_fu_130911_p4.read()) + sc_biguint<16>(r3esult1_V_46_reg_219056.read()));
}

void a0_conv2d_1::thread_tmp145_fu_140136_p2() {
    tmp145_fu_140136_p2 = (!tmp143_fu_140094_p2.read().is_01() || !tmp144_fu_140118_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp143_fu_140094_p2.read()) + sc_biguint<16>(tmp144_fu_140118_p2.read()));
}

void a0_conv2d_1::thread_tmp1460_fu_157954_p2() {
    tmp1460_fu_157954_p2 = (!r3esult2_V_46_reg_219061.read().is_01() || !r3esult3_V_46_fu_131041_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult2_V_46_reg_219061.read()) + sc_biguint<16>(r3esult3_V_46_fu_131041_p4.read()));
}

void a0_conv2d_1::thread_tmp1461_fu_157969_p2() {
    tmp1461_fu_157969_p2 = (!tmp1459_fu_157940_p2.read().is_01() || !tmp1460_fu_157954_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1459_fu_157940_p2.read()) + sc_biguint<16>(tmp1460_fu_157954_p2.read()));
}

void a0_conv2d_1::thread_tmp1462_fu_113169_p2() {
    tmp1462_fu_113169_p2 = (!r3esult4_V_46_fu_103773_p4.read().is_01() || !r3esult5_V_46_fu_103786_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult4_V_46_fu_103773_p4.read()) + sc_biguint<16>(r3esult5_V_46_fu_103786_p4.read()));
}

void a0_conv2d_1::thread_tmp1463_fu_113193_p2() {
    tmp1463_fu_113193_p2 = (!r3esult7_V_46_fu_103799_p4.read().is_01() || !r3esult8_V_46_fu_103812_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult7_V_46_fu_103799_p4.read()) + sc_biguint<16>(r3esult8_V_46_fu_103812_p4.read()));
}

void a0_conv2d_1::thread_tmp1464_fu_157988_p2() {
    tmp1464_fu_157988_p2 = (!r3esult6_V_46_fu_131054_p4.read().is_01() || !tmp1463_reg_225016.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_46_fu_131054_p4.read()) + sc_biguint<16>(tmp1463_reg_225016.read()));
}

void a0_conv2d_1::thread_tmp1465_fu_158003_p2() {
    tmp1465_fu_158003_p2 = (!tmp1462_reg_225001.read().is_01() || !tmp1464_fu_157988_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1462_reg_225001.read()) + sc_biguint<16>(tmp1464_fu_157988_p2.read()));
}

void a0_conv2d_1::thread_tmp1466_fu_158020_p2() {
    tmp1466_fu_158020_p2 = (!tmp1461_fu_157969_p2.read().is_01() || !tmp1465_fu_158003_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1461_fu_157969_p2.read()) + sc_biguint<16>(tmp1465_fu_158003_p2.read()));
}

void a0_conv2d_1::thread_tmp1467_fu_158038_p2() {
    tmp1467_fu_158038_p2 = (!tmp1458_fu_157925_p2.read().is_01() || !tmp1466_fu_158020_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1458_fu_157925_p2.read()) + sc_biguint<16>(tmp1466_fu_158020_p2.read()));
}

void a0_conv2d_1::thread_tmp1468_fu_170410_p2() {
    tmp1468_fu_170410_p2 = (!tmp1450_reg_227881.read().is_01() || !tmp1467_reg_227886.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1450_reg_227881.read()) + sc_biguint<16>(tmp1467_reg_227886.read()));
}

void a0_conv2d_1::thread_tmp1469_fu_170423_p2() {
    tmp1469_fu_170423_p2 = (!tmp1433_fu_170401_p2.read().is_01() || !tmp1468_fu_170410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1433_fu_170401_p2.read()) + sc_biguint<16>(tmp1468_fu_170410_p2.read()));
}

void a0_conv2d_1::thread_tmp146_fu_140160_p2() {
    tmp146_fu_140160_p2 = (!result4_V_51_fu_132931_p4.read().is_01() || !result5_V_51_fu_132943_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_51_fu_132931_p4.read()) + sc_biguint<16>(result5_V_51_fu_132943_p4.read()));
}

void a0_conv2d_1::thread_tmp1470_fu_170441_p2() {
    tmp1470_fu_170441_p2 = (!tmp1398_fu_170391_p2.read().is_01() || !tmp1469_fu_170423_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1398_fu_170391_p2.read()) + sc_biguint<16>(tmp1469_fu_170423_p2.read()));
}

void a0_conv2d_1::thread_tmp1471_fu_170459_p2() {
    tmp1471_fu_170459_p2 = (!tmp1327_fu_170354_p2.read().is_01() || !tmp1470_fu_170441_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1327_fu_170354_p2.read()) + sc_biguint<16>(tmp1470_fu_170441_p2.read()));
}

void a0_conv2d_1::thread_tmp1472_fu_113217_p2() {
    tmp1472_fu_113217_p2 = (!r3esult1_V_fu_85840_p4.read().is_01() || !r3esult2_V_fu_85853_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_fu_85840_p4.read()) + sc_biguint<16>(r3esult2_V_fu_85853_p4.read()));
}

void a0_conv2d_1::thread_tmp1473_fu_158059_p2() {
    tmp1473_fu_158059_p2 = (!r3esult3_V_fu_123709_p4.read().is_01() || !r3esult4_V_reg_213101.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_fu_123709_p4.read()) + sc_biguint<16>(r3esult4_V_reg_213101.read()));
}

void a0_conv2d_1::thread_tmp1474_fu_158073_p2() {
    tmp1474_fu_158073_p2 = (!tmp1472_reg_225031.read().is_01() || !tmp1473_fu_158059_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1472_reg_225031.read()) + sc_biguint<16>(tmp1473_fu_158059_p2.read()));
}

void a0_conv2d_1::thread_tmp1475_fu_158087_p2() {
    tmp1475_fu_158087_p2 = (!r3esult5_V_reg_213106.read().is_01() || !r3esult6_V_fu_123722_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_reg_213106.read()) + sc_biguint<16>(r3esult6_V_fu_123722_p4.read()));
}

void a0_conv2d_1::thread_tmp1476_fu_113259_p2() {
    tmp1476_fu_113259_p2 = (!r3esult1_V_1_fu_86221_p4.read().is_01() || !r3esult7_V_fu_85892_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_1_fu_86221_p4.read()) + sc_biguint<16>(r3esult7_V_fu_85892_p4.read()));
}

void a0_conv2d_1::thread_tmp1477_fu_113280_p2() {
    tmp1477_fu_113280_p2 = (!r3esult8_V_fu_85905_p4.read().is_01() || !tmp1476_fu_113259_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_fu_85905_p4.read()) + sc_biguint<16>(tmp1476_fu_113259_p2.read()));
}

void a0_conv2d_1::thread_tmp1478_fu_158097_p2() {
    tmp1478_fu_158097_p2 = (!tmp1475_fu_158087_p2.read().is_01() || !tmp1477_reg_225046.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1475_fu_158087_p2.read()) + sc_biguint<16>(tmp1477_reg_225046.read()));
}

void a0_conv2d_1::thread_tmp1479_fu_158113_p2() {
    tmp1479_fu_158113_p2 = (!tmp1474_fu_158073_p2.read().is_01() || !tmp1478_fu_158097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1474_fu_158073_p2.read()) + sc_biguint<16>(tmp1478_fu_158097_p2.read()));
}

void a0_conv2d_1::thread_tmp147_fu_140184_p2() {
    tmp147_fu_140184_p2 = (!result7_V_51_fu_132968_p4.read().is_01() || !result8_V_51_fu_132980_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_51_fu_132968_p4.read()) + sc_biguint<16>(result8_V_51_fu_132980_p4.read()));
}

void a0_conv2d_1::thread_tmp1480_fu_158137_p2() {
    tmp1480_fu_158137_p2 = (!r3esult3_V_1_fu_123865_p4.read().is_01() || !r3esult9_V_fu_123735_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_1_fu_123865_p4.read()) + sc_biguint<16>(r3esult9_V_fu_123735_p4.read()));
}

void a0_conv2d_1::thread_tmp1481_fu_158143_p2() {
    tmp1481_fu_158143_p2 = (!r3esult5_V_1_reg_213231.read().is_01() || !r3esult2_V_1_reg_213216.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_1_reg_213231.read()) + sc_biguint<16>(r3esult2_V_1_reg_213216.read()));
}

void a0_conv2d_1::thread_tmp1482_fu_158153_p2() {
    tmp1482_fu_158153_p2 = (!tmp1480_fu_158137_p2.read().is_01() || !tmp1481_fu_158143_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1480_fu_158137_p2.read()) + sc_biguint<16>(tmp1481_fu_158143_p2.read()));
}

void a0_conv2d_1::thread_tmp1483_fu_158168_p2() {
    tmp1483_fu_158168_p2 = (!r3esult6_V_1_fu_123878_p4.read().is_01() || !r3esult4_V_1_reg_213226.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_1_fu_123878_p4.read()) + sc_biguint<16>(r3esult4_V_1_reg_213226.read()));
}

void a0_conv2d_1::thread_tmp1484_fu_113343_p2() {
    tmp1484_fu_113343_p2 = (!r3esult1_V_2_fu_86602_p4.read().is_01() || !r3esult7_V_1_fu_86273_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_2_fu_86602_p4.read()) + sc_biguint<16>(r3esult7_V_1_fu_86273_p4.read()));
}

void a0_conv2d_1::thread_tmp1485_fu_158173_p2() {
    tmp1485_fu_158173_p2 = (!r3esult8_V_1_reg_213241.read().is_01() || !tmp1484_reg_225066.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_1_reg_213241.read()) + sc_biguint<16>(tmp1484_reg_225066.read()));
}

void a0_conv2d_1::thread_tmp1486_fu_158182_p2() {
    tmp1486_fu_158182_p2 = (!tmp1483_fu_158168_p2.read().is_01() || !tmp1485_fu_158173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1483_fu_158168_p2.read()) + sc_biguint<16>(tmp1485_fu_158173_p2.read()));
}

void a0_conv2d_1::thread_tmp1487_fu_158198_p2() {
    tmp1487_fu_158198_p2 = (!tmp1482_fu_158153_p2.read().is_01() || !tmp1486_fu_158182_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1482_fu_158153_p2.read()) + sc_biguint<16>(tmp1486_fu_158182_p2.read()));
}

void a0_conv2d_1::thread_tmp1488_fu_158216_p2() {
    tmp1488_fu_158216_p2 = (!tmp1479_fu_158113_p2.read().is_01() || !tmp1487_fu_158198_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1479_fu_158113_p2.read()) + sc_biguint<16>(tmp1487_fu_158198_p2.read()));
}

void a0_conv2d_1::thread_tmp1489_fu_158240_p2() {
    tmp1489_fu_158240_p2 = (!r3esult3_V_2_fu_124021_p4.read().is_01() || !r3esult9_V_1_fu_123891_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_2_fu_124021_p4.read()) + sc_biguint<16>(r3esult9_V_1_fu_123891_p4.read()));
}

void a0_conv2d_1::thread_tmp148_fu_140205_p2() {
    tmp148_fu_140205_p2 = (!result6_V_51_fu_132956_p4.read().is_01() || !tmp147_fu_140184_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_51_fu_132956_p4.read()) + sc_biguint<16>(tmp147_fu_140184_p2.read()));
}

void a0_conv2d_1::thread_tmp1490_fu_158246_p2() {
    tmp1490_fu_158246_p2 = (!r3esult5_V_2_reg_213361.read().is_01() || !r3esult2_V_2_reg_213346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_2_reg_213361.read()) + sc_biguint<16>(r3esult2_V_2_reg_213346.read()));
}

void a0_conv2d_1::thread_tmp1491_fu_158256_p2() {
    tmp1491_fu_158256_p2 = (!tmp1489_fu_158240_p2.read().is_01() || !tmp1490_fu_158246_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1489_fu_158240_p2.read()) + sc_biguint<16>(tmp1490_fu_158246_p2.read()));
}

void a0_conv2d_1::thread_tmp1492_fu_158271_p2() {
    tmp1492_fu_158271_p2 = (!r3esult6_V_2_fu_124034_p4.read().is_01() || !r3esult4_V_2_reg_213356.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_2_fu_124034_p4.read()) + sc_biguint<16>(r3esult4_V_2_reg_213356.read()));
}

void a0_conv2d_1::thread_tmp1493_fu_113421_p2() {
    tmp1493_fu_113421_p2 = (!r3esult1_V_3_fu_86983_p4.read().is_01() || !r3esult7_V_2_fu_86654_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_3_fu_86983_p4.read()) + sc_biguint<16>(r3esult7_V_2_fu_86654_p4.read()));
}

void a0_conv2d_1::thread_tmp1494_fu_113442_p2() {
    tmp1494_fu_113442_p2 = (!r3esult8_V_2_fu_86667_p4.read().is_01() || !tmp1493_fu_113421_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_2_fu_86667_p4.read()) + sc_biguint<16>(tmp1493_fu_113421_p2.read()));
}

void a0_conv2d_1::thread_tmp1495_fu_158281_p2() {
    tmp1495_fu_158281_p2 = (!tmp1492_fu_158271_p2.read().is_01() || !tmp1494_reg_225086.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1492_fu_158271_p2.read()) + sc_biguint<16>(tmp1494_reg_225086.read()));
}

void a0_conv2d_1::thread_tmp1496_fu_158296_p2() {
    tmp1496_fu_158296_p2 = (!tmp1491_fu_158256_p2.read().is_01() || !tmp1495_fu_158281_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1491_fu_158256_p2.read()) + sc_biguint<16>(tmp1495_fu_158281_p2.read()));
}

void a0_conv2d_1::thread_tmp1497_fu_158320_p2() {
    tmp1497_fu_158320_p2 = (!r3esult3_V_3_fu_124177_p4.read().is_01() || !r3esult9_V_2_fu_124047_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_3_fu_124177_p4.read()) + sc_biguint<16>(r3esult9_V_2_fu_124047_p4.read()));
}

void a0_conv2d_1::thread_tmp1498_fu_158326_p2() {
    tmp1498_fu_158326_p2 = (!r3esult5_V_3_reg_213481.read().is_01() || !r3esult2_V_3_reg_213466.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_3_reg_213481.read()) + sc_biguint<16>(r3esult2_V_3_reg_213466.read()));
}

void a0_conv2d_1::thread_tmp1499_fu_158336_p2() {
    tmp1499_fu_158336_p2 = (!tmp1497_fu_158320_p2.read().is_01() || !tmp1498_fu_158326_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1497_fu_158320_p2.read()) + sc_biguint<16>(tmp1498_fu_158326_p2.read()));
}

void a0_conv2d_1::thread_tmp149_fu_140223_p2() {
    tmp149_fu_140223_p2 = (!tmp146_fu_140160_p2.read().is_01() || !tmp148_fu_140205_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp146_fu_140160_p2.read()) + sc_biguint<16>(tmp148_fu_140205_p2.read()));
}

void a0_conv2d_1::thread_tmp1500_fu_158351_p2() {
    tmp1500_fu_158351_p2 = (!r3esult6_V_3_fu_124190_p4.read().is_01() || !r3esult4_V_3_reg_213476.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_3_fu_124190_p4.read()) + sc_biguint<16>(r3esult4_V_3_reg_213476.read()));
}

void a0_conv2d_1::thread_tmp1501_fu_113505_p2() {
    tmp1501_fu_113505_p2 = (!r3esult1_V_4_fu_87364_p4.read().is_01() || !r3esult7_V_3_fu_87035_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_4_fu_87364_p4.read()) + sc_biguint<16>(r3esult7_V_3_fu_87035_p4.read()));
}

void a0_conv2d_1::thread_tmp1502_fu_113526_p2() {
    tmp1502_fu_113526_p2 = (!r3esult8_V_3_fu_87048_p4.read().is_01() || !tmp1501_fu_113505_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_3_fu_87048_p4.read()) + sc_biguint<16>(tmp1501_fu_113505_p2.read()));
}

void a0_conv2d_1::thread_tmp1503_fu_158361_p2() {
    tmp1503_fu_158361_p2 = (!tmp1500_fu_158351_p2.read().is_01() || !tmp1502_reg_225106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1500_fu_158351_p2.read()) + sc_biguint<16>(tmp1502_reg_225106.read()));
}

void a0_conv2d_1::thread_tmp1504_fu_158376_p2() {
    tmp1504_fu_158376_p2 = (!tmp1499_fu_158336_p2.read().is_01() || !tmp1503_fu_158361_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1499_fu_158336_p2.read()) + sc_biguint<16>(tmp1503_fu_158361_p2.read()));
}

void a0_conv2d_1::thread_tmp1505_fu_158394_p2() {
    tmp1505_fu_158394_p2 = (!tmp1496_fu_158296_p2.read().is_01() || !tmp1504_fu_158376_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1496_fu_158296_p2.read()) + sc_biguint<16>(tmp1504_fu_158376_p2.read()));
}

void a0_conv2d_1::thread_tmp1506_fu_158412_p2() {
    tmp1506_fu_158412_p2 = (!tmp1488_fu_158216_p2.read().is_01() || !tmp1505_fu_158394_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1488_fu_158216_p2.read()) + sc_biguint<16>(tmp1505_fu_158394_p2.read()));
}

void a0_conv2d_1::thread_tmp1507_fu_158436_p2() {
    tmp1507_fu_158436_p2 = (!r3esult3_V_4_fu_124333_p4.read().is_01() || !r3esult9_V_3_fu_124203_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_4_fu_124333_p4.read()) + sc_biguint<16>(r3esult9_V_3_fu_124203_p4.read()));
}

void a0_conv2d_1::thread_tmp1508_fu_158442_p2() {
    tmp1508_fu_158442_p2 = (!r3esult5_V_4_reg_213601.read().is_01() || !r3esult2_V_4_reg_213586.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_4_reg_213601.read()) + sc_biguint<16>(r3esult2_V_4_reg_213586.read()));
}

void a0_conv2d_1::thread_tmp1509_fu_158452_p2() {
    tmp1509_fu_158452_p2 = (!tmp1507_fu_158436_p2.read().is_01() || !tmp1508_fu_158442_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1507_fu_158436_p2.read()) + sc_biguint<16>(tmp1508_fu_158442_p2.read()));
}

void a0_conv2d_1::thread_tmp150_fu_140241_p2() {
    tmp150_fu_140241_p2 = (!tmp145_fu_140136_p2.read().is_01() || !tmp149_fu_140223_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp145_fu_140136_p2.read()) + sc_biguint<16>(tmp149_fu_140223_p2.read()));
}

void a0_conv2d_1::thread_tmp1510_fu_158467_p2() {
    tmp1510_fu_158467_p2 = (!r3esult6_V_4_fu_124346_p4.read().is_01() || !r3esult4_V_4_reg_213596.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_4_fu_124346_p4.read()) + sc_biguint<16>(r3esult4_V_4_reg_213596.read()));
}

void a0_conv2d_1::thread_tmp1511_fu_113589_p2() {
    tmp1511_fu_113589_p2 = (!r3esult1_V_5_fu_87745_p4.read().is_01() || !r3esult7_V_4_fu_87416_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_5_fu_87745_p4.read()) + sc_biguint<16>(r3esult7_V_4_fu_87416_p4.read()));
}

void a0_conv2d_1::thread_tmp1512_fu_113610_p2() {
    tmp1512_fu_113610_p2 = (!r3esult8_V_4_fu_87429_p4.read().is_01() || !tmp1511_fu_113589_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_4_fu_87429_p4.read()) + sc_biguint<16>(tmp1511_fu_113589_p2.read()));
}

void a0_conv2d_1::thread_tmp1513_fu_158477_p2() {
    tmp1513_fu_158477_p2 = (!tmp1510_fu_158467_p2.read().is_01() || !tmp1512_reg_225126.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1510_fu_158467_p2.read()) + sc_biguint<16>(tmp1512_reg_225126.read()));
}

void a0_conv2d_1::thread_tmp1514_fu_158492_p2() {
    tmp1514_fu_158492_p2 = (!tmp1509_fu_158452_p2.read().is_01() || !tmp1513_fu_158477_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1509_fu_158452_p2.read()) + sc_biguint<16>(tmp1513_fu_158477_p2.read()));
}

void a0_conv2d_1::thread_tmp1515_fu_158516_p2() {
    tmp1515_fu_158516_p2 = (!r3esult3_V_5_fu_124489_p4.read().is_01() || !r3esult9_V_4_fu_124359_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_5_fu_124489_p4.read()) + sc_biguint<16>(r3esult9_V_4_fu_124359_p4.read()));
}

void a0_conv2d_1::thread_tmp1516_fu_158522_p2() {
    tmp1516_fu_158522_p2 = (!r3esult5_V_5_reg_213731.read().is_01() || !r3esult2_V_5_reg_213716.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_5_reg_213731.read()) + sc_biguint<16>(r3esult2_V_5_reg_213716.read()));
}

void a0_conv2d_1::thread_tmp1517_fu_158532_p2() {
    tmp1517_fu_158532_p2 = (!tmp1515_fu_158516_p2.read().is_01() || !tmp1516_fu_158522_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1515_fu_158516_p2.read()) + sc_biguint<16>(tmp1516_fu_158522_p2.read()));
}

void a0_conv2d_1::thread_tmp1518_fu_158547_p2() {
    tmp1518_fu_158547_p2 = (!r3esult6_V_5_fu_124502_p4.read().is_01() || !r3esult4_V_5_reg_213726.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_5_fu_124502_p4.read()) + sc_biguint<16>(r3esult4_V_5_reg_213726.read()));
}

void a0_conv2d_1::thread_tmp1519_fu_113673_p2() {
    tmp1519_fu_113673_p2 = (!r3esult1_V_6_fu_88126_p4.read().is_01() || !r3esult7_V_5_fu_87797_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_6_fu_88126_p4.read()) + sc_biguint<16>(r3esult7_V_5_fu_87797_p4.read()));
}

void a0_conv2d_1::thread_tmp151_fu_140265_p2() {
    tmp151_fu_140265_p2 = (!result9_V_51_fu_132993_p4.read().is_01() || !result1_V_52_fu_133338_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_51_fu_132993_p4.read()) + sc_biguint<16>(result1_V_52_fu_133338_p4.read()));
}

void a0_conv2d_1::thread_tmp1520_fu_158552_p2() {
    tmp1520_fu_158552_p2 = (!r3esult8_V_5_reg_213741.read().is_01() || !tmp1519_reg_225146.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_5_reg_213741.read()) + sc_biguint<16>(tmp1519_reg_225146.read()));
}

void a0_conv2d_1::thread_tmp1521_fu_158561_p2() {
    tmp1521_fu_158561_p2 = (!tmp1518_fu_158547_p2.read().is_01() || !tmp1520_fu_158552_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1518_fu_158547_p2.read()) + sc_biguint<16>(tmp1520_fu_158552_p2.read()));
}

void a0_conv2d_1::thread_tmp1522_fu_158577_p2() {
    tmp1522_fu_158577_p2 = (!tmp1517_fu_158532_p2.read().is_01() || !tmp1521_fu_158561_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1517_fu_158532_p2.read()) + sc_biguint<16>(tmp1521_fu_158561_p2.read()));
}

void a0_conv2d_1::thread_tmp1523_fu_158595_p2() {
    tmp1523_fu_158595_p2 = (!tmp1514_fu_158492_p2.read().is_01() || !tmp1522_fu_158577_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1514_fu_158492_p2.read()) + sc_biguint<16>(tmp1522_fu_158577_p2.read()));
}

void a0_conv2d_1::thread_tmp1524_fu_158619_p2() {
    tmp1524_fu_158619_p2 = (!r3esult3_V_6_fu_124645_p4.read().is_01() || !r3esult9_V_5_fu_124515_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_6_fu_124645_p4.read()) + sc_biguint<16>(r3esult9_V_5_fu_124515_p4.read()));
}

void a0_conv2d_1::thread_tmp1525_fu_158625_p2() {
    tmp1525_fu_158625_p2 = (!r3esult5_V_6_reg_213861.read().is_01() || !r3esult2_V_6_reg_213846.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_6_reg_213861.read()) + sc_biguint<16>(r3esult2_V_6_reg_213846.read()));
}

void a0_conv2d_1::thread_tmp1526_fu_158635_p2() {
    tmp1526_fu_158635_p2 = (!tmp1524_fu_158619_p2.read().is_01() || !tmp1525_fu_158625_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1524_fu_158619_p2.read()) + sc_biguint<16>(tmp1525_fu_158625_p2.read()));
}

void a0_conv2d_1::thread_tmp1527_fu_158650_p2() {
    tmp1527_fu_158650_p2 = (!r3esult6_V_6_fu_124658_p4.read().is_01() || !r3esult4_V_6_reg_213856.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_6_fu_124658_p4.read()) + sc_biguint<16>(r3esult4_V_6_reg_213856.read()));
}

void a0_conv2d_1::thread_tmp1528_fu_113751_p2() {
    tmp1528_fu_113751_p2 = (!r3esult1_V_7_fu_88507_p4.read().is_01() || !r3esult7_V_6_fu_88178_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_7_fu_88507_p4.read()) + sc_biguint<16>(r3esult7_V_6_fu_88178_p4.read()));
}

void a0_conv2d_1::thread_tmp1529_fu_113772_p2() {
    tmp1529_fu_113772_p2 = (!r3esult8_V_6_fu_88191_p4.read().is_01() || !tmp1528_fu_113751_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_6_fu_88191_p4.read()) + sc_biguint<16>(tmp1528_fu_113751_p2.read()));
}

void a0_conv2d_1::thread_tmp152_fu_140289_p2() {
    tmp152_fu_140289_p2 = (!result2_V_52_fu_133350_p4.read().is_01() || !result3_V_52_fu_133363_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_52_fu_133350_p4.read()) + sc_biguint<16>(result3_V_52_fu_133363_p4.read()));
}

void a0_conv2d_1::thread_tmp1530_fu_158660_p2() {
    tmp1530_fu_158660_p2 = (!tmp1527_fu_158650_p2.read().is_01() || !tmp1529_reg_225166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1527_fu_158650_p2.read()) + sc_biguint<16>(tmp1529_reg_225166.read()));
}

void a0_conv2d_1::thread_tmp1531_fu_158675_p2() {
    tmp1531_fu_158675_p2 = (!tmp1526_fu_158635_p2.read().is_01() || !tmp1530_fu_158660_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1526_fu_158635_p2.read()) + sc_biguint<16>(tmp1530_fu_158660_p2.read()));
}

void a0_conv2d_1::thread_tmp1532_fu_158699_p2() {
    tmp1532_fu_158699_p2 = (!r3esult3_V_7_fu_124801_p4.read().is_01() || !r3esult9_V_6_fu_124671_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_7_fu_124801_p4.read()) + sc_biguint<16>(r3esult9_V_6_fu_124671_p4.read()));
}

void a0_conv2d_1::thread_tmp1533_fu_158705_p2() {
    tmp1533_fu_158705_p2 = (!r3esult5_V_7_reg_213991.read().is_01() || !r3esult2_V_7_reg_213976.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_7_reg_213991.read()) + sc_biguint<16>(r3esult2_V_7_reg_213976.read()));
}

void a0_conv2d_1::thread_tmp1534_fu_158715_p2() {
    tmp1534_fu_158715_p2 = (!tmp1532_fu_158699_p2.read().is_01() || !tmp1533_fu_158705_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1532_fu_158699_p2.read()) + sc_biguint<16>(tmp1533_fu_158705_p2.read()));
}

void a0_conv2d_1::thread_tmp1535_fu_158730_p2() {
    tmp1535_fu_158730_p2 = (!r3esult6_V_7_fu_124814_p4.read().is_01() || !r3esult4_V_7_reg_213986.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_7_fu_124814_p4.read()) + sc_biguint<16>(r3esult4_V_7_reg_213986.read()));
}

void a0_conv2d_1::thread_tmp1536_fu_113835_p2() {
    tmp1536_fu_113835_p2 = (!r3esult1_V_8_fu_88888_p4.read().is_01() || !r3esult7_V_7_fu_88559_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_8_fu_88888_p4.read()) + sc_biguint<16>(r3esult7_V_7_fu_88559_p4.read()));
}

void a0_conv2d_1::thread_tmp1537_fu_158735_p2() {
    tmp1537_fu_158735_p2 = (!r3esult8_V_7_reg_214001.read().is_01() || !tmp1536_reg_225186.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_7_reg_214001.read()) + sc_biguint<16>(tmp1536_reg_225186.read()));
}

void a0_conv2d_1::thread_tmp1538_fu_158744_p2() {
    tmp1538_fu_158744_p2 = (!tmp1535_fu_158730_p2.read().is_01() || !tmp1537_fu_158735_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1535_fu_158730_p2.read()) + sc_biguint<16>(tmp1537_fu_158735_p2.read()));
}

void a0_conv2d_1::thread_tmp1539_fu_158760_p2() {
    tmp1539_fu_158760_p2 = (!tmp1534_fu_158715_p2.read().is_01() || !tmp1538_fu_158744_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1534_fu_158715_p2.read()) + sc_biguint<16>(tmp1538_fu_158744_p2.read()));
}

void a0_conv2d_1::thread_tmp153_fu_140307_p2() {
    tmp153_fu_140307_p2 = (!tmp151_fu_140265_p2.read().is_01() || !tmp152_fu_140289_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp151_fu_140265_p2.read()) + sc_biguint<16>(tmp152_fu_140289_p2.read()));
}

void a0_conv2d_1::thread_tmp1540_fu_158778_p2() {
    tmp1540_fu_158778_p2 = (!tmp1531_fu_158675_p2.read().is_01() || !tmp1539_fu_158760_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1531_fu_158675_p2.read()) + sc_biguint<16>(tmp1539_fu_158760_p2.read()));
}

void a0_conv2d_1::thread_tmp1541_fu_170465_p2() {
    tmp1541_fu_170465_p2 = (!tmp1523_reg_227911.read().is_01() || !tmp1540_reg_227916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1523_reg_227911.read()) + sc_biguint<16>(tmp1540_reg_227916.read()));
}

void a0_conv2d_1::thread_tmp1542_fu_170473_p2() {
    tmp1542_fu_170473_p2 = (!tmp1506_reg_227906.read().is_01() || !tmp1541_fu_170465_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1506_reg_227906.read()) + sc_biguint<16>(tmp1541_fu_170465_p2.read()));
}

void a0_conv2d_1::thread_tmp1543_fu_158820_p2() {
    tmp1543_fu_158820_p2 = (!r3esult3_V_8_fu_124957_p4.read().is_01() || !r3esult9_V_7_fu_124827_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_8_fu_124957_p4.read()) + sc_biguint<16>(r3esult9_V_7_fu_124827_p4.read()));
}

void a0_conv2d_1::thread_tmp1544_fu_158826_p2() {
    tmp1544_fu_158826_p2 = (!r3esult5_V_8_reg_214121.read().is_01() || !r3esult2_V_8_reg_214106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_8_reg_214121.read()) + sc_biguint<16>(r3esult2_V_8_reg_214106.read()));
}

void a0_conv2d_1::thread_tmp1545_fu_158836_p2() {
    tmp1545_fu_158836_p2 = (!tmp1543_fu_158820_p2.read().is_01() || !tmp1544_fu_158826_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1543_fu_158820_p2.read()) + sc_biguint<16>(tmp1544_fu_158826_p2.read()));
}

void a0_conv2d_1::thread_tmp1546_fu_158851_p2() {
    tmp1546_fu_158851_p2 = (!r3esult6_V_8_fu_124970_p4.read().is_01() || !r3esult4_V_8_reg_214116.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_8_fu_124970_p4.read()) + sc_biguint<16>(r3esult4_V_8_reg_214116.read()));
}

void a0_conv2d_1::thread_tmp1547_fu_113913_p2() {
    tmp1547_fu_113913_p2 = (!r3esult1_V_9_fu_89269_p4.read().is_01() || !r3esult7_V_8_fu_88940_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_9_fu_89269_p4.read()) + sc_biguint<16>(r3esult7_V_8_fu_88940_p4.read()));
}

void a0_conv2d_1::thread_tmp1548_fu_113934_p2() {
    tmp1548_fu_113934_p2 = (!r3esult8_V_8_fu_88953_p4.read().is_01() || !tmp1547_fu_113913_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_8_fu_88953_p4.read()) + sc_biguint<16>(tmp1547_fu_113913_p2.read()));
}

void a0_conv2d_1::thread_tmp1549_fu_158861_p2() {
    tmp1549_fu_158861_p2 = (!tmp1546_fu_158851_p2.read().is_01() || !tmp1548_reg_225206.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1546_fu_158851_p2.read()) + sc_biguint<16>(tmp1548_reg_225206.read()));
}

void a0_conv2d_1::thread_tmp154_fu_140331_p2() {
    tmp154_fu_140331_p2 = (!result4_V_52_fu_133375_p4.read().is_01() || !result5_V_52_fu_133387_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_52_fu_133375_p4.read()) + sc_biguint<16>(result5_V_52_fu_133387_p4.read()));
}

void a0_conv2d_1::thread_tmp1550_fu_158876_p2() {
    tmp1550_fu_158876_p2 = (!tmp1545_fu_158836_p2.read().is_01() || !tmp1549_fu_158861_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1545_fu_158836_p2.read()) + sc_biguint<16>(tmp1549_fu_158861_p2.read()));
}

void a0_conv2d_1::thread_tmp1551_fu_158900_p2() {
    tmp1551_fu_158900_p2 = (!r3esult3_V_9_fu_125113_p4.read().is_01() || !r3esult9_V_8_fu_124983_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_9_fu_125113_p4.read()) + sc_biguint<16>(r3esult9_V_8_fu_124983_p4.read()));
}

void a0_conv2d_1::thread_tmp1552_fu_158906_p2() {
    tmp1552_fu_158906_p2 = (!r3esult5_V_9_reg_214251.read().is_01() || !r3esult2_V_9_reg_214236.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_9_reg_214251.read()) + sc_biguint<16>(r3esult2_V_9_reg_214236.read()));
}

void a0_conv2d_1::thread_tmp1553_fu_158916_p2() {
    tmp1553_fu_158916_p2 = (!tmp1551_fu_158900_p2.read().is_01() || !tmp1552_fu_158906_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1551_fu_158900_p2.read()) + sc_biguint<16>(tmp1552_fu_158906_p2.read()));
}

void a0_conv2d_1::thread_tmp1554_fu_158931_p2() {
    tmp1554_fu_158931_p2 = (!r3esult6_V_9_fu_125126_p4.read().is_01() || !r3esult4_V_9_reg_214246.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_9_fu_125126_p4.read()) + sc_biguint<16>(r3esult4_V_9_reg_214246.read()));
}

void a0_conv2d_1::thread_tmp1555_fu_113997_p2() {
    tmp1555_fu_113997_p2 = (!r3esult1_V_s_fu_89650_p4.read().is_01() || !r3esult7_V_9_fu_89321_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_s_fu_89650_p4.read()) + sc_biguint<16>(r3esult7_V_9_fu_89321_p4.read()));
}

void a0_conv2d_1::thread_tmp1556_fu_158936_p2() {
    tmp1556_fu_158936_p2 = (!r3esult8_V_9_reg_214261.read().is_01() || !tmp1555_reg_225226.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_9_reg_214261.read()) + sc_biguint<16>(tmp1555_reg_225226.read()));
}

void a0_conv2d_1::thread_tmp1557_fu_158945_p2() {
    tmp1557_fu_158945_p2 = (!tmp1554_fu_158931_p2.read().is_01() || !tmp1556_fu_158936_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1554_fu_158931_p2.read()) + sc_biguint<16>(tmp1556_fu_158936_p2.read()));
}

void a0_conv2d_1::thread_tmp1558_fu_158961_p2() {
    tmp1558_fu_158961_p2 = (!tmp1553_fu_158916_p2.read().is_01() || !tmp1557_fu_158945_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1553_fu_158916_p2.read()) + sc_biguint<16>(tmp1557_fu_158945_p2.read()));
}

void a0_conv2d_1::thread_tmp1559_fu_158979_p2() {
    tmp1559_fu_158979_p2 = (!tmp1550_fu_158876_p2.read().is_01() || !tmp1558_fu_158961_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1550_fu_158876_p2.read()) + sc_biguint<16>(tmp1558_fu_158961_p2.read()));
}

void a0_conv2d_1::thread_tmp155_fu_140355_p2() {
    tmp155_fu_140355_p2 = (!result7_V_52_fu_133412_p4.read().is_01() || !result8_V_52_fu_133424_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_52_fu_133412_p4.read()) + sc_biguint<16>(result8_V_52_fu_133424_p4.read()));
}

void a0_conv2d_1::thread_tmp1560_fu_159003_p2() {
    tmp1560_fu_159003_p2 = (!r3esult3_V_s_fu_125269_p4.read().is_01() || !r3esult9_V_9_fu_125139_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_s_fu_125269_p4.read()) + sc_biguint<16>(r3esult9_V_9_fu_125139_p4.read()));
}

void a0_conv2d_1::thread_tmp1561_fu_159009_p2() {
    tmp1561_fu_159009_p2 = (!r3esult5_V_s_reg_214381.read().is_01() || !r3esult2_V_s_reg_214366.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_s_reg_214381.read()) + sc_biguint<16>(r3esult2_V_s_reg_214366.read()));
}

void a0_conv2d_1::thread_tmp1562_fu_159019_p2() {
    tmp1562_fu_159019_p2 = (!tmp1560_fu_159003_p2.read().is_01() || !tmp1561_fu_159009_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1560_fu_159003_p2.read()) + sc_biguint<16>(tmp1561_fu_159009_p2.read()));
}

void a0_conv2d_1::thread_tmp1563_fu_159034_p2() {
    tmp1563_fu_159034_p2 = (!r3esult6_V_s_fu_125282_p4.read().is_01() || !r3esult4_V_s_reg_214376.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_s_fu_125282_p4.read()) + sc_biguint<16>(r3esult4_V_s_reg_214376.read()));
}

void a0_conv2d_1::thread_tmp1564_fu_114075_p2() {
    tmp1564_fu_114075_p2 = (!r3esult1_V_10_fu_90031_p4.read().is_01() || !r3esult7_V_s_fu_89702_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_10_fu_90031_p4.read()) + sc_biguint<16>(r3esult7_V_s_fu_89702_p4.read()));
}

void a0_conv2d_1::thread_tmp1565_fu_114096_p2() {
    tmp1565_fu_114096_p2 = (!r3esult8_V_s_fu_89715_p4.read().is_01() || !tmp1564_fu_114075_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_s_fu_89715_p4.read()) + sc_biguint<16>(tmp1564_fu_114075_p2.read()));
}

void a0_conv2d_1::thread_tmp1566_fu_159044_p2() {
    tmp1566_fu_159044_p2 = (!tmp1563_fu_159034_p2.read().is_01() || !tmp1565_reg_225246.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1563_fu_159034_p2.read()) + sc_biguint<16>(tmp1565_reg_225246.read()));
}

void a0_conv2d_1::thread_tmp1567_fu_159059_p2() {
    tmp1567_fu_159059_p2 = (!tmp1562_fu_159019_p2.read().is_01() || !tmp1566_fu_159044_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1562_fu_159019_p2.read()) + sc_biguint<16>(tmp1566_fu_159044_p2.read()));
}

void a0_conv2d_1::thread_tmp1568_fu_159083_p2() {
    tmp1568_fu_159083_p2 = (!r3esult3_V_10_fu_125425_p4.read().is_01() || !r3esult9_V_s_fu_125295_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_10_fu_125425_p4.read()) + sc_biguint<16>(r3esult9_V_s_fu_125295_p4.read()));
}

void a0_conv2d_1::thread_tmp1569_fu_159089_p2() {
    tmp1569_fu_159089_p2 = (!r3esult5_V_10_reg_214501.read().is_01() || !r3esult2_V_10_reg_214486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_10_reg_214501.read()) + sc_biguint<16>(r3esult2_V_10_reg_214486.read()));
}

void a0_conv2d_1::thread_tmp156_fu_140376_p2() {
    tmp156_fu_140376_p2 = (!result6_V_52_fu_133400_p4.read().is_01() || !tmp155_fu_140355_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_52_fu_133400_p4.read()) + sc_biguint<16>(tmp155_fu_140355_p2.read()));
}

void a0_conv2d_1::thread_tmp1570_fu_159099_p2() {
    tmp1570_fu_159099_p2 = (!tmp1568_fu_159083_p2.read().is_01() || !tmp1569_fu_159089_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1568_fu_159083_p2.read()) + sc_biguint<16>(tmp1569_fu_159089_p2.read()));
}

void a0_conv2d_1::thread_tmp1571_fu_159114_p2() {
    tmp1571_fu_159114_p2 = (!r3esult6_V_10_fu_125438_p4.read().is_01() || !r3esult4_V_10_reg_214496.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_10_fu_125438_p4.read()) + sc_biguint<16>(r3esult4_V_10_reg_214496.read()));
}

void a0_conv2d_1::thread_tmp1572_fu_114159_p2() {
    tmp1572_fu_114159_p2 = (!r3esult1_V_11_fu_90412_p4.read().is_01() || !r3esult7_V_10_fu_90083_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_11_fu_90412_p4.read()) + sc_biguint<16>(r3esult7_V_10_fu_90083_p4.read()));
}

void a0_conv2d_1::thread_tmp1573_fu_114180_p2() {
    tmp1573_fu_114180_p2 = (!r3esult8_V_10_fu_90096_p4.read().is_01() || !tmp1572_fu_114159_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_10_fu_90096_p4.read()) + sc_biguint<16>(tmp1572_fu_114159_p2.read()));
}

void a0_conv2d_1::thread_tmp1574_fu_159124_p2() {
    tmp1574_fu_159124_p2 = (!tmp1571_fu_159114_p2.read().is_01() || !tmp1573_reg_225266.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1571_fu_159114_p2.read()) + sc_biguint<16>(tmp1573_reg_225266.read()));
}

void a0_conv2d_1::thread_tmp1575_fu_159139_p2() {
    tmp1575_fu_159139_p2 = (!tmp1570_fu_159099_p2.read().is_01() || !tmp1574_fu_159124_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1570_fu_159099_p2.read()) + sc_biguint<16>(tmp1574_fu_159124_p2.read()));
}

void a0_conv2d_1::thread_tmp1576_fu_170478_p2() {
    tmp1576_fu_170478_p2 = (!tmp1567_reg_227931.read().is_01() || !tmp1575_reg_227936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1567_reg_227931.read()) + sc_biguint<16>(tmp1575_reg_227936.read()));
}

void a0_conv2d_1::thread_tmp1577_fu_170482_p2() {
    tmp1577_fu_170482_p2 = (!tmp1559_reg_227926.read().is_01() || !tmp1576_fu_170478_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1559_reg_227926.read()) + sc_biguint<16>(tmp1576_fu_170478_p2.read()));
}

void a0_conv2d_1::thread_tmp1578_fu_159187_p2() {
    tmp1578_fu_159187_p2 = (!r3esult3_V_11_fu_125581_p4.read().is_01() || !r3esult9_V_10_fu_125451_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_11_fu_125581_p4.read()) + sc_biguint<16>(r3esult9_V_10_fu_125451_p4.read()));
}

void a0_conv2d_1::thread_tmp1579_fu_159193_p2() {
    tmp1579_fu_159193_p2 = (!r3esult5_V_11_reg_214621.read().is_01() || !r3esult2_V_11_reg_214606.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_11_reg_214621.read()) + sc_biguint<16>(r3esult2_V_11_reg_214606.read()));
}

void a0_conv2d_1::thread_tmp157_fu_140394_p2() {
    tmp157_fu_140394_p2 = (!tmp154_fu_140331_p2.read().is_01() || !tmp156_fu_140376_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp154_fu_140331_p2.read()) + sc_biguint<16>(tmp156_fu_140376_p2.read()));
}

void a0_conv2d_1::thread_tmp1580_fu_159203_p2() {
    tmp1580_fu_159203_p2 = (!tmp1578_fu_159187_p2.read().is_01() || !tmp1579_fu_159193_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1578_fu_159187_p2.read()) + sc_biguint<16>(tmp1579_fu_159193_p2.read()));
}

void a0_conv2d_1::thread_tmp1581_fu_159218_p2() {
    tmp1581_fu_159218_p2 = (!r3esult6_V_11_fu_125594_p4.read().is_01() || !r3esult4_V_11_reg_214616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_11_fu_125594_p4.read()) + sc_biguint<16>(r3esult4_V_11_reg_214616.read()));
}

void a0_conv2d_1::thread_tmp1582_fu_114243_p2() {
    tmp1582_fu_114243_p2 = (!r3esult1_V_12_fu_90793_p4.read().is_01() || !r3esult7_V_11_fu_90464_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_12_fu_90793_p4.read()) + sc_biguint<16>(r3esult7_V_11_fu_90464_p4.read()));
}

void a0_conv2d_1::thread_tmp1583_fu_114264_p2() {
    tmp1583_fu_114264_p2 = (!r3esult8_V_11_fu_90477_p4.read().is_01() || !tmp1582_fu_114243_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_11_fu_90477_p4.read()) + sc_biguint<16>(tmp1582_fu_114243_p2.read()));
}

void a0_conv2d_1::thread_tmp1584_fu_159228_p2() {
    tmp1584_fu_159228_p2 = (!tmp1581_fu_159218_p2.read().is_01() || !tmp1583_reg_225286.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1581_fu_159218_p2.read()) + sc_biguint<16>(tmp1583_reg_225286.read()));
}

void a0_conv2d_1::thread_tmp1585_fu_159243_p2() {
    tmp1585_fu_159243_p2 = (!tmp1580_fu_159203_p2.read().is_01() || !tmp1584_fu_159228_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1580_fu_159203_p2.read()) + sc_biguint<16>(tmp1584_fu_159228_p2.read()));
}

void a0_conv2d_1::thread_tmp1586_fu_159267_p2() {
    tmp1586_fu_159267_p2 = (!r3esult3_V_12_fu_125737_p4.read().is_01() || !r3esult9_V_11_fu_125607_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_12_fu_125737_p4.read()) + sc_biguint<16>(r3esult9_V_11_fu_125607_p4.read()));
}

void a0_conv2d_1::thread_tmp1587_fu_159273_p2() {
    tmp1587_fu_159273_p2 = (!r3esult5_V_12_reg_214751.read().is_01() || !r3esult2_V_12_reg_214736.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_12_reg_214751.read()) + sc_biguint<16>(r3esult2_V_12_reg_214736.read()));
}

void a0_conv2d_1::thread_tmp1588_fu_159283_p2() {
    tmp1588_fu_159283_p2 = (!tmp1586_fu_159267_p2.read().is_01() || !tmp1587_fu_159273_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1586_fu_159267_p2.read()) + sc_biguint<16>(tmp1587_fu_159273_p2.read()));
}

void a0_conv2d_1::thread_tmp1589_fu_159298_p2() {
    tmp1589_fu_159298_p2 = (!r3esult6_V_12_fu_125750_p4.read().is_01() || !r3esult4_V_12_reg_214746.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_12_fu_125750_p4.read()) + sc_biguint<16>(r3esult4_V_12_reg_214746.read()));
}

void a0_conv2d_1::thread_tmp158_fu_140412_p2() {
    tmp158_fu_140412_p2 = (!tmp153_fu_140307_p2.read().is_01() || !tmp157_fu_140394_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp153_fu_140307_p2.read()) + sc_biguint<16>(tmp157_fu_140394_p2.read()));
}

void a0_conv2d_1::thread_tmp1590_fu_114327_p2() {
    tmp1590_fu_114327_p2 = (!r3esult1_V_13_fu_91174_p4.read().is_01() || !r3esult7_V_12_fu_90845_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_13_fu_91174_p4.read()) + sc_biguint<16>(r3esult7_V_12_fu_90845_p4.read()));
}

void a0_conv2d_1::thread_tmp1591_fu_159303_p2() {
    tmp1591_fu_159303_p2 = (!r3esult8_V_12_reg_214761.read().is_01() || !tmp1590_reg_225306.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_12_reg_214761.read()) + sc_biguint<16>(tmp1590_reg_225306.read()));
}

void a0_conv2d_1::thread_tmp1592_fu_159312_p2() {
    tmp1592_fu_159312_p2 = (!tmp1589_fu_159298_p2.read().is_01() || !tmp1591_fu_159303_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1589_fu_159298_p2.read()) + sc_biguint<16>(tmp1591_fu_159303_p2.read()));
}

void a0_conv2d_1::thread_tmp1593_fu_159328_p2() {
    tmp1593_fu_159328_p2 = (!tmp1588_fu_159283_p2.read().is_01() || !tmp1592_fu_159312_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1588_fu_159283_p2.read()) + sc_biguint<16>(tmp1592_fu_159312_p2.read()));
}

void a0_conv2d_1::thread_tmp1594_fu_159346_p2() {
    tmp1594_fu_159346_p2 = (!tmp1585_fu_159243_p2.read().is_01() || !tmp1593_fu_159328_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1585_fu_159243_p2.read()) + sc_biguint<16>(tmp1593_fu_159328_p2.read()));
}

void a0_conv2d_1::thread_tmp1595_fu_159370_p2() {
    tmp1595_fu_159370_p2 = (!r3esult3_V_13_fu_125893_p4.read().is_01() || !r3esult9_V_12_fu_125763_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_13_fu_125893_p4.read()) + sc_biguint<16>(r3esult9_V_12_fu_125763_p4.read()));
}

void a0_conv2d_1::thread_tmp1596_fu_159376_p2() {
    tmp1596_fu_159376_p2 = (!r3esult5_V_13_reg_214881.read().is_01() || !r3esult2_V_13_reg_214866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_13_reg_214881.read()) + sc_biguint<16>(r3esult2_V_13_reg_214866.read()));
}

void a0_conv2d_1::thread_tmp1597_fu_159386_p2() {
    tmp1597_fu_159386_p2 = (!tmp1595_fu_159370_p2.read().is_01() || !tmp1596_fu_159376_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1595_fu_159370_p2.read()) + sc_biguint<16>(tmp1596_fu_159376_p2.read()));
}

void a0_conv2d_1::thread_tmp1598_fu_159401_p2() {
    tmp1598_fu_159401_p2 = (!r3esult6_V_13_fu_125906_p4.read().is_01() || !r3esult4_V_13_reg_214876.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_13_fu_125906_p4.read()) + sc_biguint<16>(r3esult4_V_13_reg_214876.read()));
}

void a0_conv2d_1::thread_tmp1599_fu_114405_p2() {
    tmp1599_fu_114405_p2 = (!r3esult1_V_14_fu_91555_p4.read().is_01() || !r3esult7_V_13_fu_91226_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_14_fu_91555_p4.read()) + sc_biguint<16>(r3esult7_V_13_fu_91226_p4.read()));
}

void a0_conv2d_1::thread_tmp159_fu_140430_p2() {
    tmp159_fu_140430_p2 = (!tmp150_fu_140241_p2.read().is_01() || !tmp158_fu_140412_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp150_fu_140241_p2.read()) + sc_biguint<16>(tmp158_fu_140412_p2.read()));
}

void a0_conv2d_1::thread_tmp1600_fu_114426_p2() {
    tmp1600_fu_114426_p2 = (!r3esult8_V_13_fu_91239_p4.read().is_01() || !tmp1599_fu_114405_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_13_fu_91239_p4.read()) + sc_biguint<16>(tmp1599_fu_114405_p2.read()));
}

void a0_conv2d_1::thread_tmp1601_fu_159411_p2() {
    tmp1601_fu_159411_p2 = (!tmp1598_fu_159401_p2.read().is_01() || !tmp1600_reg_225326.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1598_fu_159401_p2.read()) + sc_biguint<16>(tmp1600_reg_225326.read()));
}

void a0_conv2d_1::thread_tmp1602_fu_159426_p2() {
    tmp1602_fu_159426_p2 = (!tmp1597_fu_159386_p2.read().is_01() || !tmp1601_fu_159411_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1597_fu_159386_p2.read()) + sc_biguint<16>(tmp1601_fu_159411_p2.read()));
}

void a0_conv2d_1::thread_tmp1603_fu_159450_p2() {
    tmp1603_fu_159450_p2 = (!r3esult3_V_14_fu_126049_p4.read().is_01() || !r3esult9_V_13_fu_125919_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_14_fu_126049_p4.read()) + sc_biguint<16>(r3esult9_V_13_fu_125919_p4.read()));
}

void a0_conv2d_1::thread_tmp1604_fu_159456_p2() {
    tmp1604_fu_159456_p2 = (!r3esult5_V_14_reg_215001.read().is_01() || !r3esult2_V_14_reg_214986.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_14_reg_215001.read()) + sc_biguint<16>(r3esult2_V_14_reg_214986.read()));
}

void a0_conv2d_1::thread_tmp1605_fu_159466_p2() {
    tmp1605_fu_159466_p2 = (!tmp1603_fu_159450_p2.read().is_01() || !tmp1604_fu_159456_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1603_fu_159450_p2.read()) + sc_biguint<16>(tmp1604_fu_159456_p2.read()));
}

void a0_conv2d_1::thread_tmp1606_fu_159481_p2() {
    tmp1606_fu_159481_p2 = (!r3esult6_V_14_fu_126062_p4.read().is_01() || !r3esult4_V_14_reg_214996.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_14_fu_126062_p4.read()) + sc_biguint<16>(r3esult4_V_14_reg_214996.read()));
}

void a0_conv2d_1::thread_tmp1607_fu_114489_p2() {
    tmp1607_fu_114489_p2 = (!r3esult1_V_15_fu_91936_p4.read().is_01() || !r3esult7_V_14_fu_91607_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_15_fu_91936_p4.read()) + sc_biguint<16>(r3esult7_V_14_fu_91607_p4.read()));
}

void a0_conv2d_1::thread_tmp1608_fu_114510_p2() {
    tmp1608_fu_114510_p2 = (!r3esult8_V_14_fu_91620_p4.read().is_01() || !tmp1607_fu_114489_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_14_fu_91620_p4.read()) + sc_biguint<16>(tmp1607_fu_114489_p2.read()));
}

void a0_conv2d_1::thread_tmp1609_fu_159491_p2() {
    tmp1609_fu_159491_p2 = (!tmp1606_fu_159481_p2.read().is_01() || !tmp1608_reg_225346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1606_fu_159481_p2.read()) + sc_biguint<16>(tmp1608_reg_225346.read()));
}

void a0_conv2d_1::thread_tmp160_fu_140454_p2() {
    tmp160_fu_140454_p2 = (!result9_V_52_fu_133437_p4.read().is_01() || !result1_V_53_fu_133782_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_52_fu_133437_p4.read()) + sc_biguint<16>(result1_V_53_fu_133782_p4.read()));
}

void a0_conv2d_1::thread_tmp1610_fu_159506_p2() {
    tmp1610_fu_159506_p2 = (!tmp1605_fu_159466_p2.read().is_01() || !tmp1609_fu_159491_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1605_fu_159466_p2.read()) + sc_biguint<16>(tmp1609_fu_159491_p2.read()));
}

void a0_conv2d_1::thread_tmp1611_fu_170487_p2() {
    tmp1611_fu_170487_p2 = (!tmp1602_reg_227956.read().is_01() || !tmp1610_reg_227961.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1602_reg_227956.read()) + sc_biguint<16>(tmp1610_reg_227961.read()));
}

void a0_conv2d_1::thread_tmp1612_fu_170491_p2() {
    tmp1612_fu_170491_p2 = (!tmp1594_reg_227951.read().is_01() || !tmp1611_fu_170487_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1594_reg_227951.read()) + sc_biguint<16>(tmp1611_fu_170487_p2.read()));
}

void a0_conv2d_1::thread_tmp1613_fu_170500_p2() {
    tmp1613_fu_170500_p2 = (!tmp1577_fu_170482_p2.read().is_01() || !tmp1612_fu_170491_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1577_fu_170482_p2.read()) + sc_biguint<16>(tmp1612_fu_170491_p2.read()));
}

void a0_conv2d_1::thread_tmp1614_fu_170516_p2() {
    tmp1614_fu_170516_p2 = (!tmp1542_fu_170473_p2.read().is_01() || !tmp1613_fu_170500_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1542_fu_170473_p2.read()) + sc_biguint<16>(tmp1613_fu_170500_p2.read()));
}

void a0_conv2d_1::thread_tmp1615_fu_159560_p2() {
    tmp1615_fu_159560_p2 = (!r3esult3_V_15_fu_126205_p4.read().is_01() || !r3esult9_V_14_fu_126075_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_15_fu_126205_p4.read()) + sc_biguint<16>(r3esult9_V_14_fu_126075_p4.read()));
}

void a0_conv2d_1::thread_tmp1616_fu_159566_p2() {
    tmp1616_fu_159566_p2 = (!r3esult5_V_15_reg_215121.read().is_01() || !r3esult2_V_15_reg_215106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_15_reg_215121.read()) + sc_biguint<16>(r3esult2_V_15_reg_215106.read()));
}

void a0_conv2d_1::thread_tmp1617_fu_159576_p2() {
    tmp1617_fu_159576_p2 = (!tmp1615_fu_159560_p2.read().is_01() || !tmp1616_fu_159566_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1615_fu_159560_p2.read()) + sc_biguint<16>(tmp1616_fu_159566_p2.read()));
}

void a0_conv2d_1::thread_tmp1618_fu_159591_p2() {
    tmp1618_fu_159591_p2 = (!r3esult6_V_15_fu_126218_p4.read().is_01() || !r3esult4_V_15_reg_215116.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_15_fu_126218_p4.read()) + sc_biguint<16>(r3esult4_V_15_reg_215116.read()));
}

void a0_conv2d_1::thread_tmp1619_fu_114573_p2() {
    tmp1619_fu_114573_p2 = (!r3esult1_V_16_fu_92317_p4.read().is_01() || !r3esult7_V_15_fu_91988_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_16_fu_92317_p4.read()) + sc_biguint<16>(r3esult7_V_15_fu_91988_p4.read()));
}

void a0_conv2d_1::thread_tmp161_fu_140478_p2() {
    tmp161_fu_140478_p2 = (!result2_V_53_fu_133794_p4.read().is_01() || !result3_V_53_fu_133807_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_53_fu_133794_p4.read()) + sc_biguint<16>(result3_V_53_fu_133807_p4.read()));
}

void a0_conv2d_1::thread_tmp1620_fu_114594_p2() {
    tmp1620_fu_114594_p2 = (!r3esult8_V_15_fu_92001_p4.read().is_01() || !tmp1619_fu_114573_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_15_fu_92001_p4.read()) + sc_biguint<16>(tmp1619_fu_114573_p2.read()));
}

void a0_conv2d_1::thread_tmp1621_fu_159601_p2() {
    tmp1621_fu_159601_p2 = (!tmp1618_fu_159591_p2.read().is_01() || !tmp1620_reg_225366.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1618_fu_159591_p2.read()) + sc_biguint<16>(tmp1620_reg_225366.read()));
}

void a0_conv2d_1::thread_tmp1622_fu_159616_p2() {
    tmp1622_fu_159616_p2 = (!tmp1617_fu_159576_p2.read().is_01() || !tmp1621_fu_159601_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1617_fu_159576_p2.read()) + sc_biguint<16>(tmp1621_fu_159601_p2.read()));
}

void a0_conv2d_1::thread_tmp1623_fu_159640_p2() {
    tmp1623_fu_159640_p2 = (!r3esult3_V_16_fu_126361_p4.read().is_01() || !r3esult9_V_15_fu_126231_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_16_fu_126361_p4.read()) + sc_biguint<16>(r3esult9_V_15_fu_126231_p4.read()));
}

void a0_conv2d_1::thread_tmp1624_fu_159646_p2() {
    tmp1624_fu_159646_p2 = (!r3esult5_V_16_reg_215251.read().is_01() || !r3esult2_V_16_reg_215236.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_16_reg_215251.read()) + sc_biguint<16>(r3esult2_V_16_reg_215236.read()));
}

void a0_conv2d_1::thread_tmp1625_fu_159656_p2() {
    tmp1625_fu_159656_p2 = (!tmp1623_fu_159640_p2.read().is_01() || !tmp1624_fu_159646_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1623_fu_159640_p2.read()) + sc_biguint<16>(tmp1624_fu_159646_p2.read()));
}

void a0_conv2d_1::thread_tmp1626_fu_159671_p2() {
    tmp1626_fu_159671_p2 = (!r3esult6_V_16_fu_126374_p4.read().is_01() || !r3esult4_V_16_reg_215246.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_16_fu_126374_p4.read()) + sc_biguint<16>(r3esult4_V_16_reg_215246.read()));
}

void a0_conv2d_1::thread_tmp1627_fu_114657_p2() {
    tmp1627_fu_114657_p2 = (!r3esult1_V_17_fu_92698_p4.read().is_01() || !r3esult7_V_16_fu_92369_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_17_fu_92698_p4.read()) + sc_biguint<16>(r3esult7_V_16_fu_92369_p4.read()));
}

void a0_conv2d_1::thread_tmp1628_fu_159676_p2() {
    tmp1628_fu_159676_p2 = (!r3esult8_V_16_reg_215261.read().is_01() || !tmp1627_reg_225386.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_16_reg_215261.read()) + sc_biguint<16>(tmp1627_reg_225386.read()));
}

void a0_conv2d_1::thread_tmp1629_fu_159685_p2() {
    tmp1629_fu_159685_p2 = (!tmp1626_fu_159671_p2.read().is_01() || !tmp1628_fu_159676_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1626_fu_159671_p2.read()) + sc_biguint<16>(tmp1628_fu_159676_p2.read()));
}

void a0_conv2d_1::thread_tmp162_fu_140496_p2() {
    tmp162_fu_140496_p2 = (!tmp160_fu_140454_p2.read().is_01() || !tmp161_fu_140478_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp160_fu_140454_p2.read()) + sc_biguint<16>(tmp161_fu_140478_p2.read()));
}

void a0_conv2d_1::thread_tmp1630_fu_159701_p2() {
    tmp1630_fu_159701_p2 = (!tmp1625_fu_159656_p2.read().is_01() || !tmp1629_fu_159685_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1625_fu_159656_p2.read()) + sc_biguint<16>(tmp1629_fu_159685_p2.read()));
}

void a0_conv2d_1::thread_tmp1631_fu_159719_p2() {
    tmp1631_fu_159719_p2 = (!tmp1622_fu_159616_p2.read().is_01() || !tmp1630_fu_159701_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1622_fu_159616_p2.read()) + sc_biguint<16>(tmp1630_fu_159701_p2.read()));
}

void a0_conv2d_1::thread_tmp1632_fu_159743_p2() {
    tmp1632_fu_159743_p2 = (!r3esult3_V_17_fu_126517_p4.read().is_01() || !r3esult9_V_16_fu_126387_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_17_fu_126517_p4.read()) + sc_biguint<16>(r3esult9_V_16_fu_126387_p4.read()));
}

void a0_conv2d_1::thread_tmp1633_fu_159749_p2() {
    tmp1633_fu_159749_p2 = (!r3esult5_V_17_reg_215381.read().is_01() || !r3esult2_V_17_reg_215366.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_17_reg_215381.read()) + sc_biguint<16>(r3esult2_V_17_reg_215366.read()));
}

void a0_conv2d_1::thread_tmp1634_fu_159759_p2() {
    tmp1634_fu_159759_p2 = (!tmp1632_fu_159743_p2.read().is_01() || !tmp1633_fu_159749_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1632_fu_159743_p2.read()) + sc_biguint<16>(tmp1633_fu_159749_p2.read()));
}

void a0_conv2d_1::thread_tmp1635_fu_159774_p2() {
    tmp1635_fu_159774_p2 = (!r3esult6_V_17_fu_126530_p4.read().is_01() || !r3esult4_V_17_reg_215376.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_17_fu_126530_p4.read()) + sc_biguint<16>(r3esult4_V_17_reg_215376.read()));
}

void a0_conv2d_1::thread_tmp1636_fu_114735_p2() {
    tmp1636_fu_114735_p2 = (!r3esult1_V_18_fu_93079_p4.read().is_01() || !r3esult7_V_17_fu_92750_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_18_fu_93079_p4.read()) + sc_biguint<16>(r3esult7_V_17_fu_92750_p4.read()));
}

void a0_conv2d_1::thread_tmp1637_fu_114756_p2() {
    tmp1637_fu_114756_p2 = (!r3esult8_V_17_fu_92763_p4.read().is_01() || !tmp1636_fu_114735_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_17_fu_92763_p4.read()) + sc_biguint<16>(tmp1636_fu_114735_p2.read()));
}

void a0_conv2d_1::thread_tmp1638_fu_159784_p2() {
    tmp1638_fu_159784_p2 = (!tmp1635_fu_159774_p2.read().is_01() || !tmp1637_reg_225406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1635_fu_159774_p2.read()) + sc_biguint<16>(tmp1637_reg_225406.read()));
}

void a0_conv2d_1::thread_tmp1639_fu_159799_p2() {
    tmp1639_fu_159799_p2 = (!tmp1634_fu_159759_p2.read().is_01() || !tmp1638_fu_159784_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1634_fu_159759_p2.read()) + sc_biguint<16>(tmp1638_fu_159784_p2.read()));
}

void a0_conv2d_1::thread_tmp163_fu_140520_p2() {
    tmp163_fu_140520_p2 = (!result4_V_53_fu_133819_p4.read().is_01() || !result5_V_53_fu_133831_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_53_fu_133819_p4.read()) + sc_biguint<16>(result5_V_53_fu_133831_p4.read()));
}

void a0_conv2d_1::thread_tmp1640_fu_159823_p2() {
    tmp1640_fu_159823_p2 = (!r3esult3_V_18_fu_126673_p4.read().is_01() || !r3esult9_V_17_fu_126543_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_18_fu_126673_p4.read()) + sc_biguint<16>(r3esult9_V_17_fu_126543_p4.read()));
}

void a0_conv2d_1::thread_tmp1641_fu_159829_p2() {
    tmp1641_fu_159829_p2 = (!r3esult5_V_18_reg_215501.read().is_01() || !r3esult2_V_18_reg_215486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_18_reg_215501.read()) + sc_biguint<16>(r3esult2_V_18_reg_215486.read()));
}

void a0_conv2d_1::thread_tmp1642_fu_159839_p2() {
    tmp1642_fu_159839_p2 = (!tmp1640_fu_159823_p2.read().is_01() || !tmp1641_fu_159829_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1640_fu_159823_p2.read()) + sc_biguint<16>(tmp1641_fu_159829_p2.read()));
}

void a0_conv2d_1::thread_tmp1643_fu_159854_p2() {
    tmp1643_fu_159854_p2 = (!r3esult6_V_18_fu_126686_p4.read().is_01() || !r3esult4_V_18_reg_215496.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_18_fu_126686_p4.read()) + sc_biguint<16>(r3esult4_V_18_reg_215496.read()));
}

void a0_conv2d_1::thread_tmp1644_fu_114819_p2() {
    tmp1644_fu_114819_p2 = (!r3esult1_V_19_fu_93460_p4.read().is_01() || !r3esult7_V_18_fu_93131_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_19_fu_93460_p4.read()) + sc_biguint<16>(r3esult7_V_18_fu_93131_p4.read()));
}

void a0_conv2d_1::thread_tmp1645_fu_114840_p2() {
    tmp1645_fu_114840_p2 = (!r3esult8_V_18_fu_93144_p4.read().is_01() || !tmp1644_fu_114819_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_18_fu_93144_p4.read()) + sc_biguint<16>(tmp1644_fu_114819_p2.read()));
}

void a0_conv2d_1::thread_tmp1646_fu_159864_p2() {
    tmp1646_fu_159864_p2 = (!tmp1643_fu_159854_p2.read().is_01() || !tmp1645_reg_225426.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1643_fu_159854_p2.read()) + sc_biguint<16>(tmp1645_reg_225426.read()));
}

void a0_conv2d_1::thread_tmp1647_fu_159879_p2() {
    tmp1647_fu_159879_p2 = (!tmp1642_fu_159839_p2.read().is_01() || !tmp1646_fu_159864_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1642_fu_159839_p2.read()) + sc_biguint<16>(tmp1646_fu_159864_p2.read()));
}

void a0_conv2d_1::thread_tmp1648_fu_170522_p2() {
    tmp1648_fu_170522_p2 = (!tmp1639_reg_227976.read().is_01() || !tmp1647_reg_227981.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1639_reg_227976.read()) + sc_biguint<16>(tmp1647_reg_227981.read()));
}

void a0_conv2d_1::thread_tmp1649_fu_170526_p2() {
    tmp1649_fu_170526_p2 = (!tmp1631_reg_227971.read().is_01() || !tmp1648_fu_170522_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1631_reg_227971.read()) + sc_biguint<16>(tmp1648_fu_170522_p2.read()));
}

void a0_conv2d_1::thread_tmp164_fu_140544_p2() {
    tmp164_fu_140544_p2 = (!result7_V_53_fu_133856_p4.read().is_01() || !result8_V_53_fu_133868_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_53_fu_133856_p4.read()) + sc_biguint<16>(result8_V_53_fu_133868_p4.read()));
}

void a0_conv2d_1::thread_tmp1650_fu_159927_p2() {
    tmp1650_fu_159927_p2 = (!r3esult3_V_19_fu_126829_p4.read().is_01() || !r3esult9_V_18_fu_126699_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_19_fu_126829_p4.read()) + sc_biguint<16>(r3esult9_V_18_fu_126699_p4.read()));
}

void a0_conv2d_1::thread_tmp1651_fu_159933_p2() {
    tmp1651_fu_159933_p2 = (!r3esult5_V_19_reg_215621.read().is_01() || !r3esult2_V_19_reg_215606.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_19_reg_215621.read()) + sc_biguint<16>(r3esult2_V_19_reg_215606.read()));
}

void a0_conv2d_1::thread_tmp1652_fu_159943_p2() {
    tmp1652_fu_159943_p2 = (!tmp1650_fu_159927_p2.read().is_01() || !tmp1651_fu_159933_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1650_fu_159927_p2.read()) + sc_biguint<16>(tmp1651_fu_159933_p2.read()));
}

void a0_conv2d_1::thread_tmp1653_fu_159958_p2() {
    tmp1653_fu_159958_p2 = (!r3esult6_V_19_fu_126842_p4.read().is_01() || !r3esult4_V_19_reg_215616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_19_fu_126842_p4.read()) + sc_biguint<16>(r3esult4_V_19_reg_215616.read()));
}

void a0_conv2d_1::thread_tmp1654_fu_114903_p2() {
    tmp1654_fu_114903_p2 = (!r3esult1_V_20_fu_93841_p4.read().is_01() || !r3esult7_V_19_fu_93512_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_20_fu_93841_p4.read()) + sc_biguint<16>(r3esult7_V_19_fu_93512_p4.read()));
}

void a0_conv2d_1::thread_tmp1655_fu_114924_p2() {
    tmp1655_fu_114924_p2 = (!r3esult8_V_19_fu_93525_p4.read().is_01() || !tmp1654_fu_114903_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_19_fu_93525_p4.read()) + sc_biguint<16>(tmp1654_fu_114903_p2.read()));
}

void a0_conv2d_1::thread_tmp1656_fu_159968_p2() {
    tmp1656_fu_159968_p2 = (!tmp1653_fu_159958_p2.read().is_01() || !tmp1655_reg_225446.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1653_fu_159958_p2.read()) + sc_biguint<16>(tmp1655_reg_225446.read()));
}

void a0_conv2d_1::thread_tmp1657_fu_159983_p2() {
    tmp1657_fu_159983_p2 = (!tmp1652_fu_159943_p2.read().is_01() || !tmp1656_fu_159968_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1652_fu_159943_p2.read()) + sc_biguint<16>(tmp1656_fu_159968_p2.read()));
}

void a0_conv2d_1::thread_tmp1658_fu_160007_p2() {
    tmp1658_fu_160007_p2 = (!r3esult3_V_20_fu_126985_p4.read().is_01() || !r3esult9_V_19_fu_126855_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_20_fu_126985_p4.read()) + sc_biguint<16>(r3esult9_V_19_fu_126855_p4.read()));
}

void a0_conv2d_1::thread_tmp1659_fu_160013_p2() {
    tmp1659_fu_160013_p2 = (!r3esult5_V_20_reg_215751.read().is_01() || !r3esult2_V_20_reg_215736.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_20_reg_215751.read()) + sc_biguint<16>(r3esult2_V_20_reg_215736.read()));
}

void a0_conv2d_1::thread_tmp165_fu_140565_p2() {
    tmp165_fu_140565_p2 = (!result6_V_53_fu_133844_p4.read().is_01() || !tmp164_fu_140544_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_53_fu_133844_p4.read()) + sc_biguint<16>(tmp164_fu_140544_p2.read()));
}

void a0_conv2d_1::thread_tmp1660_fu_160023_p2() {
    tmp1660_fu_160023_p2 = (!tmp1658_fu_160007_p2.read().is_01() || !tmp1659_fu_160013_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1658_fu_160007_p2.read()) + sc_biguint<16>(tmp1659_fu_160013_p2.read()));
}

void a0_conv2d_1::thread_tmp1661_fu_160038_p2() {
    tmp1661_fu_160038_p2 = (!r3esult6_V_20_fu_126998_p4.read().is_01() || !r3esult4_V_20_reg_215746.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_20_fu_126998_p4.read()) + sc_biguint<16>(r3esult4_V_20_reg_215746.read()));
}

void a0_conv2d_1::thread_tmp1662_fu_114987_p2() {
    tmp1662_fu_114987_p2 = (!r3esult1_V_21_fu_94222_p4.read().is_01() || !r3esult7_V_20_fu_93893_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_21_fu_94222_p4.read()) + sc_biguint<16>(r3esult7_V_20_fu_93893_p4.read()));
}

void a0_conv2d_1::thread_tmp1663_fu_160043_p2() {
    tmp1663_fu_160043_p2 = (!r3esult8_V_20_reg_215761.read().is_01() || !tmp1662_reg_225466.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_20_reg_215761.read()) + sc_biguint<16>(tmp1662_reg_225466.read()));
}

void a0_conv2d_1::thread_tmp1664_fu_160052_p2() {
    tmp1664_fu_160052_p2 = (!tmp1661_fu_160038_p2.read().is_01() || !tmp1663_fu_160043_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1661_fu_160038_p2.read()) + sc_biguint<16>(tmp1663_fu_160043_p2.read()));
}

void a0_conv2d_1::thread_tmp1665_fu_160068_p2() {
    tmp1665_fu_160068_p2 = (!tmp1660_fu_160023_p2.read().is_01() || !tmp1664_fu_160052_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1660_fu_160023_p2.read()) + sc_biguint<16>(tmp1664_fu_160052_p2.read()));
}

void a0_conv2d_1::thread_tmp1666_fu_160086_p2() {
    tmp1666_fu_160086_p2 = (!tmp1657_fu_159983_p2.read().is_01() || !tmp1665_fu_160068_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1657_fu_159983_p2.read()) + sc_biguint<16>(tmp1665_fu_160068_p2.read()));
}

void a0_conv2d_1::thread_tmp1667_fu_160110_p2() {
    tmp1667_fu_160110_p2 = (!r3esult3_V_21_fu_127141_p4.read().is_01() || !r3esult9_V_20_fu_127011_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_21_fu_127141_p4.read()) + sc_biguint<16>(r3esult9_V_20_fu_127011_p4.read()));
}

void a0_conv2d_1::thread_tmp1668_fu_160116_p2() {
    tmp1668_fu_160116_p2 = (!r3esult5_V_21_reg_215881.read().is_01() || !r3esult2_V_21_reg_215866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_21_reg_215881.read()) + sc_biguint<16>(r3esult2_V_21_reg_215866.read()));
}

void a0_conv2d_1::thread_tmp1669_fu_160126_p2() {
    tmp1669_fu_160126_p2 = (!tmp1667_fu_160110_p2.read().is_01() || !tmp1668_fu_160116_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1667_fu_160110_p2.read()) + sc_biguint<16>(tmp1668_fu_160116_p2.read()));
}

void a0_conv2d_1::thread_tmp166_fu_140583_p2() {
    tmp166_fu_140583_p2 = (!tmp163_fu_140520_p2.read().is_01() || !tmp165_fu_140565_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp163_fu_140520_p2.read()) + sc_biguint<16>(tmp165_fu_140565_p2.read()));
}

void a0_conv2d_1::thread_tmp1670_fu_160141_p2() {
    tmp1670_fu_160141_p2 = (!r3esult6_V_21_fu_127154_p4.read().is_01() || !r3esult4_V_21_reg_215876.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_21_fu_127154_p4.read()) + sc_biguint<16>(r3esult4_V_21_reg_215876.read()));
}

void a0_conv2d_1::thread_tmp1671_fu_115065_p2() {
    tmp1671_fu_115065_p2 = (!r3esult1_V_22_fu_94603_p4.read().is_01() || !r3esult7_V_21_fu_94274_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_22_fu_94603_p4.read()) + sc_biguint<16>(r3esult7_V_21_fu_94274_p4.read()));
}

void a0_conv2d_1::thread_tmp1672_fu_115086_p2() {
    tmp1672_fu_115086_p2 = (!r3esult8_V_21_fu_94287_p4.read().is_01() || !tmp1671_fu_115065_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_21_fu_94287_p4.read()) + sc_biguint<16>(tmp1671_fu_115065_p2.read()));
}

void a0_conv2d_1::thread_tmp1673_fu_160151_p2() {
    tmp1673_fu_160151_p2 = (!tmp1670_fu_160141_p2.read().is_01() || !tmp1672_reg_225486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1670_fu_160141_p2.read()) + sc_biguint<16>(tmp1672_reg_225486.read()));
}

void a0_conv2d_1::thread_tmp1674_fu_160166_p2() {
    tmp1674_fu_160166_p2 = (!tmp1669_fu_160126_p2.read().is_01() || !tmp1673_fu_160151_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1669_fu_160126_p2.read()) + sc_biguint<16>(tmp1673_fu_160151_p2.read()));
}

void a0_conv2d_1::thread_tmp1675_fu_160190_p2() {
    tmp1675_fu_160190_p2 = (!r3esult3_V_22_fu_127297_p4.read().is_01() || !r3esult9_V_21_fu_127167_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_22_fu_127297_p4.read()) + sc_biguint<16>(r3esult9_V_21_fu_127167_p4.read()));
}

void a0_conv2d_1::thread_tmp1676_fu_160196_p2() {
    tmp1676_fu_160196_p2 = (!r3esult5_V_22_reg_216011.read().is_01() || !r3esult2_V_22_reg_215996.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_22_reg_216011.read()) + sc_biguint<16>(r3esult2_V_22_reg_215996.read()));
}

void a0_conv2d_1::thread_tmp1677_fu_160206_p2() {
    tmp1677_fu_160206_p2 = (!tmp1675_fu_160190_p2.read().is_01() || !tmp1676_fu_160196_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1675_fu_160190_p2.read()) + sc_biguint<16>(tmp1676_fu_160196_p2.read()));
}

void a0_conv2d_1::thread_tmp1678_fu_160221_p2() {
    tmp1678_fu_160221_p2 = (!r3esult6_V_22_fu_127310_p4.read().is_01() || !r3esult4_V_22_reg_216006.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_22_fu_127310_p4.read()) + sc_biguint<16>(r3esult4_V_22_reg_216006.read()));
}

void a0_conv2d_1::thread_tmp1679_fu_115149_p2() {
    tmp1679_fu_115149_p2 = (!r3esult1_V_23_fu_94984_p4.read().is_01() || !r3esult7_V_22_fu_94655_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_23_fu_94984_p4.read()) + sc_biguint<16>(r3esult7_V_22_fu_94655_p4.read()));
}

void a0_conv2d_1::thread_tmp167_fu_140601_p2() {
    tmp167_fu_140601_p2 = (!tmp162_fu_140496_p2.read().is_01() || !tmp166_fu_140583_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp162_fu_140496_p2.read()) + sc_biguint<16>(tmp166_fu_140583_p2.read()));
}

void a0_conv2d_1::thread_tmp1680_fu_160226_p2() {
    tmp1680_fu_160226_p2 = (!r3esult8_V_22_reg_216021.read().is_01() || !tmp1679_reg_225506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_22_reg_216021.read()) + sc_biguint<16>(tmp1679_reg_225506.read()));
}

void a0_conv2d_1::thread_tmp1681_fu_160235_p2() {
    tmp1681_fu_160235_p2 = (!tmp1678_fu_160221_p2.read().is_01() || !tmp1680_fu_160226_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1678_fu_160221_p2.read()) + sc_biguint<16>(tmp1680_fu_160226_p2.read()));
}

void a0_conv2d_1::thread_tmp1682_fu_160251_p2() {
    tmp1682_fu_160251_p2 = (!tmp1677_fu_160206_p2.read().is_01() || !tmp1681_fu_160235_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1677_fu_160206_p2.read()) + sc_biguint<16>(tmp1681_fu_160235_p2.read()));
}

void a0_conv2d_1::thread_tmp1683_fu_160269_p2() {
    tmp1683_fu_160269_p2 = (!tmp1674_fu_160166_p2.read().is_01() || !tmp1682_fu_160251_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1674_fu_160166_p2.read()) + sc_biguint<16>(tmp1682_fu_160251_p2.read()));
}

void a0_conv2d_1::thread_tmp1684_fu_170531_p2() {
    tmp1684_fu_170531_p2 = (!tmp1666_reg_227986.read().is_01() || !tmp1683_reg_227991.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1666_reg_227986.read()) + sc_biguint<16>(tmp1683_reg_227991.read()));
}

void a0_conv2d_1::thread_tmp1685_fu_170535_p2() {
    tmp1685_fu_170535_p2 = (!tmp1649_fu_170526_p2.read().is_01() || !tmp1684_fu_170531_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1649_fu_170526_p2.read()) + sc_biguint<16>(tmp1684_fu_170531_p2.read()));
}

void a0_conv2d_1::thread_tmp1686_fu_160317_p2() {
    tmp1686_fu_160317_p2 = (!r3esult3_V_23_fu_127453_p4.read().is_01() || !r3esult9_V_22_fu_127323_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_23_fu_127453_p4.read()) + sc_biguint<16>(r3esult9_V_22_fu_127323_p4.read()));
}

void a0_conv2d_1::thread_tmp1687_fu_160323_p2() {
    tmp1687_fu_160323_p2 = (!r3esult5_V_23_reg_216141.read().is_01() || !r3esult2_V_23_reg_216126.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_23_reg_216141.read()) + sc_biguint<16>(r3esult2_V_23_reg_216126.read()));
}

void a0_conv2d_1::thread_tmp1688_fu_160333_p2() {
    tmp1688_fu_160333_p2 = (!tmp1686_fu_160317_p2.read().is_01() || !tmp1687_fu_160323_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1686_fu_160317_p2.read()) + sc_biguint<16>(tmp1687_fu_160323_p2.read()));
}

void a0_conv2d_1::thread_tmp1689_fu_160348_p2() {
    tmp1689_fu_160348_p2 = (!r3esult6_V_23_fu_127466_p4.read().is_01() || !r3esult4_V_23_reg_216136.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_23_fu_127466_p4.read()) + sc_biguint<16>(r3esult4_V_23_reg_216136.read()));
}

void a0_conv2d_1::thread_tmp168_fu_140625_p2() {
    tmp168_fu_140625_p2 = (!result9_V_53_fu_133881_p4.read().is_01() || !result1_V_54_fu_134226_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_53_fu_133881_p4.read()) + sc_biguint<16>(result1_V_54_fu_134226_p4.read()));
}

void a0_conv2d_1::thread_tmp1690_fu_115227_p2() {
    tmp1690_fu_115227_p2 = (!r3esult1_V_24_fu_95365_p4.read().is_01() || !r3esult7_V_23_fu_95036_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_24_fu_95365_p4.read()) + sc_biguint<16>(r3esult7_V_23_fu_95036_p4.read()));
}

void a0_conv2d_1::thread_tmp1691_fu_115248_p2() {
    tmp1691_fu_115248_p2 = (!r3esult8_V_23_fu_95049_p4.read().is_01() || !tmp1690_fu_115227_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_23_fu_95049_p4.read()) + sc_biguint<16>(tmp1690_fu_115227_p2.read()));
}

void a0_conv2d_1::thread_tmp1692_fu_160358_p2() {
    tmp1692_fu_160358_p2 = (!tmp1689_fu_160348_p2.read().is_01() || !tmp1691_reg_225526.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1689_fu_160348_p2.read()) + sc_biguint<16>(tmp1691_reg_225526.read()));
}

void a0_conv2d_1::thread_tmp1693_fu_160373_p2() {
    tmp1693_fu_160373_p2 = (!tmp1688_fu_160333_p2.read().is_01() || !tmp1692_fu_160358_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1688_fu_160333_p2.read()) + sc_biguint<16>(tmp1692_fu_160358_p2.read()));
}

void a0_conv2d_1::thread_tmp1694_fu_160397_p2() {
    tmp1694_fu_160397_p2 = (!r3esult3_V_24_fu_127609_p4.read().is_01() || !r3esult9_V_23_fu_127479_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_24_fu_127609_p4.read()) + sc_biguint<16>(r3esult9_V_23_fu_127479_p4.read()));
}

void a0_conv2d_1::thread_tmp1695_fu_160403_p2() {
    tmp1695_fu_160403_p2 = (!r3esult5_V_24_reg_216271.read().is_01() || !r3esult2_V_24_reg_216256.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_24_reg_216271.read()) + sc_biguint<16>(r3esult2_V_24_reg_216256.read()));
}

void a0_conv2d_1::thread_tmp1696_fu_160413_p2() {
    tmp1696_fu_160413_p2 = (!tmp1694_fu_160397_p2.read().is_01() || !tmp1695_fu_160403_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1694_fu_160397_p2.read()) + sc_biguint<16>(tmp1695_fu_160403_p2.read()));
}

void a0_conv2d_1::thread_tmp1697_fu_160428_p2() {
    tmp1697_fu_160428_p2 = (!r3esult6_V_24_fu_127622_p4.read().is_01() || !r3esult4_V_24_reg_216266.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_24_fu_127622_p4.read()) + sc_biguint<16>(r3esult4_V_24_reg_216266.read()));
}

void a0_conv2d_1::thread_tmp1698_fu_115311_p2() {
    tmp1698_fu_115311_p2 = (!r3esult1_V_25_fu_95746_p4.read().is_01() || !r3esult7_V_24_fu_95417_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_25_fu_95746_p4.read()) + sc_biguint<16>(r3esult7_V_24_fu_95417_p4.read()));
}

void a0_conv2d_1::thread_tmp1699_fu_160433_p2() {
    tmp1699_fu_160433_p2 = (!r3esult8_V_24_reg_216281.read().is_01() || !tmp1698_reg_225546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_24_reg_216281.read()) + sc_biguint<16>(tmp1698_reg_225546.read()));
}

void a0_conv2d_1::thread_tmp169_fu_140649_p2() {
    tmp169_fu_140649_p2 = (!result2_V_54_fu_134238_p4.read().is_01() || !result3_V_54_fu_134251_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_54_fu_134238_p4.read()) + sc_biguint<16>(result3_V_54_fu_134251_p4.read()));
}

void a0_conv2d_1::thread_tmp1700_fu_160442_p2() {
    tmp1700_fu_160442_p2 = (!tmp1697_fu_160428_p2.read().is_01() || !tmp1699_fu_160433_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1697_fu_160428_p2.read()) + sc_biguint<16>(tmp1699_fu_160433_p2.read()));
}

void a0_conv2d_1::thread_tmp1701_fu_160458_p2() {
    tmp1701_fu_160458_p2 = (!tmp1696_fu_160413_p2.read().is_01() || !tmp1700_fu_160442_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1696_fu_160413_p2.read()) + sc_biguint<16>(tmp1700_fu_160442_p2.read()));
}

void a0_conv2d_1::thread_tmp1702_fu_160476_p2() {
    tmp1702_fu_160476_p2 = (!tmp1693_fu_160373_p2.read().is_01() || !tmp1701_fu_160458_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1693_fu_160373_p2.read()) + sc_biguint<16>(tmp1701_fu_160458_p2.read()));
}

void a0_conv2d_1::thread_tmp1703_fu_160500_p2() {
    tmp1703_fu_160500_p2 = (!r3esult3_V_25_fu_127765_p4.read().is_01() || !r3esult9_V_24_fu_127635_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_25_fu_127765_p4.read()) + sc_biguint<16>(r3esult9_V_24_fu_127635_p4.read()));
}

void a0_conv2d_1::thread_tmp1704_fu_160506_p2() {
    tmp1704_fu_160506_p2 = (!r3esult5_V_25_reg_216401.read().is_01() || !r3esult2_V_25_reg_216386.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_25_reg_216401.read()) + sc_biguint<16>(r3esult2_V_25_reg_216386.read()));
}

void a0_conv2d_1::thread_tmp1705_fu_160516_p2() {
    tmp1705_fu_160516_p2 = (!tmp1703_fu_160500_p2.read().is_01() || !tmp1704_fu_160506_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1703_fu_160500_p2.read()) + sc_biguint<16>(tmp1704_fu_160506_p2.read()));
}

void a0_conv2d_1::thread_tmp1706_fu_160531_p2() {
    tmp1706_fu_160531_p2 = (!r3esult6_V_25_fu_127778_p4.read().is_01() || !r3esult4_V_25_reg_216396.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_25_fu_127778_p4.read()) + sc_biguint<16>(r3esult4_V_25_reg_216396.read()));
}

void a0_conv2d_1::thread_tmp1707_fu_115389_p2() {
    tmp1707_fu_115389_p2 = (!r3esult1_V_26_fu_96127_p4.read().is_01() || !r3esult7_V_25_fu_95798_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_26_fu_96127_p4.read()) + sc_biguint<16>(r3esult7_V_25_fu_95798_p4.read()));
}

void a0_conv2d_1::thread_tmp1708_fu_115410_p2() {
    tmp1708_fu_115410_p2 = (!r3esult8_V_25_fu_95811_p4.read().is_01() || !tmp1707_fu_115389_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_25_fu_95811_p4.read()) + sc_biguint<16>(tmp1707_fu_115389_p2.read()));
}

void a0_conv2d_1::thread_tmp1709_fu_160541_p2() {
    tmp1709_fu_160541_p2 = (!tmp1706_fu_160531_p2.read().is_01() || !tmp1708_reg_225566.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1706_fu_160531_p2.read()) + sc_biguint<16>(tmp1708_reg_225566.read()));
}

void a0_conv2d_1::thread_tmp170_fu_140667_p2() {
    tmp170_fu_140667_p2 = (!tmp168_fu_140625_p2.read().is_01() || !tmp169_fu_140649_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp168_fu_140625_p2.read()) + sc_biguint<16>(tmp169_fu_140649_p2.read()));
}

void a0_conv2d_1::thread_tmp1710_fu_160556_p2() {
    tmp1710_fu_160556_p2 = (!tmp1705_fu_160516_p2.read().is_01() || !tmp1709_fu_160541_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1705_fu_160516_p2.read()) + sc_biguint<16>(tmp1709_fu_160541_p2.read()));
}

void a0_conv2d_1::thread_tmp1711_fu_160580_p2() {
    tmp1711_fu_160580_p2 = (!r3esult3_V_26_fu_127921_p4.read().is_01() || !r3esult9_V_25_fu_127791_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_26_fu_127921_p4.read()) + sc_biguint<16>(r3esult9_V_25_fu_127791_p4.read()));
}

void a0_conv2d_1::thread_tmp1712_fu_160586_p2() {
    tmp1712_fu_160586_p2 = (!r3esult5_V_26_reg_216521.read().is_01() || !r3esult2_V_26_reg_216506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_26_reg_216521.read()) + sc_biguint<16>(r3esult2_V_26_reg_216506.read()));
}

void a0_conv2d_1::thread_tmp1713_fu_160596_p2() {
    tmp1713_fu_160596_p2 = (!tmp1711_fu_160580_p2.read().is_01() || !tmp1712_fu_160586_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1711_fu_160580_p2.read()) + sc_biguint<16>(tmp1712_fu_160586_p2.read()));
}

void a0_conv2d_1::thread_tmp1714_fu_160611_p2() {
    tmp1714_fu_160611_p2 = (!r3esult6_V_26_fu_127934_p4.read().is_01() || !r3esult4_V_26_reg_216516.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_26_fu_127934_p4.read()) + sc_biguint<16>(r3esult4_V_26_reg_216516.read()));
}

void a0_conv2d_1::thread_tmp1715_fu_115473_p2() {
    tmp1715_fu_115473_p2 = (!r3esult1_V_27_fu_96508_p4.read().is_01() || !r3esult7_V_26_fu_96179_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_27_fu_96508_p4.read()) + sc_biguint<16>(r3esult7_V_26_fu_96179_p4.read()));
}

void a0_conv2d_1::thread_tmp1716_fu_115494_p2() {
    tmp1716_fu_115494_p2 = (!r3esult8_V_26_fu_96192_p4.read().is_01() || !tmp1715_fu_115473_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_26_fu_96192_p4.read()) + sc_biguint<16>(tmp1715_fu_115473_p2.read()));
}

void a0_conv2d_1::thread_tmp1717_fu_160621_p2() {
    tmp1717_fu_160621_p2 = (!tmp1714_fu_160611_p2.read().is_01() || !tmp1716_reg_225586.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1714_fu_160611_p2.read()) + sc_biguint<16>(tmp1716_reg_225586.read()));
}

void a0_conv2d_1::thread_tmp1718_fu_160636_p2() {
    tmp1718_fu_160636_p2 = (!tmp1713_fu_160596_p2.read().is_01() || !tmp1717_fu_160621_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1713_fu_160596_p2.read()) + sc_biguint<16>(tmp1717_fu_160621_p2.read()));
}

void a0_conv2d_1::thread_tmp1719_fu_170541_p2() {
    tmp1719_fu_170541_p2 = (!tmp1710_reg_228011.read().is_01() || !tmp1718_reg_228016.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1710_reg_228011.read()) + sc_biguint<16>(tmp1718_reg_228016.read()));
}

void a0_conv2d_1::thread_tmp171_fu_140691_p2() {
    tmp171_fu_140691_p2 = (!result4_V_54_fu_134263_p4.read().is_01() || !result5_V_54_fu_134275_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_54_fu_134263_p4.read()) + sc_biguint<16>(result5_V_54_fu_134275_p4.read()));
}

void a0_conv2d_1::thread_tmp1720_fu_170545_p2() {
    tmp1720_fu_170545_p2 = (!tmp1702_reg_228006.read().is_01() || !tmp1719_fu_170541_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1702_reg_228006.read()) + sc_biguint<16>(tmp1719_fu_170541_p2.read()));
}

void a0_conv2d_1::thread_tmp1721_fu_160684_p2() {
    tmp1721_fu_160684_p2 = (!r3esult3_V_27_fu_128077_p4.read().is_01() || !r3esult9_V_26_fu_127947_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_27_fu_128077_p4.read()) + sc_biguint<16>(r3esult9_V_26_fu_127947_p4.read()));
}

void a0_conv2d_1::thread_tmp1722_fu_160690_p2() {
    tmp1722_fu_160690_p2 = (!r3esult5_V_27_reg_216641.read().is_01() || !r3esult2_V_27_reg_216626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_27_reg_216641.read()) + sc_biguint<16>(r3esult2_V_27_reg_216626.read()));
}

void a0_conv2d_1::thread_tmp1723_fu_160700_p2() {
    tmp1723_fu_160700_p2 = (!tmp1721_fu_160684_p2.read().is_01() || !tmp1722_fu_160690_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1721_fu_160684_p2.read()) + sc_biguint<16>(tmp1722_fu_160690_p2.read()));
}

void a0_conv2d_1::thread_tmp1724_fu_160715_p2() {
    tmp1724_fu_160715_p2 = (!r3esult6_V_27_fu_128090_p4.read().is_01() || !r3esult4_V_27_reg_216636.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_27_fu_128090_p4.read()) + sc_biguint<16>(r3esult4_V_27_reg_216636.read()));
}

void a0_conv2d_1::thread_tmp1725_fu_115557_p2() {
    tmp1725_fu_115557_p2 = (!r3esult1_V_28_fu_96889_p4.read().is_01() || !r3esult7_V_27_fu_96560_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_28_fu_96889_p4.read()) + sc_biguint<16>(r3esult7_V_27_fu_96560_p4.read()));
}

void a0_conv2d_1::thread_tmp1726_fu_115578_p2() {
    tmp1726_fu_115578_p2 = (!r3esult8_V_27_fu_96573_p4.read().is_01() || !tmp1725_fu_115557_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_27_fu_96573_p4.read()) + sc_biguint<16>(tmp1725_fu_115557_p2.read()));
}

void a0_conv2d_1::thread_tmp1727_fu_160725_p2() {
    tmp1727_fu_160725_p2 = (!tmp1724_fu_160715_p2.read().is_01() || !tmp1726_reg_225606.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1724_fu_160715_p2.read()) + sc_biguint<16>(tmp1726_reg_225606.read()));
}

void a0_conv2d_1::thread_tmp1728_fu_160740_p2() {
    tmp1728_fu_160740_p2 = (!tmp1723_fu_160700_p2.read().is_01() || !tmp1727_fu_160725_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1723_fu_160700_p2.read()) + sc_biguint<16>(tmp1727_fu_160725_p2.read()));
}

void a0_conv2d_1::thread_tmp1729_fu_160764_p2() {
    tmp1729_fu_160764_p2 = (!r3esult3_V_28_fu_128233_p4.read().is_01() || !r3esult9_V_27_fu_128103_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_28_fu_128233_p4.read()) + sc_biguint<16>(r3esult9_V_27_fu_128103_p4.read()));
}

void a0_conv2d_1::thread_tmp172_fu_140715_p2() {
    tmp172_fu_140715_p2 = (!result7_V_54_fu_134300_p4.read().is_01() || !result8_V_54_fu_134312_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_54_fu_134300_p4.read()) + sc_biguint<16>(result8_V_54_fu_134312_p4.read()));
}

void a0_conv2d_1::thread_tmp1730_fu_160770_p2() {
    tmp1730_fu_160770_p2 = (!r3esult5_V_28_reg_216771.read().is_01() || !r3esult2_V_28_reg_216756.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_28_reg_216771.read()) + sc_biguint<16>(r3esult2_V_28_reg_216756.read()));
}

void a0_conv2d_1::thread_tmp1731_fu_160780_p2() {
    tmp1731_fu_160780_p2 = (!tmp1729_fu_160764_p2.read().is_01() || !tmp1730_fu_160770_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1729_fu_160764_p2.read()) + sc_biguint<16>(tmp1730_fu_160770_p2.read()));
}

void a0_conv2d_1::thread_tmp1732_fu_160795_p2() {
    tmp1732_fu_160795_p2 = (!r3esult6_V_28_fu_128246_p4.read().is_01() || !r3esult4_V_28_reg_216766.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_28_fu_128246_p4.read()) + sc_biguint<16>(r3esult4_V_28_reg_216766.read()));
}

void a0_conv2d_1::thread_tmp1733_fu_115641_p2() {
    tmp1733_fu_115641_p2 = (!r3esult1_V_29_fu_97270_p4.read().is_01() || !r3esult7_V_28_fu_96941_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_29_fu_97270_p4.read()) + sc_biguint<16>(r3esult7_V_28_fu_96941_p4.read()));
}

void a0_conv2d_1::thread_tmp1734_fu_160800_p2() {
    tmp1734_fu_160800_p2 = (!r3esult8_V_28_reg_216781.read().is_01() || !tmp1733_reg_225626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_28_reg_216781.read()) + sc_biguint<16>(tmp1733_reg_225626.read()));
}

void a0_conv2d_1::thread_tmp1735_fu_160809_p2() {
    tmp1735_fu_160809_p2 = (!tmp1732_fu_160795_p2.read().is_01() || !tmp1734_fu_160800_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1732_fu_160795_p2.read()) + sc_biguint<16>(tmp1734_fu_160800_p2.read()));
}

void a0_conv2d_1::thread_tmp1736_fu_160825_p2() {
    tmp1736_fu_160825_p2 = (!tmp1731_fu_160780_p2.read().is_01() || !tmp1735_fu_160809_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1731_fu_160780_p2.read()) + sc_biguint<16>(tmp1735_fu_160809_p2.read()));
}

void a0_conv2d_1::thread_tmp1737_fu_160843_p2() {
    tmp1737_fu_160843_p2 = (!tmp1728_fu_160740_p2.read().is_01() || !tmp1736_fu_160825_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1728_fu_160740_p2.read()) + sc_biguint<16>(tmp1736_fu_160825_p2.read()));
}

void a0_conv2d_1::thread_tmp1738_fu_160867_p2() {
    tmp1738_fu_160867_p2 = (!r3esult3_V_29_fu_128389_p4.read().is_01() || !r3esult9_V_28_fu_128259_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_29_fu_128389_p4.read()) + sc_biguint<16>(r3esult9_V_28_fu_128259_p4.read()));
}

void a0_conv2d_1::thread_tmp1739_fu_160873_p2() {
    tmp1739_fu_160873_p2 = (!r3esult5_V_29_reg_216901.read().is_01() || !r3esult2_V_29_reg_216886.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_29_reg_216901.read()) + sc_biguint<16>(r3esult2_V_29_reg_216886.read()));
}

void a0_conv2d_1::thread_tmp173_fu_140736_p2() {
    tmp173_fu_140736_p2 = (!result6_V_54_fu_134288_p4.read().is_01() || !tmp172_fu_140715_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_54_fu_134288_p4.read()) + sc_biguint<16>(tmp172_fu_140715_p2.read()));
}

void a0_conv2d_1::thread_tmp1740_fu_160883_p2() {
    tmp1740_fu_160883_p2 = (!tmp1738_fu_160867_p2.read().is_01() || !tmp1739_fu_160873_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1738_fu_160867_p2.read()) + sc_biguint<16>(tmp1739_fu_160873_p2.read()));
}

void a0_conv2d_1::thread_tmp1741_fu_160898_p2() {
    tmp1741_fu_160898_p2 = (!r3esult6_V_29_fu_128402_p4.read().is_01() || !r3esult4_V_29_reg_216896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_29_fu_128402_p4.read()) + sc_biguint<16>(r3esult4_V_29_reg_216896.read()));
}

void a0_conv2d_1::thread_tmp1742_fu_115719_p2() {
    tmp1742_fu_115719_p2 = (!r3esult1_V_30_fu_97651_p4.read().is_01() || !r3esult7_V_29_fu_97322_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult1_V_30_fu_97651_p4.read()) + sc_biguint<16>(r3esult7_V_29_fu_97322_p4.read()));
}

void a0_conv2d_1::thread_tmp1743_fu_115740_p2() {
    tmp1743_fu_115740_p2 = (!r3esult8_V_29_fu_97335_p4.read().is_01() || !tmp1742_fu_115719_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_29_fu_97335_p4.read()) + sc_biguint<16>(tmp1742_fu_115719_p2.read()));
}

void a0_conv2d_1::thread_tmp1744_fu_160908_p2() {
    tmp1744_fu_160908_p2 = (!tmp1741_fu_160898_p2.read().is_01() || !tmp1743_reg_225646.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1741_fu_160898_p2.read()) + sc_biguint<16>(tmp1743_reg_225646.read()));
}

void a0_conv2d_1::thread_tmp1745_fu_160923_p2() {
    tmp1745_fu_160923_p2 = (!tmp1740_fu_160883_p2.read().is_01() || !tmp1744_fu_160908_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1740_fu_160883_p2.read()) + sc_biguint<16>(tmp1744_fu_160908_p2.read()));
}

void a0_conv2d_1::thread_tmp1746_fu_160947_p2() {
    tmp1746_fu_160947_p2 = (!r3esult3_V_30_fu_128545_p4.read().is_01() || !r3esult9_V_29_fu_128415_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult3_V_30_fu_128545_p4.read()) + sc_biguint<16>(r3esult9_V_29_fu_128415_p4.read()));
}

void a0_conv2d_1::thread_tmp1747_fu_160953_p2() {
    tmp1747_fu_160953_p2 = (!r3esult5_V_30_reg_217041.read().is_01() || !r3esult2_V_30_reg_217026.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult5_V_30_reg_217041.read()) + sc_biguint<16>(r3esult2_V_30_reg_217026.read()));
}

void a0_conv2d_1::thread_tmp1748_fu_160963_p2() {
    tmp1748_fu_160963_p2 = (!tmp1746_fu_160947_p2.read().is_01() || !tmp1747_fu_160953_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1746_fu_160947_p2.read()) + sc_biguint<16>(tmp1747_fu_160953_p2.read()));
}

void a0_conv2d_1::thread_tmp1749_fu_160978_p2() {
    tmp1749_fu_160978_p2 = (!r3esult6_V_30_fu_128558_p4.read().is_01() || !r3esult4_V_30_reg_217036.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult6_V_30_fu_128558_p4.read()) + sc_biguint<16>(r3esult4_V_30_reg_217036.read()));
}

void a0_conv2d_1::thread_tmp174_fu_140754_p2() {
    tmp174_fu_140754_p2 = (!tmp171_fu_140691_p2.read().is_01() || !tmp173_fu_140736_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp171_fu_140691_p2.read()) + sc_biguint<16>(tmp173_fu_140736_p2.read()));
}

void a0_conv2d_1::thread_tmp1750_fu_160992_p2() {
    tmp1750_fu_160992_p2 = (!r3esult9_V_62_fu_153399_p4.read().is_01() || !r3esult7_V_30_reg_217051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult9_V_62_fu_153399_p4.read()) + sc_biguint<16>(r3esult7_V_30_reg_217051.read()));
}

void a0_conv2d_1::thread_tmp1751_fu_161002_p2() {
    tmp1751_fu_161002_p2 = (!r3esult8_V_30_reg_217056.read().is_01() || !tmp1750_fu_160992_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r3esult8_V_30_reg_217056.read()) + sc_biguint<16>(tmp1750_fu_160992_p2.read()));
}

void a0_conv2d_1::thread_tmp1752_fu_161017_p2() {
    tmp1752_fu_161017_p2 = (!tmp1749_fu_160978_p2.read().is_01() || !tmp1751_fu_161002_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1749_fu_160978_p2.read()) + sc_biguint<16>(tmp1751_fu_161002_p2.read()));
}

void a0_conv2d_1::thread_tmp1753_fu_161034_p2() {
    tmp1753_fu_161034_p2 = (!tmp1748_fu_160963_p2.read().is_01() || !tmp1752_fu_161017_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1748_fu_160963_p2.read()) + sc_biguint<16>(tmp1752_fu_161017_p2.read()));
}

void a0_conv2d_1::thread_tmp1754_fu_170550_p2() {
    tmp1754_fu_170550_p2 = (!tmp1745_reg_228046.read().is_01() || !tmp1753_reg_228051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1745_reg_228046.read()) + sc_biguint<16>(tmp1753_reg_228051.read()));
}

void a0_conv2d_1::thread_tmp1755_fu_170558_p2() {
    tmp1755_fu_170558_p2 = (!tmp1737_reg_228041.read().is_01() || !tmp1754_fu_170550_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1737_reg_228041.read()) + sc_biguint<16>(tmp1754_fu_170550_p2.read()));
}

void a0_conv2d_1::thread_tmp1756_fu_170572_p2() {
    tmp1756_fu_170572_p2 = (!tmp1720_fu_170545_p2.read().is_01() || !tmp1755_fu_170558_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1720_fu_170545_p2.read()) + sc_biguint<16>(tmp1755_fu_170558_p2.read()));
}

void a0_conv2d_1::thread_tmp1757_fu_170588_p2() {
    tmp1757_fu_170588_p2 = (!tmp1685_fu_170535_p2.read().is_01() || !tmp1756_fu_170572_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1685_fu_170535_p2.read()) + sc_biguint<16>(tmp1756_fu_170572_p2.read()));
}

void a0_conv2d_1::thread_tmp1758_fu_170606_p2() {
    tmp1758_fu_170606_p2 = (!tmp1614_fu_170516_p2.read().is_01() || !tmp1757_fu_170588_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1614_fu_170516_p2.read()) + sc_biguint<16>(tmp1757_fu_170588_p2.read()));
}

void a0_conv2d_1::thread_tmp1759_fu_161187_p2() {
    tmp1759_fu_161187_p2 = (!r4esult8_V_62_fu_161147_p4.read().is_01() || !r4esult7_V_62_fu_161135_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_62_fu_161147_p4.read()) + sc_biguint<16>(r4esult7_V_62_fu_161135_p4.read()));
}

void a0_conv2d_1::thread_tmp175_fu_140772_p2() {
    tmp175_fu_140772_p2 = (!tmp170_fu_140667_p2.read().is_01() || !tmp174_fu_140754_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp170_fu_140667_p2.read()) + sc_biguint<16>(tmp174_fu_140754_p2.read()));
}

void a0_conv2d_1::thread_tmp1760_fu_161211_p2() {
    tmp1760_fu_161211_p2 = (!r4esult5_V_62_fu_161110_p4.read().is_01() || !r4esult6_V_62_fu_161123_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_62_fu_161110_p4.read()) + sc_biguint<16>(r4esult6_V_62_fu_161123_p4.read()));
}

void a0_conv2d_1::thread_tmp1761_fu_161229_p2() {
    tmp1761_fu_161229_p2 = (!tmp1759_fu_161187_p2.read().is_01() || !tmp1760_fu_161211_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1759_fu_161187_p2.read()) + sc_biguint<16>(tmp1760_fu_161211_p2.read()));
}

void a0_conv2d_1::thread_tmp1762_fu_161253_p2() {
    tmp1762_fu_161253_p2 = (!r4esult1_V_62_fu_161061_p4.read().is_01() || !r4esult4_V_62_fu_161098_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_62_fu_161061_p4.read()) + sc_biguint<16>(r4esult4_V_62_fu_161098_p4.read()));
}

void a0_conv2d_1::thread_tmp1763_fu_161277_p2() {
    tmp1763_fu_161277_p2 = (!r4esult2_V_62_fu_161073_p4.read().is_01() || !r4esult3_V_62_fu_161086_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_62_fu_161073_p4.read()) + sc_biguint<16>(r4esult3_V_62_fu_161086_p4.read()));
}

void a0_conv2d_1::thread_tmp1764_fu_161298_p2() {
    tmp1764_fu_161298_p2 = (!r4esult9_V_61_fu_137766_p4.read().is_01() || !tmp1763_fu_161277_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_61_fu_137766_p4.read()) + sc_biguint<16>(tmp1763_fu_161277_p2.read()));
}

void a0_conv2d_1::thread_tmp1765_fu_161316_p2() {
    tmp1765_fu_161316_p2 = (!tmp1762_fu_161253_p2.read().is_01() || !tmp1764_fu_161298_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1762_fu_161253_p2.read()) + sc_biguint<16>(tmp1764_fu_161298_p2.read()));
}

void a0_conv2d_1::thread_tmp1766_fu_161334_p2() {
    tmp1766_fu_161334_p2 = (!tmp1761_fu_161229_p2.read().is_01() || !tmp1765_fu_161316_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1761_fu_161229_p2.read()) + sc_biguint<16>(tmp1765_fu_161316_p2.read()));
}

void a0_conv2d_1::thread_tmp1767_fu_161358_p2() {
    tmp1767_fu_161358_p2 = (!r4esult9_V_60_fu_137322_p4.read().is_01() || !r4esult1_V_61_fu_137667_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_60_fu_137322_p4.read()) + sc_biguint<16>(r4esult1_V_61_fu_137667_p4.read()));
}

void a0_conv2d_1::thread_tmp1768_fu_161382_p2() {
    tmp1768_fu_161382_p2 = (!r4esult2_V_61_fu_137679_p4.read().is_01() || !r4esult3_V_61_fu_137692_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_61_fu_137679_p4.read()) + sc_biguint<16>(r4esult3_V_61_fu_137692_p4.read()));
}

void a0_conv2d_1::thread_tmp1769_fu_161400_p2() {
    tmp1769_fu_161400_p2 = (!tmp1767_fu_161358_p2.read().is_01() || !tmp1768_fu_161382_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1767_fu_161358_p2.read()) + sc_biguint<16>(tmp1768_fu_161382_p2.read()));
}

void a0_conv2d_1::thread_tmp176_fu_169618_p2() {
    tmp176_fu_169618_p2 = (!tmp167_reg_227046.read().is_01() || !tmp175_reg_227051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp167_reg_227046.read()) + sc_biguint<16>(tmp175_reg_227051.read()));
}

void a0_conv2d_1::thread_tmp1770_fu_161424_p2() {
    tmp1770_fu_161424_p2 = (!r4esult4_V_61_fu_137704_p4.read().is_01() || !r4esult5_V_61_fu_137716_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_61_fu_137704_p4.read()) + sc_biguint<16>(r4esult5_V_61_fu_137716_p4.read()));
}

void a0_conv2d_1::thread_tmp1771_fu_161448_p2() {
    tmp1771_fu_161448_p2 = (!r4esult7_V_61_fu_137741_p4.read().is_01() || !r4esult8_V_61_fu_137753_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_61_fu_137741_p4.read()) + sc_biguint<16>(r4esult8_V_61_fu_137753_p4.read()));
}

void a0_conv2d_1::thread_tmp1772_fu_161469_p2() {
    tmp1772_fu_161469_p2 = (!r4esult6_V_61_fu_137729_p4.read().is_01() || !tmp1771_fu_161448_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_61_fu_137729_p4.read()) + sc_biguint<16>(tmp1771_fu_161448_p2.read()));
}

void a0_conv2d_1::thread_tmp1773_fu_161487_p2() {
    tmp1773_fu_161487_p2 = (!tmp1770_fu_161424_p2.read().is_01() || !tmp1772_fu_161469_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1770_fu_161424_p2.read()) + sc_biguint<16>(tmp1772_fu_161469_p2.read()));
}

void a0_conv2d_1::thread_tmp1774_fu_161505_p2() {
    tmp1774_fu_161505_p2 = (!tmp1769_fu_161400_p2.read().is_01() || !tmp1773_fu_161487_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1769_fu_161400_p2.read()) + sc_biguint<16>(tmp1773_fu_161487_p2.read()));
}

void a0_conv2d_1::thread_tmp1775_fu_161523_p2() {
    tmp1775_fu_161523_p2 = (!tmp1766_fu_161334_p2.read().is_01() || !tmp1774_fu_161505_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1766_fu_161334_p2.read()) + sc_biguint<16>(tmp1774_fu_161505_p2.read()));
}

void a0_conv2d_1::thread_tmp1776_fu_161547_p2() {
    tmp1776_fu_161547_p2 = (!r4esult9_V_58_fu_136434_p4.read().is_01() || !r4esult1_V_59_fu_136779_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_58_fu_136434_p4.read()) + sc_biguint<16>(r4esult1_V_59_fu_136779_p4.read()));
}

void a0_conv2d_1::thread_tmp1777_fu_161571_p2() {
    tmp1777_fu_161571_p2 = (!r4esult2_V_59_fu_136791_p4.read().is_01() || !r4esult3_V_59_fu_136804_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_59_fu_136791_p4.read()) + sc_biguint<16>(r4esult3_V_59_fu_136804_p4.read()));
}

void a0_conv2d_1::thread_tmp1778_fu_161589_p2() {
    tmp1778_fu_161589_p2 = (!tmp1776_fu_161547_p2.read().is_01() || !tmp1777_fu_161571_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1776_fu_161547_p2.read()) + sc_biguint<16>(tmp1777_fu_161571_p2.read()));
}

void a0_conv2d_1::thread_tmp1779_fu_161613_p2() {
    tmp1779_fu_161613_p2 = (!r4esult4_V_59_fu_136816_p4.read().is_01() || !r4esult5_V_59_fu_136828_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_59_fu_136816_p4.read()) + sc_biguint<16>(r4esult5_V_59_fu_136828_p4.read()));
}

void a0_conv2d_1::thread_tmp177_fu_169626_p2() {
    tmp177_fu_169626_p2 = (!tmp159_reg_227041.read().is_01() || !tmp176_fu_169618_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp159_reg_227041.read()) + sc_biguint<16>(tmp176_fu_169618_p2.read()));
}

void a0_conv2d_1::thread_tmp1780_fu_161637_p2() {
    tmp1780_fu_161637_p2 = (!r4esult7_V_59_fu_136853_p4.read().is_01() || !r4esult8_V_59_fu_136865_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_59_fu_136853_p4.read()) + sc_biguint<16>(r4esult8_V_59_fu_136865_p4.read()));
}

void a0_conv2d_1::thread_tmp1781_fu_161658_p2() {
    tmp1781_fu_161658_p2 = (!r4esult6_V_59_fu_136841_p4.read().is_01() || !tmp1780_fu_161637_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_59_fu_136841_p4.read()) + sc_biguint<16>(tmp1780_fu_161637_p2.read()));
}

void a0_conv2d_1::thread_tmp1782_fu_161676_p2() {
    tmp1782_fu_161676_p2 = (!tmp1779_fu_161613_p2.read().is_01() || !tmp1781_fu_161658_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1779_fu_161613_p2.read()) + sc_biguint<16>(tmp1781_fu_161658_p2.read()));
}

void a0_conv2d_1::thread_tmp1783_fu_161694_p2() {
    tmp1783_fu_161694_p2 = (!tmp1778_fu_161589_p2.read().is_01() || !tmp1782_fu_161676_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1778_fu_161589_p2.read()) + sc_biguint<16>(tmp1782_fu_161676_p2.read()));
}

void a0_conv2d_1::thread_tmp1784_fu_161718_p2() {
    tmp1784_fu_161718_p2 = (!r4esult9_V_59_fu_136878_p4.read().is_01() || !r4esult1_V_60_fu_137223_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_59_fu_136878_p4.read()) + sc_biguint<16>(r4esult1_V_60_fu_137223_p4.read()));
}

void a0_conv2d_1::thread_tmp1785_fu_161742_p2() {
    tmp1785_fu_161742_p2 = (!r4esult2_V_60_fu_137235_p4.read().is_01() || !r4esult3_V_60_fu_137248_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_60_fu_137235_p4.read()) + sc_biguint<16>(r4esult3_V_60_fu_137248_p4.read()));
}

void a0_conv2d_1::thread_tmp1786_fu_161760_p2() {
    tmp1786_fu_161760_p2 = (!tmp1784_fu_161718_p2.read().is_01() || !tmp1785_fu_161742_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1784_fu_161718_p2.read()) + sc_biguint<16>(tmp1785_fu_161742_p2.read()));
}

void a0_conv2d_1::thread_tmp1787_fu_161784_p2() {
    tmp1787_fu_161784_p2 = (!r4esult4_V_60_fu_137260_p4.read().is_01() || !r4esult5_V_60_fu_137272_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_60_fu_137260_p4.read()) + sc_biguint<16>(r4esult5_V_60_fu_137272_p4.read()));
}

void a0_conv2d_1::thread_tmp1788_fu_161808_p2() {
    tmp1788_fu_161808_p2 = (!r4esult7_V_60_fu_137297_p4.read().is_01() || !r4esult8_V_60_fu_137309_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_60_fu_137297_p4.read()) + sc_biguint<16>(r4esult8_V_60_fu_137309_p4.read()));
}

void a0_conv2d_1::thread_tmp1789_fu_161829_p2() {
    tmp1789_fu_161829_p2 = (!r4esult6_V_60_fu_137285_p4.read().is_01() || !tmp1788_fu_161808_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_60_fu_137285_p4.read()) + sc_biguint<16>(tmp1788_fu_161808_p2.read()));
}

void a0_conv2d_1::thread_tmp178_fu_169640_p2() {
    tmp178_fu_169640_p2 = (!tmp142_fu_169613_p2.read().is_01() || !tmp177_fu_169626_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp142_fu_169613_p2.read()) + sc_biguint<16>(tmp177_fu_169626_p2.read()));
}

void a0_conv2d_1::thread_tmp1790_fu_161847_p2() {
    tmp1790_fu_161847_p2 = (!tmp1787_fu_161784_p2.read().is_01() || !tmp1789_fu_161829_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1787_fu_161784_p2.read()) + sc_biguint<16>(tmp1789_fu_161829_p2.read()));
}

void a0_conv2d_1::thread_tmp1791_fu_161865_p2() {
    tmp1791_fu_161865_p2 = (!tmp1786_fu_161760_p2.read().is_01() || !tmp1790_fu_161847_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1786_fu_161760_p2.read()) + sc_biguint<16>(tmp1790_fu_161847_p2.read()));
}

void a0_conv2d_1::thread_tmp1792_fu_161883_p2() {
    tmp1792_fu_161883_p2 = (!tmp1783_fu_161694_p2.read().is_01() || !tmp1791_fu_161865_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1783_fu_161694_p2.read()) + sc_biguint<16>(tmp1791_fu_161865_p2.read()));
}

void a0_conv2d_1::thread_tmp1793_fu_161901_p2() {
    tmp1793_fu_161901_p2 = (!tmp1775_fu_161523_p2.read().is_01() || !tmp1792_fu_161883_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1775_fu_161523_p2.read()) + sc_biguint<16>(tmp1792_fu_161883_p2.read()));
}

void a0_conv2d_1::thread_tmp1794_fu_161925_p2() {
    tmp1794_fu_161925_p2 = (!r4esult9_V_54_fu_134658_p4.read().is_01() || !r4esult1_V_55_fu_135003_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_54_fu_134658_p4.read()) + sc_biguint<16>(r4esult1_V_55_fu_135003_p4.read()));
}

void a0_conv2d_1::thread_tmp1795_fu_161949_p2() {
    tmp1795_fu_161949_p2 = (!r4esult2_V_55_fu_135015_p4.read().is_01() || !r4esult3_V_55_fu_135028_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_55_fu_135015_p4.read()) + sc_biguint<16>(r4esult3_V_55_fu_135028_p4.read()));
}

void a0_conv2d_1::thread_tmp1796_fu_161967_p2() {
    tmp1796_fu_161967_p2 = (!tmp1794_fu_161925_p2.read().is_01() || !tmp1795_fu_161949_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1794_fu_161925_p2.read()) + sc_biguint<16>(tmp1795_fu_161949_p2.read()));
}

void a0_conv2d_1::thread_tmp1797_fu_161991_p2() {
    tmp1797_fu_161991_p2 = (!r4esult4_V_55_fu_135040_p4.read().is_01() || !r4esult5_V_55_fu_135052_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_55_fu_135040_p4.read()) + sc_biguint<16>(r4esult5_V_55_fu_135052_p4.read()));
}

void a0_conv2d_1::thread_tmp1798_fu_162015_p2() {
    tmp1798_fu_162015_p2 = (!r4esult7_V_55_fu_135077_p4.read().is_01() || !r4esult8_V_55_fu_135089_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_55_fu_135077_p4.read()) + sc_biguint<16>(r4esult8_V_55_fu_135089_p4.read()));
}

void a0_conv2d_1::thread_tmp1799_fu_162036_p2() {
    tmp1799_fu_162036_p2 = (!r4esult6_V_55_fu_135065_p4.read().is_01() || !tmp1798_fu_162015_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_55_fu_135065_p4.read()) + sc_biguint<16>(tmp1798_fu_162015_p2.read()));
}

void a0_conv2d_1::thread_tmp179_fu_169658_p2() {
    tmp179_fu_169658_p2 = (!tmp107_fu_169604_p2.read().is_01() || !tmp178_fu_169640_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp107_fu_169604_p2.read()) + sc_biguint<16>(tmp178_fu_169640_p2.read()));
}

void a0_conv2d_1::thread_tmp1800_fu_162054_p2() {
    tmp1800_fu_162054_p2 = (!tmp1797_fu_161991_p2.read().is_01() || !tmp1799_fu_162036_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1797_fu_161991_p2.read()) + sc_biguint<16>(tmp1799_fu_162036_p2.read()));
}

void a0_conv2d_1::thread_tmp1801_fu_162072_p2() {
    tmp1801_fu_162072_p2 = (!tmp1796_fu_161967_p2.read().is_01() || !tmp1800_fu_162054_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1796_fu_161967_p2.read()) + sc_biguint<16>(tmp1800_fu_162054_p2.read()));
}

void a0_conv2d_1::thread_tmp1802_fu_162096_p2() {
    tmp1802_fu_162096_p2 = (!r4esult9_V_55_fu_135102_p4.read().is_01() || !r4esult1_V_56_fu_135447_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_55_fu_135102_p4.read()) + sc_biguint<16>(r4esult1_V_56_fu_135447_p4.read()));
}

void a0_conv2d_1::thread_tmp1803_fu_162120_p2() {
    tmp1803_fu_162120_p2 = (!r4esult2_V_56_fu_135459_p4.read().is_01() || !r4esult3_V_56_fu_135472_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_56_fu_135459_p4.read()) + sc_biguint<16>(r4esult3_V_56_fu_135472_p4.read()));
}

void a0_conv2d_1::thread_tmp1804_fu_162138_p2() {
    tmp1804_fu_162138_p2 = (!tmp1802_fu_162096_p2.read().is_01() || !tmp1803_fu_162120_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1802_fu_162096_p2.read()) + sc_biguint<16>(tmp1803_fu_162120_p2.read()));
}

void a0_conv2d_1::thread_tmp1805_fu_162162_p2() {
    tmp1805_fu_162162_p2 = (!r4esult4_V_56_fu_135484_p4.read().is_01() || !r4esult5_V_56_fu_135496_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_56_fu_135484_p4.read()) + sc_biguint<16>(r4esult5_V_56_fu_135496_p4.read()));
}

void a0_conv2d_1::thread_tmp1806_fu_162186_p2() {
    tmp1806_fu_162186_p2 = (!r4esult7_V_56_fu_135521_p4.read().is_01() || !r4esult8_V_56_fu_135533_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_56_fu_135521_p4.read()) + sc_biguint<16>(r4esult8_V_56_fu_135533_p4.read()));
}

void a0_conv2d_1::thread_tmp1807_fu_162207_p2() {
    tmp1807_fu_162207_p2 = (!r4esult6_V_56_fu_135509_p4.read().is_01() || !tmp1806_fu_162186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_56_fu_135509_p4.read()) + sc_biguint<16>(tmp1806_fu_162186_p2.read()));
}

void a0_conv2d_1::thread_tmp1808_fu_162225_p2() {
    tmp1808_fu_162225_p2 = (!tmp1805_fu_162162_p2.read().is_01() || !tmp1807_fu_162207_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1805_fu_162162_p2.read()) + sc_biguint<16>(tmp1807_fu_162207_p2.read()));
}

void a0_conv2d_1::thread_tmp1809_fu_162243_p2() {
    tmp1809_fu_162243_p2 = (!tmp1804_fu_162138_p2.read().is_01() || !tmp1808_fu_162225_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1804_fu_162138_p2.read()) + sc_biguint<16>(tmp1808_fu_162225_p2.read()));
}

void a0_conv2d_1::thread_tmp180_fu_140805_p2() {
    tmp180_fu_140805_p2 = (!result9_V_30_fu_128493_p4.read().is_01() || !result1_V_31_reg_217106.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_30_fu_128493_p4.read()) + sc_biguint<16>(result1_V_31_reg_217106.read()));
}

void a0_conv2d_1::thread_tmp1810_fu_162261_p2() {
    tmp1810_fu_162261_p2 = (!tmp1801_fu_162072_p2.read().is_01() || !tmp1809_fu_162243_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1801_fu_162072_p2.read()) + sc_biguint<16>(tmp1809_fu_162243_p2.read()));
}

void a0_conv2d_1::thread_tmp1811_fu_162285_p2() {
    tmp1811_fu_162285_p2 = (!r4esult9_V_56_fu_135546_p4.read().is_01() || !r4esult1_V_57_fu_135891_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_56_fu_135546_p4.read()) + sc_biguint<16>(r4esult1_V_57_fu_135891_p4.read()));
}

void a0_conv2d_1::thread_tmp1812_fu_162309_p2() {
    tmp1812_fu_162309_p2 = (!r4esult2_V_57_fu_135903_p4.read().is_01() || !r4esult3_V_57_fu_135916_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_57_fu_135903_p4.read()) + sc_biguint<16>(r4esult3_V_57_fu_135916_p4.read()));
}

void a0_conv2d_1::thread_tmp1813_fu_162327_p2() {
    tmp1813_fu_162327_p2 = (!tmp1811_fu_162285_p2.read().is_01() || !tmp1812_fu_162309_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1811_fu_162285_p2.read()) + sc_biguint<16>(tmp1812_fu_162309_p2.read()));
}

void a0_conv2d_1::thread_tmp1814_fu_162351_p2() {
    tmp1814_fu_162351_p2 = (!r4esult4_V_57_fu_135928_p4.read().is_01() || !r4esult5_V_57_fu_135940_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_57_fu_135928_p4.read()) + sc_biguint<16>(r4esult5_V_57_fu_135940_p4.read()));
}

void a0_conv2d_1::thread_tmp1815_fu_162375_p2() {
    tmp1815_fu_162375_p2 = (!r4esult7_V_57_fu_135965_p4.read().is_01() || !r4esult8_V_57_fu_135977_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_57_fu_135965_p4.read()) + sc_biguint<16>(r4esult8_V_57_fu_135977_p4.read()));
}

void a0_conv2d_1::thread_tmp1816_fu_162396_p2() {
    tmp1816_fu_162396_p2 = (!r4esult6_V_57_fu_135953_p4.read().is_01() || !tmp1815_fu_162375_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_57_fu_135953_p4.read()) + sc_biguint<16>(tmp1815_fu_162375_p2.read()));
}

void a0_conv2d_1::thread_tmp1817_fu_162414_p2() {
    tmp1817_fu_162414_p2 = (!tmp1814_fu_162351_p2.read().is_01() || !tmp1816_fu_162396_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1814_fu_162351_p2.read()) + sc_biguint<16>(tmp1816_fu_162396_p2.read()));
}

void a0_conv2d_1::thread_tmp1818_fu_162432_p2() {
    tmp1818_fu_162432_p2 = (!tmp1813_fu_162327_p2.read().is_01() || !tmp1817_fu_162414_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1813_fu_162327_p2.read()) + sc_biguint<16>(tmp1817_fu_162414_p2.read()));
}

void a0_conv2d_1::thread_tmp1819_fu_162456_p2() {
    tmp1819_fu_162456_p2 = (!r4esult9_V_57_fu_135990_p4.read().is_01() || !r4esult1_V_58_fu_136335_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_57_fu_135990_p4.read()) + sc_biguint<16>(r4esult1_V_58_fu_136335_p4.read()));
}

void a0_conv2d_1::thread_tmp181_fu_140819_p2() {
    tmp181_fu_140819_p2 = (!result2_V_31_reg_217111.read().is_01() || !result3_V_31_fu_128623_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_31_reg_217111.read()) + sc_biguint<16>(result3_V_31_fu_128623_p4.read()));
}

void a0_conv2d_1::thread_tmp1820_fu_162480_p2() {
    tmp1820_fu_162480_p2 = (!r4esult2_V_58_fu_136347_p4.read().is_01() || !r4esult3_V_58_fu_136360_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_58_fu_136347_p4.read()) + sc_biguint<16>(r4esult3_V_58_fu_136360_p4.read()));
}

void a0_conv2d_1::thread_tmp1821_fu_162498_p2() {
    tmp1821_fu_162498_p2 = (!tmp1819_fu_162456_p2.read().is_01() || !tmp1820_fu_162480_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1819_fu_162456_p2.read()) + sc_biguint<16>(tmp1820_fu_162480_p2.read()));
}

void a0_conv2d_1::thread_tmp1822_fu_162522_p2() {
    tmp1822_fu_162522_p2 = (!r4esult4_V_58_fu_136372_p4.read().is_01() || !r4esult5_V_58_fu_136384_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_58_fu_136372_p4.read()) + sc_biguint<16>(r4esult5_V_58_fu_136384_p4.read()));
}

void a0_conv2d_1::thread_tmp1823_fu_162546_p2() {
    tmp1823_fu_162546_p2 = (!r4esult7_V_58_fu_136409_p4.read().is_01() || !r4esult8_V_58_fu_136421_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_58_fu_136409_p4.read()) + sc_biguint<16>(r4esult8_V_58_fu_136421_p4.read()));
}

void a0_conv2d_1::thread_tmp1824_fu_162567_p2() {
    tmp1824_fu_162567_p2 = (!r4esult6_V_58_fu_136397_p4.read().is_01() || !tmp1823_fu_162546_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_58_fu_136397_p4.read()) + sc_biguint<16>(tmp1823_fu_162546_p2.read()));
}

void a0_conv2d_1::thread_tmp1825_fu_162585_p2() {
    tmp1825_fu_162585_p2 = (!tmp1822_fu_162522_p2.read().is_01() || !tmp1824_fu_162567_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1822_fu_162522_p2.read()) + sc_biguint<16>(tmp1824_fu_162567_p2.read()));
}

void a0_conv2d_1::thread_tmp1826_fu_162603_p2() {
    tmp1826_fu_162603_p2 = (!tmp1821_fu_162498_p2.read().is_01() || !tmp1825_fu_162585_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1821_fu_162498_p2.read()) + sc_biguint<16>(tmp1825_fu_162585_p2.read()));
}

void a0_conv2d_1::thread_tmp1827_fu_162621_p2() {
    tmp1827_fu_162621_p2 = (!tmp1818_fu_162432_p2.read().is_01() || !tmp1826_fu_162603_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1818_fu_162432_p2.read()) + sc_biguint<16>(tmp1826_fu_162603_p2.read()));
}

void a0_conv2d_1::thread_tmp1828_fu_170635_p2() {
    tmp1828_fu_170635_p2 = (!tmp1810_reg_228086.read().is_01() || !tmp1827_reg_228091.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1810_reg_228086.read()) + sc_biguint<16>(tmp1827_reg_228091.read()));
}

void a0_conv2d_1::thread_tmp1829_fu_170648_p2() {
    tmp1829_fu_170648_p2 = (!tmp1793_reg_228071.read().is_01() || !tmp1828_fu_170635_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1793_reg_228071.read()) + sc_biguint<16>(tmp1828_fu_170635_p2.read()));
}

void a0_conv2d_1::thread_tmp182_fu_140834_p2() {
    tmp182_fu_140834_p2 = (!tmp180_fu_140805_p2.read().is_01() || !tmp181_fu_140819_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp180_fu_140805_p2.read()) + sc_biguint<16>(tmp181_fu_140819_p2.read()));
}

void a0_conv2d_1::thread_tmp1830_fu_162651_p2() {
    tmp1830_fu_162651_p2 = (!r4esult9_V_46_fu_131106_p4.read().is_01() || !r4esult1_V_47_fu_131451_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_46_fu_131106_p4.read()) + sc_biguint<16>(r4esult1_V_47_fu_131451_p4.read()));
}

void a0_conv2d_1::thread_tmp1831_fu_162675_p2() {
    tmp1831_fu_162675_p2 = (!r4esult2_V_47_fu_131463_p4.read().is_01() || !r4esult3_V_47_fu_131476_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_47_fu_131463_p4.read()) + sc_biguint<16>(r4esult3_V_47_fu_131476_p4.read()));
}

void a0_conv2d_1::thread_tmp1832_fu_162693_p2() {
    tmp1832_fu_162693_p2 = (!tmp1830_fu_162651_p2.read().is_01() || !tmp1831_fu_162675_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1830_fu_162651_p2.read()) + sc_biguint<16>(tmp1831_fu_162675_p2.read()));
}

void a0_conv2d_1::thread_tmp1833_fu_162717_p2() {
    tmp1833_fu_162717_p2 = (!r4esult4_V_47_fu_131488_p4.read().is_01() || !r4esult5_V_47_fu_131500_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_47_fu_131488_p4.read()) + sc_biguint<16>(r4esult5_V_47_fu_131500_p4.read()));
}

void a0_conv2d_1::thread_tmp1834_fu_162741_p2() {
    tmp1834_fu_162741_p2 = (!r4esult7_V_47_fu_131525_p4.read().is_01() || !r4esult8_V_47_fu_131537_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_47_fu_131525_p4.read()) + sc_biguint<16>(r4esult8_V_47_fu_131537_p4.read()));
}

void a0_conv2d_1::thread_tmp1835_fu_162762_p2() {
    tmp1835_fu_162762_p2 = (!r4esult6_V_47_fu_131513_p4.read().is_01() || !tmp1834_fu_162741_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_47_fu_131513_p4.read()) + sc_biguint<16>(tmp1834_fu_162741_p2.read()));
}

void a0_conv2d_1::thread_tmp1836_fu_162780_p2() {
    tmp1836_fu_162780_p2 = (!tmp1833_fu_162717_p2.read().is_01() || !tmp1835_fu_162762_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1833_fu_162717_p2.read()) + sc_biguint<16>(tmp1835_fu_162762_p2.read()));
}

void a0_conv2d_1::thread_tmp1837_fu_162798_p2() {
    tmp1837_fu_162798_p2 = (!tmp1832_fu_162693_p2.read().is_01() || !tmp1836_fu_162780_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1832_fu_162693_p2.read()) + sc_biguint<16>(tmp1836_fu_162780_p2.read()));
}

void a0_conv2d_1::thread_tmp1838_fu_162822_p2() {
    tmp1838_fu_162822_p2 = (!r4esult9_V_47_fu_131550_p4.read().is_01() || !r4esult1_V_48_fu_131895_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_47_fu_131550_p4.read()) + sc_biguint<16>(r4esult1_V_48_fu_131895_p4.read()));
}

void a0_conv2d_1::thread_tmp1839_fu_162846_p2() {
    tmp1839_fu_162846_p2 = (!r4esult2_V_48_fu_131907_p4.read().is_01() || !r4esult3_V_48_fu_131920_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_48_fu_131907_p4.read()) + sc_biguint<16>(r4esult3_V_48_fu_131920_p4.read()));
}

void a0_conv2d_1::thread_tmp183_fu_105039_p2() {
    tmp183_fu_105039_p2 = (!result4_V_31_fu_97856_p4.read().is_01() || !result5_V_31_fu_97869_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_31_fu_97856_p4.read()) + sc_biguint<16>(result5_V_31_fu_97869_p4.read()));
}

void a0_conv2d_1::thread_tmp1840_fu_162864_p2() {
    tmp1840_fu_162864_p2 = (!tmp1838_fu_162822_p2.read().is_01() || !tmp1839_fu_162846_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1838_fu_162822_p2.read()) + sc_biguint<16>(tmp1839_fu_162846_p2.read()));
}

void a0_conv2d_1::thread_tmp1841_fu_162888_p2() {
    tmp1841_fu_162888_p2 = (!r4esult4_V_48_fu_131932_p4.read().is_01() || !r4esult5_V_48_fu_131944_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_48_fu_131932_p4.read()) + sc_biguint<16>(r4esult5_V_48_fu_131944_p4.read()));
}

void a0_conv2d_1::thread_tmp1842_fu_162912_p2() {
    tmp1842_fu_162912_p2 = (!r4esult7_V_48_fu_131969_p4.read().is_01() || !r4esult8_V_48_fu_131981_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_48_fu_131969_p4.read()) + sc_biguint<16>(r4esult8_V_48_fu_131981_p4.read()));
}

void a0_conv2d_1::thread_tmp1843_fu_162933_p2() {
    tmp1843_fu_162933_p2 = (!r4esult6_V_48_fu_131957_p4.read().is_01() || !tmp1842_fu_162912_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_48_fu_131957_p4.read()) + sc_biguint<16>(tmp1842_fu_162912_p2.read()));
}

void a0_conv2d_1::thread_tmp1844_fu_162951_p2() {
    tmp1844_fu_162951_p2 = (!tmp1841_fu_162888_p2.read().is_01() || !tmp1843_fu_162933_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1841_fu_162888_p2.read()) + sc_biguint<16>(tmp1843_fu_162933_p2.read()));
}

void a0_conv2d_1::thread_tmp1845_fu_162969_p2() {
    tmp1845_fu_162969_p2 = (!tmp1840_fu_162864_p2.read().is_01() || !tmp1844_fu_162951_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1840_fu_162864_p2.read()) + sc_biguint<16>(tmp1844_fu_162951_p2.read()));
}

void a0_conv2d_1::thread_tmp1846_fu_162987_p2() {
    tmp1846_fu_162987_p2 = (!tmp1837_fu_162798_p2.read().is_01() || !tmp1845_fu_162969_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1837_fu_162798_p2.read()) + sc_biguint<16>(tmp1845_fu_162969_p2.read()));
}

void a0_conv2d_1::thread_tmp1847_fu_163011_p2() {
    tmp1847_fu_163011_p2 = (!r4esult9_V_48_fu_131994_p4.read().is_01() || !r4esult1_V_49_fu_132339_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_48_fu_131994_p4.read()) + sc_biguint<16>(r4esult1_V_49_fu_132339_p4.read()));
}

void a0_conv2d_1::thread_tmp1848_fu_163035_p2() {
    tmp1848_fu_163035_p2 = (!r4esult2_V_49_fu_132351_p4.read().is_01() || !r4esult3_V_49_fu_132364_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_49_fu_132351_p4.read()) + sc_biguint<16>(r4esult3_V_49_fu_132364_p4.read()));
}

void a0_conv2d_1::thread_tmp1849_fu_163053_p2() {
    tmp1849_fu_163053_p2 = (!tmp1847_fu_163011_p2.read().is_01() || !tmp1848_fu_163035_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1847_fu_163011_p2.read()) + sc_biguint<16>(tmp1848_fu_163035_p2.read()));
}

void a0_conv2d_1::thread_tmp184_fu_140840_p2() {
    tmp184_fu_140840_p2 = (!result7_V_31_reg_217126.read().is_01() || !result8_V_31_reg_217131.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_31_reg_217126.read()) + sc_biguint<16>(result8_V_31_reg_217131.read()));
}

void a0_conv2d_1::thread_tmp1850_fu_163077_p2() {
    tmp1850_fu_163077_p2 = (!r4esult4_V_49_fu_132376_p4.read().is_01() || !r4esult5_V_49_fu_132388_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_49_fu_132376_p4.read()) + sc_biguint<16>(r4esult5_V_49_fu_132388_p4.read()));
}

void a0_conv2d_1::thread_tmp1851_fu_163101_p2() {
    tmp1851_fu_163101_p2 = (!r4esult7_V_49_fu_132413_p4.read().is_01() || !r4esult8_V_49_fu_132425_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_49_fu_132413_p4.read()) + sc_biguint<16>(r4esult8_V_49_fu_132425_p4.read()));
}

void a0_conv2d_1::thread_tmp1852_fu_163122_p2() {
    tmp1852_fu_163122_p2 = (!r4esult6_V_49_fu_132401_p4.read().is_01() || !tmp1851_fu_163101_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_49_fu_132401_p4.read()) + sc_biguint<16>(tmp1851_fu_163101_p2.read()));
}

void a0_conv2d_1::thread_tmp1853_fu_163140_p2() {
    tmp1853_fu_163140_p2 = (!tmp1850_fu_163077_p2.read().is_01() || !tmp1852_fu_163122_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1850_fu_163077_p2.read()) + sc_biguint<16>(tmp1852_fu_163122_p2.read()));
}

void a0_conv2d_1::thread_tmp1854_fu_163158_p2() {
    tmp1854_fu_163158_p2 = (!tmp1849_fu_163053_p2.read().is_01() || !tmp1853_fu_163140_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1849_fu_163053_p2.read()) + sc_biguint<16>(tmp1853_fu_163140_p2.read()));
}

void a0_conv2d_1::thread_tmp1855_fu_163182_p2() {
    tmp1855_fu_163182_p2 = (!r4esult9_V_49_fu_132438_p4.read().is_01() || !r4esult1_V_50_fu_132783_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_49_fu_132438_p4.read()) + sc_biguint<16>(r4esult1_V_50_fu_132783_p4.read()));
}

void a0_conv2d_1::thread_tmp1856_fu_163206_p2() {
    tmp1856_fu_163206_p2 = (!r4esult2_V_50_fu_132795_p4.read().is_01() || !r4esult3_V_50_fu_132808_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_50_fu_132795_p4.read()) + sc_biguint<16>(r4esult3_V_50_fu_132808_p4.read()));
}

void a0_conv2d_1::thread_tmp1857_fu_163224_p2() {
    tmp1857_fu_163224_p2 = (!tmp1855_fu_163182_p2.read().is_01() || !tmp1856_fu_163206_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1855_fu_163182_p2.read()) + sc_biguint<16>(tmp1856_fu_163206_p2.read()));
}

void a0_conv2d_1::thread_tmp1858_fu_163248_p2() {
    tmp1858_fu_163248_p2 = (!r4esult4_V_50_fu_132820_p4.read().is_01() || !r4esult5_V_50_fu_132832_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_50_fu_132820_p4.read()) + sc_biguint<16>(r4esult5_V_50_fu_132832_p4.read()));
}

void a0_conv2d_1::thread_tmp1859_fu_163272_p2() {
    tmp1859_fu_163272_p2 = (!r4esult7_V_50_fu_132857_p4.read().is_01() || !r4esult8_V_50_fu_132869_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_50_fu_132857_p4.read()) + sc_biguint<16>(r4esult8_V_50_fu_132869_p4.read()));
}

void a0_conv2d_1::thread_tmp185_fu_140857_p2() {
    tmp185_fu_140857_p2 = (!result6_V_31_fu_128636_p4.read().is_01() || !tmp184_fu_140840_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_31_fu_128636_p4.read()) + sc_biguint<16>(tmp184_fu_140840_p2.read()));
}

void a0_conv2d_1::thread_tmp1860_fu_163293_p2() {
    tmp1860_fu_163293_p2 = (!r4esult6_V_50_fu_132845_p4.read().is_01() || !tmp1859_fu_163272_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_50_fu_132845_p4.read()) + sc_biguint<16>(tmp1859_fu_163272_p2.read()));
}

void a0_conv2d_1::thread_tmp1861_fu_163311_p2() {
    tmp1861_fu_163311_p2 = (!tmp1858_fu_163248_p2.read().is_01() || !tmp1860_fu_163293_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1858_fu_163248_p2.read()) + sc_biguint<16>(tmp1860_fu_163293_p2.read()));
}

void a0_conv2d_1::thread_tmp1862_fu_163329_p2() {
    tmp1862_fu_163329_p2 = (!tmp1857_fu_163224_p2.read().is_01() || !tmp1861_fu_163311_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1857_fu_163224_p2.read()) + sc_biguint<16>(tmp1861_fu_163311_p2.read()));
}

void a0_conv2d_1::thread_tmp1863_fu_170653_p2() {
    tmp1863_fu_170653_p2 = (!tmp1854_reg_228106.read().is_01() || !tmp1862_reg_228111.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1854_reg_228106.read()) + sc_biguint<16>(tmp1862_reg_228111.read()));
}

void a0_conv2d_1::thread_tmp1864_fu_170657_p2() {
    tmp1864_fu_170657_p2 = (!tmp1846_reg_228101.read().is_01() || !tmp1863_fu_170653_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1846_reg_228101.read()) + sc_biguint<16>(tmp1863_fu_170653_p2.read()));
}

void a0_conv2d_1::thread_tmp1865_fu_163377_p2() {
    tmp1865_fu_163377_p2 = (!r4esult9_V_50_fu_132882_p4.read().is_01() || !r4esult1_V_51_fu_133227_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_50_fu_132882_p4.read()) + sc_biguint<16>(r4esult1_V_51_fu_133227_p4.read()));
}

void a0_conv2d_1::thread_tmp1866_fu_163401_p2() {
    tmp1866_fu_163401_p2 = (!r4esult2_V_51_fu_133239_p4.read().is_01() || !r4esult3_V_51_fu_133252_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_51_fu_133239_p4.read()) + sc_biguint<16>(r4esult3_V_51_fu_133252_p4.read()));
}

void a0_conv2d_1::thread_tmp1867_fu_163419_p2() {
    tmp1867_fu_163419_p2 = (!tmp1865_fu_163377_p2.read().is_01() || !tmp1866_fu_163401_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1865_fu_163377_p2.read()) + sc_biguint<16>(tmp1866_fu_163401_p2.read()));
}

void a0_conv2d_1::thread_tmp1868_fu_163443_p2() {
    tmp1868_fu_163443_p2 = (!r4esult4_V_51_fu_133264_p4.read().is_01() || !r4esult5_V_51_fu_133276_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_51_fu_133264_p4.read()) + sc_biguint<16>(r4esult5_V_51_fu_133276_p4.read()));
}

void a0_conv2d_1::thread_tmp1869_fu_163467_p2() {
    tmp1869_fu_163467_p2 = (!r4esult7_V_51_fu_133301_p4.read().is_01() || !r4esult8_V_51_fu_133313_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_51_fu_133301_p4.read()) + sc_biguint<16>(r4esult8_V_51_fu_133313_p4.read()));
}

void a0_conv2d_1::thread_tmp186_fu_140873_p2() {
    tmp186_fu_140873_p2 = (!tmp183_reg_221871.read().is_01() || !tmp185_fu_140857_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp183_reg_221871.read()) + sc_biguint<16>(tmp185_fu_140857_p2.read()));
}

void a0_conv2d_1::thread_tmp1870_fu_163488_p2() {
    tmp1870_fu_163488_p2 = (!r4esult6_V_51_fu_133289_p4.read().is_01() || !tmp1869_fu_163467_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_51_fu_133289_p4.read()) + sc_biguint<16>(tmp1869_fu_163467_p2.read()));
}

void a0_conv2d_1::thread_tmp1871_fu_163506_p2() {
    tmp1871_fu_163506_p2 = (!tmp1868_fu_163443_p2.read().is_01() || !tmp1870_fu_163488_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1868_fu_163443_p2.read()) + sc_biguint<16>(tmp1870_fu_163488_p2.read()));
}

void a0_conv2d_1::thread_tmp1872_fu_163524_p2() {
    tmp1872_fu_163524_p2 = (!tmp1867_fu_163419_p2.read().is_01() || !tmp1871_fu_163506_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1867_fu_163419_p2.read()) + sc_biguint<16>(tmp1871_fu_163506_p2.read()));
}

void a0_conv2d_1::thread_tmp1873_fu_163548_p2() {
    tmp1873_fu_163548_p2 = (!r4esult9_V_51_fu_133326_p4.read().is_01() || !r4esult1_V_52_fu_133671_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_51_fu_133326_p4.read()) + sc_biguint<16>(r4esult1_V_52_fu_133671_p4.read()));
}

void a0_conv2d_1::thread_tmp1874_fu_163572_p2() {
    tmp1874_fu_163572_p2 = (!r4esult2_V_52_fu_133683_p4.read().is_01() || !r4esult3_V_52_fu_133696_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_52_fu_133683_p4.read()) + sc_biguint<16>(r4esult3_V_52_fu_133696_p4.read()));
}

void a0_conv2d_1::thread_tmp1875_fu_163590_p2() {
    tmp1875_fu_163590_p2 = (!tmp1873_fu_163548_p2.read().is_01() || !tmp1874_fu_163572_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1873_fu_163548_p2.read()) + sc_biguint<16>(tmp1874_fu_163572_p2.read()));
}

void a0_conv2d_1::thread_tmp1876_fu_163614_p2() {
    tmp1876_fu_163614_p2 = (!r4esult4_V_52_fu_133708_p4.read().is_01() || !r4esult5_V_52_fu_133720_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_52_fu_133708_p4.read()) + sc_biguint<16>(r4esult5_V_52_fu_133720_p4.read()));
}

void a0_conv2d_1::thread_tmp1877_fu_163638_p2() {
    tmp1877_fu_163638_p2 = (!r4esult7_V_52_fu_133745_p4.read().is_01() || !r4esult8_V_52_fu_133757_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_52_fu_133745_p4.read()) + sc_biguint<16>(r4esult8_V_52_fu_133757_p4.read()));
}

void a0_conv2d_1::thread_tmp1878_fu_163659_p2() {
    tmp1878_fu_163659_p2 = (!r4esult6_V_52_fu_133733_p4.read().is_01() || !tmp1877_fu_163638_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_52_fu_133733_p4.read()) + sc_biguint<16>(tmp1877_fu_163638_p2.read()));
}

void a0_conv2d_1::thread_tmp1879_fu_163677_p2() {
    tmp1879_fu_163677_p2 = (!tmp1876_fu_163614_p2.read().is_01() || !tmp1878_fu_163659_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1876_fu_163614_p2.read()) + sc_biguint<16>(tmp1878_fu_163659_p2.read()));
}

void a0_conv2d_1::thread_tmp187_fu_140890_p2() {
    tmp187_fu_140890_p2 = (!tmp182_fu_140834_p2.read().is_01() || !tmp186_fu_140873_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp182_fu_140834_p2.read()) + sc_biguint<16>(tmp186_fu_140873_p2.read()));
}

void a0_conv2d_1::thread_tmp1880_fu_163695_p2() {
    tmp1880_fu_163695_p2 = (!tmp1875_fu_163590_p2.read().is_01() || !tmp1879_fu_163677_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1875_fu_163590_p2.read()) + sc_biguint<16>(tmp1879_fu_163677_p2.read()));
}

void a0_conv2d_1::thread_tmp1881_fu_163713_p2() {
    tmp1881_fu_163713_p2 = (!tmp1872_fu_163524_p2.read().is_01() || !tmp1880_fu_163695_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1872_fu_163524_p2.read()) + sc_biguint<16>(tmp1880_fu_163695_p2.read()));
}

void a0_conv2d_1::thread_tmp1882_fu_163737_p2() {
    tmp1882_fu_163737_p2 = (!r4esult9_V_52_fu_133770_p4.read().is_01() || !r4esult1_V_53_fu_134115_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_52_fu_133770_p4.read()) + sc_biguint<16>(r4esult1_V_53_fu_134115_p4.read()));
}

void a0_conv2d_1::thread_tmp1883_fu_163761_p2() {
    tmp1883_fu_163761_p2 = (!r4esult2_V_53_fu_134127_p4.read().is_01() || !r4esult3_V_53_fu_134140_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_53_fu_134127_p4.read()) + sc_biguint<16>(r4esult3_V_53_fu_134140_p4.read()));
}

void a0_conv2d_1::thread_tmp1884_fu_163779_p2() {
    tmp1884_fu_163779_p2 = (!tmp1882_fu_163737_p2.read().is_01() || !tmp1883_fu_163761_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1882_fu_163737_p2.read()) + sc_biguint<16>(tmp1883_fu_163761_p2.read()));
}

void a0_conv2d_1::thread_tmp1885_fu_163803_p2() {
    tmp1885_fu_163803_p2 = (!r4esult4_V_53_fu_134152_p4.read().is_01() || !r4esult5_V_53_fu_134164_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_53_fu_134152_p4.read()) + sc_biguint<16>(r4esult5_V_53_fu_134164_p4.read()));
}

void a0_conv2d_1::thread_tmp1886_fu_163827_p2() {
    tmp1886_fu_163827_p2 = (!r4esult7_V_53_fu_134189_p4.read().is_01() || !r4esult8_V_53_fu_134201_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_53_fu_134189_p4.read()) + sc_biguint<16>(r4esult8_V_53_fu_134201_p4.read()));
}

void a0_conv2d_1::thread_tmp1887_fu_163848_p2() {
    tmp1887_fu_163848_p2 = (!r4esult6_V_53_fu_134177_p4.read().is_01() || !tmp1886_fu_163827_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_53_fu_134177_p4.read()) + sc_biguint<16>(tmp1886_fu_163827_p2.read()));
}

void a0_conv2d_1::thread_tmp1888_fu_163866_p2() {
    tmp1888_fu_163866_p2 = (!tmp1885_fu_163803_p2.read().is_01() || !tmp1887_fu_163848_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1885_fu_163803_p2.read()) + sc_biguint<16>(tmp1887_fu_163848_p2.read()));
}

void a0_conv2d_1::thread_tmp1889_fu_163884_p2() {
    tmp1889_fu_163884_p2 = (!tmp1884_fu_163779_p2.read().is_01() || !tmp1888_fu_163866_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1884_fu_163779_p2.read()) + sc_biguint<16>(tmp1888_fu_163866_p2.read()));
}

void a0_conv2d_1::thread_tmp188_fu_140905_p2() {
    tmp188_fu_140905_p2 = (!result9_V_31_fu_128649_p4.read().is_01() || !result1_V_32_reg_217246.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_31_fu_128649_p4.read()) + sc_biguint<16>(result1_V_32_reg_217246.read()));
}

void a0_conv2d_1::thread_tmp1890_fu_163908_p2() {
    tmp1890_fu_163908_p2 = (!r4esult9_V_53_fu_134214_p4.read().is_01() || !r4esult1_V_54_fu_134559_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_53_fu_134214_p4.read()) + sc_biguint<16>(r4esult1_V_54_fu_134559_p4.read()));
}

void a0_conv2d_1::thread_tmp1891_fu_163932_p2() {
    tmp1891_fu_163932_p2 = (!r4esult2_V_54_fu_134571_p4.read().is_01() || !r4esult3_V_54_fu_134584_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_54_fu_134571_p4.read()) + sc_biguint<16>(r4esult3_V_54_fu_134584_p4.read()));
}

void a0_conv2d_1::thread_tmp1892_fu_163950_p2() {
    tmp1892_fu_163950_p2 = (!tmp1890_fu_163908_p2.read().is_01() || !tmp1891_fu_163932_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1890_fu_163908_p2.read()) + sc_biguint<16>(tmp1891_fu_163932_p2.read()));
}

void a0_conv2d_1::thread_tmp1893_fu_163974_p2() {
    tmp1893_fu_163974_p2 = (!r4esult4_V_54_fu_134596_p4.read().is_01() || !r4esult5_V_54_fu_134608_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_54_fu_134596_p4.read()) + sc_biguint<16>(r4esult5_V_54_fu_134608_p4.read()));
}

void a0_conv2d_1::thread_tmp1894_fu_163998_p2() {
    tmp1894_fu_163998_p2 = (!r4esult7_V_54_fu_134633_p4.read().is_01() || !r4esult8_V_54_fu_134645_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_54_fu_134633_p4.read()) + sc_biguint<16>(r4esult8_V_54_fu_134645_p4.read()));
}

void a0_conv2d_1::thread_tmp1895_fu_164019_p2() {
    tmp1895_fu_164019_p2 = (!r4esult6_V_54_fu_134621_p4.read().is_01() || !tmp1894_fu_163998_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_54_fu_134621_p4.read()) + sc_biguint<16>(tmp1894_fu_163998_p2.read()));
}

void a0_conv2d_1::thread_tmp1896_fu_164037_p2() {
    tmp1896_fu_164037_p2 = (!tmp1893_fu_163974_p2.read().is_01() || !tmp1895_fu_164019_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1893_fu_163974_p2.read()) + sc_biguint<16>(tmp1895_fu_164019_p2.read()));
}

void a0_conv2d_1::thread_tmp1897_fu_164055_p2() {
    tmp1897_fu_164055_p2 = (!tmp1892_fu_163950_p2.read().is_01() || !tmp1896_fu_164037_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1892_fu_163950_p2.read()) + sc_biguint<16>(tmp1896_fu_164037_p2.read()));
}

void a0_conv2d_1::thread_tmp1898_fu_170662_p2() {
    tmp1898_fu_170662_p2 = (!tmp1889_reg_228141.read().is_01() || !tmp1897_reg_228146.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1889_reg_228141.read()) + sc_biguint<16>(tmp1897_reg_228146.read()));
}

void a0_conv2d_1::thread_tmp1899_fu_170670_p2() {
    tmp1899_fu_170670_p2 = (!tmp1881_reg_228136.read().is_01() || !tmp1898_fu_170662_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1881_reg_228136.read()) + sc_biguint<16>(tmp1898_fu_170662_p2.read()));
}

void a0_conv2d_1::thread_tmp189_fu_140919_p2() {
    tmp189_fu_140919_p2 = (!result2_V_32_reg_217251.read().is_01() || !result3_V_32_fu_128779_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_32_reg_217251.read()) + sc_biguint<16>(result3_V_32_fu_128779_p4.read()));
}

void a0_conv2d_1::thread_tmp18_fu_69950_p2() {
    tmp18_fu_69950_p2 = (!ap_const_lv8_42.is_01() || !tmp_23_cast1_fu_69928_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_42) + sc_biguint<8>(tmp_23_cast1_fu_69928_p1.read()));
}

void a0_conv2d_1::thread_tmp1900_fu_170684_p2() {
    tmp1900_fu_170684_p2 = (!tmp1864_fu_170657_p2.read().is_01() || !tmp1899_fu_170670_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1864_fu_170657_p2.read()) + sc_biguint<16>(tmp1899_fu_170670_p2.read()));
}

void a0_conv2d_1::thread_tmp1901_fu_170702_p2() {
    tmp1901_fu_170702_p2 = (!tmp1829_fu_170648_p2.read().is_01() || !tmp1900_fu_170684_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1829_fu_170648_p2.read()) + sc_biguint<16>(tmp1900_fu_170684_p2.read()));
}

void a0_conv2d_1::thread_tmp1902_fu_164088_p2() {
    tmp1902_fu_164088_p2 = (!r4esult9_V_30_fu_128610_p4.read().is_01() || !r4esult1_V_31_reg_217211.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_30_fu_128610_p4.read()) + sc_biguint<16>(r4esult1_V_31_reg_217211.read()));
}

void a0_conv2d_1::thread_tmp1903_fu_164102_p2() {
    tmp1903_fu_164102_p2 = (!r4esult2_V_31_reg_217216.read().is_01() || !r4esult3_V_31_fu_128740_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_31_reg_217216.read()) + sc_biguint<16>(r4esult3_V_31_fu_128740_p4.read()));
}

void a0_conv2d_1::thread_tmp1904_fu_164117_p2() {
    tmp1904_fu_164117_p2 = (!tmp1902_fu_164088_p2.read().is_01() || !tmp1903_fu_164102_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1902_fu_164088_p2.read()) + sc_biguint<16>(tmp1903_fu_164102_p2.read()));
}

void a0_conv2d_1::thread_tmp1905_fu_115839_p2() {
    tmp1905_fu_115839_p2 = (!r4esult4_V_31_fu_98136_p4.read().is_01() || !r4esult5_V_31_fu_98149_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_31_fu_98136_p4.read()) + sc_biguint<16>(r4esult5_V_31_fu_98149_p4.read()));
}

void a0_conv2d_1::thread_tmp1906_fu_164123_p2() {
    tmp1906_fu_164123_p2 = (!r4esult7_V_31_reg_217231.read().is_01() || !r4esult8_V_31_reg_217236.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_31_reg_217231.read()) + sc_biguint<16>(r4esult8_V_31_reg_217236.read()));
}

void a0_conv2d_1::thread_tmp1907_fu_164140_p2() {
    tmp1907_fu_164140_p2 = (!r4esult6_V_31_fu_128753_p4.read().is_01() || !tmp1906_fu_164123_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_31_fu_128753_p4.read()) + sc_biguint<16>(tmp1906_fu_164123_p2.read()));
}

void a0_conv2d_1::thread_tmp1908_fu_164156_p2() {
    tmp1908_fu_164156_p2 = (!tmp1905_reg_225741.read().is_01() || !tmp1907_fu_164140_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1905_reg_225741.read()) + sc_biguint<16>(tmp1907_fu_164140_p2.read()));
}

void a0_conv2d_1::thread_tmp1909_fu_164173_p2() {
    tmp1909_fu_164173_p2 = (!tmp1904_fu_164117_p2.read().is_01() || !tmp1908_fu_164156_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1904_fu_164117_p2.read()) + sc_biguint<16>(tmp1908_fu_164156_p2.read()));
}

void a0_conv2d_1::thread_tmp190_fu_140934_p2() {
    tmp190_fu_140934_p2 = (!tmp188_fu_140905_p2.read().is_01() || !tmp189_fu_140919_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp188_fu_140905_p2.read()) + sc_biguint<16>(tmp189_fu_140919_p2.read()));
}

void a0_conv2d_1::thread_tmp1910_fu_164188_p2() {
    tmp1910_fu_164188_p2 = (!r4esult9_V_31_fu_128766_p4.read().is_01() || !r4esult1_V_32_reg_217321.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_31_fu_128766_p4.read()) + sc_biguint<16>(r4esult1_V_32_reg_217321.read()));
}

void a0_conv2d_1::thread_tmp1911_fu_164202_p2() {
    tmp1911_fu_164202_p2 = (!r4esult2_V_32_reg_217326.read().is_01() || !r4esult3_V_32_fu_128896_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_32_reg_217326.read()) + sc_biguint<16>(r4esult3_V_32_fu_128896_p4.read()));
}

void a0_conv2d_1::thread_tmp1912_fu_164217_p2() {
    tmp1912_fu_164217_p2 = (!tmp1910_fu_164188_p2.read().is_01() || !tmp1911_fu_164202_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1910_fu_164188_p2.read()) + sc_biguint<16>(tmp1911_fu_164202_p2.read()));
}

void a0_conv2d_1::thread_tmp1913_fu_115899_p2() {
    tmp1913_fu_115899_p2 = (!r4esult4_V_32_fu_98517_p4.read().is_01() || !r4esult5_V_32_fu_98530_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_32_fu_98517_p4.read()) + sc_biguint<16>(r4esult5_V_32_fu_98530_p4.read()));
}

void a0_conv2d_1::thread_tmp1914_fu_115923_p2() {
    tmp1914_fu_115923_p2 = (!r4esult7_V_32_fu_98543_p4.read().is_01() || !r4esult8_V_32_fu_98556_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_32_fu_98543_p4.read()) + sc_biguint<16>(r4esult8_V_32_fu_98556_p4.read()));
}

void a0_conv2d_1::thread_tmp1915_fu_164236_p2() {
    tmp1915_fu_164236_p2 = (!r4esult6_V_32_fu_128909_p4.read().is_01() || !tmp1914_reg_225791.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_32_fu_128909_p4.read()) + sc_biguint<16>(tmp1914_reg_225791.read()));
}

void a0_conv2d_1::thread_tmp1916_fu_164251_p2() {
    tmp1916_fu_164251_p2 = (!tmp1913_reg_225776.read().is_01() || !tmp1915_fu_164236_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1913_reg_225776.read()) + sc_biguint<16>(tmp1915_fu_164236_p2.read()));
}

void a0_conv2d_1::thread_tmp1917_fu_164268_p2() {
    tmp1917_fu_164268_p2 = (!tmp1912_fu_164217_p2.read().is_01() || !tmp1916_fu_164251_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1912_fu_164217_p2.read()) + sc_biguint<16>(tmp1916_fu_164251_p2.read()));
}

void a0_conv2d_1::thread_tmp1918_fu_164286_p2() {
    tmp1918_fu_164286_p2 = (!tmp1909_fu_164173_p2.read().is_01() || !tmp1917_fu_164268_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1909_fu_164173_p2.read()) + sc_biguint<16>(tmp1917_fu_164268_p2.read()));
}

void a0_conv2d_1::thread_tmp1919_fu_164301_p2() {
    tmp1919_fu_164301_p2 = (!r4esult9_V_32_fu_128922_p4.read().is_01() || !r4esult1_V_33_reg_217451.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_32_fu_128922_p4.read()) + sc_biguint<16>(r4esult1_V_33_reg_217451.read()));
}

void a0_conv2d_1::thread_tmp191_fu_105099_p2() {
    tmp191_fu_105099_p2 = (!result4_V_32_fu_98237_p4.read().is_01() || !result5_V_32_fu_98250_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_32_fu_98237_p4.read()) + sc_biguint<16>(result5_V_32_fu_98250_p4.read()));
}

void a0_conv2d_1::thread_tmp1920_fu_164315_p2() {
    tmp1920_fu_164315_p2 = (!r4esult2_V_33_reg_217456.read().is_01() || !r4esult3_V_33_fu_129052_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_33_reg_217456.read()) + sc_biguint<16>(r4esult3_V_33_fu_129052_p4.read()));
}

void a0_conv2d_1::thread_tmp1921_fu_164330_p2() {
    tmp1921_fu_164330_p2 = (!tmp1919_fu_164301_p2.read().is_01() || !tmp1920_fu_164315_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1919_fu_164301_p2.read()) + sc_biguint<16>(tmp1920_fu_164315_p2.read()));
}

void a0_conv2d_1::thread_tmp1922_fu_115965_p2() {
    tmp1922_fu_115965_p2 = (!r4esult4_V_33_fu_98898_p4.read().is_01() || !r4esult5_V_33_fu_98911_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_33_fu_98898_p4.read()) + sc_biguint<16>(r4esult5_V_33_fu_98911_p4.read()));
}

void a0_conv2d_1::thread_tmp1923_fu_164336_p2() {
    tmp1923_fu_164336_p2 = (!r4esult7_V_33_reg_217471.read().is_01() || !r4esult8_V_33_reg_217476.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_33_reg_217471.read()) + sc_biguint<16>(r4esult8_V_33_reg_217476.read()));
}

void a0_conv2d_1::thread_tmp1924_fu_164353_p2() {
    tmp1924_fu_164353_p2 = (!r4esult6_V_33_fu_129065_p4.read().is_01() || !tmp1923_fu_164336_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_33_fu_129065_p4.read()) + sc_biguint<16>(tmp1923_fu_164336_p2.read()));
}

void a0_conv2d_1::thread_tmp1925_fu_164369_p2() {
    tmp1925_fu_164369_p2 = (!tmp1922_reg_225816.read().is_01() || !tmp1924_fu_164353_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1922_reg_225816.read()) + sc_biguint<16>(tmp1924_fu_164353_p2.read()));
}

void a0_conv2d_1::thread_tmp1926_fu_164386_p2() {
    tmp1926_fu_164386_p2 = (!tmp1921_fu_164330_p2.read().is_01() || !tmp1925_fu_164369_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1921_fu_164330_p2.read()) + sc_biguint<16>(tmp1925_fu_164369_p2.read()));
}

void a0_conv2d_1::thread_tmp1927_fu_164401_p2() {
    tmp1927_fu_164401_p2 = (!r4esult9_V_33_fu_129078_p4.read().is_01() || !r4esult1_V_34_reg_217591.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_33_fu_129078_p4.read()) + sc_biguint<16>(r4esult1_V_34_reg_217591.read()));
}

void a0_conv2d_1::thread_tmp1928_fu_164415_p2() {
    tmp1928_fu_164415_p2 = (!r4esult2_V_34_reg_217596.read().is_01() || !r4esult3_V_34_fu_129208_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_34_reg_217596.read()) + sc_biguint<16>(r4esult3_V_34_fu_129208_p4.read()));
}

void a0_conv2d_1::thread_tmp1929_fu_164430_p2() {
    tmp1929_fu_164430_p2 = (!tmp1927_fu_164401_p2.read().is_01() || !tmp1928_fu_164415_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1927_fu_164401_p2.read()) + sc_biguint<16>(tmp1928_fu_164415_p2.read()));
}

void a0_conv2d_1::thread_tmp192_fu_105123_p2() {
    tmp192_fu_105123_p2 = (!result7_V_32_fu_98286_p4.read().is_01() || !result8_V_32_fu_98299_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_32_fu_98286_p4.read()) + sc_biguint<16>(result8_V_32_fu_98299_p4.read()));
}

void a0_conv2d_1::thread_tmp1930_fu_116025_p2() {
    tmp1930_fu_116025_p2 = (!r4esult4_V_34_fu_99279_p4.read().is_01() || !r4esult5_V_34_fu_99292_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_34_fu_99279_p4.read()) + sc_biguint<16>(r4esult5_V_34_fu_99292_p4.read()));
}

void a0_conv2d_1::thread_tmp1931_fu_164436_p2() {
    tmp1931_fu_164436_p2 = (!r4esult7_V_34_reg_217611.read().is_01() || !r4esult8_V_34_reg_217616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_34_reg_217611.read()) + sc_biguint<16>(r4esult8_V_34_reg_217616.read()));
}

void a0_conv2d_1::thread_tmp1932_fu_164453_p2() {
    tmp1932_fu_164453_p2 = (!r4esult6_V_34_fu_129221_p4.read().is_01() || !tmp1931_fu_164436_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_34_fu_129221_p4.read()) + sc_biguint<16>(tmp1931_fu_164436_p2.read()));
}

void a0_conv2d_1::thread_tmp1933_fu_164469_p2() {
    tmp1933_fu_164469_p2 = (!tmp1930_reg_225851.read().is_01() || !tmp1932_fu_164453_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1930_reg_225851.read()) + sc_biguint<16>(tmp1932_fu_164453_p2.read()));
}

void a0_conv2d_1::thread_tmp1934_fu_164486_p2() {
    tmp1934_fu_164486_p2 = (!tmp1929_fu_164430_p2.read().is_01() || !tmp1933_fu_164469_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1929_fu_164430_p2.read()) + sc_biguint<16>(tmp1933_fu_164469_p2.read()));
}

void a0_conv2d_1::thread_tmp1935_fu_170708_p2() {
    tmp1935_fu_170708_p2 = (!tmp1926_reg_228171.read().is_01() || !tmp1934_reg_228176.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1926_reg_228171.read()) + sc_biguint<16>(tmp1934_reg_228176.read()));
}

void a0_conv2d_1::thread_tmp1936_fu_170716_p2() {
    tmp1936_fu_170716_p2 = (!tmp1918_reg_228166.read().is_01() || !tmp1935_fu_170708_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1918_reg_228166.read()) + sc_biguint<16>(tmp1935_fu_170708_p2.read()));
}

void a0_conv2d_1::thread_tmp1937_fu_164519_p2() {
    tmp1937_fu_164519_p2 = (!r4esult9_V_34_fu_129234_p4.read().is_01() || !r4esult1_V_35_reg_217731.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_34_fu_129234_p4.read()) + sc_biguint<16>(r4esult1_V_35_reg_217731.read()));
}

void a0_conv2d_1::thread_tmp1938_fu_164533_p2() {
    tmp1938_fu_164533_p2 = (!r4esult2_V_35_reg_217736.read().is_01() || !r4esult3_V_35_fu_129364_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_35_reg_217736.read()) + sc_biguint<16>(r4esult3_V_35_fu_129364_p4.read()));
}

void a0_conv2d_1::thread_tmp1939_fu_164548_p2() {
    tmp1939_fu_164548_p2 = (!tmp1937_fu_164519_p2.read().is_01() || !tmp1938_fu_164533_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1937_fu_164519_p2.read()) + sc_biguint<16>(tmp1938_fu_164533_p2.read()));
}

void a0_conv2d_1::thread_tmp193_fu_140953_p2() {
    tmp193_fu_140953_p2 = (!result6_V_32_fu_128792_p4.read().is_01() || !tmp192_reg_221921.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_32_fu_128792_p4.read()) + sc_biguint<16>(tmp192_reg_221921.read()));
}

void a0_conv2d_1::thread_tmp1940_fu_116085_p2() {
    tmp1940_fu_116085_p2 = (!r4esult4_V_35_fu_99660_p4.read().is_01() || !r4esult5_V_35_fu_99673_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_35_fu_99660_p4.read()) + sc_biguint<16>(r4esult5_V_35_fu_99673_p4.read()));
}

void a0_conv2d_1::thread_tmp1941_fu_164554_p2() {
    tmp1941_fu_164554_p2 = (!r4esult7_V_35_reg_217751.read().is_01() || !r4esult8_V_35_reg_217756.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_35_reg_217751.read()) + sc_biguint<16>(r4esult8_V_35_reg_217756.read()));
}

void a0_conv2d_1::thread_tmp1942_fu_164571_p2() {
    tmp1942_fu_164571_p2 = (!r4esult6_V_35_fu_129377_p4.read().is_01() || !tmp1941_fu_164554_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_35_fu_129377_p4.read()) + sc_biguint<16>(tmp1941_fu_164554_p2.read()));
}

void a0_conv2d_1::thread_tmp1943_fu_164587_p2() {
    tmp1943_fu_164587_p2 = (!tmp1940_reg_225886.read().is_01() || !tmp1942_fu_164571_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1940_reg_225886.read()) + sc_biguint<16>(tmp1942_fu_164571_p2.read()));
}

void a0_conv2d_1::thread_tmp1944_fu_164604_p2() {
    tmp1944_fu_164604_p2 = (!tmp1939_fu_164548_p2.read().is_01() || !tmp1943_fu_164587_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1939_fu_164548_p2.read()) + sc_biguint<16>(tmp1943_fu_164587_p2.read()));
}

void a0_conv2d_1::thread_tmp1945_fu_164619_p2() {
    tmp1945_fu_164619_p2 = (!r4esult9_V_35_fu_129390_p4.read().is_01() || !r4esult1_V_36_reg_217841.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_35_fu_129390_p4.read()) + sc_biguint<16>(r4esult1_V_36_reg_217841.read()));
}

void a0_conv2d_1::thread_tmp1946_fu_164633_p2() {
    tmp1946_fu_164633_p2 = (!r4esult2_V_36_reg_217846.read().is_01() || !r4esult3_V_36_fu_129520_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_36_reg_217846.read()) + sc_biguint<16>(r4esult3_V_36_fu_129520_p4.read()));
}

void a0_conv2d_1::thread_tmp1947_fu_164648_p2() {
    tmp1947_fu_164648_p2 = (!tmp1945_fu_164619_p2.read().is_01() || !tmp1946_fu_164633_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1945_fu_164619_p2.read()) + sc_biguint<16>(tmp1946_fu_164633_p2.read()));
}

void a0_conv2d_1::thread_tmp1948_fu_116145_p2() {
    tmp1948_fu_116145_p2 = (!r4esult4_V_36_fu_100041_p4.read().is_01() || !r4esult5_V_36_fu_100054_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_36_fu_100041_p4.read()) + sc_biguint<16>(r4esult5_V_36_fu_100054_p4.read()));
}

void a0_conv2d_1::thread_tmp1949_fu_116169_p2() {
    tmp1949_fu_116169_p2 = (!r4esult7_V_36_fu_100067_p4.read().is_01() || !r4esult8_V_36_fu_100080_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_36_fu_100067_p4.read()) + sc_biguint<16>(r4esult8_V_36_fu_100080_p4.read()));
}

void a0_conv2d_1::thread_tmp194_fu_140968_p2() {
    tmp194_fu_140968_p2 = (!tmp191_reg_221906.read().is_01() || !tmp193_fu_140953_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp191_reg_221906.read()) + sc_biguint<16>(tmp193_fu_140953_p2.read()));
}

void a0_conv2d_1::thread_tmp1950_fu_164667_p2() {
    tmp1950_fu_164667_p2 = (!r4esult6_V_36_fu_129533_p4.read().is_01() || !tmp1949_reg_225936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_36_fu_129533_p4.read()) + sc_biguint<16>(tmp1949_reg_225936.read()));
}

void a0_conv2d_1::thread_tmp1951_fu_164682_p2() {
    tmp1951_fu_164682_p2 = (!tmp1948_reg_225921.read().is_01() || !tmp1950_fu_164667_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1948_reg_225921.read()) + sc_biguint<16>(tmp1950_fu_164667_p2.read()));
}

void a0_conv2d_1::thread_tmp1952_fu_164699_p2() {
    tmp1952_fu_164699_p2 = (!tmp1947_fu_164648_p2.read().is_01() || !tmp1951_fu_164682_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1947_fu_164648_p2.read()) + sc_biguint<16>(tmp1951_fu_164682_p2.read()));
}

void a0_conv2d_1::thread_tmp1953_fu_164717_p2() {
    tmp1953_fu_164717_p2 = (!tmp1944_fu_164604_p2.read().is_01() || !tmp1952_fu_164699_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1944_fu_164604_p2.read()) + sc_biguint<16>(tmp1952_fu_164699_p2.read()));
}

void a0_conv2d_1::thread_tmp1954_fu_164732_p2() {
    tmp1954_fu_164732_p2 = (!r4esult9_V_36_fu_129546_p4.read().is_01() || !r4esult1_V_37_reg_217971.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_36_fu_129546_p4.read()) + sc_biguint<16>(r4esult1_V_37_reg_217971.read()));
}

void a0_conv2d_1::thread_tmp1955_fu_164746_p2() {
    tmp1955_fu_164746_p2 = (!r4esult2_V_37_reg_217976.read().is_01() || !r4esult3_V_37_fu_129676_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_37_reg_217976.read()) + sc_biguint<16>(r4esult3_V_37_fu_129676_p4.read()));
}

void a0_conv2d_1::thread_tmp1956_fu_164761_p2() {
    tmp1956_fu_164761_p2 = (!tmp1954_fu_164732_p2.read().is_01() || !tmp1955_fu_164746_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1954_fu_164732_p2.read()) + sc_biguint<16>(tmp1955_fu_164746_p2.read()));
}

void a0_conv2d_1::thread_tmp1957_fu_116211_p2() {
    tmp1957_fu_116211_p2 = (!r4esult4_V_37_fu_100422_p4.read().is_01() || !r4esult5_V_37_fu_100435_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_37_fu_100422_p4.read()) + sc_biguint<16>(r4esult5_V_37_fu_100435_p4.read()));
}

void a0_conv2d_1::thread_tmp1958_fu_164767_p2() {
    tmp1958_fu_164767_p2 = (!r4esult7_V_37_reg_217991.read().is_01() || !r4esult8_V_37_reg_217996.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_37_reg_217991.read()) + sc_biguint<16>(r4esult8_V_37_reg_217996.read()));
}

void a0_conv2d_1::thread_tmp1959_fu_164784_p2() {
    tmp1959_fu_164784_p2 = (!r4esult6_V_37_fu_129689_p4.read().is_01() || !tmp1958_fu_164767_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_37_fu_129689_p4.read()) + sc_biguint<16>(tmp1958_fu_164767_p2.read()));
}

void a0_conv2d_1::thread_tmp195_fu_140985_p2() {
    tmp195_fu_140985_p2 = (!tmp190_fu_140934_p2.read().is_01() || !tmp194_fu_140968_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp190_fu_140934_p2.read()) + sc_biguint<16>(tmp194_fu_140968_p2.read()));
}

void a0_conv2d_1::thread_tmp1960_fu_164800_p2() {
    tmp1960_fu_164800_p2 = (!tmp1957_reg_225961.read().is_01() || !tmp1959_fu_164784_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1957_reg_225961.read()) + sc_biguint<16>(tmp1959_fu_164784_p2.read()));
}

void a0_conv2d_1::thread_tmp1961_fu_164817_p2() {
    tmp1961_fu_164817_p2 = (!tmp1956_fu_164761_p2.read().is_01() || !tmp1960_fu_164800_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1956_fu_164761_p2.read()) + sc_biguint<16>(tmp1960_fu_164800_p2.read()));
}

void a0_conv2d_1::thread_tmp1962_fu_164832_p2() {
    tmp1962_fu_164832_p2 = (!r4esult9_V_37_fu_129702_p4.read().is_01() || !r4esult1_V_38_reg_218081.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_37_fu_129702_p4.read()) + sc_biguint<16>(r4esult1_V_38_reg_218081.read()));
}

void a0_conv2d_1::thread_tmp1963_fu_164846_p2() {
    tmp1963_fu_164846_p2 = (!r4esult2_V_38_reg_218086.read().is_01() || !r4esult3_V_38_fu_129832_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_38_reg_218086.read()) + sc_biguint<16>(r4esult3_V_38_fu_129832_p4.read()));
}

void a0_conv2d_1::thread_tmp1964_fu_164861_p2() {
    tmp1964_fu_164861_p2 = (!tmp1962_fu_164832_p2.read().is_01() || !tmp1963_fu_164846_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1962_fu_164832_p2.read()) + sc_biguint<16>(tmp1963_fu_164846_p2.read()));
}

void a0_conv2d_1::thread_tmp1965_fu_116271_p2() {
    tmp1965_fu_116271_p2 = (!r4esult4_V_38_fu_100803_p4.read().is_01() || !r4esult5_V_38_fu_100816_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_38_fu_100803_p4.read()) + sc_biguint<16>(r4esult5_V_38_fu_100816_p4.read()));
}

void a0_conv2d_1::thread_tmp1966_fu_116295_p2() {
    tmp1966_fu_116295_p2 = (!r4esult7_V_38_fu_100829_p4.read().is_01() || !r4esult8_V_38_fu_100842_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_38_fu_100829_p4.read()) + sc_biguint<16>(r4esult8_V_38_fu_100842_p4.read()));
}

void a0_conv2d_1::thread_tmp1967_fu_164880_p2() {
    tmp1967_fu_164880_p2 = (!r4esult6_V_38_fu_129845_p4.read().is_01() || !tmp1966_reg_226011.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_38_fu_129845_p4.read()) + sc_biguint<16>(tmp1966_reg_226011.read()));
}

void a0_conv2d_1::thread_tmp1968_fu_164895_p2() {
    tmp1968_fu_164895_p2 = (!tmp1965_reg_225996.read().is_01() || !tmp1967_fu_164880_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1965_reg_225996.read()) + sc_biguint<16>(tmp1967_fu_164880_p2.read()));
}

void a0_conv2d_1::thread_tmp1969_fu_164912_p2() {
    tmp1969_fu_164912_p2 = (!tmp1964_fu_164861_p2.read().is_01() || !tmp1968_fu_164895_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1964_fu_164861_p2.read()) + sc_biguint<16>(tmp1968_fu_164895_p2.read()));
}

void a0_conv2d_1::thread_tmp196_fu_141003_p2() {
    tmp196_fu_141003_p2 = (!tmp187_fu_140890_p2.read().is_01() || !tmp195_fu_140985_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp187_fu_140890_p2.read()) + sc_biguint<16>(tmp195_fu_140985_p2.read()));
}

void a0_conv2d_1::thread_tmp1970_fu_164930_p2() {
    tmp1970_fu_164930_p2 = (!tmp1961_fu_164817_p2.read().is_01() || !tmp1969_fu_164912_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1961_fu_164817_p2.read()) + sc_biguint<16>(tmp1969_fu_164912_p2.read()));
}

void a0_conv2d_1::thread_tmp1971_fu_170725_p2() {
    tmp1971_fu_170725_p2 = (!tmp1953_reg_228196.read().is_01() || !tmp1970_reg_228201.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1953_reg_228196.read()) + sc_biguint<16>(tmp1970_reg_228201.read()));
}

void a0_conv2d_1::thread_tmp1972_fu_170739_p2() {
    tmp1972_fu_170739_p2 = (!tmp1936_fu_170716_p2.read().is_01() || !tmp1971_fu_170725_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1936_fu_170716_p2.read()) + sc_biguint<16>(tmp1971_fu_170725_p2.read()));
}

void a0_conv2d_1::thread_tmp1973_fu_164951_p2() {
    tmp1973_fu_164951_p2 = (!r4esult9_V_38_fu_129858_p4.read().is_01() || !r4esult1_V_39_reg_218211.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_38_fu_129858_p4.read()) + sc_biguint<16>(r4esult1_V_39_reg_218211.read()));
}

void a0_conv2d_1::thread_tmp1974_fu_164965_p2() {
    tmp1974_fu_164965_p2 = (!r4esult2_V_39_reg_218216.read().is_01() || !r4esult3_V_39_fu_129988_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_39_reg_218216.read()) + sc_biguint<16>(r4esult3_V_39_fu_129988_p4.read()));
}

void a0_conv2d_1::thread_tmp1975_fu_164980_p2() {
    tmp1975_fu_164980_p2 = (!tmp1973_fu_164951_p2.read().is_01() || !tmp1974_fu_164965_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1973_fu_164951_p2.read()) + sc_biguint<16>(tmp1974_fu_164965_p2.read()));
}

void a0_conv2d_1::thread_tmp1976_fu_116337_p2() {
    tmp1976_fu_116337_p2 = (!r4esult4_V_39_fu_101184_p4.read().is_01() || !r4esult5_V_39_fu_101197_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_39_fu_101184_p4.read()) + sc_biguint<16>(r4esult5_V_39_fu_101197_p4.read()));
}

void a0_conv2d_1::thread_tmp1977_fu_164986_p2() {
    tmp1977_fu_164986_p2 = (!r4esult7_V_39_reg_218231.read().is_01() || !r4esult8_V_39_reg_218236.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_39_reg_218231.read()) + sc_biguint<16>(r4esult8_V_39_reg_218236.read()));
}

void a0_conv2d_1::thread_tmp1978_fu_165003_p2() {
    tmp1978_fu_165003_p2 = (!r4esult6_V_39_fu_130001_p4.read().is_01() || !tmp1977_fu_164986_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_39_fu_130001_p4.read()) + sc_biguint<16>(tmp1977_fu_164986_p2.read()));
}

void a0_conv2d_1::thread_tmp1979_fu_165019_p2() {
    tmp1979_fu_165019_p2 = (!tmp1976_reg_226036.read().is_01() || !tmp1978_fu_165003_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1976_reg_226036.read()) + sc_biguint<16>(tmp1978_fu_165003_p2.read()));
}

void a0_conv2d_1::thread_tmp197_fu_141018_p2() {
    tmp197_fu_141018_p2 = (!result9_V_32_fu_128805_p4.read().is_01() || !result1_V_33_reg_217346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_32_fu_128805_p4.read()) + sc_biguint<16>(result1_V_33_reg_217346.read()));
}

void a0_conv2d_1::thread_tmp1980_fu_165036_p2() {
    tmp1980_fu_165036_p2 = (!tmp1975_fu_164980_p2.read().is_01() || !tmp1979_fu_165019_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1975_fu_164980_p2.read()) + sc_biguint<16>(tmp1979_fu_165019_p2.read()));
}

void a0_conv2d_1::thread_tmp1981_fu_165051_p2() {
    tmp1981_fu_165051_p2 = (!r4esult9_V_39_fu_130014_p4.read().is_01() || !r4esult1_V_40_reg_218321.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_39_fu_130014_p4.read()) + sc_biguint<16>(r4esult1_V_40_reg_218321.read()));
}

void a0_conv2d_1::thread_tmp1982_fu_165065_p2() {
    tmp1982_fu_165065_p2 = (!r4esult2_V_40_reg_218326.read().is_01() || !r4esult3_V_40_fu_130144_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_40_reg_218326.read()) + sc_biguint<16>(r4esult3_V_40_fu_130144_p4.read()));
}

void a0_conv2d_1::thread_tmp1983_fu_165080_p2() {
    tmp1983_fu_165080_p2 = (!tmp1981_fu_165051_p2.read().is_01() || !tmp1982_fu_165065_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1981_fu_165051_p2.read()) + sc_biguint<16>(tmp1982_fu_165065_p2.read()));
}

void a0_conv2d_1::thread_tmp1984_fu_116397_p2() {
    tmp1984_fu_116397_p2 = (!r4esult4_V_40_fu_101565_p4.read().is_01() || !r4esult5_V_40_fu_101578_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_40_fu_101565_p4.read()) + sc_biguint<16>(r4esult5_V_40_fu_101578_p4.read()));
}

void a0_conv2d_1::thread_tmp1985_fu_116421_p2() {
    tmp1985_fu_116421_p2 = (!r4esult7_V_40_fu_101591_p4.read().is_01() || !r4esult8_V_40_fu_101604_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_40_fu_101591_p4.read()) + sc_biguint<16>(r4esult8_V_40_fu_101604_p4.read()));
}

void a0_conv2d_1::thread_tmp1986_fu_165099_p2() {
    tmp1986_fu_165099_p2 = (!r4esult6_V_40_fu_130157_p4.read().is_01() || !tmp1985_reg_226086.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_40_fu_130157_p4.read()) + sc_biguint<16>(tmp1985_reg_226086.read()));
}

void a0_conv2d_1::thread_tmp1987_fu_165114_p2() {
    tmp1987_fu_165114_p2 = (!tmp1984_reg_226071.read().is_01() || !tmp1986_fu_165099_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1984_reg_226071.read()) + sc_biguint<16>(tmp1986_fu_165099_p2.read()));
}

void a0_conv2d_1::thread_tmp1988_fu_165131_p2() {
    tmp1988_fu_165131_p2 = (!tmp1983_fu_165080_p2.read().is_01() || !tmp1987_fu_165114_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1983_fu_165080_p2.read()) + sc_biguint<16>(tmp1987_fu_165114_p2.read()));
}

void a0_conv2d_1::thread_tmp1989_fu_165149_p2() {
    tmp1989_fu_165149_p2 = (!tmp1980_fu_165036_p2.read().is_01() || !tmp1988_fu_165131_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1980_fu_165036_p2.read()) + sc_biguint<16>(tmp1988_fu_165131_p2.read()));
}

void a0_conv2d_1::thread_tmp198_fu_141032_p2() {
    tmp198_fu_141032_p2 = (!result2_V_33_reg_217351.read().is_01() || !result3_V_33_fu_128935_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_33_reg_217351.read()) + sc_biguint<16>(result3_V_33_fu_128935_p4.read()));
}

void a0_conv2d_1::thread_tmp1990_fu_165164_p2() {
    tmp1990_fu_165164_p2 = (!r4esult9_V_40_fu_130170_p4.read().is_01() || !r4esult1_V_41_reg_218451.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_40_fu_130170_p4.read()) + sc_biguint<16>(r4esult1_V_41_reg_218451.read()));
}

void a0_conv2d_1::thread_tmp1991_fu_165178_p2() {
    tmp1991_fu_165178_p2 = (!r4esult2_V_41_reg_218456.read().is_01() || !r4esult3_V_41_fu_130300_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_41_reg_218456.read()) + sc_biguint<16>(r4esult3_V_41_fu_130300_p4.read()));
}

void a0_conv2d_1::thread_tmp1992_fu_165193_p2() {
    tmp1992_fu_165193_p2 = (!tmp1990_fu_165164_p2.read().is_01() || !tmp1991_fu_165178_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1990_fu_165164_p2.read()) + sc_biguint<16>(tmp1991_fu_165178_p2.read()));
}

void a0_conv2d_1::thread_tmp1993_fu_116463_p2() {
    tmp1993_fu_116463_p2 = (!r4esult4_V_41_fu_101946_p4.read().is_01() || !r4esult5_V_41_fu_101959_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_41_fu_101946_p4.read()) + sc_biguint<16>(r4esult5_V_41_fu_101959_p4.read()));
}

void a0_conv2d_1::thread_tmp1994_fu_165199_p2() {
    tmp1994_fu_165199_p2 = (!r4esult7_V_41_reg_218471.read().is_01() || !r4esult8_V_41_reg_218476.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_41_reg_218471.read()) + sc_biguint<16>(r4esult8_V_41_reg_218476.read()));
}

void a0_conv2d_1::thread_tmp1995_fu_165216_p2() {
    tmp1995_fu_165216_p2 = (!r4esult6_V_41_fu_130313_p4.read().is_01() || !tmp1994_fu_165199_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_41_fu_130313_p4.read()) + sc_biguint<16>(tmp1994_fu_165199_p2.read()));
}

void a0_conv2d_1::thread_tmp1996_fu_165232_p2() {
    tmp1996_fu_165232_p2 = (!tmp1993_reg_226111.read().is_01() || !tmp1995_fu_165216_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1993_reg_226111.read()) + sc_biguint<16>(tmp1995_fu_165216_p2.read()));
}

void a0_conv2d_1::thread_tmp1997_fu_165249_p2() {
    tmp1997_fu_165249_p2 = (!tmp1992_fu_165193_p2.read().is_01() || !tmp1996_fu_165232_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1992_fu_165193_p2.read()) + sc_biguint<16>(tmp1996_fu_165232_p2.read()));
}

void a0_conv2d_1::thread_tmp1998_fu_165264_p2() {
    tmp1998_fu_165264_p2 = (!r4esult9_V_41_fu_130326_p4.read().is_01() || !r4esult1_V_42_reg_218591.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_41_fu_130326_p4.read()) + sc_biguint<16>(r4esult1_V_42_reg_218591.read()));
}

void a0_conv2d_1::thread_tmp1999_fu_165278_p2() {
    tmp1999_fu_165278_p2 = (!r4esult2_V_42_reg_218596.read().is_01() || !r4esult3_V_42_fu_130456_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_42_reg_218596.read()) + sc_biguint<16>(r4esult3_V_42_fu_130456_p4.read()));
}

void a0_conv2d_1::thread_tmp199_fu_141047_p2() {
    tmp199_fu_141047_p2 = (!tmp197_fu_141018_p2.read().is_01() || !tmp198_fu_141032_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp197_fu_141018_p2.read()) + sc_biguint<16>(tmp198_fu_141032_p2.read()));
}

void a0_conv2d_1::thread_tmp19_fu_69974_p2() {
    tmp19_fu_69974_p2 = (!ap_const_lv8_84.is_01() || !tmp_23_cast1_fu_69928_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_84) + sc_biguint<8>(tmp_23_cast1_fu_69928_p1.read()));
}

void a0_conv2d_1::thread_tmp19_mid1_fu_70438_p2() {
    tmp19_mid1_fu_70438_p2 = (!ap_const_lv8_42.is_01() || !tmp_23_cast1_mid1_fu_70416_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_42) + sc_biguint<8>(tmp_23_cast1_mid1_fu_70416_p1.read()));
}

void a0_conv2d_1::thread_tmp2000_fu_165293_p2() {
    tmp2000_fu_165293_p2 = (!tmp1998_fu_165264_p2.read().is_01() || !tmp1999_fu_165278_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1998_fu_165264_p2.read()) + sc_biguint<16>(tmp1999_fu_165278_p2.read()));
}

void a0_conv2d_1::thread_tmp2001_fu_116523_p2() {
    tmp2001_fu_116523_p2 = (!r4esult4_V_42_fu_102327_p4.read().is_01() || !r4esult5_V_42_fu_102340_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_42_fu_102327_p4.read()) + sc_biguint<16>(r4esult5_V_42_fu_102340_p4.read()));
}

void a0_conv2d_1::thread_tmp2002_fu_165299_p2() {
    tmp2002_fu_165299_p2 = (!r4esult7_V_42_reg_218611.read().is_01() || !r4esult8_V_42_reg_218616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_42_reg_218611.read()) + sc_biguint<16>(r4esult8_V_42_reg_218616.read()));
}

void a0_conv2d_1::thread_tmp2003_fu_165316_p2() {
    tmp2003_fu_165316_p2 = (!r4esult6_V_42_fu_130469_p4.read().is_01() || !tmp2002_fu_165299_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_42_fu_130469_p4.read()) + sc_biguint<16>(tmp2002_fu_165299_p2.read()));
}

void a0_conv2d_1::thread_tmp2004_fu_165332_p2() {
    tmp2004_fu_165332_p2 = (!tmp2001_reg_226146.read().is_01() || !tmp2003_fu_165316_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2001_reg_226146.read()) + sc_biguint<16>(tmp2003_fu_165316_p2.read()));
}

void a0_conv2d_1::thread_tmp2005_fu_165349_p2() {
    tmp2005_fu_165349_p2 = (!tmp2000_fu_165293_p2.read().is_01() || !tmp2004_fu_165332_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2000_fu_165293_p2.read()) + sc_biguint<16>(tmp2004_fu_165332_p2.read()));
}

void a0_conv2d_1::thread_tmp2006_fu_170745_p2() {
    tmp2006_fu_170745_p2 = (!tmp1997_reg_228216.read().is_01() || !tmp2005_reg_228221.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1997_reg_228216.read()) + sc_biguint<16>(tmp2005_reg_228221.read()));
}

void a0_conv2d_1::thread_tmp2007_fu_170749_p2() {
    tmp2007_fu_170749_p2 = (!tmp1989_reg_228211.read().is_01() || !tmp2006_fu_170745_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1989_reg_228211.read()) + sc_biguint<16>(tmp2006_fu_170745_p2.read()));
}

void a0_conv2d_1::thread_tmp2008_fu_165388_p2() {
    tmp2008_fu_165388_p2 = (!r4esult9_V_42_fu_130482_p4.read().is_01() || !r4esult1_V_43_reg_218731.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_42_fu_130482_p4.read()) + sc_biguint<16>(r4esult1_V_43_reg_218731.read()));
}

void a0_conv2d_1::thread_tmp2009_fu_165402_p2() {
    tmp2009_fu_165402_p2 = (!r4esult2_V_43_reg_218736.read().is_01() || !r4esult3_V_43_fu_130612_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_43_reg_218736.read()) + sc_biguint<16>(r4esult3_V_43_fu_130612_p4.read()));
}

void a0_conv2d_1::thread_tmp200_fu_105165_p2() {
    tmp200_fu_105165_p2 = (!result4_V_33_fu_98618_p4.read().is_01() || !result5_V_33_fu_98631_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_33_fu_98618_p4.read()) + sc_biguint<16>(result5_V_33_fu_98631_p4.read()));
}

void a0_conv2d_1::thread_tmp2010_fu_165417_p2() {
    tmp2010_fu_165417_p2 = (!tmp2008_fu_165388_p2.read().is_01() || !tmp2009_fu_165402_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2008_fu_165388_p2.read()) + sc_biguint<16>(tmp2009_fu_165402_p2.read()));
}

void a0_conv2d_1::thread_tmp2011_fu_116583_p2() {
    tmp2011_fu_116583_p2 = (!r4esult4_V_43_fu_102708_p4.read().is_01() || !r4esult5_V_43_fu_102721_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_43_fu_102708_p4.read()) + sc_biguint<16>(r4esult5_V_43_fu_102721_p4.read()));
}

void a0_conv2d_1::thread_tmp2012_fu_165423_p2() {
    tmp2012_fu_165423_p2 = (!r4esult7_V_43_reg_218751.read().is_01() || !r4esult8_V_43_reg_218756.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_43_reg_218751.read()) + sc_biguint<16>(r4esult8_V_43_reg_218756.read()));
}

void a0_conv2d_1::thread_tmp2013_fu_165440_p2() {
    tmp2013_fu_165440_p2 = (!r4esult6_V_43_fu_130625_p4.read().is_01() || !tmp2012_fu_165423_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_43_fu_130625_p4.read()) + sc_biguint<16>(tmp2012_fu_165423_p2.read()));
}

void a0_conv2d_1::thread_tmp2014_fu_165456_p2() {
    tmp2014_fu_165456_p2 = (!tmp2011_reg_226181.read().is_01() || !tmp2013_fu_165440_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2011_reg_226181.read()) + sc_biguint<16>(tmp2013_fu_165440_p2.read()));
}

void a0_conv2d_1::thread_tmp2015_fu_165473_p2() {
    tmp2015_fu_165473_p2 = (!tmp2010_fu_165417_p2.read().is_01() || !tmp2014_fu_165456_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2010_fu_165417_p2.read()) + sc_biguint<16>(tmp2014_fu_165456_p2.read()));
}

void a0_conv2d_1::thread_tmp2016_fu_165488_p2() {
    tmp2016_fu_165488_p2 = (!r4esult9_V_43_fu_130638_p4.read().is_01() || !r4esult1_V_44_reg_218841.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_43_fu_130638_p4.read()) + sc_biguint<16>(r4esult1_V_44_reg_218841.read()));
}

void a0_conv2d_1::thread_tmp2017_fu_165502_p2() {
    tmp2017_fu_165502_p2 = (!r4esult2_V_44_reg_218846.read().is_01() || !r4esult3_V_44_fu_130768_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_44_reg_218846.read()) + sc_biguint<16>(r4esult3_V_44_fu_130768_p4.read()));
}

void a0_conv2d_1::thread_tmp2018_fu_165517_p2() {
    tmp2018_fu_165517_p2 = (!tmp2016_fu_165488_p2.read().is_01() || !tmp2017_fu_165502_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2016_fu_165488_p2.read()) + sc_biguint<16>(tmp2017_fu_165502_p2.read()));
}

void a0_conv2d_1::thread_tmp2019_fu_116643_p2() {
    tmp2019_fu_116643_p2 = (!r4esult4_V_44_fu_103089_p4.read().is_01() || !r4esult5_V_44_fu_103102_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_44_fu_103089_p4.read()) + sc_biguint<16>(r4esult5_V_44_fu_103102_p4.read()));
}

void a0_conv2d_1::thread_tmp201_fu_141053_p2() {
    tmp201_fu_141053_p2 = (!result7_V_33_reg_217366.read().is_01() || !result8_V_33_reg_217371.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_33_reg_217366.read()) + sc_biguint<16>(result8_V_33_reg_217371.read()));
}

void a0_conv2d_1::thread_tmp2020_fu_116667_p2() {
    tmp2020_fu_116667_p2 = (!r4esult7_V_44_fu_103115_p4.read().is_01() || !r4esult8_V_44_fu_103128_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_44_fu_103115_p4.read()) + sc_biguint<16>(r4esult8_V_44_fu_103128_p4.read()));
}

void a0_conv2d_1::thread_tmp2021_fu_165536_p2() {
    tmp2021_fu_165536_p2 = (!r4esult6_V_44_fu_130781_p4.read().is_01() || !tmp2020_reg_226231.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_44_fu_130781_p4.read()) + sc_biguint<16>(tmp2020_reg_226231.read()));
}

void a0_conv2d_1::thread_tmp2022_fu_165551_p2() {
    tmp2022_fu_165551_p2 = (!tmp2019_reg_226216.read().is_01() || !tmp2021_fu_165536_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2019_reg_226216.read()) + sc_biguint<16>(tmp2021_fu_165536_p2.read()));
}

void a0_conv2d_1::thread_tmp2023_fu_165568_p2() {
    tmp2023_fu_165568_p2 = (!tmp2018_fu_165517_p2.read().is_01() || !tmp2022_fu_165551_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2018_fu_165517_p2.read()) + sc_biguint<16>(tmp2022_fu_165551_p2.read()));
}

void a0_conv2d_1::thread_tmp2024_fu_165586_p2() {
    tmp2024_fu_165586_p2 = (!tmp2015_fu_165473_p2.read().is_01() || !tmp2023_fu_165568_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2015_fu_165473_p2.read()) + sc_biguint<16>(tmp2023_fu_165568_p2.read()));
}

void a0_conv2d_1::thread_tmp2025_fu_165601_p2() {
    tmp2025_fu_165601_p2 = (!r4esult9_V_44_fu_130794_p4.read().is_01() || !r4esult1_V_45_reg_218971.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_44_fu_130794_p4.read()) + sc_biguint<16>(r4esult1_V_45_reg_218971.read()));
}

void a0_conv2d_1::thread_tmp2026_fu_165615_p2() {
    tmp2026_fu_165615_p2 = (!r4esult2_V_45_reg_218976.read().is_01() || !r4esult3_V_45_fu_130924_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_45_reg_218976.read()) + sc_biguint<16>(r4esult3_V_45_fu_130924_p4.read()));
}

void a0_conv2d_1::thread_tmp2027_fu_165630_p2() {
    tmp2027_fu_165630_p2 = (!tmp2025_fu_165601_p2.read().is_01() || !tmp2026_fu_165615_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2025_fu_165601_p2.read()) + sc_biguint<16>(tmp2026_fu_165615_p2.read()));
}

void a0_conv2d_1::thread_tmp2028_fu_116709_p2() {
    tmp2028_fu_116709_p2 = (!r4esult4_V_45_fu_103470_p4.read().is_01() || !r4esult5_V_45_fu_103483_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_45_fu_103470_p4.read()) + sc_biguint<16>(r4esult5_V_45_fu_103483_p4.read()));
}

void a0_conv2d_1::thread_tmp2029_fu_165636_p2() {
    tmp2029_fu_165636_p2 = (!r4esult7_V_45_reg_218991.read().is_01() || !r4esult8_V_45_reg_218996.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_45_reg_218991.read()) + sc_biguint<16>(r4esult8_V_45_reg_218996.read()));
}

void a0_conv2d_1::thread_tmp202_fu_141070_p2() {
    tmp202_fu_141070_p2 = (!result6_V_33_fu_128948_p4.read().is_01() || !tmp201_fu_141053_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_33_fu_128948_p4.read()) + sc_biguint<16>(tmp201_fu_141053_p2.read()));
}

void a0_conv2d_1::thread_tmp2030_fu_165653_p2() {
    tmp2030_fu_165653_p2 = (!r4esult6_V_45_fu_130937_p4.read().is_01() || !tmp2029_fu_165636_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_45_fu_130937_p4.read()) + sc_biguint<16>(tmp2029_fu_165636_p2.read()));
}

void a0_conv2d_1::thread_tmp2031_fu_165669_p2() {
    tmp2031_fu_165669_p2 = (!tmp2028_reg_226256.read().is_01() || !tmp2030_fu_165653_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2028_reg_226256.read()) + sc_biguint<16>(tmp2030_fu_165653_p2.read()));
}

void a0_conv2d_1::thread_tmp2032_fu_165686_p2() {
    tmp2032_fu_165686_p2 = (!tmp2027_fu_165630_p2.read().is_01() || !tmp2031_fu_165669_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2027_fu_165630_p2.read()) + sc_biguint<16>(tmp2031_fu_165669_p2.read()));
}

void a0_conv2d_1::thread_tmp2033_fu_165701_p2() {
    tmp2033_fu_165701_p2 = (!r4esult9_V_45_fu_130950_p4.read().is_01() || !r4esult1_V_46_reg_219081.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_45_fu_130950_p4.read()) + sc_biguint<16>(r4esult1_V_46_reg_219081.read()));
}

void a0_conv2d_1::thread_tmp2034_fu_165715_p2() {
    tmp2034_fu_165715_p2 = (!r4esult2_V_46_reg_219086.read().is_01() || !r4esult3_V_46_fu_131080_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult2_V_46_reg_219086.read()) + sc_biguint<16>(r4esult3_V_46_fu_131080_p4.read()));
}

void a0_conv2d_1::thread_tmp2035_fu_165730_p2() {
    tmp2035_fu_165730_p2 = (!tmp2033_fu_165701_p2.read().is_01() || !tmp2034_fu_165715_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2033_fu_165701_p2.read()) + sc_biguint<16>(tmp2034_fu_165715_p2.read()));
}

void a0_conv2d_1::thread_tmp2036_fu_116769_p2() {
    tmp2036_fu_116769_p2 = (!r4esult4_V_46_fu_103851_p4.read().is_01() || !r4esult5_V_46_fu_103864_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult4_V_46_fu_103851_p4.read()) + sc_biguint<16>(r4esult5_V_46_fu_103864_p4.read()));
}

void a0_conv2d_1::thread_tmp2037_fu_116793_p2() {
    tmp2037_fu_116793_p2 = (!r4esult7_V_46_fu_103877_p4.read().is_01() || !r4esult8_V_46_fu_103890_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult7_V_46_fu_103877_p4.read()) + sc_biguint<16>(r4esult8_V_46_fu_103890_p4.read()));
}

void a0_conv2d_1::thread_tmp2038_fu_165749_p2() {
    tmp2038_fu_165749_p2 = (!r4esult6_V_46_fu_131093_p4.read().is_01() || !tmp2037_reg_226306.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_46_fu_131093_p4.read()) + sc_biguint<16>(tmp2037_reg_226306.read()));
}

void a0_conv2d_1::thread_tmp2039_fu_165764_p2() {
    tmp2039_fu_165764_p2 = (!tmp2036_reg_226291.read().is_01() || !tmp2038_fu_165749_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2036_reg_226291.read()) + sc_biguint<16>(tmp2038_fu_165749_p2.read()));
}

void a0_conv2d_1::thread_tmp203_fu_141086_p2() {
    tmp203_fu_141086_p2 = (!tmp200_reg_221946.read().is_01() || !tmp202_fu_141070_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp200_reg_221946.read()) + sc_biguint<16>(tmp202_fu_141070_p2.read()));
}

void a0_conv2d_1::thread_tmp2040_fu_165781_p2() {
    tmp2040_fu_165781_p2 = (!tmp2035_fu_165730_p2.read().is_01() || !tmp2039_fu_165764_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2035_fu_165730_p2.read()) + sc_biguint<16>(tmp2039_fu_165764_p2.read()));
}

void a0_conv2d_1::thread_tmp2041_fu_165799_p2() {
    tmp2041_fu_165799_p2 = (!tmp2032_fu_165686_p2.read().is_01() || !tmp2040_fu_165781_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2032_fu_165686_p2.read()) + sc_biguint<16>(tmp2040_fu_165781_p2.read()));
}

void a0_conv2d_1::thread_tmp2042_fu_170758_p2() {
    tmp2042_fu_170758_p2 = (!tmp2024_reg_228246.read().is_01() || !tmp2041_reg_228251.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2024_reg_228246.read()) + sc_biguint<16>(tmp2041_reg_228251.read()));
}

void a0_conv2d_1::thread_tmp2043_fu_170771_p2() {
    tmp2043_fu_170771_p2 = (!tmp2007_fu_170749_p2.read().is_01() || !tmp2042_fu_170758_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2007_fu_170749_p2.read()) + sc_biguint<16>(tmp2042_fu_170758_p2.read()));
}

void a0_conv2d_1::thread_tmp2044_fu_170789_p2() {
    tmp2044_fu_170789_p2 = (!tmp1972_fu_170739_p2.read().is_01() || !tmp2043_fu_170771_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1972_fu_170739_p2.read()) + sc_biguint<16>(tmp2043_fu_170771_p2.read()));
}

void a0_conv2d_1::thread_tmp2045_fu_170807_p2() {
    tmp2045_fu_170807_p2 = (!tmp1901_fu_170702_p2.read().is_01() || !tmp2044_fu_170789_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp1901_fu_170702_p2.read()) + sc_biguint<16>(tmp2044_fu_170789_p2.read()));
}

void a0_conv2d_1::thread_tmp2046_fu_116817_p2() {
    tmp2046_fu_116817_p2 = (!r4esult1_V_fu_85918_p4.read().is_01() || !r4esult2_V_fu_85931_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_fu_85918_p4.read()) + sc_biguint<16>(r4esult2_V_fu_85931_p4.read()));
}

void a0_conv2d_1::thread_tmp2047_fu_165820_p2() {
    tmp2047_fu_165820_p2 = (!r4esult3_V_fu_123748_p4.read().is_01() || !r4esult4_V_reg_213126.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_fu_123748_p4.read()) + sc_biguint<16>(r4esult4_V_reg_213126.read()));
}

void a0_conv2d_1::thread_tmp2048_fu_165834_p2() {
    tmp2048_fu_165834_p2 = (!tmp2046_reg_226321.read().is_01() || !tmp2047_fu_165820_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2046_reg_226321.read()) + sc_biguint<16>(tmp2047_fu_165820_p2.read()));
}

void a0_conv2d_1::thread_tmp2049_fu_165848_p2() {
    tmp2049_fu_165848_p2 = (!r4esult5_V_reg_213131.read().is_01() || !r4esult6_V_fu_123761_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_reg_213131.read()) + sc_biguint<16>(r4esult6_V_fu_123761_p4.read()));
}

void a0_conv2d_1::thread_tmp204_fu_141103_p2() {
    tmp204_fu_141103_p2 = (!tmp199_fu_141047_p2.read().is_01() || !tmp203_fu_141086_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp199_fu_141047_p2.read()) + sc_biguint<16>(tmp203_fu_141086_p2.read()));
}

void a0_conv2d_1::thread_tmp2050_fu_116859_p2() {
    tmp2050_fu_116859_p2 = (!r4esult1_V_1_fu_86299_p4.read().is_01() || !r4esult7_V_fu_85970_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_1_fu_86299_p4.read()) + sc_biguint<16>(r4esult7_V_fu_85970_p4.read()));
}

void a0_conv2d_1::thread_tmp2051_fu_116880_p2() {
    tmp2051_fu_116880_p2 = (!r4esult8_V_fu_85983_p4.read().is_01() || !tmp2050_fu_116859_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_fu_85983_p4.read()) + sc_biguint<16>(tmp2050_fu_116859_p2.read()));
}

void a0_conv2d_1::thread_tmp2052_fu_165858_p2() {
    tmp2052_fu_165858_p2 = (!tmp2049_fu_165848_p2.read().is_01() || !tmp2051_reg_226336.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2049_fu_165848_p2.read()) + sc_biguint<16>(tmp2051_reg_226336.read()));
}

void a0_conv2d_1::thread_tmp2053_fu_165874_p2() {
    tmp2053_fu_165874_p2 = (!tmp2048_fu_165834_p2.read().is_01() || !tmp2052_fu_165858_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2048_fu_165834_p2.read()) + sc_biguint<16>(tmp2052_fu_165858_p2.read()));
}

void a0_conv2d_1::thread_tmp2054_fu_165898_p2() {
    tmp2054_fu_165898_p2 = (!r4esult3_V_1_fu_123904_p4.read().is_01() || !r4esult9_V_fu_123774_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_1_fu_123904_p4.read()) + sc_biguint<16>(r4esult9_V_fu_123774_p4.read()));
}

void a0_conv2d_1::thread_tmp2055_fu_165904_p2() {
    tmp2055_fu_165904_p2 = (!r4esult5_V_1_reg_213266.read().is_01() || !r4esult2_V_1_reg_213251.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_1_reg_213266.read()) + sc_biguint<16>(r4esult2_V_1_reg_213251.read()));
}

void a0_conv2d_1::thread_tmp2056_fu_165914_p2() {
    tmp2056_fu_165914_p2 = (!tmp2054_fu_165898_p2.read().is_01() || !tmp2055_fu_165904_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2054_fu_165898_p2.read()) + sc_biguint<16>(tmp2055_fu_165904_p2.read()));
}

void a0_conv2d_1::thread_tmp2057_fu_165929_p2() {
    tmp2057_fu_165929_p2 = (!r4esult6_V_1_fu_123917_p4.read().is_01() || !r4esult4_V_1_reg_213261.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_1_fu_123917_p4.read()) + sc_biguint<16>(r4esult4_V_1_reg_213261.read()));
}

void a0_conv2d_1::thread_tmp2058_fu_116943_p2() {
    tmp2058_fu_116943_p2 = (!r4esult1_V_2_fu_86680_p4.read().is_01() || !r4esult7_V_1_fu_86351_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_2_fu_86680_p4.read()) + sc_biguint<16>(r4esult7_V_1_fu_86351_p4.read()));
}

void a0_conv2d_1::thread_tmp2059_fu_165934_p2() {
    tmp2059_fu_165934_p2 = (!r4esult8_V_1_reg_213276.read().is_01() || !tmp2058_reg_226356.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_1_reg_213276.read()) + sc_biguint<16>(tmp2058_reg_226356.read()));
}

void a0_conv2d_1::thread_tmp205_fu_141118_p2() {
    tmp205_fu_141118_p2 = (!result9_V_33_fu_128961_p4.read().is_01() || !result1_V_34_reg_217486.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_33_fu_128961_p4.read()) + sc_biguint<16>(result1_V_34_reg_217486.read()));
}

void a0_conv2d_1::thread_tmp2060_fu_165943_p2() {
    tmp2060_fu_165943_p2 = (!tmp2057_fu_165929_p2.read().is_01() || !tmp2059_fu_165934_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2057_fu_165929_p2.read()) + sc_biguint<16>(tmp2059_fu_165934_p2.read()));
}

void a0_conv2d_1::thread_tmp2061_fu_165959_p2() {
    tmp2061_fu_165959_p2 = (!tmp2056_fu_165914_p2.read().is_01() || !tmp2060_fu_165943_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2056_fu_165914_p2.read()) + sc_biguint<16>(tmp2060_fu_165943_p2.read()));
}

void a0_conv2d_1::thread_tmp2062_fu_165977_p2() {
    tmp2062_fu_165977_p2 = (!tmp2053_fu_165874_p2.read().is_01() || !tmp2061_fu_165959_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2053_fu_165874_p2.read()) + sc_biguint<16>(tmp2061_fu_165959_p2.read()));
}

void a0_conv2d_1::thread_tmp2063_fu_166001_p2() {
    tmp2063_fu_166001_p2 = (!r4esult3_V_2_fu_124060_p4.read().is_01() || !r4esult9_V_1_fu_123930_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_2_fu_124060_p4.read()) + sc_biguint<16>(r4esult9_V_1_fu_123930_p4.read()));
}

void a0_conv2d_1::thread_tmp2064_fu_166007_p2() {
    tmp2064_fu_166007_p2 = (!r4esult5_V_2_reg_213391.read().is_01() || !r4esult2_V_2_reg_213376.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_2_reg_213391.read()) + sc_biguint<16>(r4esult2_V_2_reg_213376.read()));
}

void a0_conv2d_1::thread_tmp2065_fu_166017_p2() {
    tmp2065_fu_166017_p2 = (!tmp2063_fu_166001_p2.read().is_01() || !tmp2064_fu_166007_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2063_fu_166001_p2.read()) + sc_biguint<16>(tmp2064_fu_166007_p2.read()));
}

void a0_conv2d_1::thread_tmp2066_fu_166032_p2() {
    tmp2066_fu_166032_p2 = (!r4esult6_V_2_fu_124073_p4.read().is_01() || !r4esult4_V_2_reg_213386.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_2_fu_124073_p4.read()) + sc_biguint<16>(r4esult4_V_2_reg_213386.read()));
}

void a0_conv2d_1::thread_tmp2067_fu_117021_p2() {
    tmp2067_fu_117021_p2 = (!r4esult1_V_3_fu_87061_p4.read().is_01() || !r4esult7_V_2_fu_86732_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_3_fu_87061_p4.read()) + sc_biguint<16>(r4esult7_V_2_fu_86732_p4.read()));
}

void a0_conv2d_1::thread_tmp2068_fu_117042_p2() {
    tmp2068_fu_117042_p2 = (!r4esult8_V_2_fu_86745_p4.read().is_01() || !tmp2067_fu_117021_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_2_fu_86745_p4.read()) + sc_biguint<16>(tmp2067_fu_117021_p2.read()));
}

void a0_conv2d_1::thread_tmp2069_fu_166042_p2() {
    tmp2069_fu_166042_p2 = (!tmp2066_fu_166032_p2.read().is_01() || !tmp2068_reg_226376.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2066_fu_166032_p2.read()) + sc_biguint<16>(tmp2068_reg_226376.read()));
}

void a0_conv2d_1::thread_tmp206_fu_141132_p2() {
    tmp206_fu_141132_p2 = (!result2_V_34_reg_217491.read().is_01() || !result3_V_34_fu_129091_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_34_reg_217491.read()) + sc_biguint<16>(result3_V_34_fu_129091_p4.read()));
}

void a0_conv2d_1::thread_tmp2070_fu_166057_p2() {
    tmp2070_fu_166057_p2 = (!tmp2065_fu_166017_p2.read().is_01() || !tmp2069_fu_166042_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2065_fu_166017_p2.read()) + sc_biguint<16>(tmp2069_fu_166042_p2.read()));
}

void a0_conv2d_1::thread_tmp2071_fu_166081_p2() {
    tmp2071_fu_166081_p2 = (!r4esult3_V_3_fu_124216_p4.read().is_01() || !r4esult9_V_2_fu_124086_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_3_fu_124216_p4.read()) + sc_biguint<16>(r4esult9_V_2_fu_124086_p4.read()));
}

void a0_conv2d_1::thread_tmp2072_fu_166087_p2() {
    tmp2072_fu_166087_p2 = (!r4esult5_V_3_reg_213511.read().is_01() || !r4esult2_V_3_reg_213496.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_3_reg_213511.read()) + sc_biguint<16>(r4esult2_V_3_reg_213496.read()));
}

void a0_conv2d_1::thread_tmp2073_fu_166097_p2() {
    tmp2073_fu_166097_p2 = (!tmp2071_fu_166081_p2.read().is_01() || !tmp2072_fu_166087_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2071_fu_166081_p2.read()) + sc_biguint<16>(tmp2072_fu_166087_p2.read()));
}

void a0_conv2d_1::thread_tmp2074_fu_166112_p2() {
    tmp2074_fu_166112_p2 = (!r4esult6_V_3_fu_124229_p4.read().is_01() || !r4esult4_V_3_reg_213506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_3_fu_124229_p4.read()) + sc_biguint<16>(r4esult4_V_3_reg_213506.read()));
}

void a0_conv2d_1::thread_tmp2075_fu_117105_p2() {
    tmp2075_fu_117105_p2 = (!r4esult1_V_4_fu_87442_p4.read().is_01() || !r4esult7_V_3_fu_87113_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_4_fu_87442_p4.read()) + sc_biguint<16>(r4esult7_V_3_fu_87113_p4.read()));
}

void a0_conv2d_1::thread_tmp2076_fu_117126_p2() {
    tmp2076_fu_117126_p2 = (!r4esult8_V_3_fu_87126_p4.read().is_01() || !tmp2075_fu_117105_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_3_fu_87126_p4.read()) + sc_biguint<16>(tmp2075_fu_117105_p2.read()));
}

void a0_conv2d_1::thread_tmp2077_fu_166122_p2() {
    tmp2077_fu_166122_p2 = (!tmp2074_fu_166112_p2.read().is_01() || !tmp2076_reg_226396.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2074_fu_166112_p2.read()) + sc_biguint<16>(tmp2076_reg_226396.read()));
}

void a0_conv2d_1::thread_tmp2078_fu_166137_p2() {
    tmp2078_fu_166137_p2 = (!tmp2073_fu_166097_p2.read().is_01() || !tmp2077_fu_166122_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2073_fu_166097_p2.read()) + sc_biguint<16>(tmp2077_fu_166122_p2.read()));
}

void a0_conv2d_1::thread_tmp2079_fu_166155_p2() {
    tmp2079_fu_166155_p2 = (!tmp2070_fu_166057_p2.read().is_01() || !tmp2078_fu_166137_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2070_fu_166057_p2.read()) + sc_biguint<16>(tmp2078_fu_166137_p2.read()));
}

void a0_conv2d_1::thread_tmp207_fu_141147_p2() {
    tmp207_fu_141147_p2 = (!tmp205_fu_141118_p2.read().is_01() || !tmp206_fu_141132_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp205_fu_141118_p2.read()) + sc_biguint<16>(tmp206_fu_141132_p2.read()));
}

void a0_conv2d_1::thread_tmp2080_fu_166173_p2() {
    tmp2080_fu_166173_p2 = (!tmp2062_fu_165977_p2.read().is_01() || !tmp2079_fu_166155_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2062_fu_165977_p2.read()) + sc_biguint<16>(tmp2079_fu_166155_p2.read()));
}

void a0_conv2d_1::thread_tmp2081_fu_166197_p2() {
    tmp2081_fu_166197_p2 = (!r4esult3_V_4_fu_124372_p4.read().is_01() || !r4esult9_V_3_fu_124242_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_4_fu_124372_p4.read()) + sc_biguint<16>(r4esult9_V_3_fu_124242_p4.read()));
}

void a0_conv2d_1::thread_tmp2082_fu_166203_p2() {
    tmp2082_fu_166203_p2 = (!r4esult5_V_4_reg_213631.read().is_01() || !r4esult2_V_4_reg_213616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_4_reg_213631.read()) + sc_biguint<16>(r4esult2_V_4_reg_213616.read()));
}

void a0_conv2d_1::thread_tmp2083_fu_166213_p2() {
    tmp2083_fu_166213_p2 = (!tmp2081_fu_166197_p2.read().is_01() || !tmp2082_fu_166203_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2081_fu_166197_p2.read()) + sc_biguint<16>(tmp2082_fu_166203_p2.read()));
}

void a0_conv2d_1::thread_tmp2084_fu_166228_p2() {
    tmp2084_fu_166228_p2 = (!r4esult6_V_4_fu_124385_p4.read().is_01() || !r4esult4_V_4_reg_213626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_4_fu_124385_p4.read()) + sc_biguint<16>(r4esult4_V_4_reg_213626.read()));
}

void a0_conv2d_1::thread_tmp2085_fu_117189_p2() {
    tmp2085_fu_117189_p2 = (!r4esult1_V_5_fu_87823_p4.read().is_01() || !r4esult7_V_4_fu_87494_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_5_fu_87823_p4.read()) + sc_biguint<16>(r4esult7_V_4_fu_87494_p4.read()));
}

void a0_conv2d_1::thread_tmp2086_fu_117210_p2() {
    tmp2086_fu_117210_p2 = (!r4esult8_V_4_fu_87507_p4.read().is_01() || !tmp2085_fu_117189_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_4_fu_87507_p4.read()) + sc_biguint<16>(tmp2085_fu_117189_p2.read()));
}

void a0_conv2d_1::thread_tmp2087_fu_166238_p2() {
    tmp2087_fu_166238_p2 = (!tmp2084_fu_166228_p2.read().is_01() || !tmp2086_reg_226416.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2084_fu_166228_p2.read()) + sc_biguint<16>(tmp2086_reg_226416.read()));
}

void a0_conv2d_1::thread_tmp2088_fu_166253_p2() {
    tmp2088_fu_166253_p2 = (!tmp2083_fu_166213_p2.read().is_01() || !tmp2087_fu_166238_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2083_fu_166213_p2.read()) + sc_biguint<16>(tmp2087_fu_166238_p2.read()));
}

void a0_conv2d_1::thread_tmp2089_fu_166277_p2() {
    tmp2089_fu_166277_p2 = (!r4esult3_V_5_fu_124528_p4.read().is_01() || !r4esult9_V_4_fu_124398_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_5_fu_124528_p4.read()) + sc_biguint<16>(r4esult9_V_4_fu_124398_p4.read()));
}

void a0_conv2d_1::thread_tmp208_fu_105225_p2() {
    tmp208_fu_105225_p2 = (!result4_V_34_fu_98999_p4.read().is_01() || !result5_V_34_fu_99012_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_34_fu_98999_p4.read()) + sc_biguint<16>(result5_V_34_fu_99012_p4.read()));
}

void a0_conv2d_1::thread_tmp2090_fu_166283_p2() {
    tmp2090_fu_166283_p2 = (!r4esult5_V_5_reg_213766.read().is_01() || !r4esult2_V_5_reg_213751.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_5_reg_213766.read()) + sc_biguint<16>(r4esult2_V_5_reg_213751.read()));
}

void a0_conv2d_1::thread_tmp2091_fu_166293_p2() {
    tmp2091_fu_166293_p2 = (!tmp2089_fu_166277_p2.read().is_01() || !tmp2090_fu_166283_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2089_fu_166277_p2.read()) + sc_biguint<16>(tmp2090_fu_166283_p2.read()));
}

void a0_conv2d_1::thread_tmp2092_fu_166308_p2() {
    tmp2092_fu_166308_p2 = (!r4esult6_V_5_fu_124541_p4.read().is_01() || !r4esult4_V_5_reg_213761.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_5_fu_124541_p4.read()) + sc_biguint<16>(r4esult4_V_5_reg_213761.read()));
}

void a0_conv2d_1::thread_tmp2093_fu_117273_p2() {
    tmp2093_fu_117273_p2 = (!r4esult1_V_6_fu_88204_p4.read().is_01() || !r4esult7_V_5_fu_87875_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_6_fu_88204_p4.read()) + sc_biguint<16>(r4esult7_V_5_fu_87875_p4.read()));
}

void a0_conv2d_1::thread_tmp2094_fu_166313_p2() {
    tmp2094_fu_166313_p2 = (!r4esult8_V_5_reg_213776.read().is_01() || !tmp2093_reg_226436.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_5_reg_213776.read()) + sc_biguint<16>(tmp2093_reg_226436.read()));
}

void a0_conv2d_1::thread_tmp2095_fu_166322_p2() {
    tmp2095_fu_166322_p2 = (!tmp2092_fu_166308_p2.read().is_01() || !tmp2094_fu_166313_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2092_fu_166308_p2.read()) + sc_biguint<16>(tmp2094_fu_166313_p2.read()));
}

void a0_conv2d_1::thread_tmp2096_fu_166338_p2() {
    tmp2096_fu_166338_p2 = (!tmp2091_fu_166293_p2.read().is_01() || !tmp2095_fu_166322_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2091_fu_166293_p2.read()) + sc_biguint<16>(tmp2095_fu_166322_p2.read()));
}

void a0_conv2d_1::thread_tmp2097_fu_166356_p2() {
    tmp2097_fu_166356_p2 = (!tmp2088_fu_166253_p2.read().is_01() || !tmp2096_fu_166338_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2088_fu_166253_p2.read()) + sc_biguint<16>(tmp2096_fu_166338_p2.read()));
}

void a0_conv2d_1::thread_tmp2098_fu_166380_p2() {
    tmp2098_fu_166380_p2 = (!r4esult3_V_6_fu_124684_p4.read().is_01() || !r4esult9_V_5_fu_124554_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_6_fu_124684_p4.read()) + sc_biguint<16>(r4esult9_V_5_fu_124554_p4.read()));
}

void a0_conv2d_1::thread_tmp2099_fu_166386_p2() {
    tmp2099_fu_166386_p2 = (!r4esult5_V_6_reg_213891.read().is_01() || !r4esult2_V_6_reg_213876.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_6_reg_213891.read()) + sc_biguint<16>(r4esult2_V_6_reg_213876.read()));
}

void a0_conv2d_1::thread_tmp209_fu_141153_p2() {
    tmp209_fu_141153_p2 = (!result7_V_34_reg_217506.read().is_01() || !result8_V_34_reg_217511.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_34_reg_217506.read()) + sc_biguint<16>(result8_V_34_reg_217511.read()));
}

void a0_conv2d_1::thread_tmp20_mid1_fu_70462_p2() {
    tmp20_mid1_fu_70462_p2 = (!ap_const_lv8_84.is_01() || !tmp_23_cast1_mid1_fu_70416_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_84) + sc_biguint<8>(tmp_23_cast1_mid1_fu_70416_p1.read()));
}

void a0_conv2d_1::thread_tmp2100_fu_166396_p2() {
    tmp2100_fu_166396_p2 = (!tmp2098_fu_166380_p2.read().is_01() || !tmp2099_fu_166386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2098_fu_166380_p2.read()) + sc_biguint<16>(tmp2099_fu_166386_p2.read()));
}

void a0_conv2d_1::thread_tmp2101_fu_166411_p2() {
    tmp2101_fu_166411_p2 = (!r4esult6_V_6_fu_124697_p4.read().is_01() || !r4esult4_V_6_reg_213886.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_6_fu_124697_p4.read()) + sc_biguint<16>(r4esult4_V_6_reg_213886.read()));
}

void a0_conv2d_1::thread_tmp2102_fu_117351_p2() {
    tmp2102_fu_117351_p2 = (!r4esult1_V_7_fu_88585_p4.read().is_01() || !r4esult7_V_6_fu_88256_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_7_fu_88585_p4.read()) + sc_biguint<16>(r4esult7_V_6_fu_88256_p4.read()));
}

void a0_conv2d_1::thread_tmp2103_fu_117372_p2() {
    tmp2103_fu_117372_p2 = (!r4esult8_V_6_fu_88269_p4.read().is_01() || !tmp2102_fu_117351_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_6_fu_88269_p4.read()) + sc_biguint<16>(tmp2102_fu_117351_p2.read()));
}

void a0_conv2d_1::thread_tmp2104_fu_166421_p2() {
    tmp2104_fu_166421_p2 = (!tmp2101_fu_166411_p2.read().is_01() || !tmp2103_reg_226456.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2101_fu_166411_p2.read()) + sc_biguint<16>(tmp2103_reg_226456.read()));
}

void a0_conv2d_1::thread_tmp2105_fu_166436_p2() {
    tmp2105_fu_166436_p2 = (!tmp2100_fu_166396_p2.read().is_01() || !tmp2104_fu_166421_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2100_fu_166396_p2.read()) + sc_biguint<16>(tmp2104_fu_166421_p2.read()));
}

void a0_conv2d_1::thread_tmp2106_fu_166460_p2() {
    tmp2106_fu_166460_p2 = (!r4esult3_V_7_fu_124840_p4.read().is_01() || !r4esult9_V_6_fu_124710_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_7_fu_124840_p4.read()) + sc_biguint<16>(r4esult9_V_6_fu_124710_p4.read()));
}

void a0_conv2d_1::thread_tmp2107_fu_166466_p2() {
    tmp2107_fu_166466_p2 = (!r4esult5_V_7_reg_214026.read().is_01() || !r4esult2_V_7_reg_214011.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_7_reg_214026.read()) + sc_biguint<16>(r4esult2_V_7_reg_214011.read()));
}

void a0_conv2d_1::thread_tmp2108_fu_166476_p2() {
    tmp2108_fu_166476_p2 = (!tmp2106_fu_166460_p2.read().is_01() || !tmp2107_fu_166466_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2106_fu_166460_p2.read()) + sc_biguint<16>(tmp2107_fu_166466_p2.read()));
}

void a0_conv2d_1::thread_tmp2109_fu_166491_p2() {
    tmp2109_fu_166491_p2 = (!r4esult6_V_7_fu_124853_p4.read().is_01() || !r4esult4_V_7_reg_214021.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_7_fu_124853_p4.read()) + sc_biguint<16>(r4esult4_V_7_reg_214021.read()));
}

void a0_conv2d_1::thread_tmp210_fu_141170_p2() {
    tmp210_fu_141170_p2 = (!result6_V_34_fu_129104_p4.read().is_01() || !tmp209_fu_141153_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_34_fu_129104_p4.read()) + sc_biguint<16>(tmp209_fu_141153_p2.read()));
}

void a0_conv2d_1::thread_tmp2110_fu_117435_p2() {
    tmp2110_fu_117435_p2 = (!r4esult1_V_8_fu_88966_p4.read().is_01() || !r4esult7_V_7_fu_88637_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_8_fu_88966_p4.read()) + sc_biguint<16>(r4esult7_V_7_fu_88637_p4.read()));
}

void a0_conv2d_1::thread_tmp2111_fu_166496_p2() {
    tmp2111_fu_166496_p2 = (!r4esult8_V_7_reg_214036.read().is_01() || !tmp2110_reg_226476.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_7_reg_214036.read()) + sc_biguint<16>(tmp2110_reg_226476.read()));
}

void a0_conv2d_1::thread_tmp2112_fu_166505_p2() {
    tmp2112_fu_166505_p2 = (!tmp2109_fu_166491_p2.read().is_01() || !tmp2111_fu_166496_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2109_fu_166491_p2.read()) + sc_biguint<16>(tmp2111_fu_166496_p2.read()));
}

void a0_conv2d_1::thread_tmp2113_fu_166521_p2() {
    tmp2113_fu_166521_p2 = (!tmp2108_fu_166476_p2.read().is_01() || !tmp2112_fu_166505_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2108_fu_166476_p2.read()) + sc_biguint<16>(tmp2112_fu_166505_p2.read()));
}

void a0_conv2d_1::thread_tmp2114_fu_166539_p2() {
    tmp2114_fu_166539_p2 = (!tmp2105_fu_166436_p2.read().is_01() || !tmp2113_fu_166521_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2105_fu_166436_p2.read()) + sc_biguint<16>(tmp2113_fu_166521_p2.read()));
}

void a0_conv2d_1::thread_tmp2115_fu_170813_p2() {
    tmp2115_fu_170813_p2 = (!tmp2097_reg_228276.read().is_01() || !tmp2114_reg_228281.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2097_reg_228276.read()) + sc_biguint<16>(tmp2114_reg_228281.read()));
}

void a0_conv2d_1::thread_tmp2116_fu_170821_p2() {
    tmp2116_fu_170821_p2 = (!tmp2080_reg_228271.read().is_01() || !tmp2115_fu_170813_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2080_reg_228271.read()) + sc_biguint<16>(tmp2115_fu_170813_p2.read()));
}

void a0_conv2d_1::thread_tmp2117_fu_166581_p2() {
    tmp2117_fu_166581_p2 = (!r4esult3_V_8_fu_124996_p4.read().is_01() || !r4esult9_V_7_fu_124866_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_8_fu_124996_p4.read()) + sc_biguint<16>(r4esult9_V_7_fu_124866_p4.read()));
}

void a0_conv2d_1::thread_tmp2118_fu_166587_p2() {
    tmp2118_fu_166587_p2 = (!r4esult5_V_8_reg_214151.read().is_01() || !r4esult2_V_8_reg_214136.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_8_reg_214151.read()) + sc_biguint<16>(r4esult2_V_8_reg_214136.read()));
}

void a0_conv2d_1::thread_tmp2119_fu_166597_p2() {
    tmp2119_fu_166597_p2 = (!tmp2117_fu_166581_p2.read().is_01() || !tmp2118_fu_166587_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2117_fu_166581_p2.read()) + sc_biguint<16>(tmp2118_fu_166587_p2.read()));
}

void a0_conv2d_1::thread_tmp211_fu_141186_p2() {
    tmp211_fu_141186_p2 = (!tmp208_reg_221981.read().is_01() || !tmp210_fu_141170_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp208_reg_221981.read()) + sc_biguint<16>(tmp210_fu_141170_p2.read()));
}

void a0_conv2d_1::thread_tmp2120_fu_166612_p2() {
    tmp2120_fu_166612_p2 = (!r4esult6_V_8_fu_125009_p4.read().is_01() || !r4esult4_V_8_reg_214146.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_8_fu_125009_p4.read()) + sc_biguint<16>(r4esult4_V_8_reg_214146.read()));
}

void a0_conv2d_1::thread_tmp2121_fu_117513_p2() {
    tmp2121_fu_117513_p2 = (!r4esult1_V_9_fu_89347_p4.read().is_01() || !r4esult7_V_8_fu_89018_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_9_fu_89347_p4.read()) + sc_biguint<16>(r4esult7_V_8_fu_89018_p4.read()));
}

void a0_conv2d_1::thread_tmp2122_fu_117534_p2() {
    tmp2122_fu_117534_p2 = (!r4esult8_V_8_fu_89031_p4.read().is_01() || !tmp2121_fu_117513_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_8_fu_89031_p4.read()) + sc_biguint<16>(tmp2121_fu_117513_p2.read()));
}

void a0_conv2d_1::thread_tmp2123_fu_166622_p2() {
    tmp2123_fu_166622_p2 = (!tmp2120_fu_166612_p2.read().is_01() || !tmp2122_reg_226496.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2120_fu_166612_p2.read()) + sc_biguint<16>(tmp2122_reg_226496.read()));
}

void a0_conv2d_1::thread_tmp2124_fu_166637_p2() {
    tmp2124_fu_166637_p2 = (!tmp2119_fu_166597_p2.read().is_01() || !tmp2123_fu_166622_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2119_fu_166597_p2.read()) + sc_biguint<16>(tmp2123_fu_166622_p2.read()));
}

void a0_conv2d_1::thread_tmp2125_fu_166661_p2() {
    tmp2125_fu_166661_p2 = (!r4esult3_V_9_fu_125152_p4.read().is_01() || !r4esult9_V_8_fu_125022_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_9_fu_125152_p4.read()) + sc_biguint<16>(r4esult9_V_8_fu_125022_p4.read()));
}

void a0_conv2d_1::thread_tmp2126_fu_166667_p2() {
    tmp2126_fu_166667_p2 = (!r4esult5_V_9_reg_214286.read().is_01() || !r4esult2_V_9_reg_214271.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_9_reg_214286.read()) + sc_biguint<16>(r4esult2_V_9_reg_214271.read()));
}

void a0_conv2d_1::thread_tmp2127_fu_166677_p2() {
    tmp2127_fu_166677_p2 = (!tmp2125_fu_166661_p2.read().is_01() || !tmp2126_fu_166667_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2125_fu_166661_p2.read()) + sc_biguint<16>(tmp2126_fu_166667_p2.read()));
}

void a0_conv2d_1::thread_tmp2128_fu_166692_p2() {
    tmp2128_fu_166692_p2 = (!r4esult6_V_9_fu_125165_p4.read().is_01() || !r4esult4_V_9_reg_214281.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_9_fu_125165_p4.read()) + sc_biguint<16>(r4esult4_V_9_reg_214281.read()));
}

void a0_conv2d_1::thread_tmp2129_fu_117597_p2() {
    tmp2129_fu_117597_p2 = (!r4esult1_V_s_fu_89728_p4.read().is_01() || !r4esult7_V_9_fu_89399_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_s_fu_89728_p4.read()) + sc_biguint<16>(r4esult7_V_9_fu_89399_p4.read()));
}

void a0_conv2d_1::thread_tmp212_fu_141203_p2() {
    tmp212_fu_141203_p2 = (!tmp207_fu_141147_p2.read().is_01() || !tmp211_fu_141186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp207_fu_141147_p2.read()) + sc_biguint<16>(tmp211_fu_141186_p2.read()));
}

void a0_conv2d_1::thread_tmp2130_fu_166697_p2() {
    tmp2130_fu_166697_p2 = (!r4esult8_V_9_reg_214296.read().is_01() || !tmp2129_reg_226516.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_9_reg_214296.read()) + sc_biguint<16>(tmp2129_reg_226516.read()));
}

void a0_conv2d_1::thread_tmp2131_fu_166706_p2() {
    tmp2131_fu_166706_p2 = (!tmp2128_fu_166692_p2.read().is_01() || !tmp2130_fu_166697_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2128_fu_166692_p2.read()) + sc_biguint<16>(tmp2130_fu_166697_p2.read()));
}

void a0_conv2d_1::thread_tmp2132_fu_166722_p2() {
    tmp2132_fu_166722_p2 = (!tmp2127_fu_166677_p2.read().is_01() || !tmp2131_fu_166706_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2127_fu_166677_p2.read()) + sc_biguint<16>(tmp2131_fu_166706_p2.read()));
}

void a0_conv2d_1::thread_tmp2133_fu_166740_p2() {
    tmp2133_fu_166740_p2 = (!tmp2124_fu_166637_p2.read().is_01() || !tmp2132_fu_166722_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2124_fu_166637_p2.read()) + sc_biguint<16>(tmp2132_fu_166722_p2.read()));
}

void a0_conv2d_1::thread_tmp2134_fu_166764_p2() {
    tmp2134_fu_166764_p2 = (!r4esult3_V_s_fu_125308_p4.read().is_01() || !r4esult9_V_9_fu_125178_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_s_fu_125308_p4.read()) + sc_biguint<16>(r4esult9_V_9_fu_125178_p4.read()));
}

void a0_conv2d_1::thread_tmp2135_fu_166770_p2() {
    tmp2135_fu_166770_p2 = (!r4esult5_V_s_reg_214411.read().is_01() || !r4esult2_V_s_reg_214396.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_s_reg_214411.read()) + sc_biguint<16>(r4esult2_V_s_reg_214396.read()));
}

void a0_conv2d_1::thread_tmp2136_fu_166780_p2() {
    tmp2136_fu_166780_p2 = (!tmp2134_fu_166764_p2.read().is_01() || !tmp2135_fu_166770_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2134_fu_166764_p2.read()) + sc_biguint<16>(tmp2135_fu_166770_p2.read()));
}

void a0_conv2d_1::thread_tmp2137_fu_166795_p2() {
    tmp2137_fu_166795_p2 = (!r4esult6_V_s_fu_125321_p4.read().is_01() || !r4esult4_V_s_reg_214406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_s_fu_125321_p4.read()) + sc_biguint<16>(r4esult4_V_s_reg_214406.read()));
}

void a0_conv2d_1::thread_tmp2138_fu_117675_p2() {
    tmp2138_fu_117675_p2 = (!r4esult1_V_10_fu_90109_p4.read().is_01() || !r4esult7_V_s_fu_89780_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_10_fu_90109_p4.read()) + sc_biguint<16>(r4esult7_V_s_fu_89780_p4.read()));
}

void a0_conv2d_1::thread_tmp2139_fu_117696_p2() {
    tmp2139_fu_117696_p2 = (!r4esult8_V_s_fu_89793_p4.read().is_01() || !tmp2138_fu_117675_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_s_fu_89793_p4.read()) + sc_biguint<16>(tmp2138_fu_117675_p2.read()));
}

void a0_conv2d_1::thread_tmp213_fu_169664_p2() {
    tmp213_fu_169664_p2 = (!tmp204_reg_227076.read().is_01() || !tmp212_reg_227081.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp204_reg_227076.read()) + sc_biguint<16>(tmp212_reg_227081.read()));
}

void a0_conv2d_1::thread_tmp2140_fu_166805_p2() {
    tmp2140_fu_166805_p2 = (!tmp2137_fu_166795_p2.read().is_01() || !tmp2139_reg_226536.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2137_fu_166795_p2.read()) + sc_biguint<16>(tmp2139_reg_226536.read()));
}

void a0_conv2d_1::thread_tmp2141_fu_166820_p2() {
    tmp2141_fu_166820_p2 = (!tmp2136_fu_166780_p2.read().is_01() || !tmp2140_fu_166805_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2136_fu_166780_p2.read()) + sc_biguint<16>(tmp2140_fu_166805_p2.read()));
}

void a0_conv2d_1::thread_tmp2142_fu_166844_p2() {
    tmp2142_fu_166844_p2 = (!r4esult3_V_10_fu_125464_p4.read().is_01() || !r4esult9_V_s_fu_125334_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_10_fu_125464_p4.read()) + sc_biguint<16>(r4esult9_V_s_fu_125334_p4.read()));
}

void a0_conv2d_1::thread_tmp2143_fu_166850_p2() {
    tmp2143_fu_166850_p2 = (!r4esult5_V_10_reg_214531.read().is_01() || !r4esult2_V_10_reg_214516.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_10_reg_214531.read()) + sc_biguint<16>(r4esult2_V_10_reg_214516.read()));
}

void a0_conv2d_1::thread_tmp2144_fu_166860_p2() {
    tmp2144_fu_166860_p2 = (!tmp2142_fu_166844_p2.read().is_01() || !tmp2143_fu_166850_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2142_fu_166844_p2.read()) + sc_biguint<16>(tmp2143_fu_166850_p2.read()));
}

void a0_conv2d_1::thread_tmp2145_fu_166875_p2() {
    tmp2145_fu_166875_p2 = (!r4esult6_V_10_fu_125477_p4.read().is_01() || !r4esult4_V_10_reg_214526.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_10_fu_125477_p4.read()) + sc_biguint<16>(r4esult4_V_10_reg_214526.read()));
}

void a0_conv2d_1::thread_tmp2146_fu_117759_p2() {
    tmp2146_fu_117759_p2 = (!r4esult1_V_11_fu_90490_p4.read().is_01() || !r4esult7_V_10_fu_90161_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_11_fu_90490_p4.read()) + sc_biguint<16>(r4esult7_V_10_fu_90161_p4.read()));
}

void a0_conv2d_1::thread_tmp2147_fu_117780_p2() {
    tmp2147_fu_117780_p2 = (!r4esult8_V_10_fu_90174_p4.read().is_01() || !tmp2146_fu_117759_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_10_fu_90174_p4.read()) + sc_biguint<16>(tmp2146_fu_117759_p2.read()));
}

void a0_conv2d_1::thread_tmp2148_fu_166885_p2() {
    tmp2148_fu_166885_p2 = (!tmp2145_fu_166875_p2.read().is_01() || !tmp2147_reg_226556.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2145_fu_166875_p2.read()) + sc_biguint<16>(tmp2147_reg_226556.read()));
}

void a0_conv2d_1::thread_tmp2149_fu_166900_p2() {
    tmp2149_fu_166900_p2 = (!tmp2144_fu_166860_p2.read().is_01() || !tmp2148_fu_166885_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2144_fu_166860_p2.read()) + sc_biguint<16>(tmp2148_fu_166885_p2.read()));
}

void a0_conv2d_1::thread_tmp214_fu_169672_p2() {
    tmp214_fu_169672_p2 = (!tmp196_reg_227071.read().is_01() || !tmp213_fu_169664_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp196_reg_227071.read()) + sc_biguint<16>(tmp213_fu_169664_p2.read()));
}

void a0_conv2d_1::thread_tmp2150_fu_170826_p2() {
    tmp2150_fu_170826_p2 = (!tmp2141_reg_228296.read().is_01() || !tmp2149_reg_228301.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2141_reg_228296.read()) + sc_biguint<16>(tmp2149_reg_228301.read()));
}

void a0_conv2d_1::thread_tmp2151_fu_170830_p2() {
    tmp2151_fu_170830_p2 = (!tmp2133_reg_228291.read().is_01() || !tmp2150_fu_170826_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2133_reg_228291.read()) + sc_biguint<16>(tmp2150_fu_170826_p2.read()));
}

void a0_conv2d_1::thread_tmp2152_fu_166948_p2() {
    tmp2152_fu_166948_p2 = (!r4esult3_V_11_fu_125620_p4.read().is_01() || !r4esult9_V_10_fu_125490_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_11_fu_125620_p4.read()) + sc_biguint<16>(r4esult9_V_10_fu_125490_p4.read()));
}

void a0_conv2d_1::thread_tmp2153_fu_166954_p2() {
    tmp2153_fu_166954_p2 = (!r4esult5_V_11_reg_214651.read().is_01() || !r4esult2_V_11_reg_214636.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_11_reg_214651.read()) + sc_biguint<16>(r4esult2_V_11_reg_214636.read()));
}

void a0_conv2d_1::thread_tmp2154_fu_166964_p2() {
    tmp2154_fu_166964_p2 = (!tmp2152_fu_166948_p2.read().is_01() || !tmp2153_fu_166954_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2152_fu_166948_p2.read()) + sc_biguint<16>(tmp2153_fu_166954_p2.read()));
}

void a0_conv2d_1::thread_tmp2155_fu_166979_p2() {
    tmp2155_fu_166979_p2 = (!r4esult6_V_11_fu_125633_p4.read().is_01() || !r4esult4_V_11_reg_214646.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_11_fu_125633_p4.read()) + sc_biguint<16>(r4esult4_V_11_reg_214646.read()));
}

void a0_conv2d_1::thread_tmp2156_fu_117843_p2() {
    tmp2156_fu_117843_p2 = (!r4esult1_V_12_fu_90871_p4.read().is_01() || !r4esult7_V_11_fu_90542_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_12_fu_90871_p4.read()) + sc_biguint<16>(r4esult7_V_11_fu_90542_p4.read()));
}

void a0_conv2d_1::thread_tmp2157_fu_117864_p2() {
    tmp2157_fu_117864_p2 = (!r4esult8_V_11_fu_90555_p4.read().is_01() || !tmp2156_fu_117843_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_11_fu_90555_p4.read()) + sc_biguint<16>(tmp2156_fu_117843_p2.read()));
}

void a0_conv2d_1::thread_tmp2158_fu_166989_p2() {
    tmp2158_fu_166989_p2 = (!tmp2155_fu_166979_p2.read().is_01() || !tmp2157_reg_226576.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2155_fu_166979_p2.read()) + sc_biguint<16>(tmp2157_reg_226576.read()));
}

void a0_conv2d_1::thread_tmp2159_fu_167004_p2() {
    tmp2159_fu_167004_p2 = (!tmp2154_fu_166964_p2.read().is_01() || !tmp2158_fu_166989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2154_fu_166964_p2.read()) + sc_biguint<16>(tmp2158_fu_166989_p2.read()));
}

void a0_conv2d_1::thread_tmp215_fu_141236_p2() {
    tmp215_fu_141236_p2 = (!result9_V_34_fu_129117_p4.read().is_01() || !result1_V_35_reg_217626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_34_fu_129117_p4.read()) + sc_biguint<16>(result1_V_35_reg_217626.read()));
}

void a0_conv2d_1::thread_tmp2160_fu_167028_p2() {
    tmp2160_fu_167028_p2 = (!r4esult3_V_12_fu_125776_p4.read().is_01() || !r4esult9_V_11_fu_125646_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_12_fu_125776_p4.read()) + sc_biguint<16>(r4esult9_V_11_fu_125646_p4.read()));
}

void a0_conv2d_1::thread_tmp2161_fu_167034_p2() {
    tmp2161_fu_167034_p2 = (!r4esult5_V_12_reg_214786.read().is_01() || !r4esult2_V_12_reg_214771.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_12_reg_214786.read()) + sc_biguint<16>(r4esult2_V_12_reg_214771.read()));
}

void a0_conv2d_1::thread_tmp2162_fu_167044_p2() {
    tmp2162_fu_167044_p2 = (!tmp2160_fu_167028_p2.read().is_01() || !tmp2161_fu_167034_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2160_fu_167028_p2.read()) + sc_biguint<16>(tmp2161_fu_167034_p2.read()));
}

void a0_conv2d_1::thread_tmp2163_fu_167059_p2() {
    tmp2163_fu_167059_p2 = (!r4esult6_V_12_fu_125789_p4.read().is_01() || !r4esult4_V_12_reg_214781.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_12_fu_125789_p4.read()) + sc_biguint<16>(r4esult4_V_12_reg_214781.read()));
}

void a0_conv2d_1::thread_tmp2164_fu_117927_p2() {
    tmp2164_fu_117927_p2 = (!r4esult1_V_13_fu_91252_p4.read().is_01() || !r4esult7_V_12_fu_90923_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_13_fu_91252_p4.read()) + sc_biguint<16>(r4esult7_V_12_fu_90923_p4.read()));
}

void a0_conv2d_1::thread_tmp2165_fu_167064_p2() {
    tmp2165_fu_167064_p2 = (!r4esult8_V_12_reg_214796.read().is_01() || !tmp2164_reg_226596.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_12_reg_214796.read()) + sc_biguint<16>(tmp2164_reg_226596.read()));
}

void a0_conv2d_1::thread_tmp2166_fu_167073_p2() {
    tmp2166_fu_167073_p2 = (!tmp2163_fu_167059_p2.read().is_01() || !tmp2165_fu_167064_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2163_fu_167059_p2.read()) + sc_biguint<16>(tmp2165_fu_167064_p2.read()));
}

void a0_conv2d_1::thread_tmp2167_fu_167089_p2() {
    tmp2167_fu_167089_p2 = (!tmp2162_fu_167044_p2.read().is_01() || !tmp2166_fu_167073_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2162_fu_167044_p2.read()) + sc_biguint<16>(tmp2166_fu_167073_p2.read()));
}

void a0_conv2d_1::thread_tmp2168_fu_167107_p2() {
    tmp2168_fu_167107_p2 = (!tmp2159_fu_167004_p2.read().is_01() || !tmp2167_fu_167089_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2159_fu_167004_p2.read()) + sc_biguint<16>(tmp2167_fu_167089_p2.read()));
}

void a0_conv2d_1::thread_tmp2169_fu_167131_p2() {
    tmp2169_fu_167131_p2 = (!r4esult3_V_13_fu_125932_p4.read().is_01() || !r4esult9_V_12_fu_125802_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_13_fu_125932_p4.read()) + sc_biguint<16>(r4esult9_V_12_fu_125802_p4.read()));
}

void a0_conv2d_1::thread_tmp216_fu_141250_p2() {
    tmp216_fu_141250_p2 = (!result2_V_35_reg_217631.read().is_01() || !result3_V_35_fu_129247_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_35_reg_217631.read()) + sc_biguint<16>(result3_V_35_fu_129247_p4.read()));
}

void a0_conv2d_1::thread_tmp2170_fu_167137_p2() {
    tmp2170_fu_167137_p2 = (!r4esult5_V_13_reg_214911.read().is_01() || !r4esult2_V_13_reg_214896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_13_reg_214911.read()) + sc_biguint<16>(r4esult2_V_13_reg_214896.read()));
}

void a0_conv2d_1::thread_tmp2171_fu_167147_p2() {
    tmp2171_fu_167147_p2 = (!tmp2169_fu_167131_p2.read().is_01() || !tmp2170_fu_167137_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2169_fu_167131_p2.read()) + sc_biguint<16>(tmp2170_fu_167137_p2.read()));
}

void a0_conv2d_1::thread_tmp2172_fu_167162_p2() {
    tmp2172_fu_167162_p2 = (!r4esult6_V_13_fu_125945_p4.read().is_01() || !r4esult4_V_13_reg_214906.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_13_fu_125945_p4.read()) + sc_biguint<16>(r4esult4_V_13_reg_214906.read()));
}

void a0_conv2d_1::thread_tmp2173_fu_118005_p2() {
    tmp2173_fu_118005_p2 = (!r4esult1_V_14_fu_91633_p4.read().is_01() || !r4esult7_V_13_fu_91304_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_14_fu_91633_p4.read()) + sc_biguint<16>(r4esult7_V_13_fu_91304_p4.read()));
}

void a0_conv2d_1::thread_tmp2174_fu_118026_p2() {
    tmp2174_fu_118026_p2 = (!r4esult8_V_13_fu_91317_p4.read().is_01() || !tmp2173_fu_118005_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_13_fu_91317_p4.read()) + sc_biguint<16>(tmp2173_fu_118005_p2.read()));
}

void a0_conv2d_1::thread_tmp2175_fu_167172_p2() {
    tmp2175_fu_167172_p2 = (!tmp2172_fu_167162_p2.read().is_01() || !tmp2174_reg_226616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2172_fu_167162_p2.read()) + sc_biguint<16>(tmp2174_reg_226616.read()));
}

void a0_conv2d_1::thread_tmp2176_fu_167187_p2() {
    tmp2176_fu_167187_p2 = (!tmp2171_fu_167147_p2.read().is_01() || !tmp2175_fu_167172_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2171_fu_167147_p2.read()) + sc_biguint<16>(tmp2175_fu_167172_p2.read()));
}

void a0_conv2d_1::thread_tmp2177_fu_167211_p2() {
    tmp2177_fu_167211_p2 = (!r4esult3_V_14_fu_126088_p4.read().is_01() || !r4esult9_V_13_fu_125958_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_14_fu_126088_p4.read()) + sc_biguint<16>(r4esult9_V_13_fu_125958_p4.read()));
}

void a0_conv2d_1::thread_tmp2178_fu_167217_p2() {
    tmp2178_fu_167217_p2 = (!r4esult5_V_14_reg_215031.read().is_01() || !r4esult2_V_14_reg_215016.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_14_reg_215031.read()) + sc_biguint<16>(r4esult2_V_14_reg_215016.read()));
}

void a0_conv2d_1::thread_tmp2179_fu_167227_p2() {
    tmp2179_fu_167227_p2 = (!tmp2177_fu_167211_p2.read().is_01() || !tmp2178_fu_167217_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2177_fu_167211_p2.read()) + sc_biguint<16>(tmp2178_fu_167217_p2.read()));
}

void a0_conv2d_1::thread_tmp217_fu_141265_p2() {
    tmp217_fu_141265_p2 = (!tmp215_fu_141236_p2.read().is_01() || !tmp216_fu_141250_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp215_fu_141236_p2.read()) + sc_biguint<16>(tmp216_fu_141250_p2.read()));
}

void a0_conv2d_1::thread_tmp2180_fu_167242_p2() {
    tmp2180_fu_167242_p2 = (!r4esult6_V_14_fu_126101_p4.read().is_01() || !r4esult4_V_14_reg_215026.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_14_fu_126101_p4.read()) + sc_biguint<16>(r4esult4_V_14_reg_215026.read()));
}

void a0_conv2d_1::thread_tmp2181_fu_118089_p2() {
    tmp2181_fu_118089_p2 = (!r4esult1_V_15_fu_92014_p4.read().is_01() || !r4esult7_V_14_fu_91685_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_15_fu_92014_p4.read()) + sc_biguint<16>(r4esult7_V_14_fu_91685_p4.read()));
}

void a0_conv2d_1::thread_tmp2182_fu_118110_p2() {
    tmp2182_fu_118110_p2 = (!r4esult8_V_14_fu_91698_p4.read().is_01() || !tmp2181_fu_118089_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_14_fu_91698_p4.read()) + sc_biguint<16>(tmp2181_fu_118089_p2.read()));
}

void a0_conv2d_1::thread_tmp2183_fu_167252_p2() {
    tmp2183_fu_167252_p2 = (!tmp2180_fu_167242_p2.read().is_01() || !tmp2182_reg_226636.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2180_fu_167242_p2.read()) + sc_biguint<16>(tmp2182_reg_226636.read()));
}

void a0_conv2d_1::thread_tmp2184_fu_167267_p2() {
    tmp2184_fu_167267_p2 = (!tmp2179_fu_167227_p2.read().is_01() || !tmp2183_fu_167252_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2179_fu_167227_p2.read()) + sc_biguint<16>(tmp2183_fu_167252_p2.read()));
}

void a0_conv2d_1::thread_tmp2185_fu_170835_p2() {
    tmp2185_fu_170835_p2 = (!tmp2176_reg_228321.read().is_01() || !tmp2184_reg_228326.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2176_reg_228321.read()) + sc_biguint<16>(tmp2184_reg_228326.read()));
}

void a0_conv2d_1::thread_tmp2186_fu_170839_p2() {
    tmp2186_fu_170839_p2 = (!tmp2168_reg_228316.read().is_01() || !tmp2185_fu_170835_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2168_reg_228316.read()) + sc_biguint<16>(tmp2185_fu_170835_p2.read()));
}

void a0_conv2d_1::thread_tmp2187_fu_170848_p2() {
    tmp2187_fu_170848_p2 = (!tmp2151_fu_170830_p2.read().is_01() || !tmp2186_fu_170839_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2151_fu_170830_p2.read()) + sc_biguint<16>(tmp2186_fu_170839_p2.read()));
}

void a0_conv2d_1::thread_tmp2188_fu_170864_p2() {
    tmp2188_fu_170864_p2 = (!tmp2116_fu_170821_p2.read().is_01() || !tmp2187_fu_170848_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2116_fu_170821_p2.read()) + sc_biguint<16>(tmp2187_fu_170848_p2.read()));
}

void a0_conv2d_1::thread_tmp2189_fu_167321_p2() {
    tmp2189_fu_167321_p2 = (!r4esult3_V_15_fu_126244_p4.read().is_01() || !r4esult9_V_14_fu_126114_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_15_fu_126244_p4.read()) + sc_biguint<16>(r4esult9_V_14_fu_126114_p4.read()));
}

void a0_conv2d_1::thread_tmp218_fu_105285_p2() {
    tmp218_fu_105285_p2 = (!result4_V_35_fu_99380_p4.read().is_01() || !result5_V_35_fu_99393_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_35_fu_99380_p4.read()) + sc_biguint<16>(result5_V_35_fu_99393_p4.read()));
}

void a0_conv2d_1::thread_tmp2190_fu_167327_p2() {
    tmp2190_fu_167327_p2 = (!r4esult5_V_15_reg_215151.read().is_01() || !r4esult2_V_15_reg_215136.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_15_reg_215151.read()) + sc_biguint<16>(r4esult2_V_15_reg_215136.read()));
}

void a0_conv2d_1::thread_tmp2191_fu_167337_p2() {
    tmp2191_fu_167337_p2 = (!tmp2189_fu_167321_p2.read().is_01() || !tmp2190_fu_167327_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2189_fu_167321_p2.read()) + sc_biguint<16>(tmp2190_fu_167327_p2.read()));
}

void a0_conv2d_1::thread_tmp2192_fu_167352_p2() {
    tmp2192_fu_167352_p2 = (!r4esult6_V_15_fu_126257_p4.read().is_01() || !r4esult4_V_15_reg_215146.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_15_fu_126257_p4.read()) + sc_biguint<16>(r4esult4_V_15_reg_215146.read()));
}

void a0_conv2d_1::thread_tmp2193_fu_118173_p2() {
    tmp2193_fu_118173_p2 = (!r4esult1_V_16_fu_92395_p4.read().is_01() || !r4esult7_V_15_fu_92066_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_16_fu_92395_p4.read()) + sc_biguint<16>(r4esult7_V_15_fu_92066_p4.read()));
}

void a0_conv2d_1::thread_tmp2194_fu_118194_p2() {
    tmp2194_fu_118194_p2 = (!r4esult8_V_15_fu_92079_p4.read().is_01() || !tmp2193_fu_118173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_15_fu_92079_p4.read()) + sc_biguint<16>(tmp2193_fu_118173_p2.read()));
}

void a0_conv2d_1::thread_tmp2195_fu_167362_p2() {
    tmp2195_fu_167362_p2 = (!tmp2192_fu_167352_p2.read().is_01() || !tmp2194_reg_226656.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2192_fu_167352_p2.read()) + sc_biguint<16>(tmp2194_reg_226656.read()));
}

void a0_conv2d_1::thread_tmp2196_fu_167377_p2() {
    tmp2196_fu_167377_p2 = (!tmp2191_fu_167337_p2.read().is_01() || !tmp2195_fu_167362_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2191_fu_167337_p2.read()) + sc_biguint<16>(tmp2195_fu_167362_p2.read()));
}

void a0_conv2d_1::thread_tmp2197_fu_167401_p2() {
    tmp2197_fu_167401_p2 = (!r4esult3_V_16_fu_126400_p4.read().is_01() || !r4esult9_V_15_fu_126270_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_16_fu_126400_p4.read()) + sc_biguint<16>(r4esult9_V_15_fu_126270_p4.read()));
}

void a0_conv2d_1::thread_tmp2198_fu_167407_p2() {
    tmp2198_fu_167407_p2 = (!r4esult5_V_16_reg_215286.read().is_01() || !r4esult2_V_16_reg_215271.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_16_reg_215286.read()) + sc_biguint<16>(r4esult2_V_16_reg_215271.read()));
}

void a0_conv2d_1::thread_tmp2199_fu_167417_p2() {
    tmp2199_fu_167417_p2 = (!tmp2197_fu_167401_p2.read().is_01() || !tmp2198_fu_167407_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2197_fu_167401_p2.read()) + sc_biguint<16>(tmp2198_fu_167407_p2.read()));
}

void a0_conv2d_1::thread_tmp219_fu_141271_p2() {
    tmp219_fu_141271_p2 = (!result7_V_35_reg_217646.read().is_01() || !result8_V_35_reg_217651.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_35_reg_217646.read()) + sc_biguint<16>(result8_V_35_reg_217651.read()));
}

void a0_conv2d_1::thread_tmp2200_fu_167432_p2() {
    tmp2200_fu_167432_p2 = (!r4esult6_V_16_fu_126413_p4.read().is_01() || !r4esult4_V_16_reg_215281.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_16_fu_126413_p4.read()) + sc_biguint<16>(r4esult4_V_16_reg_215281.read()));
}

void a0_conv2d_1::thread_tmp2201_fu_118257_p2() {
    tmp2201_fu_118257_p2 = (!r4esult1_V_17_fu_92776_p4.read().is_01() || !r4esult7_V_16_fu_92447_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_17_fu_92776_p4.read()) + sc_biguint<16>(r4esult7_V_16_fu_92447_p4.read()));
}

void a0_conv2d_1::thread_tmp2202_fu_167437_p2() {
    tmp2202_fu_167437_p2 = (!r4esult8_V_16_reg_215296.read().is_01() || !tmp2201_reg_226676.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_16_reg_215296.read()) + sc_biguint<16>(tmp2201_reg_226676.read()));
}

void a0_conv2d_1::thread_tmp2203_fu_167446_p2() {
    tmp2203_fu_167446_p2 = (!tmp2200_fu_167432_p2.read().is_01() || !tmp2202_fu_167437_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2200_fu_167432_p2.read()) + sc_biguint<16>(tmp2202_fu_167437_p2.read()));
}

void a0_conv2d_1::thread_tmp2204_fu_167462_p2() {
    tmp2204_fu_167462_p2 = (!tmp2199_fu_167417_p2.read().is_01() || !tmp2203_fu_167446_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2199_fu_167417_p2.read()) + sc_biguint<16>(tmp2203_fu_167446_p2.read()));
}

void a0_conv2d_1::thread_tmp2205_fu_167480_p2() {
    tmp2205_fu_167480_p2 = (!tmp2196_fu_167377_p2.read().is_01() || !tmp2204_fu_167462_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2196_fu_167377_p2.read()) + sc_biguint<16>(tmp2204_fu_167462_p2.read()));
}

void a0_conv2d_1::thread_tmp2206_fu_167504_p2() {
    tmp2206_fu_167504_p2 = (!r4esult3_V_17_fu_126556_p4.read().is_01() || !r4esult9_V_16_fu_126426_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_17_fu_126556_p4.read()) + sc_biguint<16>(r4esult9_V_16_fu_126426_p4.read()));
}

void a0_conv2d_1::thread_tmp2207_fu_167510_p2() {
    tmp2207_fu_167510_p2 = (!r4esult5_V_17_reg_215411.read().is_01() || !r4esult2_V_17_reg_215396.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_17_reg_215411.read()) + sc_biguint<16>(r4esult2_V_17_reg_215396.read()));
}

void a0_conv2d_1::thread_tmp2208_fu_167520_p2() {
    tmp2208_fu_167520_p2 = (!tmp2206_fu_167504_p2.read().is_01() || !tmp2207_fu_167510_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2206_fu_167504_p2.read()) + sc_biguint<16>(tmp2207_fu_167510_p2.read()));
}

void a0_conv2d_1::thread_tmp2209_fu_167535_p2() {
    tmp2209_fu_167535_p2 = (!r4esult6_V_17_fu_126569_p4.read().is_01() || !r4esult4_V_17_reg_215406.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_17_fu_126569_p4.read()) + sc_biguint<16>(r4esult4_V_17_reg_215406.read()));
}

void a0_conv2d_1::thread_tmp220_fu_141288_p2() {
    tmp220_fu_141288_p2 = (!result6_V_35_fu_129260_p4.read().is_01() || !tmp219_fu_141271_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_35_fu_129260_p4.read()) + sc_biguint<16>(tmp219_fu_141271_p2.read()));
}

void a0_conv2d_1::thread_tmp2210_fu_118335_p2() {
    tmp2210_fu_118335_p2 = (!r4esult1_V_18_fu_93157_p4.read().is_01() || !r4esult7_V_17_fu_92828_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_18_fu_93157_p4.read()) + sc_biguint<16>(r4esult7_V_17_fu_92828_p4.read()));
}

void a0_conv2d_1::thread_tmp2211_fu_118356_p2() {
    tmp2211_fu_118356_p2 = (!r4esult8_V_17_fu_92841_p4.read().is_01() || !tmp2210_fu_118335_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_17_fu_92841_p4.read()) + sc_biguint<16>(tmp2210_fu_118335_p2.read()));
}

void a0_conv2d_1::thread_tmp2212_fu_167545_p2() {
    tmp2212_fu_167545_p2 = (!tmp2209_fu_167535_p2.read().is_01() || !tmp2211_reg_226696.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2209_fu_167535_p2.read()) + sc_biguint<16>(tmp2211_reg_226696.read()));
}

void a0_conv2d_1::thread_tmp2213_fu_167560_p2() {
    tmp2213_fu_167560_p2 = (!tmp2208_fu_167520_p2.read().is_01() || !tmp2212_fu_167545_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2208_fu_167520_p2.read()) + sc_biguint<16>(tmp2212_fu_167545_p2.read()));
}

void a0_conv2d_1::thread_tmp2214_fu_167584_p2() {
    tmp2214_fu_167584_p2 = (!r4esult3_V_18_fu_126712_p4.read().is_01() || !r4esult9_V_17_fu_126582_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_18_fu_126712_p4.read()) + sc_biguint<16>(r4esult9_V_17_fu_126582_p4.read()));
}

void a0_conv2d_1::thread_tmp2215_fu_167590_p2() {
    tmp2215_fu_167590_p2 = (!r4esult5_V_18_reg_215531.read().is_01() || !r4esult2_V_18_reg_215516.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_18_reg_215531.read()) + sc_biguint<16>(r4esult2_V_18_reg_215516.read()));
}

void a0_conv2d_1::thread_tmp2216_fu_167600_p2() {
    tmp2216_fu_167600_p2 = (!tmp2214_fu_167584_p2.read().is_01() || !tmp2215_fu_167590_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2214_fu_167584_p2.read()) + sc_biguint<16>(tmp2215_fu_167590_p2.read()));
}

void a0_conv2d_1::thread_tmp2217_fu_167615_p2() {
    tmp2217_fu_167615_p2 = (!r4esult6_V_18_fu_126725_p4.read().is_01() || !r4esult4_V_18_reg_215526.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_18_fu_126725_p4.read()) + sc_biguint<16>(r4esult4_V_18_reg_215526.read()));
}

void a0_conv2d_1::thread_tmp2218_fu_118419_p2() {
    tmp2218_fu_118419_p2 = (!r4esult1_V_19_fu_93538_p4.read().is_01() || !r4esult7_V_18_fu_93209_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_19_fu_93538_p4.read()) + sc_biguint<16>(r4esult7_V_18_fu_93209_p4.read()));
}

void a0_conv2d_1::thread_tmp2219_fu_118440_p2() {
    tmp2219_fu_118440_p2 = (!r4esult8_V_18_fu_93222_p4.read().is_01() || !tmp2218_fu_118419_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_18_fu_93222_p4.read()) + sc_biguint<16>(tmp2218_fu_118419_p2.read()));
}

void a0_conv2d_1::thread_tmp221_fu_141304_p2() {
    tmp221_fu_141304_p2 = (!tmp218_reg_222016.read().is_01() || !tmp220_fu_141288_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp218_reg_222016.read()) + sc_biguint<16>(tmp220_fu_141288_p2.read()));
}

void a0_conv2d_1::thread_tmp2220_fu_167625_p2() {
    tmp2220_fu_167625_p2 = (!tmp2217_fu_167615_p2.read().is_01() || !tmp2219_reg_226716.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2217_fu_167615_p2.read()) + sc_biguint<16>(tmp2219_reg_226716.read()));
}

void a0_conv2d_1::thread_tmp2221_fu_167640_p2() {
    tmp2221_fu_167640_p2 = (!tmp2216_fu_167600_p2.read().is_01() || !tmp2220_fu_167625_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2216_fu_167600_p2.read()) + sc_biguint<16>(tmp2220_fu_167625_p2.read()));
}

void a0_conv2d_1::thread_tmp2222_fu_170870_p2() {
    tmp2222_fu_170870_p2 = (!tmp2213_reg_228341.read().is_01() || !tmp2221_reg_228346.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2213_reg_228341.read()) + sc_biguint<16>(tmp2221_reg_228346.read()));
}

void a0_conv2d_1::thread_tmp2223_fu_170874_p2() {
    tmp2223_fu_170874_p2 = (!tmp2205_reg_228336.read().is_01() || !tmp2222_fu_170870_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2205_reg_228336.read()) + sc_biguint<16>(tmp2222_fu_170870_p2.read()));
}

void a0_conv2d_1::thread_tmp2224_fu_167688_p2() {
    tmp2224_fu_167688_p2 = (!r4esult3_V_19_fu_126868_p4.read().is_01() || !r4esult9_V_18_fu_126738_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_19_fu_126868_p4.read()) + sc_biguint<16>(r4esult9_V_18_fu_126738_p4.read()));
}

void a0_conv2d_1::thread_tmp2225_fu_167694_p2() {
    tmp2225_fu_167694_p2 = (!r4esult5_V_19_reg_215651.read().is_01() || !r4esult2_V_19_reg_215636.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_19_reg_215651.read()) + sc_biguint<16>(r4esult2_V_19_reg_215636.read()));
}

void a0_conv2d_1::thread_tmp2226_fu_167704_p2() {
    tmp2226_fu_167704_p2 = (!tmp2224_fu_167688_p2.read().is_01() || !tmp2225_fu_167694_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2224_fu_167688_p2.read()) + sc_biguint<16>(tmp2225_fu_167694_p2.read()));
}

void a0_conv2d_1::thread_tmp2227_fu_167719_p2() {
    tmp2227_fu_167719_p2 = (!r4esult6_V_19_fu_126881_p4.read().is_01() || !r4esult4_V_19_reg_215646.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_19_fu_126881_p4.read()) + sc_biguint<16>(r4esult4_V_19_reg_215646.read()));
}

void a0_conv2d_1::thread_tmp2228_fu_118503_p2() {
    tmp2228_fu_118503_p2 = (!r4esult1_V_20_fu_93919_p4.read().is_01() || !r4esult7_V_19_fu_93590_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_20_fu_93919_p4.read()) + sc_biguint<16>(r4esult7_V_19_fu_93590_p4.read()));
}

void a0_conv2d_1::thread_tmp2229_fu_118524_p2() {
    tmp2229_fu_118524_p2 = (!r4esult8_V_19_fu_93603_p4.read().is_01() || !tmp2228_fu_118503_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_19_fu_93603_p4.read()) + sc_biguint<16>(tmp2228_fu_118503_p2.read()));
}

void a0_conv2d_1::thread_tmp222_fu_141321_p2() {
    tmp222_fu_141321_p2 = (!tmp217_fu_141265_p2.read().is_01() || !tmp221_fu_141304_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp217_fu_141265_p2.read()) + sc_biguint<16>(tmp221_fu_141304_p2.read()));
}

void a0_conv2d_1::thread_tmp2230_fu_167729_p2() {
    tmp2230_fu_167729_p2 = (!tmp2227_fu_167719_p2.read().is_01() || !tmp2229_reg_226736.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2227_fu_167719_p2.read()) + sc_biguint<16>(tmp2229_reg_226736.read()));
}

void a0_conv2d_1::thread_tmp2231_fu_167744_p2() {
    tmp2231_fu_167744_p2 = (!tmp2226_fu_167704_p2.read().is_01() || !tmp2230_fu_167729_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2226_fu_167704_p2.read()) + sc_biguint<16>(tmp2230_fu_167729_p2.read()));
}

void a0_conv2d_1::thread_tmp2232_fu_167768_p2() {
    tmp2232_fu_167768_p2 = (!r4esult3_V_20_fu_127024_p4.read().is_01() || !r4esult9_V_19_fu_126894_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_20_fu_127024_p4.read()) + sc_biguint<16>(r4esult9_V_19_fu_126894_p4.read()));
}

void a0_conv2d_1::thread_tmp2233_fu_167774_p2() {
    tmp2233_fu_167774_p2 = (!r4esult5_V_20_reg_215786.read().is_01() || !r4esult2_V_20_reg_215771.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_20_reg_215786.read()) + sc_biguint<16>(r4esult2_V_20_reg_215771.read()));
}

void a0_conv2d_1::thread_tmp2234_fu_167784_p2() {
    tmp2234_fu_167784_p2 = (!tmp2232_fu_167768_p2.read().is_01() || !tmp2233_fu_167774_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2232_fu_167768_p2.read()) + sc_biguint<16>(tmp2233_fu_167774_p2.read()));
}

void a0_conv2d_1::thread_tmp2235_fu_167799_p2() {
    tmp2235_fu_167799_p2 = (!r4esult6_V_20_fu_127037_p4.read().is_01() || !r4esult4_V_20_reg_215781.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_20_fu_127037_p4.read()) + sc_biguint<16>(r4esult4_V_20_reg_215781.read()));
}

void a0_conv2d_1::thread_tmp2236_fu_118587_p2() {
    tmp2236_fu_118587_p2 = (!r4esult1_V_21_fu_94300_p4.read().is_01() || !r4esult7_V_20_fu_93971_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_21_fu_94300_p4.read()) + sc_biguint<16>(r4esult7_V_20_fu_93971_p4.read()));
}

void a0_conv2d_1::thread_tmp2237_fu_167804_p2() {
    tmp2237_fu_167804_p2 = (!r4esult8_V_20_reg_215796.read().is_01() || !tmp2236_reg_226756.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_20_reg_215796.read()) + sc_biguint<16>(tmp2236_reg_226756.read()));
}

void a0_conv2d_1::thread_tmp2238_fu_167813_p2() {
    tmp2238_fu_167813_p2 = (!tmp2235_fu_167799_p2.read().is_01() || !tmp2237_fu_167804_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2235_fu_167799_p2.read()) + sc_biguint<16>(tmp2237_fu_167804_p2.read()));
}

void a0_conv2d_1::thread_tmp2239_fu_167829_p2() {
    tmp2239_fu_167829_p2 = (!tmp2234_fu_167784_p2.read().is_01() || !tmp2238_fu_167813_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2234_fu_167784_p2.read()) + sc_biguint<16>(tmp2238_fu_167813_p2.read()));
}

void a0_conv2d_1::thread_tmp223_fu_141336_p2() {
    tmp223_fu_141336_p2 = (!result9_V_35_fu_129273_p4.read().is_01() || !result1_V_36_reg_217766.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result9_V_35_fu_129273_p4.read()) + sc_biguint<16>(result1_V_36_reg_217766.read()));
}

void a0_conv2d_1::thread_tmp2240_fu_167847_p2() {
    tmp2240_fu_167847_p2 = (!tmp2231_fu_167744_p2.read().is_01() || !tmp2239_fu_167829_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2231_fu_167744_p2.read()) + sc_biguint<16>(tmp2239_fu_167829_p2.read()));
}

void a0_conv2d_1::thread_tmp2241_fu_167871_p2() {
    tmp2241_fu_167871_p2 = (!r4esult3_V_21_fu_127180_p4.read().is_01() || !r4esult9_V_20_fu_127050_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_21_fu_127180_p4.read()) + sc_biguint<16>(r4esult9_V_20_fu_127050_p4.read()));
}

void a0_conv2d_1::thread_tmp2242_fu_167877_p2() {
    tmp2242_fu_167877_p2 = (!r4esult5_V_21_reg_215911.read().is_01() || !r4esult2_V_21_reg_215896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_21_reg_215911.read()) + sc_biguint<16>(r4esult2_V_21_reg_215896.read()));
}

void a0_conv2d_1::thread_tmp2243_fu_167887_p2() {
    tmp2243_fu_167887_p2 = (!tmp2241_fu_167871_p2.read().is_01() || !tmp2242_fu_167877_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2241_fu_167871_p2.read()) + sc_biguint<16>(tmp2242_fu_167877_p2.read()));
}

void a0_conv2d_1::thread_tmp2244_fu_167902_p2() {
    tmp2244_fu_167902_p2 = (!r4esult6_V_21_fu_127193_p4.read().is_01() || !r4esult4_V_21_reg_215906.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_21_fu_127193_p4.read()) + sc_biguint<16>(r4esult4_V_21_reg_215906.read()));
}

void a0_conv2d_1::thread_tmp2245_fu_118665_p2() {
    tmp2245_fu_118665_p2 = (!r4esult1_V_22_fu_94681_p4.read().is_01() || !r4esult7_V_21_fu_94352_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_22_fu_94681_p4.read()) + sc_biguint<16>(r4esult7_V_21_fu_94352_p4.read()));
}

void a0_conv2d_1::thread_tmp2246_fu_118686_p2() {
    tmp2246_fu_118686_p2 = (!r4esult8_V_21_fu_94365_p4.read().is_01() || !tmp2245_fu_118665_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_21_fu_94365_p4.read()) + sc_biguint<16>(tmp2245_fu_118665_p2.read()));
}

void a0_conv2d_1::thread_tmp2247_fu_167912_p2() {
    tmp2247_fu_167912_p2 = (!tmp2244_fu_167902_p2.read().is_01() || !tmp2246_reg_226776.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2244_fu_167902_p2.read()) + sc_biguint<16>(tmp2246_reg_226776.read()));
}

void a0_conv2d_1::thread_tmp2248_fu_167927_p2() {
    tmp2248_fu_167927_p2 = (!tmp2243_fu_167887_p2.read().is_01() || !tmp2247_fu_167912_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2243_fu_167887_p2.read()) + sc_biguint<16>(tmp2247_fu_167912_p2.read()));
}

void a0_conv2d_1::thread_tmp2249_fu_167951_p2() {
    tmp2249_fu_167951_p2 = (!r4esult3_V_22_fu_127336_p4.read().is_01() || !r4esult9_V_21_fu_127206_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_22_fu_127336_p4.read()) + sc_biguint<16>(r4esult9_V_21_fu_127206_p4.read()));
}

void a0_conv2d_1::thread_tmp224_fu_141350_p2() {
    tmp224_fu_141350_p2 = (!result2_V_36_reg_217771.read().is_01() || !result3_V_36_fu_129403_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result2_V_36_reg_217771.read()) + sc_biguint<16>(result3_V_36_fu_129403_p4.read()));
}

void a0_conv2d_1::thread_tmp2250_fu_167957_p2() {
    tmp2250_fu_167957_p2 = (!r4esult5_V_22_reg_216046.read().is_01() || !r4esult2_V_22_reg_216031.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_22_reg_216046.read()) + sc_biguint<16>(r4esult2_V_22_reg_216031.read()));
}

void a0_conv2d_1::thread_tmp2251_fu_167967_p2() {
    tmp2251_fu_167967_p2 = (!tmp2249_fu_167951_p2.read().is_01() || !tmp2250_fu_167957_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2249_fu_167951_p2.read()) + sc_biguint<16>(tmp2250_fu_167957_p2.read()));
}

void a0_conv2d_1::thread_tmp2252_fu_167982_p2() {
    tmp2252_fu_167982_p2 = (!r4esult6_V_22_fu_127349_p4.read().is_01() || !r4esult4_V_22_reg_216041.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_22_fu_127349_p4.read()) + sc_biguint<16>(r4esult4_V_22_reg_216041.read()));
}

void a0_conv2d_1::thread_tmp2253_fu_118749_p2() {
    tmp2253_fu_118749_p2 = (!r4esult1_V_23_fu_95062_p4.read().is_01() || !r4esult7_V_22_fu_94733_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_23_fu_95062_p4.read()) + sc_biguint<16>(r4esult7_V_22_fu_94733_p4.read()));
}

void a0_conv2d_1::thread_tmp2254_fu_167987_p2() {
    tmp2254_fu_167987_p2 = (!r4esult8_V_22_reg_216056.read().is_01() || !tmp2253_reg_226796.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_22_reg_216056.read()) + sc_biguint<16>(tmp2253_reg_226796.read()));
}

void a0_conv2d_1::thread_tmp2255_fu_167996_p2() {
    tmp2255_fu_167996_p2 = (!tmp2252_fu_167982_p2.read().is_01() || !tmp2254_fu_167987_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2252_fu_167982_p2.read()) + sc_biguint<16>(tmp2254_fu_167987_p2.read()));
}

void a0_conv2d_1::thread_tmp2256_fu_168012_p2() {
    tmp2256_fu_168012_p2 = (!tmp2251_fu_167967_p2.read().is_01() || !tmp2255_fu_167996_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2251_fu_167967_p2.read()) + sc_biguint<16>(tmp2255_fu_167996_p2.read()));
}

void a0_conv2d_1::thread_tmp2257_fu_168030_p2() {
    tmp2257_fu_168030_p2 = (!tmp2248_fu_167927_p2.read().is_01() || !tmp2256_fu_168012_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2248_fu_167927_p2.read()) + sc_biguint<16>(tmp2256_fu_168012_p2.read()));
}

void a0_conv2d_1::thread_tmp2258_fu_170879_p2() {
    tmp2258_fu_170879_p2 = (!tmp2240_reg_228351.read().is_01() || !tmp2257_reg_228356.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2240_reg_228351.read()) + sc_biguint<16>(tmp2257_reg_228356.read()));
}

void a0_conv2d_1::thread_tmp2259_fu_170883_p2() {
    tmp2259_fu_170883_p2 = (!tmp2223_fu_170874_p2.read().is_01() || !tmp2258_fu_170879_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2223_fu_170874_p2.read()) + sc_biguint<16>(tmp2258_fu_170879_p2.read()));
}

void a0_conv2d_1::thread_tmp225_fu_141365_p2() {
    tmp225_fu_141365_p2 = (!tmp223_fu_141336_p2.read().is_01() || !tmp224_fu_141350_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp223_fu_141336_p2.read()) + sc_biguint<16>(tmp224_fu_141350_p2.read()));
}

void a0_conv2d_1::thread_tmp2260_fu_168078_p2() {
    tmp2260_fu_168078_p2 = (!r4esult3_V_23_fu_127492_p4.read().is_01() || !r4esult9_V_22_fu_127362_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_23_fu_127492_p4.read()) + sc_biguint<16>(r4esult9_V_22_fu_127362_p4.read()));
}

void a0_conv2d_1::thread_tmp2261_fu_168084_p2() {
    tmp2261_fu_168084_p2 = (!r4esult5_V_23_reg_216171.read().is_01() || !r4esult2_V_23_reg_216156.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_23_reg_216171.read()) + sc_biguint<16>(r4esult2_V_23_reg_216156.read()));
}

void a0_conv2d_1::thread_tmp2262_fu_168094_p2() {
    tmp2262_fu_168094_p2 = (!tmp2260_fu_168078_p2.read().is_01() || !tmp2261_fu_168084_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2260_fu_168078_p2.read()) + sc_biguint<16>(tmp2261_fu_168084_p2.read()));
}

void a0_conv2d_1::thread_tmp2263_fu_168109_p2() {
    tmp2263_fu_168109_p2 = (!r4esult6_V_23_fu_127505_p4.read().is_01() || !r4esult4_V_23_reg_216166.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_23_fu_127505_p4.read()) + sc_biguint<16>(r4esult4_V_23_reg_216166.read()));
}

void a0_conv2d_1::thread_tmp2264_fu_118827_p2() {
    tmp2264_fu_118827_p2 = (!r4esult1_V_24_fu_95443_p4.read().is_01() || !r4esult7_V_23_fu_95114_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_24_fu_95443_p4.read()) + sc_biguint<16>(r4esult7_V_23_fu_95114_p4.read()));
}

void a0_conv2d_1::thread_tmp2265_fu_118848_p2() {
    tmp2265_fu_118848_p2 = (!r4esult8_V_23_fu_95127_p4.read().is_01() || !tmp2264_fu_118827_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_23_fu_95127_p4.read()) + sc_biguint<16>(tmp2264_fu_118827_p2.read()));
}

void a0_conv2d_1::thread_tmp2266_fu_168119_p2() {
    tmp2266_fu_168119_p2 = (!tmp2263_fu_168109_p2.read().is_01() || !tmp2265_reg_226816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2263_fu_168109_p2.read()) + sc_biguint<16>(tmp2265_reg_226816.read()));
}

void a0_conv2d_1::thread_tmp2267_fu_168134_p2() {
    tmp2267_fu_168134_p2 = (!tmp2262_fu_168094_p2.read().is_01() || !tmp2266_fu_168119_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2262_fu_168094_p2.read()) + sc_biguint<16>(tmp2266_fu_168119_p2.read()));
}

void a0_conv2d_1::thread_tmp2268_fu_168158_p2() {
    tmp2268_fu_168158_p2 = (!r4esult3_V_24_fu_127648_p4.read().is_01() || !r4esult9_V_23_fu_127518_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_24_fu_127648_p4.read()) + sc_biguint<16>(r4esult9_V_23_fu_127518_p4.read()));
}

void a0_conv2d_1::thread_tmp2269_fu_168164_p2() {
    tmp2269_fu_168164_p2 = (!r4esult5_V_24_reg_216306.read().is_01() || !r4esult2_V_24_reg_216291.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_24_reg_216306.read()) + sc_biguint<16>(r4esult2_V_24_reg_216291.read()));
}

void a0_conv2d_1::thread_tmp226_fu_105345_p2() {
    tmp226_fu_105345_p2 = (!result4_V_36_fu_99761_p4.read().is_01() || !result5_V_36_fu_99774_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result4_V_36_fu_99761_p4.read()) + sc_biguint<16>(result5_V_36_fu_99774_p4.read()));
}

void a0_conv2d_1::thread_tmp2270_fu_168174_p2() {
    tmp2270_fu_168174_p2 = (!tmp2268_fu_168158_p2.read().is_01() || !tmp2269_fu_168164_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2268_fu_168158_p2.read()) + sc_biguint<16>(tmp2269_fu_168164_p2.read()));
}

void a0_conv2d_1::thread_tmp2271_fu_168189_p2() {
    tmp2271_fu_168189_p2 = (!r4esult6_V_24_fu_127661_p4.read().is_01() || !r4esult4_V_24_reg_216301.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_24_fu_127661_p4.read()) + sc_biguint<16>(r4esult4_V_24_reg_216301.read()));
}

void a0_conv2d_1::thread_tmp2272_fu_118911_p2() {
    tmp2272_fu_118911_p2 = (!r4esult1_V_25_fu_95824_p4.read().is_01() || !r4esult7_V_24_fu_95495_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_25_fu_95824_p4.read()) + sc_biguint<16>(r4esult7_V_24_fu_95495_p4.read()));
}

void a0_conv2d_1::thread_tmp2273_fu_168194_p2() {
    tmp2273_fu_168194_p2 = (!r4esult8_V_24_reg_216316.read().is_01() || !tmp2272_reg_226836.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_24_reg_216316.read()) + sc_biguint<16>(tmp2272_reg_226836.read()));
}

void a0_conv2d_1::thread_tmp2274_fu_168203_p2() {
    tmp2274_fu_168203_p2 = (!tmp2271_fu_168189_p2.read().is_01() || !tmp2273_fu_168194_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2271_fu_168189_p2.read()) + sc_biguint<16>(tmp2273_fu_168194_p2.read()));
}

void a0_conv2d_1::thread_tmp2275_fu_168219_p2() {
    tmp2275_fu_168219_p2 = (!tmp2270_fu_168174_p2.read().is_01() || !tmp2274_fu_168203_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2270_fu_168174_p2.read()) + sc_biguint<16>(tmp2274_fu_168203_p2.read()));
}

void a0_conv2d_1::thread_tmp2276_fu_168237_p2() {
    tmp2276_fu_168237_p2 = (!tmp2267_fu_168134_p2.read().is_01() || !tmp2275_fu_168219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2267_fu_168134_p2.read()) + sc_biguint<16>(tmp2275_fu_168219_p2.read()));
}

void a0_conv2d_1::thread_tmp2277_fu_168261_p2() {
    tmp2277_fu_168261_p2 = (!r4esult3_V_25_fu_127804_p4.read().is_01() || !r4esult9_V_24_fu_127674_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_25_fu_127804_p4.read()) + sc_biguint<16>(r4esult9_V_24_fu_127674_p4.read()));
}

void a0_conv2d_1::thread_tmp2278_fu_168267_p2() {
    tmp2278_fu_168267_p2 = (!r4esult5_V_25_reg_216431.read().is_01() || !r4esult2_V_25_reg_216416.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_25_reg_216431.read()) + sc_biguint<16>(r4esult2_V_25_reg_216416.read()));
}

void a0_conv2d_1::thread_tmp2279_fu_168277_p2() {
    tmp2279_fu_168277_p2 = (!tmp2277_fu_168261_p2.read().is_01() || !tmp2278_fu_168267_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2277_fu_168261_p2.read()) + sc_biguint<16>(tmp2278_fu_168267_p2.read()));
}

void a0_conv2d_1::thread_tmp227_fu_105369_p2() {
    tmp227_fu_105369_p2 = (!result7_V_36_fu_99810_p4.read().is_01() || !result8_V_36_fu_99823_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result7_V_36_fu_99810_p4.read()) + sc_biguint<16>(result8_V_36_fu_99823_p4.read()));
}

void a0_conv2d_1::thread_tmp2280_fu_168292_p2() {
    tmp2280_fu_168292_p2 = (!r4esult6_V_25_fu_127817_p4.read().is_01() || !r4esult4_V_25_reg_216426.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_25_fu_127817_p4.read()) + sc_biguint<16>(r4esult4_V_25_reg_216426.read()));
}

void a0_conv2d_1::thread_tmp2281_fu_118989_p2() {
    tmp2281_fu_118989_p2 = (!r4esult1_V_26_fu_96205_p4.read().is_01() || !r4esult7_V_25_fu_95876_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_26_fu_96205_p4.read()) + sc_biguint<16>(r4esult7_V_25_fu_95876_p4.read()));
}

void a0_conv2d_1::thread_tmp2282_fu_119010_p2() {
    tmp2282_fu_119010_p2 = (!r4esult8_V_25_fu_95889_p4.read().is_01() || !tmp2281_fu_118989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_25_fu_95889_p4.read()) + sc_biguint<16>(tmp2281_fu_118989_p2.read()));
}

void a0_conv2d_1::thread_tmp2283_fu_168302_p2() {
    tmp2283_fu_168302_p2 = (!tmp2280_fu_168292_p2.read().is_01() || !tmp2282_reg_226856.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2280_fu_168292_p2.read()) + sc_biguint<16>(tmp2282_reg_226856.read()));
}

void a0_conv2d_1::thread_tmp2284_fu_168317_p2() {
    tmp2284_fu_168317_p2 = (!tmp2279_fu_168277_p2.read().is_01() || !tmp2283_fu_168302_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2279_fu_168277_p2.read()) + sc_biguint<16>(tmp2283_fu_168302_p2.read()));
}

void a0_conv2d_1::thread_tmp2285_fu_168341_p2() {
    tmp2285_fu_168341_p2 = (!r4esult3_V_26_fu_127960_p4.read().is_01() || !r4esult9_V_25_fu_127830_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_26_fu_127960_p4.read()) + sc_biguint<16>(r4esult9_V_25_fu_127830_p4.read()));
}

void a0_conv2d_1::thread_tmp2286_fu_168347_p2() {
    tmp2286_fu_168347_p2 = (!r4esult5_V_26_reg_216551.read().is_01() || !r4esult2_V_26_reg_216536.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_26_reg_216551.read()) + sc_biguint<16>(r4esult2_V_26_reg_216536.read()));
}

void a0_conv2d_1::thread_tmp2287_fu_168357_p2() {
    tmp2287_fu_168357_p2 = (!tmp2285_fu_168341_p2.read().is_01() || !tmp2286_fu_168347_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2285_fu_168341_p2.read()) + sc_biguint<16>(tmp2286_fu_168347_p2.read()));
}

void a0_conv2d_1::thread_tmp2288_fu_168372_p2() {
    tmp2288_fu_168372_p2 = (!r4esult6_V_26_fu_127973_p4.read().is_01() || !r4esult4_V_26_reg_216546.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_26_fu_127973_p4.read()) + sc_biguint<16>(r4esult4_V_26_reg_216546.read()));
}

void a0_conv2d_1::thread_tmp2289_fu_119073_p2() {
    tmp2289_fu_119073_p2 = (!r4esult1_V_27_fu_96586_p4.read().is_01() || !r4esult7_V_26_fu_96257_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_27_fu_96586_p4.read()) + sc_biguint<16>(r4esult7_V_26_fu_96257_p4.read()));
}

void a0_conv2d_1::thread_tmp228_fu_141384_p2() {
    tmp228_fu_141384_p2 = (!result6_V_36_fu_129416_p4.read().is_01() || !tmp227_reg_222066.read().is_01())? sc_lv<16>(): (sc_biguint<16>(result6_V_36_fu_129416_p4.read()) + sc_biguint<16>(tmp227_reg_222066.read()));
}

void a0_conv2d_1::thread_tmp2290_fu_119094_p2() {
    tmp2290_fu_119094_p2 = (!r4esult8_V_26_fu_96270_p4.read().is_01() || !tmp2289_fu_119073_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_26_fu_96270_p4.read()) + sc_biguint<16>(tmp2289_fu_119073_p2.read()));
}

void a0_conv2d_1::thread_tmp2291_fu_168382_p2() {
    tmp2291_fu_168382_p2 = (!tmp2288_fu_168372_p2.read().is_01() || !tmp2290_reg_226876.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2288_fu_168372_p2.read()) + sc_biguint<16>(tmp2290_reg_226876.read()));
}

void a0_conv2d_1::thread_tmp2292_fu_168397_p2() {
    tmp2292_fu_168397_p2 = (!tmp2287_fu_168357_p2.read().is_01() || !tmp2291_fu_168382_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2287_fu_168357_p2.read()) + sc_biguint<16>(tmp2291_fu_168382_p2.read()));
}

void a0_conv2d_1::thread_tmp2293_fu_170889_p2() {
    tmp2293_fu_170889_p2 = (!tmp2284_reg_228376.read().is_01() || !tmp2292_reg_228381.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2284_reg_228376.read()) + sc_biguint<16>(tmp2292_reg_228381.read()));
}

void a0_conv2d_1::thread_tmp2294_fu_170893_p2() {
    tmp2294_fu_170893_p2 = (!tmp2276_reg_228371.read().is_01() || !tmp2293_fu_170889_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2276_reg_228371.read()) + sc_biguint<16>(tmp2293_fu_170889_p2.read()));
}

void a0_conv2d_1::thread_tmp2295_fu_168445_p2() {
    tmp2295_fu_168445_p2 = (!r4esult3_V_27_fu_128116_p4.read().is_01() || !r4esult9_V_26_fu_127986_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_27_fu_128116_p4.read()) + sc_biguint<16>(r4esult9_V_26_fu_127986_p4.read()));
}

void a0_conv2d_1::thread_tmp2296_fu_168451_p2() {
    tmp2296_fu_168451_p2 = (!r4esult5_V_27_reg_216671.read().is_01() || !r4esult2_V_27_reg_216656.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_27_reg_216671.read()) + sc_biguint<16>(r4esult2_V_27_reg_216656.read()));
}

void a0_conv2d_1::thread_tmp2297_fu_168461_p2() {
    tmp2297_fu_168461_p2 = (!tmp2295_fu_168445_p2.read().is_01() || !tmp2296_fu_168451_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2295_fu_168445_p2.read()) + sc_biguint<16>(tmp2296_fu_168451_p2.read()));
}

void a0_conv2d_1::thread_tmp2298_fu_168476_p2() {
    tmp2298_fu_168476_p2 = (!r4esult6_V_27_fu_128129_p4.read().is_01() || !r4esult4_V_27_reg_216666.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_27_fu_128129_p4.read()) + sc_biguint<16>(r4esult4_V_27_reg_216666.read()));
}

void a0_conv2d_1::thread_tmp2299_fu_119157_p2() {
    tmp2299_fu_119157_p2 = (!r4esult1_V_28_fu_96967_p4.read().is_01() || !r4esult7_V_27_fu_96638_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_28_fu_96967_p4.read()) + sc_biguint<16>(r4esult7_V_27_fu_96638_p4.read()));
}

void a0_conv2d_1::thread_tmp229_fu_141399_p2() {
    tmp229_fu_141399_p2 = (!tmp226_reg_222051.read().is_01() || !tmp228_fu_141384_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp226_reg_222051.read()) + sc_biguint<16>(tmp228_fu_141384_p2.read()));
}

void a0_conv2d_1::thread_tmp2300_fu_119178_p2() {
    tmp2300_fu_119178_p2 = (!r4esult8_V_27_fu_96651_p4.read().is_01() || !tmp2299_fu_119157_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_27_fu_96651_p4.read()) + sc_biguint<16>(tmp2299_fu_119157_p2.read()));
}

void a0_conv2d_1::thread_tmp2301_fu_168486_p2() {
    tmp2301_fu_168486_p2 = (!tmp2298_fu_168476_p2.read().is_01() || !tmp2300_reg_226896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2298_fu_168476_p2.read()) + sc_biguint<16>(tmp2300_reg_226896.read()));
}

void a0_conv2d_1::thread_tmp2302_fu_168501_p2() {
    tmp2302_fu_168501_p2 = (!tmp2297_fu_168461_p2.read().is_01() || !tmp2301_fu_168486_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2297_fu_168461_p2.read()) + sc_biguint<16>(tmp2301_fu_168486_p2.read()));
}

void a0_conv2d_1::thread_tmp2303_fu_168525_p2() {
    tmp2303_fu_168525_p2 = (!r4esult3_V_28_fu_128272_p4.read().is_01() || !r4esult9_V_27_fu_128142_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_28_fu_128272_p4.read()) + sc_biguint<16>(r4esult9_V_27_fu_128142_p4.read()));
}

void a0_conv2d_1::thread_tmp2304_fu_168531_p2() {
    tmp2304_fu_168531_p2 = (!r4esult5_V_28_reg_216806.read().is_01() || !r4esult2_V_28_reg_216791.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_28_reg_216806.read()) + sc_biguint<16>(r4esult2_V_28_reg_216791.read()));
}

void a0_conv2d_1::thread_tmp2305_fu_168541_p2() {
    tmp2305_fu_168541_p2 = (!tmp2303_fu_168525_p2.read().is_01() || !tmp2304_fu_168531_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2303_fu_168525_p2.read()) + sc_biguint<16>(tmp2304_fu_168531_p2.read()));
}

void a0_conv2d_1::thread_tmp2306_fu_168556_p2() {
    tmp2306_fu_168556_p2 = (!r4esult6_V_28_fu_128285_p4.read().is_01() || !r4esult4_V_28_reg_216801.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_28_fu_128285_p4.read()) + sc_biguint<16>(r4esult4_V_28_reg_216801.read()));
}

void a0_conv2d_1::thread_tmp2307_fu_119241_p2() {
    tmp2307_fu_119241_p2 = (!r4esult1_V_29_fu_97348_p4.read().is_01() || !r4esult7_V_28_fu_97019_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_29_fu_97348_p4.read()) + sc_biguint<16>(r4esult7_V_28_fu_97019_p4.read()));
}

void a0_conv2d_1::thread_tmp2308_fu_168561_p2() {
    tmp2308_fu_168561_p2 = (!r4esult8_V_28_reg_216816.read().is_01() || !tmp2307_reg_226916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_28_reg_216816.read()) + sc_biguint<16>(tmp2307_reg_226916.read()));
}

void a0_conv2d_1::thread_tmp2309_fu_168570_p2() {
    tmp2309_fu_168570_p2 = (!tmp2306_fu_168556_p2.read().is_01() || !tmp2308_fu_168561_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2306_fu_168556_p2.read()) + sc_biguint<16>(tmp2308_fu_168561_p2.read()));
}

void a0_conv2d_1::thread_tmp230_fu_141416_p2() {
    tmp230_fu_141416_p2 = (!tmp225_fu_141365_p2.read().is_01() || !tmp229_fu_141399_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp225_fu_141365_p2.read()) + sc_biguint<16>(tmp229_fu_141399_p2.read()));
}

void a0_conv2d_1::thread_tmp2310_fu_168586_p2() {
    tmp2310_fu_168586_p2 = (!tmp2305_fu_168541_p2.read().is_01() || !tmp2309_fu_168570_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2305_fu_168541_p2.read()) + sc_biguint<16>(tmp2309_fu_168570_p2.read()));
}

void a0_conv2d_1::thread_tmp2311_fu_168604_p2() {
    tmp2311_fu_168604_p2 = (!tmp2302_fu_168501_p2.read().is_01() || !tmp2310_fu_168586_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2302_fu_168501_p2.read()) + sc_biguint<16>(tmp2310_fu_168586_p2.read()));
}

void a0_conv2d_1::thread_tmp2312_fu_168628_p2() {
    tmp2312_fu_168628_p2 = (!r4esult3_V_29_fu_128428_p4.read().is_01() || !r4esult9_V_28_fu_128298_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_29_fu_128428_p4.read()) + sc_biguint<16>(r4esult9_V_28_fu_128298_p4.read()));
}

void a0_conv2d_1::thread_tmp2313_fu_168634_p2() {
    tmp2313_fu_168634_p2 = (!r4esult5_V_29_reg_216931.read().is_01() || !r4esult2_V_29_reg_216916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_29_reg_216931.read()) + sc_biguint<16>(r4esult2_V_29_reg_216916.read()));
}

void a0_conv2d_1::thread_tmp2314_fu_168644_p2() {
    tmp2314_fu_168644_p2 = (!tmp2312_fu_168628_p2.read().is_01() || !tmp2313_fu_168634_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2312_fu_168628_p2.read()) + sc_biguint<16>(tmp2313_fu_168634_p2.read()));
}

void a0_conv2d_1::thread_tmp2315_fu_168659_p2() {
    tmp2315_fu_168659_p2 = (!r4esult6_V_29_fu_128441_p4.read().is_01() || !r4esult4_V_29_reg_216926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_29_fu_128441_p4.read()) + sc_biguint<16>(r4esult4_V_29_reg_216926.read()));
}

void a0_conv2d_1::thread_tmp2316_fu_119319_p2() {
    tmp2316_fu_119319_p2 = (!r4esult1_V_30_fu_97729_p4.read().is_01() || !r4esult7_V_29_fu_97400_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult1_V_30_fu_97729_p4.read()) + sc_biguint<16>(r4esult7_V_29_fu_97400_p4.read()));
}

void a0_conv2d_1::thread_tmp2317_fu_119340_p2() {
    tmp2317_fu_119340_p2 = (!r4esult8_V_29_fu_97413_p4.read().is_01() || !tmp2316_fu_119319_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_29_fu_97413_p4.read()) + sc_biguint<16>(tmp2316_fu_119319_p2.read()));
}

void a0_conv2d_1::thread_tmp2318_fu_168669_p2() {
    tmp2318_fu_168669_p2 = (!tmp2315_fu_168659_p2.read().is_01() || !tmp2317_reg_226936.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2315_fu_168659_p2.read()) + sc_biguint<16>(tmp2317_reg_226936.read()));
}

void a0_conv2d_1::thread_tmp2319_fu_168684_p2() {
    tmp2319_fu_168684_p2 = (!tmp2314_fu_168644_p2.read().is_01() || !tmp2318_fu_168669_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2314_fu_168644_p2.read()) + sc_biguint<16>(tmp2318_fu_168669_p2.read()));
}

void a0_conv2d_1::thread_tmp231_fu_141434_p2() {
    tmp231_fu_141434_p2 = (!tmp222_fu_141321_p2.read().is_01() || !tmp230_fu_141416_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp222_fu_141321_p2.read()) + sc_biguint<16>(tmp230_fu_141416_p2.read()));
}

void a0_conv2d_1::thread_tmp2320_fu_168708_p2() {
    tmp2320_fu_168708_p2 = (!r4esult3_V_30_fu_128584_p4.read().is_01() || !r4esult9_V_29_fu_128454_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult3_V_30_fu_128584_p4.read()) + sc_biguint<16>(r4esult9_V_29_fu_128454_p4.read()));
}

void a0_conv2d_1::thread_tmp2321_fu_168714_p2() {
    tmp2321_fu_168714_p2 = (!r4esult5_V_30_reg_217081.read().is_01() || !r4esult2_V_30_reg_217066.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult5_V_30_reg_217081.read()) + sc_biguint<16>(r4esult2_V_30_reg_217066.read()));
}

void a0_conv2d_1::thread_tmp2322_fu_168724_p2() {
    tmp2322_fu_168724_p2 = (!tmp2320_fu_168708_p2.read().is_01() || !tmp2321_fu_168714_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2320_fu_168708_p2.read()) + sc_biguint<16>(tmp2321_fu_168714_p2.read()));
}

void a0_conv2d_1::thread_tmp2323_fu_168739_p2() {
    tmp2323_fu_168739_p2 = (!r4esult6_V_30_fu_128597_p4.read().is_01() || !r4esult4_V_30_reg_217076.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult6_V_30_fu_128597_p4.read()) + sc_biguint<16>(r4esult4_V_30_reg_217076.read()));
}

void a0_conv2d_1::thread_tmp2324_fu_168753_p2() {
    tmp2324_fu_168753_p2 = (!r4esult9_V_62_fu_161160_p4.read().is_01() || !r4esult7_V_30_reg_217091.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult9_V_62_fu_161160_p4.read()) + sc_biguint<16>(r4esult7_V_30_reg_217091.read()));
}

void a0_conv2d_1::thread_tmp2325_fu_168763_p2() {
    tmp2325_fu_168763_p2 = (!r4esult8_V_30_reg_217096.read().is_01() || !tmp2324_fu_168753_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(r4esult8_V_30_reg_217096.read()) + sc_biguint<16>(tmp2324_fu_168753_p2.read()));
}

void a0_conv2d_1::thread_tmp2326_fu_168778_p2() {
    tmp2326_fu_168778_p2 = (!tmp2323_fu_168739_p2.read().is_01() || !tmp2325_fu_168763_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp2323_fu_168739_p2.read()) + sc_biguint<16>(tmp2325_fu_168763_p2.read()));
}

}

