// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_13148
//
// Resolved target: qfopen
// Target address:  0x133E8
// GOT/IAT slot:    0x13148
// Slot symbol:     off_13148
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

