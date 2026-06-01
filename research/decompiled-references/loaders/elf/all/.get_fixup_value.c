// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A70
// Name:            .get_fixup_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A70 jmp     cs:off_89520
//
// Resolved target: get_fixup_value
// Target address:  0x8C850
// GOT/IAT slot:    0x89520
// Slot symbol:     off_89520
// Target type:     <no type info>
// ============================================================

void .get_fixup_value(/* see target signature */)
{
    // Tail-call to get_fixup_value via GOT/IAT indirection
    return get_fixup_value(/* forwarded args */);
}

