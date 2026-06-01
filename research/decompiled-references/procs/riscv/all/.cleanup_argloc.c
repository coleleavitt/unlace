// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0E0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0E0 jmp     cs:off_35058
//
// Resolved target: cleanup_argloc
// Target address:  0x356A8
// GOT/IAT slot:    0x35058
// Slot symbol:     off_35058
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

