// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44D0
// Name:            .Z3_get_sort_kind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44D0 jmp     cs:off_4E250
//
// Resolved target: Z3_get_sort_kind
// Target address:  0x4F860
// GOT/IAT slot:    0x4E250
// Slot symbol:     off_4E250
// Target type:     <no type info>
// ============================================================

void .Z3_get_sort_kind(/* see target signature */)
{
    // Tail-call to Z3_get_sort_kind via GOT/IAT indirection
    return Z3_get_sort_kind(/* forwarded args */);
}

