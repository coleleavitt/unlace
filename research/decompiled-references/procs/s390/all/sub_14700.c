// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x14700
// Name:            sub_14700
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x14700 jmp     sub_14180
//
// Resolved target: sub_14180
// Target address:  0x14180
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *)
// ============================================================

/* see target sig */ sub_14700(/* see target signature */)
{
    // Tail-call to sub_14180 via direct jump indirection
    return sub_14180(/* forwarded args */);
}

