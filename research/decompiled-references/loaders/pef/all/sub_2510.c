// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2510
// Name:            sub_2510
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2510 endbr64
//   0x2514 jmp     sub_2490
//
// Resolved target: sub_2490
// Target address:  0x2490
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2510(/* see target signature */)
{
    // Tail-call to sub_2490 via direct jump indirection
    return sub_2490(/* forwarded args */);
}

