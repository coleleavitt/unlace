// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_5050
//
// Resolved target: qlseek
// Target address:  0x5190
// GOT/IAT slot:    0x5050
// Slot symbol:     off_5050
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

