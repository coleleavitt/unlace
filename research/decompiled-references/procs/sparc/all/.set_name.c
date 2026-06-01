// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7450
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7450 jmp     cs:off_19210
//
// Resolved target: set_name
// Target address:  0x19740
// GOT/IAT slot:    0x19210
// Slot symbol:     off_19210
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

