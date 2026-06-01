// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xEB30
// Name:            sub_EB30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xEB30 jmp     sub_E9C0
//
// Resolved target: sub_E9C0
// Target address:  0xE9C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_EB30(/* see target signature */)
{
    // Tail-call to sub_E9C0 via direct jump indirection
    return sub_E9C0(/* forwarded args */);
}

