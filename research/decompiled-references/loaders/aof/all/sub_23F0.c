// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            sub_23F0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x23F0 endbr64
//   0x23F4 jmp     sub_2370
//
// Resolved target: sub_2370
// Target address:  0x2370
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_23F0(/* see target signature */)
{
    // Tail-call to sub_2370 via direct jump indirection
    return sub_2370(/* forwarded args */);
}

