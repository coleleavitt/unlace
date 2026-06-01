// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3640
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3640 jmp     cs:off_14308
//
// Resolved target: segtype
// Target address:  0x14918
// GOT/IAT slot:    0x14308
// Slot symbol:     off_14308
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

