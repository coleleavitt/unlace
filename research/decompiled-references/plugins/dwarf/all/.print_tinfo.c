// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA850
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA850 jmp     cs:off_CA410
//
// Resolved target: print_tinfo
// Target address:  0xD0D48
// GOT/IAT slot:    0xCA410
// Slot symbol:     off_CA410
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

