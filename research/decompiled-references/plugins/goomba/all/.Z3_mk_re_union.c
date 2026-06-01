// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4530
// Name:            .Z3_mk_re_union
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4530 jmp     cs:off_4E280
//
// Resolved target: Z3_mk_re_union
// Target address:  0x4F890
// GOT/IAT slot:    0x4E280
// Slot symbol:     off_4E280
// Target type:     <no type info>
// ============================================================

void .Z3_mk_re_union(/* see target signature */)
{
    // Tail-call to Z3_mk_re_union via GOT/IAT indirection
    return Z3_mk_re_union(/* forwarded args */);
}

