// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9070
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9070 jmp     cs:off_2E020
//
// Resolved target: op_stkvar
// Target address:  0x2E690
// GOT/IAT slot:    0x2E020
// Slot symbol:     off_2E020
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

