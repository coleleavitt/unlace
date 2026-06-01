// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3590
// Name:            .qbasename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3590 jmp     cs:off_292B0
//
// Resolved target: qbasename
// Target address:  0x29680
// GOT/IAT slot:    0x292B0
// Slot symbol:     off_292B0
// Target type:     <no type info>
// ============================================================

void .qbasename(/* see target signature */)
{
    // Tail-call to qbasename via GOT/IAT indirection
    return qbasename(/* forwarded args */);
}

