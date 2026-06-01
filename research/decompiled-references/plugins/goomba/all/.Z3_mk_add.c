// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44F0
// Name:            .Z3_mk_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44F0 jmp     cs:off_4E260
//
// Resolved target: Z3_mk_add
// Target address:  0x4F870
// GOT/IAT slot:    0x4E260
// Slot symbol:     off_4E260
// Target type:     <no type info>
// ============================================================

void .Z3_mk_add(/* see target signature */)
{
    // Tail-call to Z3_mk_add via GOT/IAT indirection
    return Z3_mk_add(/* forwarded args */);
}

