// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4760
// Name:            .Z3_mk_zero_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4760 jmp     cs:off_4E398
//
// Resolved target: Z3_mk_zero_ext
// Target address:  0x4F9B0
// GOT/IAT slot:    0x4E398
// Slot symbol:     off_4E398
// Target type:     <no type info>
// ============================================================

void .Z3_mk_zero_ext(/* see target signature */)
{
    // Tail-call to Z3_mk_zero_ext via GOT/IAT indirection
    return Z3_mk_zero_ext(/* forwarded args */);
}

