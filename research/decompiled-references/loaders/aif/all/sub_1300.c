// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1300
// Name:            sub_1300
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1300 endbr64
//   0x1304 jmp     sub_1280
//
// Resolved target: sub_1280
// Target address:  0x1280
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1300(/* see target signature */)
{
    // Tail-call to sub_1280 via direct jump indirection
    return sub_1280(/* forwarded args */);
}

