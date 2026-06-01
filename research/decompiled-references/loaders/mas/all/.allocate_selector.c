// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_4000
//
// Resolved target: allocate_selector
// Target address:  0x4520
// GOT/IAT slot:    0x4000
// Slot symbol:     off_4000
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

