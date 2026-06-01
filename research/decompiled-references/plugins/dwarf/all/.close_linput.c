// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA710
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA710 jmp     cs:off_CA370
//
// Resolved target: close_linput
// Target address:  0xD0CA8
// GOT/IAT slot:    0xCA370
// Slot symbol:     off_CA370
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

