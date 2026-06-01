// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6470
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6470 jmp     cs:off_24220
//
// Resolved target: qsnprintf
// Target address:  0x25FF0
// GOT/IAT slot:    0x24220
// Slot symbol:     off_24220
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

