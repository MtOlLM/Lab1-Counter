#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int i, clk;

    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vcounter* top = new Vcounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp, 99);
    tfp -> open("counter1.vcd");

    //initialize simulation inputs
    top -> clk = 1;
    top -> rst = 1;
    top -> en = 0;
    int pause_cnt =0;
    //run simulations for many clock cycles
    for (i = 0 ; i < 300 ; i++){

        //dump variables into vcd file and toggle clock
        for (clk = 0 ; clk < 2 ; clk ++){
            tfp -> dump(2*i + clk);
            top -> clk = !top -> clk;
            top -> eval();
        }
        top -> rst = (i < 2) | (i == 15);
        top -> en = (i > 4);

        if(pause_cnt > 0){
            top -> en = 0;
            pause_cnt--;
        }
        else if(top -> count == 0x8){
            pause_cnt = 3;
        }
        
        if(Verilated::gotFinish()) exit(0);
    }
    tfp -> close();
    exit(0);
}
