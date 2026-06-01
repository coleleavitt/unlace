// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_B1C8
//
// Resolved target: qstrncat
// Target address:  0xB478
// GOT/IAT slot:    0xB1C8
// Slot symbol:     off_B1C8
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

