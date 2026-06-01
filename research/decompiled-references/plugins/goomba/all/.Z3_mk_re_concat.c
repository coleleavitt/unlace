// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4630
// Name:            .Z3_mk_re_concat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4630 jmp     cs:off_4E300
//
// Resolved target: Z3_mk_re_concat
// Target address:  0x4F910
// GOT/IAT slot:    0x4E300
// Slot symbol:     off_4E300
// Target type:     <no type info>
// ============================================================

void .Z3_mk_re_concat(/* see target signature */)
{
    // Tail-call to Z3_mk_re_concat via GOT/IAT indirection
    return Z3_mk_re_concat(/* forwarded args */);
}

