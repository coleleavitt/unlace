// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90C0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90C0 jmp     cs:off_26048
//
// Resolved target: interr
// Target address:  0x26358
// GOT/IAT slot:    0x26048
// Slot symbol:     off_26048
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

