// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_80C0
//
// Resolved target: qlseek
// Target address:  0x8320
// GOT/IAT slot:    0x80C0
// Slot symbol:     off_80C0
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

