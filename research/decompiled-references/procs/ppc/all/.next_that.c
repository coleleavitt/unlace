// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20540
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20540 jmp     cs:off_95288
//
// Resolved target: next_that
// Target address:  0x95CC0
// GOT/IAT slot:    0x95288
// Slot symbol:     off_95288
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

