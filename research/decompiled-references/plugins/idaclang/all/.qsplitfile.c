// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3540
// Name:            .qsplitfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3540 jmp     cs:off_29288
//
// Resolved target: qsplitfile
// Target address:  0x29650
// GOT/IAT slot:    0x29288
// Slot symbol:     off_29288
// Target type:     <no type info>
// ============================================================

void .qsplitfile(/* see target signature */)
{
    // Tail-call to qsplitfile via GOT/IAT indirection
    return qsplitfile(/* forwarded args */);
}

