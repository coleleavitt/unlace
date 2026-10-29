// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33320
// Name:            sub_33320
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x33320 jmp     sub_327C0
//
// Resolved target: sub_327C0
// Target address:  0x327C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, const __m128i **, char)
// ============================================================

/* see target sig */ sub_33320(/* see target signature */)
{
    // Tail-call to sub_327C0 via direct jump indirection
    return sub_327C0(/* forwarded args */);
}

