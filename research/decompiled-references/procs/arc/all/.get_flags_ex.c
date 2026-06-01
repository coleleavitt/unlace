// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8150
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8150 jmp     cs:off_2A090
//
// Resolved target: get_flags_ex
// Target address:  0x2BAA0
// GOT/IAT slot:    0x2A090
// Slot symbol:     off_2A090
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

