// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8D0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8D0 jmp     cs:off_B3450
//
// Resolved target: getinf_flag
// Target address:  0xB3BF8
// GOT/IAT slot:    0xB3450
// Slot symbol:     off_B3450
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

