// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6570
// Name:            .add_tryblk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6570 jmp     cs:off_2F2A0
//
// Resolved target: add_tryblk
// Target address:  0x2F910
// GOT/IAT slot:    0x2F2A0
// Slot symbol:     off_2F2A0
// Target type:     <no type info>
// ============================================================

void .add_tryblk(/* see target signature */)
{
    // Tail-call to add_tryblk via GOT/IAT indirection
    return add_tryblk(/* forwarded args */);
}

