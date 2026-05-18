// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xC9980
// Name:            sub_C9980
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xC9980 jmp     sub_C9940
//
// Resolved target: sub_C9940
// Target address:  0xC9940
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_C9980(/* see target signature */)
{
    // Tail-call to sub_C9940 via direct jump indirection
    return sub_C9940(/* forwarded args */);
}

