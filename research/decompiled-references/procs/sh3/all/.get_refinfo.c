// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5590
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5590 jmp     cs:off_152B0
//
// Resolved target: get_refinfo
// Target address:  0x16350
// GOT/IAT slot:    0x152B0
// Slot symbol:     off_152B0
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

