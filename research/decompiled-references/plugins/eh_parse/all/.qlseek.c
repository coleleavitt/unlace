// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6330
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6330 jmp     cs:off_2F180
//
// Resolved target: qlseek
// Target address:  0x2F7F0
// GOT/IAT slot:    0x2F180
// Slot symbol:     off_2F180
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

