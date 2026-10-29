// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_5050
//
// Resolved target: set_func_cmt
// Target address:  0x51F0
// GOT/IAT slot:    0x5050
// Slot symbol:     off_5050
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

