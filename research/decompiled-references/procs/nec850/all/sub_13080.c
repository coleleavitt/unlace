// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13080
// Name:            sub_13080
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x13080 jmp     sub_12E40
//
// Resolved target: sub_12E40
// Target address:  0x12E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_WORD *, unsigned __int8 *)
// ============================================================

/* see target sig */ sub_13080(/* see target signature */)
{
    // Tail-call to sub_12E40 via direct jump indirection
    return sub_12E40(/* forwarded args */);
}

