// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4570
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4570 jmp     cs:off_232A0
//
// Resolved target: set_selector
// Target address:  0x236C0
// GOT/IAT slot:    0x232A0
// Slot symbol:     off_232A0
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

