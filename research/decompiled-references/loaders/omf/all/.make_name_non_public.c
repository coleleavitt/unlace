// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35F0
// Name:            .make_name_non_public
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35F0 jmp     cs:off_142E0
//
// Resolved target: make_name_non_public
// Target address:  0x148F0
// GOT/IAT slot:    0x142E0
// Slot symbol:     off_142E0
// Target type:     <no type info>
// ============================================================

void .make_name_non_public(/* see target signature */)
{
    // Tail-call to make_name_non_public via GOT/IAT indirection
    return make_name_non_public(/* forwarded args */);
}

