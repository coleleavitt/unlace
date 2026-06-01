// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9030
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9030 jmp     cs:off_26000
//
// Resolved target: op_stkvar
// Target address:  0x26310
// GOT/IAT slot:    0x26000
// Slot symbol:     off_26000
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

