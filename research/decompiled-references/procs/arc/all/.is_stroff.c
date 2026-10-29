// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85F0
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85F0 jmp     cs:off_2A2E0
//
// Resolved target: is_stroff
// Target address:  0x2BCF0
// GOT/IAT slot:    0x2A2E0
// Slot symbol:     off_2A2E0
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

