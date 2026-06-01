// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10160
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10160 jmp     cs:off_2E098
//
// Resolved target: match_jpt
// Target address:  0x36D10
// GOT/IAT slot:    0x2E098
// Slot symbol:     off_2E098
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

