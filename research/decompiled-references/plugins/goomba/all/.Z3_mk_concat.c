// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4070
// Name:            .Z3_mk_concat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4070 jmp     cs:off_4E020
//
// Resolved target: Z3_mk_concat
// Target address:  0x4F620
// GOT/IAT slot:    0x4E020
// Slot symbol:     off_4E020
// Target type:     <no type info>
// ============================================================

void .Z3_mk_concat(/* see target signature */)
{
    // Tail-call to Z3_mk_concat via GOT/IAT indirection
    return Z3_mk_concat(/* forwarded args */);
}

