// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9900
// Name:            .is_public_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9900 jmp     cs:off_89468
//
// Resolved target: is_public_name
// Target address:  0x8C790
// GOT/IAT slot:    0x89468
// Slot symbol:     off_89468
// Target type:     <no type info>
// ============================================================

void .is_public_name(/* see target signature */)
{
    // Tail-call to is_public_name via GOT/IAT indirection
    return is_public_name(/* forwarded args */);
}

