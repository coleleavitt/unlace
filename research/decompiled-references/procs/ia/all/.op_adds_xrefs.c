// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7220
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7220 jmp     cs:off_260F8
//
// Resolved target: op_adds_xrefs
// Target address:  0x263B0
// GOT/IAT slot:    0x260F8
// Slot symbol:     off_260F8
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

