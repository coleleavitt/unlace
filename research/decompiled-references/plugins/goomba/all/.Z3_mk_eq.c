// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48A0
// Name:            .Z3_mk_eq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48A0 jmp     cs:off_4E438
//
// Resolved target: Z3_mk_eq
// Target address:  0x4FA60
// GOT/IAT slot:    0x4E438
// Slot symbol:     off_4E438
// Target type:     <no type info>
// ============================================================

void .Z3_mk_eq(/* see target signature */)
{
    // Tail-call to Z3_mk_eq via GOT/IAT indirection
    return Z3_mk_eq(/* forwarded args */);
}

