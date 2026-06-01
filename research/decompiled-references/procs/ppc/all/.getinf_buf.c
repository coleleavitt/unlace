// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D40
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D40 jmp     cs:off_95688
//
// Resolved target: getinf_buf
// Target address:  0x960D8
// GOT/IAT slot:    0x95688
// Slot symbol:     off_95688
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

