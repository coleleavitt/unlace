// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_80B8
//
// Resolved target: close_linput
// Target address:  0x8798
// GOT/IAT slot:    0x80B8
// Slot symbol:     off_80B8
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

