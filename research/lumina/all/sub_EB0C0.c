// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEB0C0
// Name:            sub_EB0C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEB0C0 jmp     sub_EB030
//
// Resolved target: sub_EB030
// Target address:  0xEB030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, size_t)
// ============================================================

/* see target sig */ sub_EB0C0(/* see target signature */)
{
    // Tail-call to sub_EB030 via direct jump indirection
    return sub_EB030(/* forwarded args */);
}

