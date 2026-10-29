// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_70C8
//
// Resolved target: set_name
// Target address:  0x7280
// GOT/IAT slot:    0x70C8
// Slot symbol:     off_70C8
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

