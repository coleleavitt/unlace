// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF850
// Name:            sub_F850
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF850 jmp     sub_F300
//
// Resolved target: sub_F300
// Target address:  0xF300
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_F850(/* see target signature */)
{
    // Tail-call to sub_F300 via direct jump indirection
    return sub_F300(/* forwarded args */);
}

