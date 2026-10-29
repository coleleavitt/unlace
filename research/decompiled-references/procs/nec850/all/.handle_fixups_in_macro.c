// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9770
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9770 jmp     cs:off_2E3A0
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x2EA20
// GOT/IAT slot:    0x2E3A0
// Slot symbol:     off_2E3A0
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}

