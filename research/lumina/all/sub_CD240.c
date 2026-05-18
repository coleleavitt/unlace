// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCD240
// Name:            sub_CD240
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCD240 jmp     sub_CD1F0
//
// Resolved target: sub_CD1F0
// Target address:  0xCD1F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_CD240(/* see target signature */)
{
    // Tail-call to sub_CD1F0 via direct jump indirection
    return sub_CD1F0(/* forwarded args */);
}

