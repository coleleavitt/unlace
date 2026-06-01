// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_14120
//
// Resolved target: next_that
// Target address:  0x14708
// GOT/IAT slot:    0x14120
// Slot symbol:     off_14120
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

