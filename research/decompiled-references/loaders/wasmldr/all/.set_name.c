// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_150A8
//
// Resolved target: set_name
// Target address:  0x15298
// GOT/IAT slot:    0x150A8
// Slot symbol:     off_150A8
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

