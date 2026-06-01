// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43E0
// Name:            .Z3_mk_bvsub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43E0 jmp     cs:off_4E1D8
//
// Resolved target: Z3_mk_bvsub
// Target address:  0x4F7E8
// GOT/IAT slot:    0x4E1D8
// Slot symbol:     off_4E1D8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsub(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsub via GOT/IAT indirection
    return Z3_mk_bvsub(/* forwarded args */);
}

