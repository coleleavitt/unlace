// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199E0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199E0 jmp     cs:off_754D8
//
// Resolved target: get_idati
// Target address:  0x75D30
// GOT/IAT slot:    0x754D8
// Slot symbol:     off_754D8
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

