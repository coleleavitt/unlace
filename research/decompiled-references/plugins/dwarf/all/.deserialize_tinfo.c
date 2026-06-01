// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xADD0
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xADD0 jmp     cs:off_CA6D0
//
// Resolved target: deserialize_tinfo
// Target address:  0xD1038
// GOT/IAT slot:    0xCA6D0
// Slot symbol:     off_CA6D0
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

