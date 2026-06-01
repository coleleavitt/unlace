// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_15018
//
// Resolved target: verror
// Target address:  0x15208
// GOT/IAT slot:    0x15018
// Slot symbol:     off_15018
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

