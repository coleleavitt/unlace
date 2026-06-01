// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84F0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84F0 jmp     cs:off_2A260
//
// Resolved target: qsnprintf
// Target address:  0x2BC70
// GOT/IAT slot:    0x2A260
// Slot symbol:     off_2A260
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

