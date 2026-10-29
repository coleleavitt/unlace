// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .qlgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_5088
//
// Resolved target: qlgets
// Target address:  0x53D0
// GOT/IAT slot:    0x5088
// Slot symbol:     off_5088
// Target type:     <no type info>
// ============================================================

void .qlgets(/* see target signature */)
{
    // Tail-call to qlgets via GOT/IAT indirection
    return qlgets(/* forwarded args */);
}

