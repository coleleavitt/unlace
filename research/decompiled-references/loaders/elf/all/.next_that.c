// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93C0
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93C0 jmp     cs:off_891C8
//
// Resolved target: next_that
// Target address:  0x8C4C8
// GOT/IAT slot:    0x891C8
// Slot symbol:     off_891C8
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

