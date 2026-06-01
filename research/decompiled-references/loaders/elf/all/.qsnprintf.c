// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9580
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9580 jmp     cs:off_892A8
//
// Resolved target: qsnprintf
// Target address:  0x8C5B0
// GOT/IAT slot:    0x892A8
// Slot symbol:     off_892A8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

