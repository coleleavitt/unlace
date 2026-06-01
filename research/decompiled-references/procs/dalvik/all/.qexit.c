// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5210
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5210 jmp     cs:off_1A0F0
//
// Resolved target: qexit
// Target address:  0x1A478
// GOT/IAT slot:    0x1A0F0
// Slot symbol:     off_1A0F0
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

