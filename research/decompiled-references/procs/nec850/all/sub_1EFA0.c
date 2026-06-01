// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EFA0
// Name:            sub_1EFA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EFA0 jmp     sub_1ECD0
//
// Resolved target: sub_1ECD0
// Target address:  0x1ECD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(const __m128i *)
// ============================================================

/* see target sig */ sub_1EFA0(/* see target signature */)
{
    // Tail-call to sub_1ECD0 via direct jump indirection
    return sub_1ECD0(/* forwarded args */);
}

