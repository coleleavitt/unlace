// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x76B0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x76B0 jmp     cs:off_19340
//
// Resolved target: getinf_buf
// Target address:  0x19888
// GOT/IAT slot:    0x19340
// Slot symbol:     off_19340
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

