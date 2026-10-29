// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA200
// Name:            sub_A200
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xA200 jmp     sub_9F20
//
// Resolved target: sub_9F20
// Target address:  0x9F20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, unsigned __int8 *, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_A200(/* see target signature */)
{
    // Tail-call to sub_9F20 via direct jump indirection
    return sub_9F20(/* forwarded args */);
}

