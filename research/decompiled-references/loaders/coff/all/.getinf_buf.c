// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46B0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46B0 jmp     cs:off_23340
//
// Resolved target: getinf_buf
// Target address:  0x23778
// GOT/IAT slot:    0x23340
// Slot symbol:     off_23340
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

