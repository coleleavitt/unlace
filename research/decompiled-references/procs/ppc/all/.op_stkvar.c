// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x200C0
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x200C0 jmp     cs:off_95048
//
// Resolved target: op_stkvar
// Target address:  0x95A78
// GOT/IAT slot:    0x95048
// Slot symbol:     off_95048
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

