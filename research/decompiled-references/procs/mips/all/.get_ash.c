// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C10
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C10 jmp     cs:off_755F0
//
// Resolved target: get_ash
// Target address:  0x75E58
// GOT/IAT slot:    0x755F0
// Slot symbol:     off_755F0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

