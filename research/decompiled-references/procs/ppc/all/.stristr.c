// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DD0
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DD0 jmp     cs:off_956D0
//
// Resolved target: stristr
// Target address:  0x96120
// GOT/IAT slot:    0x956D0
// Slot symbol:     off_956D0
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

