// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4560
// Name:            .qfsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4560 jmp     cs:off_4E298
//
// Resolved target: qfsize
// Target address:  0x4F8A8
// GOT/IAT slot:    0x4E298
// Slot symbol:     off_4E298
// Target type:     <no type info>
// ============================================================

void .qfsize(/* see target signature */)
{
    // Tail-call to qfsize via GOT/IAT indirection
    return qfsize(/* forwarded args */);
}

