// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB50
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB50 jmp     cs:off_CA590
//
// Resolved target: getinf_buf
// Target address:  0xD0EE8
// GOT/IAT slot:    0xCA590
// Slot symbol:     off_CA590
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

