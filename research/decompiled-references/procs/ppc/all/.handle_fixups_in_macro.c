// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BF0
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BF0 jmp     cs:off_955E0
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x96028
// GOT/IAT slot:    0x955E0
// Slot symbol:     off_955E0
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}

