// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_4058
//
// Resolved target: set_name
// Target address:  0x4170
// GOT/IAT slot:    0x4058
// Slot symbol:     off_4058
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

