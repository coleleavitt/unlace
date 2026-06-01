// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_13160
//
// Resolved target: set_name
// Target address:  0x13850
// GOT/IAT slot:    0x13160
// Slot symbol:     off_13160
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

