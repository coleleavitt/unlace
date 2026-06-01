// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4A0
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4A0 jmp     cs:off_CA238
//
// Resolved target: copy_argloc
// Target address:  0xD0B70
// GOT/IAT slot:    0xCA238
// Slot symbol:     off_CA238
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

