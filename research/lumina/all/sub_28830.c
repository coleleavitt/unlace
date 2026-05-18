// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x28830
// Name:            sub_28830
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x28830 endbr64
//   0x28834 jmp     sub_287B0
//
// Resolved target: sub_287B0
// Target address:  0x287B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_28830(/* see target signature */)
{
    // Tail-call to sub_287B0 via direct jump indirection
    return sub_287B0(/* forwarded args */);
}

