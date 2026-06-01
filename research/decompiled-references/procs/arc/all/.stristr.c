// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8830
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8830 jmp     cs:off_2A400
//
// Resolved target: stristr
// Target address:  0x2BE28
// GOT/IAT slot:    0x2A400
// Slot symbol:     off_2A400
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

