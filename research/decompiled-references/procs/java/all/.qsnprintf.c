// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6410
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6410 jmp     cs:off_2D1F0
//
// Resolved target: qsnprintf
// Target address:  0x2D6F0
// GOT/IAT slot:    0x2D1F0
// Slot symbol:     off_2D1F0
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

