// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192B0
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192B0 jmp     cs:off_75140
//
// Resolved target: get_last_seg
// Target address:  0x75990
// GOT/IAT slot:    0x75140
// Slot symbol:     off_75140
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

