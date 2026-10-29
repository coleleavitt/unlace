// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D290
// Name:            .serialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D290 jmp     cs:off_B3130
//
// Resolved target: serialize_tinfo
// Target address:  0xB38B8
// GOT/IAT slot:    0xB3130
// Slot symbol:     off_B3130
// Target type:     <no type info>
// ============================================================

void .serialize_tinfo(/* see target signature */)
{
    // Tail-call to serialize_tinfo via GOT/IAT indirection
    return serialize_tinfo(/* forwarded args */);
}

