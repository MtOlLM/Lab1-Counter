#include "Vcounter_async.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int i, clk;

    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vcounter_async* top = new Vcounter_async;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp, 99);
    tfp -> open("counter_async.vcd");

    //initialize simulation inputs
    top -> clk = 1;
    top -> rst = 1;
    top -> en = 0;

    //run simulations for many clock cycles
    for (i = 0 ; i < 300 ; i++){

        //dump variables into vcd file and toggle clock
        for (clk = 0 ; clk < 2 ; clk ++){
            tfp -> dump(2*i + clk);
            top -> clk = !top -> clk;
            top -> eval();
        }
        top -> rst = (i < 2) | (i == 15)| (i == 19)| (i == 29)| (i == 35)| (i == 67);
        top -> en =(i > 4);
        if(Verilated::gotFinish()) exit(0);
    }
    tfp -> close();
    exit(0);
}
