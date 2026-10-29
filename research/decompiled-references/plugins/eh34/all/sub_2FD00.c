// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FD00
// Name:            sub_2FD00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FD00 jmp     sub_1EAE0
//
// Resolved target: sub_1EAE0
// Target address:  0x1EAE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_2FD00(/* see target signature */)
{
    // Tail-call to sub_1EAE0 via direct jump indirection
    return sub_1EAE0(/* forwarded args */);
}

