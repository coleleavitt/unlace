// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6810
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6810 jmp     cs:off_243F0
//
// Resolved target: is_enum
// Target address:  0x261E0
// GOT/IAT slot:    0x243F0
// Slot symbol:     off_243F0
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}

