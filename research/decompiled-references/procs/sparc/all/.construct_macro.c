// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72C0
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72C0 jmp     cs:off_19148
//
// Resolved target: construct_macro
// Target address:  0x19678
// GOT/IAT slot:    0x19148
// Slot symbol:     off_19148
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

