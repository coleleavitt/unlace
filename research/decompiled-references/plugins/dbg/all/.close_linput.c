// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33D0
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33D0 jmp     cs:off_131D0
//
// Resolved target: close_linput
// Target address:  0x13550
// GOT/IAT slot:    0x131D0
// Slot symbol:     off_131D0
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

