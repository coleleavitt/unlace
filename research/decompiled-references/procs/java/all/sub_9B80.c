// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B80
// Name:            sub_9B80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x9B80 jmp     sub_9850
//
// Resolved target: sub_9850
// Target address:  0x9850
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_9B80(/* see target signature */)
{
    // Tail-call to sub_9850 via direct jump indirection
    return sub_9850(/* forwarded args */);
}

