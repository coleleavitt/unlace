// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46B0
// Name:            .Z3_mk_bvadd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46B0 jmp     cs:off_4E340
//
// Resolved target: Z3_mk_bvadd
// Target address:  0x4F950
// GOT/IAT slot:    0x4E340
// Slot symbol:     off_4E340
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvadd(/* see target signature */)
{
    // Tail-call to Z3_mk_bvadd via GOT/IAT indirection
    return Z3_mk_bvadd(/* forwarded args */);
}

