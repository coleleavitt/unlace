// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4090
// Name:            .Z3_mk_fpa_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4090 jmp     cs:off_4E030
//
// Resolved target: Z3_mk_fpa_add
// Target address:  0x4F630
// GOT/IAT slot:    0x4E030
// Slot symbol:     off_4E030
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_add(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_add via GOT/IAT indirection
    return Z3_mk_fpa_add(/* forwarded args */);
}

