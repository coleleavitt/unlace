// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4440
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4440 jmp     cs:off_23208
//
// Resolved target: set_name
// Target address:  0x23628
// GOT/IAT slot:    0x23208
// Slot symbol:     off_23208
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

