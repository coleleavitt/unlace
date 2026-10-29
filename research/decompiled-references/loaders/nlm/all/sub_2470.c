// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2470
// Name:            sub_2470
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2470 endbr64
//   0x2474 jmp     sub_23F0
//
// Resolved target: sub_23F0
// Target address:  0x23F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2470(/* see target signature */)
{
    // Tail-call to sub_23F0 via direct jump indirection
    return sub_23F0(/* forwarded args */);
}

