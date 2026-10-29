// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23480
// Name:            sub_23480
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x23480 endbr64
//   0x23484 jmp     sub_23400
//
// Resolved target: sub_23400
// Target address:  0x23400
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_23480(/* see target signature */)
{
    // Tail-call to sub_23400 via direct jump indirection
    return sub_23400(/* forwarded args */);
}

