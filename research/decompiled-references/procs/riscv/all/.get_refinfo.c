// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA810
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA810 jmp     cs:off_353F0
//
// Resolved target: get_refinfo
// Target address:  0x35A50
// GOT/IAT slot:    0x353F0
// Slot symbol:     off_353F0
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

