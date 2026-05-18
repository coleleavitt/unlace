// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x185290
// Name:            sub_185290
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x185290 jmp     sub_185180
//
// Resolved target: sub_185180
// Target address:  0x185180
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_185290(/* see target signature */)
{
    // Tail-call to sub_185180 via direct jump indirection
    return sub_185180(/* forwarded args */);
}

