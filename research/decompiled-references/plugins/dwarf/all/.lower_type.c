// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1A0
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1A0 jmp     cs:off_CA0B8
//
// Resolved target: lower_type
// Target address:  0xD09E8
// GOT/IAT slot:    0xCA0B8
// Slot symbol:     off_CA0B8
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

