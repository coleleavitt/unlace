// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .qfsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_A0E0
//
// Resolved target: qfsize
// Target address:  0xA310
// GOT/IAT slot:    0xA0E0
// Slot symbol:     off_A0E0
// Target type:     <no type info>
// ============================================================

void .qfsize(/* see target signature */)
{
    // Tail-call to qfsize via GOT/IAT indirection
    return qfsize(/* forwarded args */);
}

