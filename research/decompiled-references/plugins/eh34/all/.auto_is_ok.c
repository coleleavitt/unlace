// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6060
// Name:            .auto_is_ok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6060 jmp     cs:off_8D018
//
// Resolved target: auto_is_ok
// Target address:  0x8D598
// GOT/IAT slot:    0x8D018
// Slot symbol:     off_8D018
// Target type:     <no type info>
// ============================================================

void .auto_is_ok(/* see target signature */)
{
    // Tail-call to auto_is_ok via GOT/IAT indirection
    return auto_is_ok(/* forwarded args */);
}

