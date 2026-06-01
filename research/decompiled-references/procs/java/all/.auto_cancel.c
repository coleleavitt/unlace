// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6850
// Name:            .auto_cancel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6850 jmp     cs:off_2D410
//
// Resolved target: auto_cancel
// Target address:  0x2D938
// GOT/IAT slot:    0x2D410
// Slot symbol:     off_2D410
// Target type:     <no type info>
// ============================================================

void .auto_cancel(/* see target signature */)
{
    // Tail-call to auto_cancel via GOT/IAT indirection
    return auto_cancel(/* forwarded args */);
}

