// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA590
// Name:            .create_generic_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA590 jmp     cs:off_CA2B0
//
// Resolved target: create_generic_linput
// Target address:  0xD0BE8
// GOT/IAT slot:    0xCA2B0
// Slot symbol:     off_CA2B0
// Target type:     <no type info>
// ============================================================

void .create_generic_linput(/* see target signature */)
{
    // Tail-call to create_generic_linput via GOT/IAT indirection
    return create_generic_linput(/* forwarded args */);
}

