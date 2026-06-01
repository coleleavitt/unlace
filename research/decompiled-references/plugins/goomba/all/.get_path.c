// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4860
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4860 jmp     cs:off_4E418
//
// Resolved target: get_path
// Target address:  0x4FA40
// GOT/IAT slot:    0x4E418
// Slot symbol:     off_4E418
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

