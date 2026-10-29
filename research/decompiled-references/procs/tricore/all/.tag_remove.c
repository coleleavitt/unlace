// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64B0
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64B0 jmp     cs:off_24240
//
// Resolved target: tag_remove
// Target address:  0x26010
// GOT/IAT slot:    0x24240
// Slot symbol:     off_24240
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

