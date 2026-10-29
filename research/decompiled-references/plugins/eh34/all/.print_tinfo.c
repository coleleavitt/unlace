// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64F0
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64F0 jmp     cs:off_8D260
//
// Resolved target: print_tinfo
// Target address:  0x8D7F8
// GOT/IAT slot:    0x8D260
// Slot symbol:     off_8D260
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

