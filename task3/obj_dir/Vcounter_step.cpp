// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter_step__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcounter_step::Vcounter_step(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter_step__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ld{vlSymsp->TOP.ld}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounter_step::Vcounter_step(const char* _vcname__)
    : Vcounter_step(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter_step::~Vcounter_step() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter_step___024root___eval_debug_assertions(Vcounter_step___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcounter_step___024root___eval_static(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_initial(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD bool Vcounter_step___024root___eval_stl(Vcounter_step___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vcounter_step___024root___eval_sample(Vcounter_step___024root* vlSelf);
bool Vcounter_step___024root___eval_ico(Vcounter_step___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vcounter_step___024root___eval_act(Vcounter_step___024root* vlSelf);
bool Vcounter_step___024root___eval_inact(Vcounter_step___024root* vlSelf);
bool Vcounter_step___024root___eval_nba(Vcounter_step___024root* vlSelf);
bool Vcounter_step___024root___eval_obs(Vcounter_step___024root* vlSelf);
bool Vcounter_step___024root___eval_react(Vcounter_step___024root* vlSelf);
void Vcounter_step___024root___eval_postponed(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_final(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__stl(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__ico(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__act(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__nba(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__obs(Vcounter_step___024root* vlSelf);
VL_ATTR_COLD void Vcounter_step___024root___eval_dump_triggers__react(Vcounter_step___024root* vlSelf);

void Vcounter_step::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_step::eval_step\n"); );
    m_evalLoop.eval();
}

void Vcounter_step::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter_step___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vcounter_step::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcounter_step::evalStatic() {
    Vcounter_step___024root___eval_static(&(vlSymsp->TOP));
}

void Vcounter_step::evalInitial() {
    Vcounter_step___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vcounter_step::evalStl(bool firstIteration) {
    return Vcounter_step___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vcounter_step::evalSample() {
    Vcounter_step___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vcounter_step::evalIco(bool firstIteration) {
    return Vcounter_step___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vcounter_step::evalAct() {
    return Vcounter_step___024root___eval_act(&(vlSymsp->TOP));
}

bool Vcounter_step::evalInact() {
    return Vcounter_step___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vcounter_step::evalNba() {
    return Vcounter_step___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vcounter_step::evalObs() {
    return Vcounter_step___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vcounter_step::evalReact() {
    return Vcounter_step___024root___eval_react(&(vlSymsp->TOP));
}

void Vcounter_step::evalPostponed() {
    Vcounter_step___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vcounter_step::evalFinal() {
    Vcounter_step___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersStl() {
    Vcounter_step___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersIco() {
    Vcounter_step___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersAct() {
    Vcounter_step___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersNba() {
    Vcounter_step___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersObs() {
    Vcounter_step___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_step::dumpTriggersReact() {
    Vcounter_step___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vcounter_step::eventsPending() { return false; }

uint64_t Vcounter_step::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounter_step::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcounter_step::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter_step::hierName() const { return vlSymsp->name(); }
const char* Vcounter_step::modelName() const { return "Vcounter_step"; }
unsigned Vcounter_step::threads() const { return 1; }
void Vcounter_step::prepareClone() const { contextp()->prepareClone(); }
void Vcounter_step::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounter_step::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcounter_step___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcounter_step___024root__trace_init_top(Vcounter_step___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounter_step___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_step___024root*>(voidSelf);
    Vcounter_step__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounter_step___024root__trace_decl_types(tracep);
    Vcounter_step___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter_step___024root__trace_register(Vcounter_step___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcounter_step::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounter_step::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 5);
    Vcounter_step___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
