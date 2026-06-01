// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_1A038
//
// Resolved target: idb_utf8
// Target address:  0x1A2F0
// GOT/IAT slot:    0x1A038
// Slot symbol:     off_1A038
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

