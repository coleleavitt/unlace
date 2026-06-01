// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194E0
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194E0 jmp     cs:off_75258
//
// Resolved target: copy_argloc
// Target address:  0x75AA8
// GOT/IAT slot:    0x75258
// Slot symbol:     off_75258
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

