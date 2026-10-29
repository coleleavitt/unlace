// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_5028
//
// Resolved target: interr
// Target address:  0x5140
// GOT/IAT slot:    0x5028
// Slot symbol:     off_5028
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

