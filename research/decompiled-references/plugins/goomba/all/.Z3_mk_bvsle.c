// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4690
// Name:            .Z3_mk_bvsle
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4690 jmp     cs:off_4E330
//
// Resolved target: Z3_mk_bvsle
// Target address:  0x4F940
// GOT/IAT slot:    0x4E330
// Slot symbol:     off_4E330
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsle(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsle via GOT/IAT indirection
    return Z3_mk_bvsle(/* forwarded args */);
}

