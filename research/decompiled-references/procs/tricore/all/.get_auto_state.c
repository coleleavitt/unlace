// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6700
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6700 jmp     cs:off_24368
//
// Resolved target: get_auto_state
// Target address:  0x26148
// GOT/IAT slot:    0x24368
// Slot symbol:     off_24368
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

