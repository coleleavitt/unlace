// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x69A0
// Name:            .get_tryblks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x69A0 jmp     cs:off_2F4B8
//
// Resolved target: get_tryblks
// Target address:  0x2FB48
// GOT/IAT slot:    0x2F4B8
// Slot symbol:     off_2F4B8
// Target type:     <no type info>
// ============================================================

void .get_tryblks(/* see target signature */)
{
    // Tail-call to get_tryblks via GOT/IAT indirection
    return get_tryblks(/* forwarded args */);
}

