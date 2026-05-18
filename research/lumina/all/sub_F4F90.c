// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF4F90
// Name:            sub_F4F90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF4F90 jmp     sub_F4F80
//
// Resolved target: sub_F4F80
// Target address:  0xF4F80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, _QWORD *, int, __int64 (__fastcall *)(__int64 a1), __int64, __int64)
// ============================================================

/* see target sig */ sub_F4F90(/* see target signature */)
{
    // Tail-call to sub_F4F80 via direct jump indirection
    return sub_F4F80(/* forwarded args */);
}

