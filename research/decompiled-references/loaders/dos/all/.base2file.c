// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2540
// Name:            .base2file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2540 jmp     cs:off_B288
//
// Resolved target: base2file
// Target address:  0xB730
// GOT/IAT slot:    0xB288
// Slot symbol:     off_B288
// Target type:     <no type info>
// ============================================================

void .base2file(/* see target signature */)
{
    // Tail-call to base2file via GOT/IAT indirection
    return base2file(/* forwarded args */);
}

