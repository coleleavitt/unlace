// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67F0
// Name:            .del_tryblks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67F0 jmp     cs:off_2F3E0
//
// Resolved target: del_tryblks
// Target address:  0x2FA60
// GOT/IAT slot:    0x2F3E0
// Slot symbol:     off_2F3E0
// Target type:     <no type info>
// ============================================================

void .del_tryblks(/* see target signature */)
{
    // Tail-call to del_tryblks via GOT/IAT indirection
    return del_tryblks(/* forwarded args */);
}

