// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191D0
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191D0 jmp     cs:off_750D0
//
// Resolved target: lower_type
// Target address:  0x75920
// GOT/IAT slot:    0x750D0
// Slot symbol:     off_750D0
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

