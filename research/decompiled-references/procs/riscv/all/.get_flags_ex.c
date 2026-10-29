// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA170
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA170 jmp     cs:off_350A0
//
// Resolved target: get_flags_ex
// Target address:  0x356F0
// GOT/IAT slot:    0x350A0
// Slot symbol:     off_350A0
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

