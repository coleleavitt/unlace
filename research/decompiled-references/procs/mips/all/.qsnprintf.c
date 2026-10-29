// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19710
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19710 jmp     cs:off_75370
//
// Resolved target: qsnprintf
// Target address:  0x75BC0
// GOT/IAT slot:    0x75370
// Slot symbol:     off_75370
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

