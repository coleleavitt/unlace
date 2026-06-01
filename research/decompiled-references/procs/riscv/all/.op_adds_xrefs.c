// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA590
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA590 jmp     cs:off_352B0
//
// Resolved target: op_adds_xrefs
// Target address:  0x35900
// GOT/IAT slot:    0x352B0
// Slot symbol:     off_352B0
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

