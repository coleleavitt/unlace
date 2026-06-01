// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3450
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3450 jmp     cs:off_20210
//
// Resolved target: qfclose
// Target address:  0x21B38
// GOT/IAT slot:    0x20210
// Slot symbol:     off_20210
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

