// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12B0
// Name:            sub_12B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x12B0 endbr64
//   0x12B4 jmp     sub_1230
//
// Resolved target: sub_1230
// Target address:  0x1230
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_12B0(/* see target signature */)
{
    // Tail-call to sub_1230 via direct jump indirection
    return sub_1230(/* forwarded args */);
}

