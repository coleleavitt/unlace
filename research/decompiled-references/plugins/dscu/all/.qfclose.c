// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4350
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4350 jmp     cs:off_1F190
//
// Resolved target: qfclose
// Target address:  0x1F448
// GOT/IAT slot:    0x1F190
// Slot symbol:     off_1F190
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

