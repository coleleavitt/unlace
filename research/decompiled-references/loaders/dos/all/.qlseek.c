// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_B110
//
// Resolved target: qlseek
// Target address:  0xB5A8
// GOT/IAT slot:    0xB110
// Slot symbol:     off_B110
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

