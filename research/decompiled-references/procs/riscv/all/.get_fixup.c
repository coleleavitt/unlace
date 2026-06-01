// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA530
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA530 jmp     cs:off_35280
//
// Resolved target: get_fixup
// Target address:  0x358D0
// GOT/IAT slot:    0x35280
// Slot symbol:     off_35280
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

