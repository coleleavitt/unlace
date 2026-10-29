// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7340
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7340 jmp     cs:off_26188
//
// Resolved target: get_name_ea
// Target address:  0x26450
// GOT/IAT slot:    0x26188
// Slot symbol:     off_26188
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

