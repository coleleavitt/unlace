// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45D0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45D0 jmp     cs:off_4E2D0
//
// Resolved target: qsnprintf
// Target address:  0x4F8E0
// GOT/IAT slot:    0x4E2D0
// Slot symbol:     off_4E2D0
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

