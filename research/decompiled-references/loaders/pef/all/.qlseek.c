// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_8098
//
// Resolved target: qlseek
// Target address:  0x8288
// GOT/IAT slot:    0x8098
// Slot symbol:     off_8098
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

