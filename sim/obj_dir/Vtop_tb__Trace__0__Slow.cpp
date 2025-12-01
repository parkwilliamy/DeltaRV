// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"RVMODEL_DATA_BEGIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"RVMODEL_DATA_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"tohost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"web",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"addra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"addrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"IF_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+70,0,"ID_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->declArray(c+77,0,"EX_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 148,0);
    tracep->declArray(c+82,0,"MEM_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 110,0);
    tracep->declBus(c+166,0,"IF_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"ID_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"ID_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,0,"ID_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,7);
    tracep->declBus(c+11,0,"ID_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBus(c+12,0,"ID_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,15);
    tracep->declBus(c+13,0,"ID_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,20);
    tracep->declBus(c+14,0,"ID_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,25);
    tracep->declBit(c+138,0,"ID_Stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ID_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"ID_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"ID_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"ID_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ID_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ID_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"ID_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"ID_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"ID_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"ID_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"ID_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"ID_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"WB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"WB_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"EX_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"EX_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"EX_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"EX_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"EX_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"EX_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"EX_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"EX_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"EX_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"EX_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"EX_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"EX_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"EX_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"EX_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"EX_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"EX_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"EX_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"EX_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"EX_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"EX_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"EX_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"EX_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"EX_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"EX_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"EX_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"EX_rs1_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"EX_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"EX_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"EX_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"EX_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"EX_rs1_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"MEM_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"MEM_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"MEM_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"MEM_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+111,0,"MEM_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"MEM_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"MEM_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"MEM_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"MEM_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"MEM_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"MEM_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"MEM_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"MEM_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"WB_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"WB_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"WB_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"WB_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"WB_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"WB_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+124,0,"WB_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("INST1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"dia",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"dib",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"IMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"IMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"DMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"DMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+159,0,"row_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"row_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+97,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"ID_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"EX_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"EX_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"EX_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"rs1_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"ID_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"EX_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"MEM_ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"MEM_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"MEM_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"MEM_RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"EX_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"EX_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"MEM_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"EX_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"MEM_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"WB_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+116,0,"MEM_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"MEM_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"WB_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"EX_rs1_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"EX_rs2_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"EX_rs1_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"EX_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"MEM_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"MEM_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"EX_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"ID_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,0,"Stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"ValidReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"RegSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"Jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+175,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+176,0,"OP_I_LD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+177,0,"OP_I_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+178,0,"OP_I_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+179,0,"OP_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+180,0,"OP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+181,0,"OP_U_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+182,0,"OP_U_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"OP_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,0,"intimm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+62,0,"intimm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+63,0,"imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"imm3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"imm4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+176,0,"OP_I_LD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+177,0,"OP_I_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+178,0,"OP_I_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+179,0,"OP_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+180,0,"OP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+181,0,"OP_U_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+182,0,"OP_U_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"OP_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"regbit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"field",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+148,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"field",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+97,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+155,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"web",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"dib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"DMEM_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"rd_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"DMEM_shifted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"DMEM_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+169,(vlSelfRef.top_tb__DOT__DUT__DOT__wea),4);
    bufp->fullIData(oldp+170,(vlSelfRef.top_tb__DOT__DUT__DOT__dia),32);
    bufp->fullIData(oldp+171,(0U),32);
    bufp->fullIData(oldp+172,(0x00200000U),32);
    bufp->fullIData(oldp+173,(0x00250000U),32);
    bufp->fullCData(oldp+174,(0x33U),7);
    bufp->fullCData(oldp+175,(0x13U),7);
    bufp->fullCData(oldp+176,(3U),7);
    bufp->fullCData(oldp+177,(0x0fU),7);
    bufp->fullCData(oldp+178,(0x67U),7);
    bufp->fullCData(oldp+179,(0x23U),7);
    bufp->fullCData(oldp+180,(0x63U),7);
    bufp->fullCData(oldp+181,(0x37U),7);
    bufp->fullCData(oldp+182,(0x17U),7);
    bufp->fullCData(oldp+183,(0x6fU),7);
    bufp->fullCData(oldp+184,(0U),4);
    bufp->fullCData(oldp+185,(8U),4);
    bufp->fullCData(oldp+186,(7U),4);
    bufp->fullCData(oldp+187,(6U),4);
    bufp->fullCData(oldp+188,(4U),4);
    bufp->fullCData(oldp+189,(1U),4);
    bufp->fullCData(oldp+190,(5U),4);
    bufp->fullCData(oldp+191,(0x0dU),4);
    bufp->fullCData(oldp+192,(2U),4);
    bufp->fullCData(oldp+193,(3U),4);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__tohost),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top_tb__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top_tb__DOT__fd),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__DUT__DOT__doa),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__DUT__DOT__dob),32);
    bufp->fullCData(oldp+9,((0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__doa)),7);
    bufp->fullCData(oldp+10,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                                             >> 7U))),5);
    bufp->fullCData(oldp+11,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+12,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+13,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+14,((vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+15,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg),3);
    bufp->fullCData(oldp+16,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp),2);
    bufp->fullCData(oldp+17,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc),2);
    bufp->fullBit(oldp+18,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc));
    bufp->fullBit(oldp+19,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite));
    bufp->fullBit(oldp+20,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead));
    bufp->fullBit(oldp+21,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite));
    bufp->fullBit(oldp+22,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch));
    bufp->fullBit(oldp+23,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump));
    bufp->fullCData(oldp+24,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field),4);
    bufp->fullIData(oldp+25,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__i),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[31]),32);
    bufp->fullCData(oldp+59,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode),7);
    bufp->fullCData(oldp+60,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3),3);
    bufp->fullSData(oldp+61,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1),12);
    bufp->fullIData(oldp+62,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2),20);
    bufp->fullIData(oldp+63,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm2),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm3),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm4),32);
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__doa 
                                  >> 5U))));
    bufp->fullCData(oldp+68,(vlSelfRef.top_tb__DOT__DUT__DOT__web),4);
    bufp->fullIData(oldp+69,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                               << 0x00000016U) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                  >> 0x0000000aU))),32);
    bufp->fullWData(oldp+70,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX),195);
    bufp->fullWData(oldp+77,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM),149);
    bufp->fullWData(oldp+82,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB),111);
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 5U))));
    bufp->fullCData(oldp+87,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])),5);
    bufp->fullCData(oldp+88,((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                              >> 0x0000001cU)),4);
    bufp->fullCData(oldp+89,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000019U))),3);
    bufp->fullCData(oldp+90,((7U & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])),3);
    bufp->fullCData(oldp+91,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000017U))),2);
    bufp->fullCData(oldp+92,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000015U))),2);
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000014U))));
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000013U))));
    bufp->fullBit(oldp+95,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000012U))));
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000011U))));
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000010U))));
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x0000000fU))));
    bufp->fullIData(oldp+99,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                               << 0x0000001dU) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                                  >> 3U))),32);
    bufp->fullIData(oldp+100,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                << 0x00000011U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                                   >> 0x0000000fU))),32);
    bufp->fullIData(oldp+101,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                << 0x00000011U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                                   >> 0x0000000fU))),32);
    bufp->fullIData(oldp+102,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                << 0x00000011U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                   >> 0x0000000fU))),32);
    bufp->fullIData(oldp+103,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                                   >> 3U))),32);
    bufp->fullCData(oldp+104,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                              >> 5U))),5);
    bufp->fullCData(oldp+105,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])),5);
    bufp->fullCData(oldp+106,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                              >> 0x0000000aU))),5);
    bufp->fullIData(oldp+107,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                                << 0x0000000bU) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                                   >> 0x00000015U))),32);
    bufp->fullCData(oldp+108,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x00000012U))),3);
    bufp->fullCData(oldp+109,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x0000000fU))),3);
    bufp->fullCData(oldp+110,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x0000000dU))),2);
    bufp->fullBit(oldp+111,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                   >> 0x0000000cU))));
    bufp->fullIData(oldp+112,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                << 0x0000000bU) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                   >> 0x00000015U))),32);
    bufp->fullIData(oldp+113,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                << 0x00000016U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                                   >> 0x0000000aU))),32);
    bufp->fullCData(oldp+114,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                              >> 5U))),5);
    bufp->fullCData(oldp+115,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U])),5);
    bufp->fullBit(oldp+116,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+117,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                   >> 0x0000000aU))));
    bufp->fullIData(oldp+118,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                << 0x00000011U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                                   >> 0x0000000fU))),32);
    bufp->fullIData(oldp+119,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                                << 0x00000011U) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                                   >> 0x0000000fU))),32);
    bufp->fullIData(oldp+120,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                << 0x0000001bU) | (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                                   >> 5U))),32);
    bufp->fullCData(oldp+121,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+122,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                     >> 9U))),3);
    bufp->fullCData(oldp+123,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                     >> 7U))),2);
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                   >> 6U))));
    bufp->fullBit(oldp+125,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
                              | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                          >> 5U))))));
    bufp->fullBit(oldp+126,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
                              | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
                             & (0U != (0x0000001fU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])))));
    bufp->fullBit(oldp+127,(((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                          >> 5U))))));
    bufp->fullIData(oldp+128,(VL_SHIFTR_III(32,32,32, 
                                            ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                              << 0x00000016U) 
                                             | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                >> 0x0000000aU)), 2U)),32);
    bufp->fullBit(oldp+129,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd));
    bufp->fullBit(oldp+130,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd));
    bufp->fullBit(oldp+131,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd));
    bufp->fullBit(oldp+132,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd));
    bufp->fullBit(oldp+133,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd));
    bufp->fullCData(oldp+134,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                     >> 0x0000000aU))),2);
    bufp->fullCData(oldp+135,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                     >> 5U))),2);
    bufp->fullIData(oldp+136,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra),32);
    bufp->fullIData(oldp+137,(vlSelfRef.top_tb__DOT__DUT__DOT__dib),32);
    bufp->fullBit(oldp+138,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall));
    bufp->fullBit(oldp+139,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush));
    bufp->fullIData(oldp+140,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm),32);
    bufp->fullIData(oldp+141,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data),32);
    bufp->fullIData(oldp+142,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data),32);
    bufp->fullBit(oldp+144,((0U == vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+145,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+146,((((vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                               >> 0x0000001fU) != (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2 
                                                   >> 0x0000001fU)) 
                             & ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                                 >> 0x0000001fU) != 
                                (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                 >> 0x0000001fU)))));
    bufp->fullBit(oldp+147,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry));
    bufp->fullIData(oldp+148,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1),32);
    bufp->fullIData(oldp+149,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2),32);
    bufp->fullIData(oldp+150,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final),32);
    bufp->fullBit(oldp+153,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush));
    bufp->fullIData(oldp+154,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result),32);
    bufp->fullBit(oldp+155,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_branch_taken));
    bufp->fullIData(oldp+156,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data),32);
    bufp->fullIData(oldp+157,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final),32);
    bufp->fullIData(oldp+158,(vlSelfRef.top_tb__DOT__DUT__DOT__next_pc),32);
    bufp->fullIData(oldp+159,(VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra, 2U)),32);
    bufp->fullIData(oldp+160,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data),32);
    bufp->fullIData(oldp+161,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word),32);
    bufp->fullIData(oldp+162,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result),32);
    bufp->fullBit(oldp+163,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+164,(vlSelfRef.clk));
    bufp->fullIData(oldp+165,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID),32);
    bufp->fullIData(oldp+166,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc),32);
    bufp->fullIData(oldp+167,(((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
                                 | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
                                & (0U != (0x0000001fU 
                                          & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])))
                                ? vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data
                                : ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                    << 0x00000011U) 
                                   | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                      >> 0x0000000fU)))),32);
    bufp->fullIData(oldp+168,((vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final 
                               + ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                     >> 0x0000000fU)))),32);
}
