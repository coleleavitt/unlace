// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xD1C00
// Name:            sub_D1C00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xD1C00 jmp     sub_D1BA0
//
// Resolved target: sub_D1BA0
// Target address:  0xD1BA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     const char *__fastcall(int)
// ============================================================

/* see target sig */ sub_D1C00(/* see target signature */)
{
    // Tail-call to sub_D1BA0 via direct jump indirection
    return sub_D1BA0(/* forwarded args */);
}

