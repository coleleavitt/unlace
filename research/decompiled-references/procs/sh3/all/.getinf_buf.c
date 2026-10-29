// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5620
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5620 jmp     cs:off_152F8
//
// Resolved target: getinf_buf
// Target address:  0x163A0
// GOT/IAT slot:    0x152F8
// Slot symbol:     off_152F8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

