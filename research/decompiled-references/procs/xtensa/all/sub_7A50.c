// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A50
// Name:            sub_7A50
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x7A50 endbr64
//   0x7A54 jmp     sub_79D0
//
// Resolved target: sub_79D0
// Target address:  0x79D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64()
// ============================================================

/* see target sig */ sub_7A50(/* see target signature */)
{
    // Tail-call to sub_79D0 via direct jump indirection
    return sub_79D0(/* forwarded args */);
}

