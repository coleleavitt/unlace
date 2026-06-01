// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5710
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5710 jmp     cs:off_15370
//
// Resolved target: segtype
// Target address:  0x16418
// GOT/IAT slot:    0x15370
// Slot symbol:     off_15370
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

