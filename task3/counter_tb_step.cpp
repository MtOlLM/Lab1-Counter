#include "Vcounter_step.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i, clk;

    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vcounter_step* top = new Vcounter_step;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp, 99);
    tfp -> open("counter.vcd");

    //init Vbuddy
    if(vbdOpen() != 1) return(-1);
    vbdHeader("Lab 1: Counter");

    //initialize simulation inputs
    top -> clk = 1;
    top -> rst = 1;
    top -> ld = 0;

    //set the Vbuddy to one-shot mode
    vbdSetMode(1);
    bool last_flg;
    //run simulations for many clock cycles
    for (i = 0 ; i < 1500 ; i++){

        //dump variables into vcd file and toggle clock
        for (clk = 0 ; clk < 2 ; clk ++){
            tfp -> dump(2*i + clk);
            top -> clk = !top -> clk;
            top -> eval();
        }

        //Send count value to Vbuddy
        //vbdPlot( int( top -> count ), 0, 255);

        vbdHex(4, (int(top -> count) >> 16) & 0xF);
        vbdHex(3, (int(top -> count) >> 8) & 0xF);
        vbdHex(2, (int(top -> count) >> 4) & 0xF);
        vbdHex(1, int(top -> count) & 0xF);

        vbdCycle(i+1);
        //End of the Vbuddy output section

        top -> rst = (i < 2);
        top ->ld = vbdFlag();

        if(Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp -> close();
    exit(0);
}
