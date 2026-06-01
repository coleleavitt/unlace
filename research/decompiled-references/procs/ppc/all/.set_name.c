// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x208B0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x208B0 jmp     cs:off_95440
//
// Resolved target: set_name
// Target address:  0x95E78
// GOT/IAT slot:    0x95440
// Slot symbol:     off_95440
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

