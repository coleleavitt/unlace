// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6750
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6750 jmp     cs:off_2F390
//
// Resolved target: getinf_flag
// Target address:  0x2FA08
// GOT/IAT slot:    0x2F390
// Slot symbol:     off_2F390
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

