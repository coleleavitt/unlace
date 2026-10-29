// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4870
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4870 jmp     cs:off_4E420
//
// Resolved target: qfread
// Target address:  0x4FA48
// GOT/IAT slot:    0x4E420
// Slot symbol:     off_4E420
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

