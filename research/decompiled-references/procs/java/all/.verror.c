// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60B0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60B0 jmp     cs:off_2D040
//
// Resolved target: verror
// Target address:  0x2D540
// GOT/IAT slot:    0x2D040
// Slot symbol:     off_2D040
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

