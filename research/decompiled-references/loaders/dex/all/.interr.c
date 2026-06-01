// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31E0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31E0 jmp     cs:off_280D8
//
// Resolved target: interr
// Target address:  0x28588
// GOT/IAT slot:    0x280D8
// Slot symbol:     off_280D8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

