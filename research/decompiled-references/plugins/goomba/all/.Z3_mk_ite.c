// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44E0
// Name:            .Z3_mk_ite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44E0 jmp     cs:off_4E258
//
// Resolved target: Z3_mk_ite
// Target address:  0x4F868
// GOT/IAT slot:    0x4E258
// Slot symbol:     off_4E258
// Target type:     <no type info>
// ============================================================

void .Z3_mk_ite(/* see target signature */)
{
    // Tail-call to Z3_mk_ite via GOT/IAT indirection
    return Z3_mk_ite(/* forwarded args */);
}

