// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31E0
// Name:            .make_name_public
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31E0 jmp     cs:off_140D8
//
// Resolved target: make_name_public
// Target address:  0x146C0
// GOT/IAT slot:    0x140D8
// Slot symbol:     off_140D8
// Target type:     <no type info>
// ============================================================

void .make_name_public(/* see target signature */)
{
    // Tail-call to make_name_public via GOT/IAT indirection
    return make_name_public(/* forwarded args */);
}

