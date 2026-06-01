// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            sub_1220
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1220 endbr64
//   0x1224 jmp     sub_11A0
//
// Resolved target: sub_11A0
// Target address:  0x11A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1220(/* see target signature */)
{
    // Tail-call to sub_11A0 via direct jump indirection
    return sub_11A0(/* forwarded args */);
}

