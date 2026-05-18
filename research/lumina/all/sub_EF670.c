// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEF670
// Name:            sub_EF670
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEF670 jmp     sub_EF620
//
// Resolved target: sub_EF620
// Target address:  0xEF620
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD *__fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_EF670(/* see target signature */)
{
    // Tail-call to sub_EF620 via direct jump indirection
    return sub_EF620(/* forwarded args */);
}

