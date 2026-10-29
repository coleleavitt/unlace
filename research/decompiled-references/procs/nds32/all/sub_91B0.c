// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91B0
// Name:            sub_91B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x91B0 endbr64
//   0x91B4 jmp     sub_9130
//
// Resolved target: sub_9130
// Target address:  0x9130
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_91B0(/* see target signature */)
{
    // Tail-call to sub_9130 via direct jump indirection
    return sub_9130(/* forwarded args */);
}

