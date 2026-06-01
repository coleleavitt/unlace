// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62D0
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62D0 jmp     cs:off_1D150
//
// Resolved target: match_jpt
// Target address:  0x1D640
// GOT/IAT slot:    0x1D150
// Slot symbol:     off_1D150
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

