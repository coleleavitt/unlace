// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xFAF0
// Name:            sub_FAF0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xFAF0 jmp     sub_FA60
//
// Resolved target: sub_FA60
// Target address:  0xFA60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int8 *)
// ============================================================

/* see target sig */ sub_FAF0(/* see target signature */)
{
    // Tail-call to sub_FA60 via direct jump indirection
    return sub_FA60(/* forwarded args */);
}

