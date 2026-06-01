// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4500
// Name:            .Z3_mk_const
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4500 jmp     cs:off_4E268
//
// Resolved target: Z3_mk_const
// Target address:  0x4F878
// GOT/IAT slot:    0x4E268
// Slot symbol:     off_4E268
// Target type:     <no type info>
// ============================================================

void .Z3_mk_const(/* see target signature */)
{
    // Tail-call to Z3_mk_const via GOT/IAT indirection
    return Z3_mk_const(/* forwarded args */);
}

