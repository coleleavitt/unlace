// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x100D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x100D0 jmp     cs:off_2E050
//
// Resolved target: interr
// Target address:  0x36CC8
// GOT/IAT slot:    0x2E050
// Slot symbol:     off_2E050
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

