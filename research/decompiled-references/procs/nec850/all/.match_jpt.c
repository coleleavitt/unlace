// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9390
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9390 jmp     cs:off_2E1B0
//
// Resolved target: match_jpt
// Target address:  0x2E820
// GOT/IAT slot:    0x2E1B0
// Slot symbol:     off_2E1B0
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

