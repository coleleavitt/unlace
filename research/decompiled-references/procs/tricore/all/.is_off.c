// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6430
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6430 jmp     cs:off_24200
//
// Resolved target: is_off
// Target address:  0x25FD0
// GOT/IAT slot:    0x24200
// Slot symbol:     off_24200
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

