// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C390
// Name:            sub_16C390
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x16C390 jmp     sub_16C0B0
//
// Resolved target: sub_16C0B0
// Target address:  0x16C0B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, _BYTE *)
// ============================================================

/* see target sig */ sub_16C390(/* see target signature */)
{
    // Tail-call to sub_16C0B0 via direct jump indirection
    return sub_16C0B0(/* forwarded args */);
}

