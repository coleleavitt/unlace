// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x89A0
// Name:            sub_89A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x89A0 jmp     sub_8110
//
// Resolved target: sub_8110
// Target address:  0x8110
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, _QWORD *)
// ============================================================

/* see target sig */ sub_89A0(/* see target signature */)
{
    // Tail-call to sub_8110 via direct jump indirection
    return sub_8110(/* forwarded args */);
}

