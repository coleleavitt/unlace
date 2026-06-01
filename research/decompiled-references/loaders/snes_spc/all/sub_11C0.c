// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            sub_11C0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x11C0 endbr64
//   0x11C4 jmp     sub_1140
//
// Resolved target: sub_1140
// Target address:  0x1140
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_11C0(/* see target signature */)
{
    // Tail-call to sub_1140 via direct jump indirection
    return sub_1140(/* forwarded args */);
}

