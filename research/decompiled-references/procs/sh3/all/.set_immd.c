// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5560
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5560 jmp     cs:off_15298
//
// Resolved target: set_immd
// Target address:  0x16338
// GOT/IAT slot:    0x15298
// Slot symbol:     off_15298
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

