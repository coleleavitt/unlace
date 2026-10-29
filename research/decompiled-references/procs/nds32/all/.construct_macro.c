// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82D0
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82D0 jmp     cs:off_2A150
//
// Resolved target: construct_macro
// Target address:  0x2A6C0
// GOT/IAT slot:    0x2A150
// Slot symbol:     off_2A150
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

