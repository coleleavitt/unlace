// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BB0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BB0 jmp     cs:off_755C0
//
// Resolved target: getinf_buf
// Target address:  0x75E28
// GOT/IAT slot:    0x755C0
// Slot symbol:     off_755C0
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

