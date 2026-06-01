// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6590
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6590 jmp     cs:off_242B0
//
// Resolved target: is_stroff
// Target address:  0x26080
// GOT/IAT slot:    0x242B0
// Slot symbol:     off_242B0
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

