// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            sub_1230
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1230 endbr64
//   0x1234 jmp     sub_11B0
//
// Resolved target: sub_11B0
// Target address:  0x11B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1230(/* see target signature */)
{
    // Tail-call to sub_11B0 via direct jump indirection
    return sub_11B0(/* forwarded args */);
}

