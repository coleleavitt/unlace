// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41B0
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41B0 jmp     cs:off_230C0
//
// Resolved target: get_last_seg
// Target address:  0x234E0
// GOT/IAT slot:    0x230C0
// Slot symbol:     off_230C0
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

