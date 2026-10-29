// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_1A160
//
// Resolved target: set_immd
// Target address:  0x1A428
// GOT/IAT slot:    0x1A160
// Slot symbol:     off_1A160
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

