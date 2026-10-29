// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_5040
//
// Resolved target: qlseek
// Target address:  0x5158
// GOT/IAT slot:    0x5040
// Slot symbol:     off_5040
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

