// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .qlgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_4098
//
// Resolved target: qlgets
// Target address:  0x51E8
// GOT/IAT slot:    0x4098
// Slot symbol:     off_4098
// Target type:     <no type info>
// ============================================================

void .qlgets(/* see target signature */)
{
    // Tail-call to qlgets via GOT/IAT indirection
    return qlgets(/* forwarded args */);
}

