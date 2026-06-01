// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_A190
//
// Resolved target: get_ash
// Target address:  0xB478
// GOT/IAT slot:    0xA190
// Slot symbol:     off_A190
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

