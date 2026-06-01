// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3D10
// Name:            sub_3D10
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x3D10 endbr64
//   0x3D14 jmp     sub_3C90
//
// Resolved target: sub_3C90
// Target address:  0x3C90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3D10(/* see target signature */)
{
    // Tail-call to sub_3C90 via direct jump indirection
    return sub_3C90(/* forwarded args */);
}

