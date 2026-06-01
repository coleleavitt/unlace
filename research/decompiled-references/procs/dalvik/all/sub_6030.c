// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6030
// Name:            sub_6030
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x6030 endbr64
//   0x6034 jmp     sub_5FB0
//
// Resolved target: sub_5FB0
// Target address:  0x5FB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_6030(/* see target signature */)
{
    // Tail-call to sub_5FB0 via direct jump indirection
    return sub_5FB0(/* forwarded args */);
}

