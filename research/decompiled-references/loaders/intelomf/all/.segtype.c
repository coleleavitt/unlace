// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1270
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1270 jmp     cs:off_5120
//
// Resolved target: segtype
// Target address:  0x5378
// GOT/IAT slot:    0x5120
// Slot symbol:     off_5120
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

