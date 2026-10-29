// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45C0
// Name:            .Z3_mk_bvule
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45C0 jmp     cs:off_4E2C8
//
// Resolved target: Z3_mk_bvule
// Target address:  0x4F8D8
// GOT/IAT slot:    0x4E2C8
// Slot symbol:     off_4E2C8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvule(/* see target signature */)
{
    // Tail-call to Z3_mk_bvule via GOT/IAT indirection
    return Z3_mk_bvule(/* forwarded args */);
}

