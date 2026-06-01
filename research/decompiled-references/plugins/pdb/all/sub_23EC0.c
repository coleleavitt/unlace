// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23EC0
// Name:            sub_23EC0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x23EC0 endbr64
//   0x23EC4 jmp     sub_23E40
//
// Resolved target: sub_23E40
// Target address:  0x23E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_23EC0(/* see target signature */)
{
    // Tail-call to sub_23E40 via direct jump indirection
    return sub_23E40(/* forwarded args */);
}

