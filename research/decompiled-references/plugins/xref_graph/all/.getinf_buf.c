// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D80
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D80 jmp     cs:off_4F6A8
//
// Resolved target: getinf_buf
// Target address:  0x509A0
// GOT/IAT slot:    0x4F6A8
// Slot symbol:     off_4F6A8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

