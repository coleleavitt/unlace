// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46D0
// Name:            .Z3_mk_div
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46D0 jmp     cs:off_4E350
//
// Resolved target: Z3_mk_div
// Target address:  0x4F960
// GOT/IAT slot:    0x4E350
// Slot symbol:     off_4E350
// Target type:     <no type info>
// ============================================================

void .Z3_mk_div(/* see target signature */)
{
    // Tail-call to Z3_mk_div via GOT/IAT indirection
    return Z3_mk_div(/* forwarded args */);
}

