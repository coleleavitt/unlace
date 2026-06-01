// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x75F0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x75F0 jmp     cs:off_192E0
//
// Resolved target: get_refinfo
// Target address:  0x19820
// GOT/IAT slot:    0x192E0
// Slot symbol:     off_192E0
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

