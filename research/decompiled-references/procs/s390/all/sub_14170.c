// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x14170
// Name:            sub_14170
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x14170 jmp     sub_13EF0
//
// Resolved target: sub_13EF0
// Target address:  0x13EF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, unsigned __int8 *, double)
// ============================================================

/* see target sig */ sub_14170(/* see target signature */)
{
    // Tail-call to sub_13EF0 via direct jump indirection
    return sub_13EF0(/* forwarded args */);
}

