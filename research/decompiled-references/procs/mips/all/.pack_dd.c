// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19110
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19110 jmp     cs:off_75070
//
// Resolved target: pack_dd
// Target address:  0x758C0
// GOT/IAT slot:    0x75070
// Slot symbol:     off_75070
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

