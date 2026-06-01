// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5060
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5060 jmp     cs:off_15018
//
// Resolved target: op_stkvar
// Target address:  0x160A8
// GOT/IAT slot:    0x15018
// Slot symbol:     off_15018
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

