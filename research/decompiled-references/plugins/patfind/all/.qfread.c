// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_13140
//
// Resolved target: qfread
// Target address:  0x133E0
// GOT/IAT slot:    0x13140
// Slot symbol:     off_13140
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

