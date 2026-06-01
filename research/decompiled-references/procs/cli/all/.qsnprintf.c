// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_1A0F8
//
// Resolved target: qsnprintf
// Target address:  0x1A3B0
// GOT/IAT slot:    0x1A0F8
// Slot symbol:     off_1A0F8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

