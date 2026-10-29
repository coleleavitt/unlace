// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4390
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4390 jmp     cs:off_281B0
//
// Resolved target: copy_argloc
// Target address:  0x29B48
// GOT/IAT slot:    0x281B0
// Slot symbol:     off_281B0
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

