// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6530
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6530 jmp     cs:off_1D280
//
// Resolved target: set_immd
// Target address:  0x1D780
// GOT/IAT slot:    0x1D280
// Slot symbol:     off_1D280
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

