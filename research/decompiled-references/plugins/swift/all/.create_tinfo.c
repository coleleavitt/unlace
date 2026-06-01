// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4730
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4730 jmp     cs:off_28380
//
// Resolved target: create_tinfo
// Target address:  0x29D38
// GOT/IAT slot:    0x28380
// Slot symbol:     off_28380
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

