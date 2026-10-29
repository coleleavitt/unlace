// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4970
// Name:            .Z3_mk_sign_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4970 jmp     cs:off_4E4A0
//
// Resolved target: Z3_mk_sign_ext
// Target address:  0x4FAD8
// GOT/IAT slot:    0x4E4A0
// Slot symbol:     off_4E4A0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_sign_ext(/* see target signature */)
{
    // Tail-call to Z3_mk_sign_ext via GOT/IAT indirection
    return Z3_mk_sign_ext(/* forwarded args */);
}

