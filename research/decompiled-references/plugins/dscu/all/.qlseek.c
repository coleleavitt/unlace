// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4170
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4170 jmp     cs:off_1F0A0
//
// Resolved target: qlseek
// Target address:  0x1F350
// GOT/IAT slot:    0x1F0A0
// Slot symbol:     off_1F0A0
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

