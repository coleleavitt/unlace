// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .til_add_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_29208
//
// Resolved target: til_add_macro
// Target address:  0x295C8
// GOT/IAT slot:    0x29208
// Slot symbol:     off_29208
// Target type:     <no type info>
// ============================================================

void .til_add_macro(/* see target signature */)
{
    // Tail-call to til_add_macro via GOT/IAT indirection
    return til_add_macro(/* forwarded args */);
}

