// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3DB80
// Name:            sub_3DB80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3DB80 jmp     sub_3D900
//
// Resolved target: sub_3D900
// Target address:  0x3D900
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3DB80(/* see target signature */)
{
    // Tail-call to sub_3D900 via direct jump indirection
    return sub_3D900(/* forwarded args */);
}

