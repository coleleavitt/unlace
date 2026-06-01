// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9750
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9750 jmp     cs:off_2E390
//
// Resolved target: set_immd
// Target address:  0x2EA10
// GOT/IAT slot:    0x2E390
// Slot symbol:     off_2E390
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

