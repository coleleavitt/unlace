// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3450
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3450 jmp     cs:off_29210
//
// Resolved target: get_name_ea
// Target address:  0x295D0
// GOT/IAT slot:    0x29210
// Slot symbol:     off_29210
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

