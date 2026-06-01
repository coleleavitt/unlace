// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1360
// Name:            sub_1360
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1360 endbr64
//   0x1364 jmp     sub_12E0
//
// Resolved target: sub_12E0
// Target address:  0x12E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1360(/* see target signature */)
{
    // Tail-call to sub_12E0 via direct jump indirection
    return sub_12E0(/* forwarded args */);
}

