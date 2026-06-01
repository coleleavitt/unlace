// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4670
// Name:            .Z3_mk_mul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4670 jmp     cs:off_4E320
//
// Resolved target: Z3_mk_mul
// Target address:  0x4F930
// GOT/IAT slot:    0x4E320
// Slot symbol:     off_4E320
// Target type:     <no type info>
// ============================================================

void .Z3_mk_mul(/* see target signature */)
{
    // Tail-call to Z3_mk_mul via GOT/IAT indirection
    return Z3_mk_mul(/* forwarded args */);
}

