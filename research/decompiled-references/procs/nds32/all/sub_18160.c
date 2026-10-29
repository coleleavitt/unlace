// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x18160
// Name:            sub_18160
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x18160 jmp     sub_17EF0
//
// Resolved target: sub_17EF0
// Target address:  0x17EF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_18160(/* see target signature */)
{
    // Tail-call to sub_17EF0 via direct jump indirection
    return sub_17EF0(/* forwarded args */);
}

