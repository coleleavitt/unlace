// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA400
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA400 jmp     cs:off_351E8
//
// Resolved target: construct_macro
// Target address:  0x35838
// GOT/IAT slot:    0x351E8
// Slot symbol:     off_351E8
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

