// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_50E0
//
// Resolved target: qfputc
// Target address:  0x52C0
// GOT/IAT slot:    0x50E0
// Slot symbol:     off_50E0
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

