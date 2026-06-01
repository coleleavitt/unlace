// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xD330
// Name:            sub_D330
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xD330 jmp     sub_CF90
//
// Resolved target: sub_CF90
// Target address:  0xCF90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int8 *, double)
// ============================================================

/* see target sig */ sub_D330(/* see target signature */)
{
    // Tail-call to sub_CF90 via direct jump indirection
    return sub_CF90(/* forwarded args */);
}

