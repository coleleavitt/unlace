// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9270
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9270 jmp     cs:off_26120
//
// Resolved target: set_name
// Target address:  0x26430
// GOT/IAT slot:    0x26120
// Slot symbol:     off_26120
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

