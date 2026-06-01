// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13E0
// Name:            sub_13E0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x13E0 endbr64
//   0x13E4 jmp     sub_1360
//
// Resolved target: sub_1360
// Target address:  0x1360
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_13E0(/* see target signature */)
{
    // Tail-call to sub_1360 via direct jump indirection
    return sub_1360(/* forwarded args */);
}

