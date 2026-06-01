// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1370
// Name:            sub_1370
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1370 endbr64
//   0x1374 jmp     sub_12F0
//
// Resolved target: sub_12F0
// Target address:  0x12F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1370(/* see target signature */)
{
    // Tail-call to sub_12F0 via direct jump indirection
    return sub_12F0(/* forwarded args */);
}

