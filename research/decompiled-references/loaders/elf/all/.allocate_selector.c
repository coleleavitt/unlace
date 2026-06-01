// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90D0
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90D0 jmp     cs:off_89050
//
// Resolved target: allocate_selector
// Target address:  0x8C350
// GOT/IAT slot:    0x89050
// Slot symbol:     off_89050
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

