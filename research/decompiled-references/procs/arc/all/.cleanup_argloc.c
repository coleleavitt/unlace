// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8120
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8120 jmp     cs:off_2A078
//
// Resolved target: cleanup_argloc
// Target address:  0x2BA88
// GOT/IAT slot:    0x2A078
// Slot symbol:     off_2A078
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

