// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC90
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC90 jmp     cs:off_B3630
//
// Resolved target: deserialize_tinfo
// Target address:  0xB3E10
// GOT/IAT slot:    0xB3630
// Slot symbol:     off_B3630
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

