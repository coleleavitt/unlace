// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xE37A0
// Name:            sub_E37A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xE37A0 jmp     sub_E36C0
//
// Resolved target: sub_E36C0
// Target address:  0xE36C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int8 *, __int64, __int64, void (__fastcall *)(__int64))
// ============================================================

/* see target sig */ sub_E37A0(/* see target signature */)
{
    // Tail-call to sub_E36C0 via direct jump indirection
    return sub_E36C0(/* forwarded args */);
}

