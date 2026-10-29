// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8720
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8720 jmp     cs:off_2A378
//
// Resolved target: get_refinfo
// Target address:  0x2BD98
// GOT/IAT slot:    0x2A378
// Slot symbol:     off_2A378
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

