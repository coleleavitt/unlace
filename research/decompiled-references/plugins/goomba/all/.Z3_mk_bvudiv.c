// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49B0
// Name:            .Z3_mk_bvudiv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x49B0 jmp     cs:off_4E4C0
//
// Resolved target: Z3_mk_bvudiv
// Target address:  0x4FAF8
// GOT/IAT slot:    0x4E4C0
// Slot symbol:     off_4E4C0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvudiv(/* see target signature */)
{
    // Tail-call to Z3_mk_bvudiv via GOT/IAT indirection
    return Z3_mk_bvudiv(/* forwarded args */);
}

