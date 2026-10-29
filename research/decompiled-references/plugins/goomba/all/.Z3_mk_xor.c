// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4190
// Name:            .Z3_mk_xor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4190 jmp     cs:off_4E0B0
//
// Resolved target: Z3_mk_xor
// Target address:  0x4F6B8
// GOT/IAT slot:    0x4E0B0
// Slot symbol:     off_4E0B0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_xor(/* see target signature */)
{
    // Tail-call to Z3_mk_xor via GOT/IAT indirection
    return Z3_mk_xor(/* forwarded args */);
}

