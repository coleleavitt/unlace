// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44F0
// Name:            .memicmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44F0 jmp     cs:off_23260
//
// Resolved target: memicmp
// Target address:  0x23680
// GOT/IAT slot:    0x23260
// Slot symbol:     off_23260
// Target type:     <no type info>
// ============================================================

void .memicmp(/* see target signature */)
{
    // Tail-call to memicmp via GOT/IAT indirection
    return memicmp(/* forwarded args */);
}

