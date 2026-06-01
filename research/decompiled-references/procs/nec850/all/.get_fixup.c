// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94C0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94C0 jmp     cs:off_2E248
//
// Resolved target: get_fixup
// Target address:  0x2E8B8
// GOT/IAT slot:    0x2E248
// Slot symbol:     off_2E248
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

