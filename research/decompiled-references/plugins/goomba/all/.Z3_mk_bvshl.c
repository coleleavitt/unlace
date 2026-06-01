// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4110
// Name:            .Z3_mk_bvshl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4110 jmp     cs:off_4E070
//
// Resolved target: Z3_mk_bvshl
// Target address:  0x4F670
// GOT/IAT slot:    0x4E070
// Slot symbol:     off_4E070
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvshl(/* see target signature */)
{
    // Tail-call to Z3_mk_bvshl via GOT/IAT indirection
    return Z3_mk_bvshl(/* forwarded args */);
}

