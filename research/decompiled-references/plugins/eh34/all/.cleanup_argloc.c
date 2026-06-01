// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60C0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60C0 jmp     cs:off_8D048
//
// Resolved target: cleanup_argloc
// Target address:  0x8D5C8
// GOT/IAT slot:    0x8D048
// Slot symbol:     off_8D048
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

