// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_29030
//
// Resolved target: cleanup_argloc
// Target address:  0x293E0
// GOT/IAT slot:    0x29030
// Slot symbol:     off_29030
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

