// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3790
// Name:            sub_3790
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3790 jmp     sub_30A0
//
// Resolved target: sub_30A0
// Target address:  0x30A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_3790(/* see target signature */)
{
    // Tail-call to sub_30A0 via direct jump indirection
    return sub_30A0(/* forwarded args */);
}

