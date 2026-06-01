// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10080
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10080 jmp     cs:off_2E028
//
// Resolved target: verror
// Target address:  0x36CA0
// GOT/IAT slot:    0x2E028
// Slot symbol:     off_2E028
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

