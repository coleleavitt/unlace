// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_1A0F0
//
// Resolved target: op_adds_xrefs
// Target address:  0x1A3A8
// GOT/IAT slot:    0x1A0F0
// Slot symbol:     off_1A0F0
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

