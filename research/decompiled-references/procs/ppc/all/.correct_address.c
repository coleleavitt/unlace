// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20510
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20510 jmp     cs:off_95270
//
// Resolved target: correct_address
// Target address:  0x95CA8
// GOT/IAT slot:    0x95270
// Slot symbol:     off_95270
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

