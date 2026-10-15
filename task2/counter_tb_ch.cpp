#include "Vcounter_ch.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i, clk;

    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vcounter_ch* top = new Vcounter_ch;
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
    top -> en = 0;

    //run simulations for many clock cycles
    for (i = 0 ; i < 1500 ; i++){

        //dump variables into vcd file and toggle clock
        for (clk = 0 ; clk < 2 ; clk ++){
            tfp -> dump(2*i + clk);
            top -> clk = !top -> clk;
            top -> eval();
        }

        //Send count value to Vbuddy
        vbdPlot( int( top -> count ), 0, 255);
        vbdCycle(i+1);
        //End of the Vbuddy output section

        top -> rst = (i < 2) | (i == 15);
        top->en = vbdFlag();
        if(Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp -> close();
    exit(0);
}
