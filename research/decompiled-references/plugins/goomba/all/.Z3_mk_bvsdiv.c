// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4550
// Name:            .Z3_mk_bvsdiv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4550 jmp     cs:off_4E290
//
// Resolved target: Z3_mk_bvsdiv
// Target address:  0x4F8A0
// GOT/IAT slot:    0x4E290
// Slot symbol:     off_4E290
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsdiv(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsdiv via GOT/IAT indirection
    return Z3_mk_bvsdiv(/* forwarded args */);
}

