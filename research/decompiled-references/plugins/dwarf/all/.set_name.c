// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA700
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA700 jmp     cs:off_CA368
//
// Resolved target: set_name
// Target address:  0xD0CA0
// GOT/IAT slot:    0xCA368
// Slot symbol:     off_CA368
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

