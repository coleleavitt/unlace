// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96900
// Name:            sub_96900
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x96900 jmp     sub_96850
//
// Resolved target: sub_96850
// Target address:  0x96850
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_96900(/* see target signature */)
{
    // Tail-call to sub_96850 via direct jump indirection
    return sub_96850(/* forwarded args */);
}

