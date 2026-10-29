// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D0
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34D0 jmp     cs:off_20250
//
// Resolved target: qfread
// Target address:  0x21B80
// GOT/IAT slot:    0x20250
// Slot symbol:     off_20250
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

