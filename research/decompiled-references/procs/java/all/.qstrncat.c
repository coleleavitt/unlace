// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6710
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6710 jmp     cs:off_2D370
//
// Resolved target: qstrncat
// Target address:  0x2D888
// GOT/IAT slot:    0x2D370
// Slot symbol:     off_2D370
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

