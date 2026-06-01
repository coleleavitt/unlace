// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7150
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7150 jmp     cs:off_19090
//
// Resolved target: interr
// Target address:  0x195C0
// GOT/IAT slot:    0x19090
// Slot symbol:     off_19090
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

