// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCD150
// Name:            sub_CD150
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCD150 jmp     sub_CD0F0
//
// Resolved target: sub_CD0F0
// Target address:  0xCD0F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(char **)
// ============================================================

/* see target sig */ sub_CD150(/* see target signature */)
{
    // Tail-call to sub_CD0F0 via direct jump indirection
    return sub_CD0F0(/* forwarded args */);
}

