// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3520
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3520 jmp     cs:off_14278
//
// Resolved target: get_name_ea
// Target address:  0x14880
// GOT/IAT slot:    0x14278
// Slot symbol:     off_14278
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

