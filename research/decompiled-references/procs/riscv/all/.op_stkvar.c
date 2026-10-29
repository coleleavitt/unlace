// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA060
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA060 jmp     cs:off_35018
//
// Resolved target: op_stkvar
// Target address:  0x35668
// GOT/IAT slot:    0x35018
// Slot symbol:     off_35018
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

