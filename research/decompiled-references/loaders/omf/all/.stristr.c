// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3590
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3590 jmp     cs:off_142B0
//
// Resolved target: stristr
// Target address:  0x148C0
// GOT/IAT slot:    0x142B0
// Slot symbol:     off_142B0
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

