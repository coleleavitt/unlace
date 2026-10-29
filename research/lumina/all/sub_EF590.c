// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEF590
// Name:            sub_EF590
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEF590 jmp     sub_EF550
//
// Resolved target: sub_EF550
// Target address:  0xEF550
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD *__fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_EF590(/* see target signature */)
{
    // Tail-call to sub_EF550 via direct jump indirection
    return sub_EF550(/* forwarded args */);
}

