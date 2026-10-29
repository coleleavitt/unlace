// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7C0
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7C0 jmp     cs:off_353C8
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x35A28
// GOT/IAT slot:    0x353C8
// Slot symbol:     off_353C8
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}

