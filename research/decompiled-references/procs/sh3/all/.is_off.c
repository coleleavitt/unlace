// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53B0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53B0 jmp     cs:off_151C0
//
// Resolved target: is_off
// Target address:  0x16250
// GOT/IAT slot:    0x151C0
// Slot symbol:     off_151C0
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

