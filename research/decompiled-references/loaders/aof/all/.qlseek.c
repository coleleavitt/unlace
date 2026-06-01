// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_70A0
//
// Resolved target: qlseek
// Target address:  0x7258
// GOT/IAT slot:    0x70A0
// Slot symbol:     off_70A0
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

