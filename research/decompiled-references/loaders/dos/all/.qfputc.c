// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2520
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2520 jmp     cs:off_B278
//
// Resolved target: qfputc
// Target address:  0xB720
// GOT/IAT slot:    0xB278
// Slot symbol:     off_B278
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

