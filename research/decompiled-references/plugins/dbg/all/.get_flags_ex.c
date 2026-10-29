// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_13050
//
// Resolved target: get_flags_ex
// Target address:  0x133C8
// GOT/IAT slot:    0x13050
// Slot symbol:     off_13050
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

