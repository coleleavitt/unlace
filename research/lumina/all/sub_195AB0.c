// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195AB0
// Name:            sub_195AB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x195AB0 jmp     sub_198980
//
// Resolved target: sub_198980
// Target address:  0x198980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_195AB0(/* see target signature */)
{
    // Tail-call to sub_198980 via direct jump indirection
    return sub_198980(/* forwarded args */);
}

