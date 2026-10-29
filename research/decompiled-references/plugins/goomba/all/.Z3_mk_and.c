// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4420
// Name:            .Z3_mk_and
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4420 jmp     cs:off_4E1F8
//
// Resolved target: Z3_mk_and
// Target address:  0x4F808
// GOT/IAT slot:    0x4E1F8
// Slot symbol:     off_4E1F8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_and(/* see target signature */)
{
    // Tail-call to Z3_mk_and via GOT/IAT indirection
    return Z3_mk_and(/* forwarded args */);
}

