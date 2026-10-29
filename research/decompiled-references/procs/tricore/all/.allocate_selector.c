// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60B0
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60B0 jmp     cs:off_24040
//
// Resolved target: allocate_selector
// Target address:  0x25E10
// GOT/IAT slot:    0x24040
// Slot symbol:     off_24040
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

