// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6460
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6460 jmp     cs:off_2D218
//
// Resolved target: tag_remove
// Target address:  0x2D718
// GOT/IAT slot:    0x2D218
// Slot symbol:     off_2D218
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

