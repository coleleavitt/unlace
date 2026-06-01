// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xBF50
// Name:            sub_BF50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xBF50 jmp     sub_BA60
//
// Resolved target: sub_BA60
// Target address:  0xBA60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_DWORD *, __int64)
// ============================================================

/* see target sig */ sub_BF50(/* see target signature */)
{
    // Tail-call to sub_BA60 via direct jump indirection
    return sub_BA60(/* forwarded args */);
}

