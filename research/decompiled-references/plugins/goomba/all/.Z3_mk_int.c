// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4050
// Name:            .Z3_mk_int
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4050 jmp     cs:off_4E010
//
// Resolved target: Z3_mk_int
// Target address:  0x4F610
// GOT/IAT slot:    0x4E010
// Slot symbol:     off_4E010
// Target type:     <no type info>
// ============================================================

void .Z3_mk_int(/* see target signature */)
{
    // Tail-call to Z3_mk_int via GOT/IAT indirection
    return Z3_mk_int(/* forwarded args */);
}

