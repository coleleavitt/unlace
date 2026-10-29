// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4340
// Name:            .Z3_mk_seq_concat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4340 jmp     cs:off_4E188
//
// Resolved target: Z3_mk_seq_concat
// Target address:  0x4F790
// GOT/IAT slot:    0x4E188
// Slot symbol:     off_4E188
// Target type:     <no type info>
// ============================================================

void .Z3_mk_seq_concat(/* see target signature */)
{
    // Tail-call to Z3_mk_seq_concat via GOT/IAT indirection
    return Z3_mk_seq_concat(/* forwarded args */);
}

