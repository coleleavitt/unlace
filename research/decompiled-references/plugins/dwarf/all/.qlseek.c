// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA440
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA440 jmp     cs:off_CA208
//
// Resolved target: qlseek
// Target address:  0xD0B38
// GOT/IAT slot:    0xCA208
// Slot symbol:     off_CA208
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

