// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44310
// Name:            sub_44310
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x44310 jmp     sub_16C3D0
//
// Resolved target: sub_16C3D0
// Target address:  0x16C3D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_44310(/* see target signature */)
{
    // Tail-call to sub_16C3D0 via direct jump indirection
    return sub_16C3D0(/* forwarded args */);
}

