// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8520
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8520 jmp     cs:off_2A278
//
// Resolved target: set_name
// Target address:  0x2BC88
// GOT/IAT slot:    0x2A278
// Slot symbol:     off_2A278
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

