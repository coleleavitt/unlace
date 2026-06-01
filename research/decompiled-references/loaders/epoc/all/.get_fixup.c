// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_13138
//
// Resolved target: get_fixup
// Target address:  0x13828
// GOT/IAT slot:    0x13138
// Slot symbol:     off_13138
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

