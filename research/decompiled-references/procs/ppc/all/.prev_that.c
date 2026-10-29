// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20050
// Name:            .prev_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20050 jmp     cs:off_95010
//
// Resolved target: prev_that
// Target address:  0x95A40
// GOT/IAT slot:    0x95010
// Slot symbol:     off_95010
// Target type:     <no type info>
// ============================================================

void .prev_that(/* see target signature */)
{
    // Tail-call to prev_that via GOT/IAT indirection
    return prev_that(/* forwarded args */);
}

