// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7250
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7250 jmp     cs:off_1D110
//
// Resolved target: op_adds_xrefs
// Target address:  0x1D440
// GOT/IAT slot:    0x1D110
// Slot symbol:     off_1D110
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

