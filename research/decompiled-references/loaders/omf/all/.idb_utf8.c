// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3140 jmp     cs:off_14088
//
// Resolved target: idb_utf8
// Target address:  0x14670
// GOT/IAT slot:    0x14088
// Slot symbol:     off_14088
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

