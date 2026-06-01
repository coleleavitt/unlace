// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4460
// Name:            .winerr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4460 jmp     cs:off_1F218
//
// Resolved target: winerr
// Target address:  0x1F4E8
// GOT/IAT slot:    0x1F218
// Slot symbol:     off_1F218
// Target type:     <no type info>
// ============================================================

void .winerr(/* see target signature */)
{
    // Tail-call to winerr via GOT/IAT indirection
    return winerr(/* forwarded args */);
}

