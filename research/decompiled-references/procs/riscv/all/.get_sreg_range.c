// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5C0
// Name:            .get_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5C0 jmp     cs:off_352C8
//
// Resolved target: get_sreg_range
// Target address:  0x35918
// GOT/IAT slot:    0x352C8
// Slot symbol:     off_352C8
// Target type:     <no type info>
// ============================================================

void .get_sreg_range(/* see target signature */)
{
    // Tail-call to get_sreg_range via GOT/IAT indirection
    return get_sreg_range(/* forwarded args */);
}

