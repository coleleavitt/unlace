// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5660
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5660 jmp     cs:off_15318
//
// Resolved target: stristr
// Target address:  0x163C0
// GOT/IAT slot:    0x15318
// Slot symbol:     off_15318
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

