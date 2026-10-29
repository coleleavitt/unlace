// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4430
// Name:            .Z3_mk_bvsmod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4430 jmp     cs:off_4E200
//
// Resolved target: Z3_mk_bvsmod
// Target address:  0x4F810
// GOT/IAT slot:    0x4E200
// Slot symbol:     off_4E200
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvsmod(/* see target signature */)
{
    // Tail-call to Z3_mk_bvsmod via GOT/IAT indirection
    return Z3_mk_bvsmod(/* forwarded args */);
}

