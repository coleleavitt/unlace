// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_A018
//
// Resolved target: set_source_linnum
// Target address:  0xA248
// GOT/IAT slot:    0xA018
// Slot symbol:     off_A018
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

