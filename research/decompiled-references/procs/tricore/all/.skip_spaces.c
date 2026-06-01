// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6530
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6530 jmp     cs:off_24280
//
// Resolved target: skip_spaces
// Target address:  0x26050
// GOT/IAT slot:    0x24280
// Slot symbol:     off_24280
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

