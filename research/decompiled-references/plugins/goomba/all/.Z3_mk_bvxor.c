// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4360
// Name:            .Z3_mk_bvxor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4360 jmp     cs:off_4E198
//
// Resolved target: Z3_mk_bvxor
// Target address:  0x4F7A0
// GOT/IAT slot:    0x4E198
// Slot symbol:     off_4E198
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvxor(/* see target signature */)
{
    // Tail-call to Z3_mk_bvxor via GOT/IAT indirection
    return Z3_mk_bvxor(/* forwarded args */);
}

