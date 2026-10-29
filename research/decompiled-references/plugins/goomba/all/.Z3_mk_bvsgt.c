// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45B0
// Name:            .Z3_mk_bvsgt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45B0 jmp     cs:off_4E2C0
//
// Resolved target: Z3_mk_bvsgt
// Target address:  0x4F8D0
// GOT/IAT slot:    0x4E2C0
// Slot symbol:     off_4E2C0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsgt(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsgt via GOT/IAT indirection
    return Z3_mk_bvsgt(/* forwarded args */);
}

