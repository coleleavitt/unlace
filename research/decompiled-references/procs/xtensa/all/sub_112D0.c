// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D0
// Name:            sub_112D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x112D0 jmp     sub_10FF0
//
// Resolved target: sub_10FF0
// Target address:  0x10FF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_112D0(/* see target signature */)
{
    // Tail-call to sub_10FF0 via direct jump indirection
    return sub_10FF0(/* forwarded args */);
}

