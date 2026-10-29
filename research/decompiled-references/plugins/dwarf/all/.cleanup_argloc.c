// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0F0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0F0 jmp     cs:off_CA060
//
// Resolved target: cleanup_argloc
// Target address:  0xD0980
// GOT/IAT slot:    0xCA060
// Slot symbol:     off_CA060
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

