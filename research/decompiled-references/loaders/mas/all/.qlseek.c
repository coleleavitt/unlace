// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_4030
//
// Resolved target: qlseek
// Target address:  0x4550
// GOT/IAT slot:    0x4030
// Slot symbol:     off_4030
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

