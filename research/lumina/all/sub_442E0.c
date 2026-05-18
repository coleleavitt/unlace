// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x442E0
// Name:            sub_442E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x442E0 jmp     sub_16D170
//
// Resolved target: sub_16D170
// Target address:  0x16D170
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_442E0(/* see target signature */)
{
    // Tail-call to sub_16D170 via direct jump indirection
    return sub_16D170(/* forwarded args */);
}

