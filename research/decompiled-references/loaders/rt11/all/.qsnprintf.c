// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_5078
//
// Resolved target: qsnprintf
// Target address:  0x51F8
// GOT/IAT slot:    0x5078
// Slot symbol:     off_5078
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

