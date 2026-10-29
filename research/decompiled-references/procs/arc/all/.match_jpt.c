// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8350
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8350 jmp     cs:off_2A190
//
// Resolved target: match_jpt
// Target address:  0x2BBA0
// GOT/IAT slot:    0x2A190
// Slot symbol:     off_2A190
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

