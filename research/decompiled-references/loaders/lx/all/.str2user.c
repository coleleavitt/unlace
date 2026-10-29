// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_B050
//
// Resolved target: str2user
// Target address:  0xB2F8
// GOT/IAT slot:    0xB050
// Slot symbol:     off_B050
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

