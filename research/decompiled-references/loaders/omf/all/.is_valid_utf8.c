// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .is_valid_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_14008
//
// Resolved target: is_valid_utf8
// Target address:  0x145F0
// GOT/IAT slot:    0x14008
// Slot symbol:     off_14008
// Target type:     <no type info>
// ============================================================

void .is_valid_utf8(/* see target signature */)
{
    // Tail-call to is_valid_utf8 via GOT/IAT indirection
    return is_valid_utf8(/* forwarded args */);
}

