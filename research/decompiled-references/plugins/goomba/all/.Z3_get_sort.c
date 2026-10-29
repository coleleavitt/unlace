// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4520
// Name:            .Z3_get_sort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4520 jmp     cs:off_4E278
//
// Resolved target: Z3_get_sort
// Target address:  0x4F888
// GOT/IAT slot:    0x4E278
// Slot symbol:     off_4E278
// Target type:     <no type info>
// ============================================================

void .Z3_get_sort(/* see target signature */)
{
    // Tail-call to Z3_get_sort via GOT/IAT indirection
    return Z3_get_sort(/* forwarded args */);
}

