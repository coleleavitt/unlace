// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3450
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3450 jmp     cs:off_28210
//
// Resolved target: close_linput
// Target address:  0x286C0
// GOT/IAT slot:    0x28210
// Slot symbol:     off_28210
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

