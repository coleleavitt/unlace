// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .base2file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: base2file
// Target address:  0x5200
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .base2file(/* see target signature */)
{
    // Tail-call to base2file via GOT/IAT indirection
    return base2file(/* forwarded args */);
}

