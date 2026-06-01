// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47B0
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47B0 jmp     cs:off_4E3C0
//
// Resolved target: qfclose
// Target address:  0x4F9E0
// GOT/IAT slot:    0x4E3C0
// Slot symbol:     off_4E3C0
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

