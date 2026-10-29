// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_70A8
//
// Resolved target: get_ash
// Target address:  0x71F0
// GOT/IAT slot:    0x70A8
// Slot symbol:     off_70A8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

