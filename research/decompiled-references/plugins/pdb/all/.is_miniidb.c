// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D330
// Name:            .is_miniidb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D330 jmp     cs:off_B3180
//
// Resolved target: is_miniidb
// Target address:  0xB3918
// GOT/IAT slot:    0xB3180
// Slot symbol:     off_B3180
// Target type:     <no type info>
// ============================================================

void .is_miniidb(/* see target signature */)
{
    // Tail-call to is_miniidb via GOT/IAT indirection
    return is_miniidb(/* forwarded args */);
}

