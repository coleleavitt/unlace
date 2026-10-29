// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95E0
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95E0 jmp     cs:off_892D8
//
// Resolved target: close_linput
// Target address:  0x8C5E0
// GOT/IAT slot:    0x892D8
// Slot symbol:     off_892D8
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

