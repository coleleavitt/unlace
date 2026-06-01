// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30F0
// Name:            .set_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30F0 jmp     cs:off_28060
//
// Resolved target: set_tinfo
// Target address:  0x28510
// GOT/IAT slot:    0x28060
// Slot symbol:     off_28060
// Target type:     <no type info>
// ============================================================

void .set_tinfo(/* see target signature */)
{
    // Tail-call to set_tinfo via GOT/IAT indirection
    return set_tinfo(/* forwarded args */);
}

