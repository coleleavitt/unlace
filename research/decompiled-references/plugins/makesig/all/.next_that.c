// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_20100
//
// Resolved target: next_that
// Target address:  0x21A10
// GOT/IAT slot:    0x20100
// Slot symbol:     off_20100
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

