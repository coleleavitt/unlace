// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_8120
//
// Resolved target: set_name
// Target address:  0x8380
// GOT/IAT slot:    0x8120
// Slot symbol:     off_8120
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

