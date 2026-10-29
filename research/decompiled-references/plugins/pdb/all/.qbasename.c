// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DCA0
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DCA0 jmp     cs:off_B3638
//
// Resolved target: qbasename
// Target address:  0xB3E18
// GOT/IAT slot:    0xB3638
// Slot symbol:     off_B3638
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

