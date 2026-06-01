// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4640
// Name:            .qfgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4640 jmp     cs:off_4E308
//
// Resolved target: qfgets
// Target address:  0x4F918
// GOT/IAT slot:    0x4E308
// Slot symbol:     off_4E308
// Target type:     <no type info>
// ============================================================

void .qfgets(/* see target signature */)
{
    // Tail-call to qfgets via GOT/IAT indirection
    return qfgets(/* forwarded args */);
}

