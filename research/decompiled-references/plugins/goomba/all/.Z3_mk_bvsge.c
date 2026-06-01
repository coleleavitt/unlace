// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4710
// Name:            .Z3_mk_bvsge
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4710 jmp     cs:off_4E370
//
// Resolved target: Z3_mk_bvsge
// Target address:  0x4F980
// GOT/IAT slot:    0x4E370
// Slot symbol:     off_4E370
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsge(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsge via GOT/IAT indirection
    return Z3_mk_bvsge(/* forwarded args */);
}

