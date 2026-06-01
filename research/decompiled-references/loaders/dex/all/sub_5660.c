// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5660
// Name:            sub_5660
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5660 endbr64
//   0x5664 jmp     sub_55E0
//
// Resolved target: sub_55E0
// Target address:  0x55E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5660(/* see target signature */)
{
    // Tail-call to sub_55E0 via direct jump indirection
    return sub_55E0(/* forwarded args */);
}

