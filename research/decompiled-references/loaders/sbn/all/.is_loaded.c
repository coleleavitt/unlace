// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_4078
//
// Resolved target: is_loaded
// Target address:  0x4150
// GOT/IAT slot:    0x4078
// Slot symbol:     off_4078
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

