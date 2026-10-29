// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA960
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA960 jmp     cs:off_CA498
//
// Resolved target: qfclose
// Target address:  0xD0DE0
// GOT/IAT slot:    0xCA498
// Slot symbol:     off_CA498
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

