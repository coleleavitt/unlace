// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4700
// Name:            .optimize_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4700 jmp     cs:off_28368
//
// Resolved target: optimize_argloc
// Target address:  0x29D10
// GOT/IAT slot:    0x28368
// Slot symbol:     off_28368
// Target type:     <no type info>
// ============================================================

void .optimize_argloc(/* see target signature */)
{
    // Tail-call to optimize_argloc via GOT/IAT indirection
    return optimize_argloc(/* forwarded args */);
}

