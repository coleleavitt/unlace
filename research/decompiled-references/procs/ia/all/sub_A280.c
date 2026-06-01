// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA280
// Name:            sub_A280
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xA280 jmp     sub_A210
//
// Resolved target: sub_A210
// Target address:  0xA210
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_A280(/* see target signature */)
{
    // Tail-call to sub_A210 via direct jump indirection
    return sub_A210(/* forwarded args */);
}

