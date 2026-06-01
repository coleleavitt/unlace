// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6580
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6580 jmp     cs:off_2D2A8
//
// Resolved target: qfclose
// Target address:  0x2D7B0
// GOT/IAT slot:    0x2D2A8
// Slot symbol:     off_2D2A8
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

