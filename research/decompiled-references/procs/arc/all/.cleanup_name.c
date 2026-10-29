// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8810
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8810 jmp     cs:off_2A3F0
//
// Resolved target: cleanup_name
// Target address:  0x2BE18
// GOT/IAT slot:    0x2A3F0
// Slot symbol:     off_2A3F0
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

