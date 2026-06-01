// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6690
// Name:            .set_type_choosable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6690 jmp     cs:off_2F330
//
// Resolved target: set_type_choosable
// Target address:  0x2F9A0
// GOT/IAT slot:    0x2F330
// Slot symbol:     off_2F330
// Target type:     <no type info>
// ============================================================

void .set_type_choosable(/* see target signature */)
{
    // Tail-call to set_type_choosable via GOT/IAT indirection
    return set_type_choosable(/* forwarded args */);
}

