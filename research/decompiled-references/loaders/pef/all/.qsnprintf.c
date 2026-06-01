// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_80D0
//
// Resolved target: qsnprintf
// Target address:  0x82C0
// GOT/IAT slot:    0x80D0
// Slot symbol:     off_80D0
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

