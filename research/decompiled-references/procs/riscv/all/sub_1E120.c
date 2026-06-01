// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1E120
// Name:            sub_1E120
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1E120 jmp     sub_1D700
//
// Resolved target: sub_1D700
// Target address:  0x1D700
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_1E120(/* see target signature */)
{
    // Tail-call to sub_1D700 via direct jump indirection
    return sub_1D700(/* forwarded args */);
}

