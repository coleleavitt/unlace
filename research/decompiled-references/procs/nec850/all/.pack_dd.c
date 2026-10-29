// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90F0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90F0 jmp     cs:off_2E060
//
// Resolved target: pack_dd
// Target address:  0x2E6D0
// GOT/IAT slot:    0x2E060
// Slot symbol:     off_2E060
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

