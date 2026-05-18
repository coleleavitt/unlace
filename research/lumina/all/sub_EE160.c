// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEE160
// Name:            sub_EE160
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEE160 jmp     sub_EE150
//
// Resolved target: sub_EE150
// Target address:  0xEE150
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, double, __int64, __int64, int, int, int)
// ============================================================

/* see target sig */ sub_EE160(/* see target signature */)
{
    // Tail-call to sub_EE150 via direct jump indirection
    return sub_EE150(/* forwarded args */);
}

