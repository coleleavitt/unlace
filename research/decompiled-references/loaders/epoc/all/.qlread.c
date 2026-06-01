// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_13170
//
// Resolved target: qlread
// Target address:  0x13860
// GOT/IAT slot:    0x13170
// Slot symbol:     off_13170
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

