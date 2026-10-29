// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4260
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4260 jmp     cs:off_1F118
//
// Resolved target: qsnprintf
// Target address:  0x1F3C8
// GOT/IAT slot:    0x1F118
// Slot symbol:     off_1F118
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

