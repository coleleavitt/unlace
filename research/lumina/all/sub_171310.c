// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x171310
// Name:            sub_171310
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x171310 jmp     sub_1712A0
//
// Resolved target: sub_1712A0
// Target address:  0x1712A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int)
// ============================================================

/* see target sig */ sub_171310(/* see target signature */)
{
    // Tail-call to sub_1712A0 via direct jump indirection
    return sub_1712A0(/* forwarded args */);
}

