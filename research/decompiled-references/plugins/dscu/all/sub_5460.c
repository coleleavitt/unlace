// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5460
// Name:            sub_5460
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5460 endbr64
//   0x5464 jmp     sub_53E0
//
// Resolved target: sub_53E0
// Target address:  0x53E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5460(/* see target signature */)
{
    // Tail-call to sub_53E0 via direct jump indirection
    return sub_53E0(/* forwarded args */);
}

