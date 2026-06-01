// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A80
// Name:            .h2ti
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A80 jmp     cs:off_2F528
//
// Resolved target: h2ti
// Target address:  0x2FBC0
// GOT/IAT slot:    0x2F528
// Slot symbol:     off_2F528
// Target type:     <no type info>
// ============================================================

void .h2ti(/* see target signature */)
{
    // Tail-call to h2ti via GOT/IAT indirection
    return h2ti(/* forwarded args */);
}

