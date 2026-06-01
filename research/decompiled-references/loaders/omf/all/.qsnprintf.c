// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_14190
//
// Resolved target: qsnprintf
// Target address:  0x14780
// GOT/IAT slot:    0x14190
// Slot symbol:     off_14190
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

