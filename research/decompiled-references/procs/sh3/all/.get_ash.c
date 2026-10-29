// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5650
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5650 jmp     cs:off_15310
//
// Resolved target: get_ash
// Target address:  0x163B8
// GOT/IAT slot:    0x15310
// Slot symbol:     off_15310
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

