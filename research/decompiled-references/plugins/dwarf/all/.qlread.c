// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA740
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA740 jmp     cs:off_CA388
//
// Resolved target: qlread
// Target address:  0xD0CC0
// GOT/IAT slot:    0xCA388
// Slot symbol:     off_CA388
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

