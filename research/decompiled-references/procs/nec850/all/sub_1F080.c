// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1F080
// Name:            sub_1F080
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1F080 jmp     sub_1EFD0
//
// Resolved target: sub_1EFD0
// Target address:  0x1EFD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_1F080(/* see target signature */)
{
    // Tail-call to sub_1EFD0 via direct jump indirection
    return sub_1EFD0(/* forwarded args */);
}

