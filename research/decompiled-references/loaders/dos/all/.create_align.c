// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_B098
//
// Resolved target: create_align
// Target address:  0xB530
// GOT/IAT slot:    0xB098
// Slot symbol:     off_B098
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

