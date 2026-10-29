// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6460
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6460 jmp     cs:off_24218
//
// Resolved target: op_adds_xrefs
// Target address:  0x25FE8
// GOT/IAT slot:    0x24218
// Slot symbol:     off_24218
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

