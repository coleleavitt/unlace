// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_13028
//
// Resolved target: verror
// Target address:  0x13710
// GOT/IAT slot:    0x13028
// Slot symbol:     off_13028
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

