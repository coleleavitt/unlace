// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_131A8
//
// Resolved target: set_selector
// Target address:  0x13898
// GOT/IAT slot:    0x131A8
// Slot symbol:     off_131A8
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

