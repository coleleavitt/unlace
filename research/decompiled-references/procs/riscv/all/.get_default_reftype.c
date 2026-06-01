// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5F0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5F0 jmp     cs:off_352E0
//
// Resolved target: get_default_reftype
// Target address:  0x35930
// GOT/IAT slot:    0x352E0
// Slot symbol:     off_352E0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

