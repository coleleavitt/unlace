// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12E0
// Name:            sub_12E0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x12E0 endbr64
//   0x12E4 jmp     sub_1260
//
// Resolved target: sub_1260
// Target address:  0x1260
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_12E0(/* see target signature */)
{
    // Tail-call to sub_1260 via direct jump indirection
    return sub_1260(/* forwarded args */);
}

