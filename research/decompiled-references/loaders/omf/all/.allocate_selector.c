// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_14038
//
// Resolved target: allocate_selector
// Target address:  0x14620
// GOT/IAT slot:    0x14038
// Slot symbol:     off_14038
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

