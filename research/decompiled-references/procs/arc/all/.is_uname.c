// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80A0
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80A0 jmp     cs:off_2A038
//
// Resolved target: is_uname
// Target address:  0x2BA48
// GOT/IAT slot:    0x2A038
// Slot symbol:     off_2A038
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

