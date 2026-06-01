// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9310
// Name:            sub_9310
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x9310 endbr64
//   0x9314 jmp     sub_9290
//
// Resolved target: sub_9290
// Target address:  0x9290
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_9310(/* see target signature */)
{
    // Tail-call to sub_9290 via direct jump indirection
    return sub_9290(/* forwarded args */);
}

