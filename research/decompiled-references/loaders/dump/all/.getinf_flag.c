// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_5078
//
// Resolved target: getinf_flag
// Target address:  0x53B8
// GOT/IAT slot:    0x5078
// Slot symbol:     off_5078
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

