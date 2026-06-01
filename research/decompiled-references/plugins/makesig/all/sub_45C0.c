// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45C0
// Name:            sub_45C0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x45C0 endbr64
//   0x45C4 jmp     sub_4540
//
// Resolved target: sub_4540
// Target address:  0x4540
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_45C0(/* see target signature */)
{
    // Tail-call to sub_4540 via direct jump indirection
    return sub_4540(/* forwarded args */);
}

