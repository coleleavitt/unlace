// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4580
// Name:            .Z3_mk_bvslt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4580 jmp     cs:off_4E2A8
//
// Resolved target: Z3_mk_bvslt
// Target address:  0x4F8B8
// GOT/IAT slot:    0x4E2A8
// Slot symbol:     off_4E2A8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvslt(/* see target signature */)
{
    // Tail-call to Z3_mk_bvslt via GOT/IAT indirection
    return Z3_mk_bvslt(/* forwarded args */);
}

