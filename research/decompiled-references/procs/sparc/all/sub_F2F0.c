// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF2F0
// Name:            sub_F2F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF2F0 jmp     sub_EEB0
//
// Resolved target: sub_EEB0
// Target address:  0xEEB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int8 *, double)
// ============================================================

/* see target sig */ sub_F2F0(/* see target signature */)
{
    // Tail-call to sub_EEB0 via direct jump indirection
    return sub_EEB0(/* forwarded args */);
}

