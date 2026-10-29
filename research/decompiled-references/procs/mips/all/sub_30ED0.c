// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30ED0
// Name:            sub_30ED0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x30ED0 jmp     sub_30E60
//
// Resolved target: sub_30E60
// Target address:  0x30E60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_30ED0(/* see target signature */)
{
    // Tail-call to sub_30E60 via direct jump indirection
    return sub_30E60(/* forwarded args */);
}

