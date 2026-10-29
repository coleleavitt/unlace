// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53E0
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53E0 jmp     cs:off_151D8
//
// Resolved target: op_adds_xrefs
// Target address:  0x16268
// GOT/IAT slot:    0x151D8
// Slot symbol:     off_151D8
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

