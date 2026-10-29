// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66D0
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66D0 jmp     cs:off_2D350
//
// Resolved target: qfputc
// Target address:  0x2D860
// GOT/IAT slot:    0x2D350
// Slot symbol:     off_2D350
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

