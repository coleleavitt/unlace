// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65F0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65F0 jmp     cs:off_1D2E0
//
// Resolved target: getinf_buf
// Target address:  0x1D7E8
// GOT/IAT slot:    0x1D2E0
// Slot symbol:     off_1D2E0
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

