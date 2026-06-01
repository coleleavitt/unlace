// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_14130
//
// Resolved target: qlseek
// Target address:  0x14718
// GOT/IAT slot:    0x14130
// Slot symbol:     off_14130
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}

