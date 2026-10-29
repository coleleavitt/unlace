// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5DC00
// Name:            sub_5DC00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5DC00 jmp     sub_195AB0
//
// Resolved target: sub_195AB0
// Target address:  0x195AB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_5DC00(/* see target signature */)
{
    // Tail-call to sub_195AB0 via direct jump indirection
    return sub_195AB0(/* forwarded args */);
}

