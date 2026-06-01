// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44B0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44B0 jmp     cs:off_28240
//
// Resolved target: set_name
// Target address:  0x29BD8
// GOT/IAT slot:    0x28240
// Slot symbol:     off_28240
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

