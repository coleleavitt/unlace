// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x76E0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x76E0 jmp     cs:off_19358
//
// Resolved target: get_ash
// Target address:  0x198A0
// GOT/IAT slot:    0x19358
// Slot symbol:     off_19358
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

