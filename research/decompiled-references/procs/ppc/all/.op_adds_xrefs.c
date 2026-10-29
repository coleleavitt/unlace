// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20850
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20850 jmp     cs:off_95410
//
// Resolved target: op_adds_xrefs
// Target address:  0x95E48
// GOT/IAT slot:    0x95410
// Slot symbol:     off_95410
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

