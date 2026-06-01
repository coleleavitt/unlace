// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4140
// Name:            .Z3_mk_extract
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4140 jmp     cs:off_4E088
//
// Resolved target: Z3_mk_extract
// Target address:  0x4F688
// GOT/IAT slot:    0x4E088
// Slot symbol:     off_4E088
// Target type:     <no type info>
// ============================================================

void .Z3_mk_extract(/* see target signature */)
{
    // Tail-call to Z3_mk_extract via GOT/IAT indirection
    return Z3_mk_extract(/* forwarded args */);
}

