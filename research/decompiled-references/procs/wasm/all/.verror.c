// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9070
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9070 jmp     cs:off_26020
//
// Resolved target: verror
// Target address:  0x26330
// GOT/IAT slot:    0x26020
// Slot symbol:     off_26020
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

