// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_130E8
//
// Resolved target: qlseek
// Target address:  0x137D8
// GOT/IAT slot:    0x130E8
// Slot symbol:     off_130E8
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

