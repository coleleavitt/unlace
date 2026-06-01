// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_4058
//
// Resolved target: qlread
// Target address:  0x4180
// GOT/IAT slot:    0x4058
// Slot symbol:     off_4058
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

