// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87D0
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87D0 jmp     cs:off_2A3D0
//
// Resolved target: qstrncat
// Target address:  0x2BDF8
// GOT/IAT slot:    0x2A3D0
// Slot symbol:     off_2A3D0
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

