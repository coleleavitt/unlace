// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49850
// Name:            sub_49850
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x49850 jmp     sub_496E0
//
// Resolved target: sub_496E0
// Target address:  0x496E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_49850(/* see target signature */)
{
    // Tail-call to sub_496E0 via direct jump indirection
    return sub_496E0(/* forwarded args */);
}

