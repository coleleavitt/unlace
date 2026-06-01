// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30B0
// Name:            sub_30B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x30B0 endbr64
//   0x30B4 jmp     sub_3030
//
// Resolved target: sub_3030
// Target address:  0x3030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_30B0(/* see target signature */)
{
    // Tail-call to sub_3030 via direct jump indirection
    return sub_3030(/* forwarded args */);
}

