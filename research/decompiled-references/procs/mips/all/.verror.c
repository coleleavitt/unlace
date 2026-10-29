// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190D0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190D0 jmp     cs:off_75050
//
// Resolved target: verror
// Target address:  0x758A0
// GOT/IAT slot:    0x75050
// Slot symbol:     off_75050
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

