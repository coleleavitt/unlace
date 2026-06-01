// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4130
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4130 jmp     cs:off_4E080
//
// Resolved target: verror
// Target address:  0x4F680
// GOT/IAT slot:    0x4E080
// Slot symbol:     off_4E080
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

