// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9180
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9180 jmp     cs:off_890A8
//
// Resolved target: get_flags_ex
// Target address:  0x8C3A8
// GOT/IAT slot:    0x890A8
// Slot symbol:     off_890A8
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

