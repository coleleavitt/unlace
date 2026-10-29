// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43C0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43C0 jmp     cs:off_1F1C8
//
// Resolved target: getinf_buf
// Target address:  0x1F490
// GOT/IAT slot:    0x1F1C8
// Slot symbol:     off_1F1C8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

