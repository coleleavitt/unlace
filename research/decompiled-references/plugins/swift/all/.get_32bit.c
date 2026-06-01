// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48E0
// Name:            .get_32bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48E0 jmp     cs:off_28458
//
// Resolved target: get_32bit
// Target address:  0x29E18
// GOT/IAT slot:    0x28458
// Slot symbol:     off_28458
// Target type:     <no type info>
// ============================================================

void .get_32bit(/* see target signature */)
{
    // Tail-call to get_32bit via GOT/IAT indirection
    return get_32bit(/* forwarded args */);
}

