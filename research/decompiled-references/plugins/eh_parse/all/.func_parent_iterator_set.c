// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6600
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6600 jmp     cs:off_2F2E8
//
// Resolved target: func_parent_iterator_set
// Target address:  0x2F958
// GOT/IAT slot:    0x2F2E8
// Slot symbol:     off_2F2E8
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

