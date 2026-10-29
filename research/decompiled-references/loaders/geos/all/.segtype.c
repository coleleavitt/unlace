// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_81E0
//
// Resolved target: segtype
// Target address:  0x8458
// GOT/IAT slot:    0x81E0
// Slot symbol:     off_81E0
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

