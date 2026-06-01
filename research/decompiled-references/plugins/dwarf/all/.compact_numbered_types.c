// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB90
// Name:            .compact_numbered_types
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB90 jmp     cs:off_CA5B0
//
// Resolved target: compact_numbered_types
// Target address:  0xD0F08
// GOT/IAT slot:    0xCA5B0
// Slot symbol:     off_CA5B0
// Target type:     <no type info>
// ============================================================

void .compact_numbered_types(/* see target signature */)
{
    // Tail-call to compact_numbered_types via GOT/IAT indirection
    return compact_numbered_types(/* forwarded args */);
}

