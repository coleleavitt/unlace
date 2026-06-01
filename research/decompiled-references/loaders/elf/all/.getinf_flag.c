// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9790
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9790 jmp     cs:off_893B0
//
// Resolved target: getinf_flag
// Target address:  0x8C6C8
// GOT/IAT slot:    0x893B0
// Slot symbol:     off_893B0
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

