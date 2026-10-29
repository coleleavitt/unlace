// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_13130
//
// Resolved target: set_fixup
// Target address:  0x13820
// GOT/IAT slot:    0x13130
// Slot symbol:     off_13130
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

