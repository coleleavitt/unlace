// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8FF0
// Name:            sub_8FF0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x8FF0 endbr64
//   0x8FF4 jmp     sub_8F70
//
// Resolved target: sub_8F70
// Target address:  0x8F70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_8FF0(/* see target signature */)
{
    // Tail-call to sub_8F70 via direct jump indirection
    return sub_8F70(/* forwarded args */);
}

