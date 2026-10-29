// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_29240
//
// Resolved target: get_ash
// Target address:  0x29608
// GOT/IAT slot:    0x29240
// Slot symbol:     off_29240
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

