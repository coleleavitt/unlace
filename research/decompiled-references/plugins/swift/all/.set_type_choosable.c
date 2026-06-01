// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4550
// Name:            .set_type_choosable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4550 jmp     cs:off_28290
//
// Resolved target: set_type_choosable
// Target address:  0x29C28
// GOT/IAT slot:    0x28290
// Slot symbol:     off_28290
// Target type:     <no type info>
// ============================================================

void .set_type_choosable(/* see target signature */)
{
    // Tail-call to set_type_choosable via GOT/IAT indirection
    return set_type_choosable(/* forwarded args */);
}

