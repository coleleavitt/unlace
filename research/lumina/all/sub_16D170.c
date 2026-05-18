// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D170
// Name:            sub_16D170
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x16D170 jmp     sub_16CD00
//
// Resolved target: sub_16CD00
// Target address:  0x16CD00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64 *)
// ============================================================

/* see target sig */ sub_16D170(/* see target signature */)
{
    // Tail-call to sub_16CD00 via direct jump indirection
    return sub_16CD00(/* forwarded args */);
}

