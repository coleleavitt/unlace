// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4250
// Name:            .Z3_mk_unary_minus
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4250 jmp     cs:off_4E110
//
// Resolved target: Z3_mk_unary_minus
// Target address:  0x4F718
// GOT/IAT slot:    0x4E110
// Slot symbol:     off_4E110
// Target type:     <no type info>
// ============================================================

void .Z3_mk_unary_minus(/* see target signature */)
{
    // Tail-call to Z3_mk_unary_minus via GOT/IAT indirection
    return Z3_mk_unary_minus(/* forwarded args */);
}

