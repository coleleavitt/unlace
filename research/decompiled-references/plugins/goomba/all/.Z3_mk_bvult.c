// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48B0
// Name:            .Z3_mk_bvult
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48B0 jmp     cs:off_4E440
//
// Resolved target: Z3_mk_bvult
// Target address:  0x4FA68
// GOT/IAT slot:    0x4E440
// Slot symbol:     off_4E440
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvult(/* see target signature */)
{
    // Tail-call to Z3_mk_bvult via GOT/IAT indirection
    return Z3_mk_bvult(/* forwarded args */);
}

