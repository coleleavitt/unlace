// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4270
// Name:            .Z3_mk_or
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4270 jmp     cs:off_4E120
//
// Resolved target: Z3_mk_or
// Target address:  0x4F728
// GOT/IAT slot:    0x4E120
// Slot symbol:     off_4E120
// Target type:     <no type info>
// ============================================================

void .Z3_mk_or(/* see target signature */)
{
    // Tail-call to Z3_mk_or via GOT/IAT indirection
    return Z3_mk_or(/* forwarded args */);
}

