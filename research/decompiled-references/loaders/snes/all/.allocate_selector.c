// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_7008
//
// Resolved target: allocate_selector
// Target address:  0x7100
// GOT/IAT slot:    0x7008
// Slot symbol:     off_7008
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

