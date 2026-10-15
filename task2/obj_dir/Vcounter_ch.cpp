// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter_ch__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcounter_ch::Vcounter_ch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter_ch__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounter_ch::Vcounter_ch(const char* _vcname__)
    : Vcounter_ch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter_ch::~Vcounter_ch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter_ch___024root___eval_debug_assertions(Vcounter_ch___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcounter_ch___024root___eval_static(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_initial(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD bool Vcounter_ch___024root___eval_stl(Vcounter_ch___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vcounter_ch___024root___eval_sample(Vcounter_ch___024root* vlSelf);
bool Vcounter_ch___024root___eval_ico(Vcounter_ch___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vcounter_ch___024root___eval_act(Vcounter_ch___024root* vlSelf);
bool Vcounter_ch___024root___eval_inact(Vcounter_ch___024root* vlSelf);
bool Vcounter_ch___024root___eval_nba(Vcounter_ch___024root* vlSelf);
bool Vcounter_ch___024root___eval_obs(Vcounter_ch___024root* vlSelf);
bool Vcounter_ch___024root___eval_react(Vcounter_ch___024root* vlSelf);
void Vcounter_ch___024root___eval_postponed(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_final(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__stl(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__ico(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__act(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__nba(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__obs(Vcounter_ch___024root* vlSelf);
VL_ATTR_COLD void Vcounter_ch___024root___eval_dump_triggers__react(Vcounter_ch___024root* vlSelf);

void Vcounter_ch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_ch::eval_step\n"); );
    m_evalLoop.eval();
}

void Vcounter_ch::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter_ch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vcounter_ch::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcounter_ch::evalStatic() {
    Vcounter_ch___024root___eval_static(&(vlSymsp->TOP));
}

void Vcounter_ch::evalInitial() {
    Vcounter_ch___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalStl(bool firstIteration) {
    return Vcounter_ch___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vcounter_ch::evalSample() {
    Vcounter_ch___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalIco(bool firstIteration) {
    return Vcounter_ch___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vcounter_ch::evalAct() {
    return Vcounter_ch___024root___eval_act(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalInact() {
    return Vcounter_ch___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalNba() {
    return Vcounter_ch___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalObs() {
    return Vcounter_ch___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vcounter_ch::evalReact() {
    return Vcounter_ch___024root___eval_react(&(vlSymsp->TOP));
}

void Vcounter_ch::evalPostponed() {
    Vcounter_ch___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vcounter_ch::evalFinal() {
    Vcounter_ch___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersStl() {
    Vcounter_ch___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersIco() {
    Vcounter_ch___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersAct() {
    Vcounter_ch___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersNba() {
    Vcounter_ch___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersObs() {
    Vcounter_ch___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_ch::dumpTriggersReact() {
    Vcounter_ch___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vcounter_ch::eventsPending() { return false; }

uint64_t Vcounter_ch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounter_ch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcounter_ch::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter_ch::hierName() const { return vlSymsp->name(); }
const char* Vcounter_ch::modelName() const { return "Vcounter_ch"; }
unsigned Vcounter_ch::threads() const { return 1; }
void Vcounter_ch::prepareClone() const { contextp()->prepareClone(); }
void Vcounter_ch::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounter_ch::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcounter_ch___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcounter_ch___024root__trace_init_top(Vcounter_ch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounter_ch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_ch___024root*>(voidSelf);
    Vcounter_ch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounter_ch___024root__trace_decl_types(tracep);
    Vcounter_ch___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter_ch___024root__trace_register(Vcounter_ch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcounter_ch::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounter_ch::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 5);
    Vcounter_ch___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
