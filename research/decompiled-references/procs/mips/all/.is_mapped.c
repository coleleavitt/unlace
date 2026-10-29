// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19360
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19360 jmp     cs:off_75198
//
// Resolved target: is_mapped
// Target address:  0x759E8
// GOT/IAT slot:    0x75198
// Slot symbol:     off_75198
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

