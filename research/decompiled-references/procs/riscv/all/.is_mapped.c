// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2A0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2A0 jmp     cs:off_35138
//
// Resolved target: is_mapped
// Target address:  0x35788
// GOT/IAT slot:    0x35138
// Slot symbol:     off_35138
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

