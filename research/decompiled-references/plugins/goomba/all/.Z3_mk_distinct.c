// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4790
// Name:            .Z3_mk_distinct
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4790 jmp     cs:off_4E3B0
//
// Resolved target: Z3_mk_distinct
// Target address:  0x4F9C8
// GOT/IAT slot:    0x4E3B0
// Slot symbol:     off_4E3B0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_distinct(/* see target signature */)
{
    // Tail-call to Z3_mk_distinct via GOT/IAT indirection
    return Z3_mk_distinct(/* forwarded args */);
}

