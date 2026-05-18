// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x978A0
// Name:            sub_978A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x978A0 jmp     sub_97890
//
// Resolved target: sub_97890
// Target address:  0x97890
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_978A0(/* see target signature */)
{
    // Tail-call to sub_97890 via direct jump indirection
    return sub_97890(/* forwarded args */);
}

