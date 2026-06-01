// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B90
// Name:            sub_9B90
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x9B90 endbr64
//   0x9B94 jmp     sub_9B10
//
// Resolved target: sub_9B10
// Target address:  0x9B10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_9B90(/* see target signature */)
{
    // Tail-call to sub_9B10 via direct jump indirection
    return sub_9B10(/* forwarded args */);
}

