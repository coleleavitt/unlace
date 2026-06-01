// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4890
// Name:            .Z3_mk_bvneg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4890 jmp     cs:off_4E430
//
// Resolved target: Z3_mk_bvneg
// Target address:  0x4FA58
// GOT/IAT slot:    0x4E430
// Slot symbol:     off_4E430
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvneg(/* see target signature */)
{
    // Tail-call to Z3_mk_bvneg via GOT/IAT indirection
    return Z3_mk_bvneg(/* forwarded args */);
}

