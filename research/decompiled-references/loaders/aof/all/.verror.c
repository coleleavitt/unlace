// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_7018
//
// Resolved target: verror
// Target address:  0x71D0
// GOT/IAT slot:    0x7018
// Slot symbol:     off_7018
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

