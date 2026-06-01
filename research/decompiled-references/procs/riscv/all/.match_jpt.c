// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA420
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA420 jmp     cs:off_351F8
//
// Resolved target: match_jpt
// Target address:  0x35848
// GOT/IAT slot:    0x351F8
// Slot symbol:     off_351F8
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

