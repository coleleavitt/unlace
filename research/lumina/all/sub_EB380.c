// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEB380
// Name:            sub_EB380
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEB380 jmp     sub_EB160
//
// Resolved target: sub_EB160
// Target address:  0xEB160
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_EB380(/* see target signature */)
{
    // Tail-call to sub_EB160 via direct jump indirection
    return sub_EB160(/* forwarded args */);
}

