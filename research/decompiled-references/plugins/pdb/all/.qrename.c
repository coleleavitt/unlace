// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D580
// Name:            .qrename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D580 jmp     cs:off_B32A8
//
// Resolved target: qrename
// Target address:  0xB3A48
// GOT/IAT slot:    0xB32A8
// Slot symbol:     off_B32A8
// Target type:     <no type info>
// ============================================================

void .qrename(/* see target signature */)
{
    // Tail-call to qrename via GOT/IAT indirection
    return qrename(/* forwarded args */);
}

