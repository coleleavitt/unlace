// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7C0
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7C0 jmp     cs:off_CA3C8
//
// Resolved target: print_argloc
// Target address:  0xD0D00
// GOT/IAT slot:    0xCA3C8
// Slot symbol:     off_CA3C8
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

