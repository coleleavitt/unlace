// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4880
// Name:            .Z3_mk_fpa_mul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4880 jmp     cs:off_4E428
//
// Resolved target: Z3_mk_fpa_mul
// Target address:  0x4FA50
// GOT/IAT slot:    0x4E428
// Slot symbol:     off_4E428
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_mul(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_mul via GOT/IAT indirection
    return Z3_mk_fpa_mul(/* forwarded args */);
}

