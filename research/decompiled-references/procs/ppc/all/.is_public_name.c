// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D70
// Name:            .is_public_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D70 jmp     cs:off_956A0
//
// Resolved target: is_public_name
// Target address:  0x960F0
// GOT/IAT slot:    0x956A0
// Slot symbol:     off_956A0
// Target type:     <no type info>
// ============================================================

void .is_public_name(/* see target signature */)
{
    // Tail-call to is_public_name via GOT/IAT indirection
    return is_public_name(/* forwarded args */);
}

