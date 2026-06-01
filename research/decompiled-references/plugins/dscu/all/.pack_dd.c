// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40A0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40A0 jmp     cs:off_1F038
//
// Resolved target: pack_dd
// Target address:  0x1F2E8
// GOT/IAT slot:    0x1F038
// Slot symbol:     off_1F038
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

