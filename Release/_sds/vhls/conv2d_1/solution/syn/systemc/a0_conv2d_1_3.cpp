#include "a0_conv2d_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void a0_conv2d_1::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN2_V_dout\" :  \"" << CON_IN2_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN2_V_empty_n\" :  \"" << CON_IN2_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_IN2_V_read\" :  \"" << CON_IN2_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER2_V_dout\" :  \"" << KER2_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER2_V_empty_n\" :  \"" << KER2_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"KER2_V_read\" :  \"" << KER2_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT2_V_din\" :  \"" << CON_OUT2_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_OUT2_V_full_n\" :  \"" << CON_OUT2_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT2_V_write\" :  \"" << CON_OUT2_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA2_V_dout\" :  \"" << BIA2_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA2_V_empty_n\" :  \"" << BIA2_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"BIA2_V_read\" :  \"" << BIA2_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN3_V_dout\" :  \"" << CON_IN3_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN3_V_empty_n\" :  \"" << CON_IN3_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_IN3_V_read\" :  \"" << CON_IN3_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER3_V_dout\" :  \"" << KER3_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER3_V_empty_n\" :  \"" << KER3_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"KER3_V_read\" :  \"" << KER3_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT3_V_din\" :  \"" << CON_OUT3_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_OUT3_V_full_n\" :  \"" << CON_OUT3_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT3_V_write\" :  \"" << CON_OUT3_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA3_V_dout\" :  \"" << BIA3_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA3_V_empty_n\" :  \"" << BIA3_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"BIA3_V_read\" :  \"" << BIA3_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN4_V_dout\" :  \"" << CON_IN4_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN4_V_empty_n\" :  \"" << CON_IN4_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_IN4_V_read\" :  \"" << CON_IN4_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER4_V_dout\" :  \"" << KER4_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER4_V_empty_n\" :  \"" << KER4_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"KER4_V_read\" :  \"" << KER4_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT4_V_din\" :  \"" << CON_OUT4_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_OUT4_V_full_n\" :  \"" << CON_OUT4_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT4_V_write\" :  \"" << CON_OUT4_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA4_V_dout\" :  \"" << BIA4_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA4_V_empty_n\" :  \"" << BIA4_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"BIA4_V_read\" :  \"" << BIA4_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN5_V_dout\" :  \"" << CON_IN5_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_IN5_V_empty_n\" :  \"" << CON_IN5_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_IN5_V_read\" :  \"" << CON_IN5_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER5_V_dout\" :  \"" << KER5_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"KER5_V_empty_n\" :  \"" << KER5_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"KER5_V_read\" :  \"" << KER5_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT5_V_din\" :  \"" << CON_OUT5_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"CON_OUT5_V_full_n\" :  \"" << CON_OUT5_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"CON_OUT5_V_write\" :  \"" << CON_OUT5_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA5_V_dout\" :  \"" << BIA5_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"BIA5_V_empty_n\" :  \"" << BIA5_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"BIA5_V_read\" :  \"" << BIA5_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"re_en\" :  \"" << re_en.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

