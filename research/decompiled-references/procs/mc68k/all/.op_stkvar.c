// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6060
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6060 jmp     cs:off_1D018
//
// Resolved target: op_stkvar
// Target address:  0x1D508
// GOT/IAT slot:    0x1D018
// Slot symbol:     off_1D018
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

