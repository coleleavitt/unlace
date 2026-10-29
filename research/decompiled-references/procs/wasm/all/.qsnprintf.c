// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9240
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9240 jmp     cs:off_26108
//
// Resolved target: qsnprintf
// Target address:  0x26418
// GOT/IAT slot:    0x26108
// Slot symbol:     off_26108
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

