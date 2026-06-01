// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_8080
//
// Resolved target: interr
// Target address:  0x82E0
// GOT/IAT slot:    0x8080
// Slot symbol:     off_8080
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

