// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .free_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_130E8
//
// Resolved target: free_idcv
// Target address:  0x13460
// GOT/IAT slot:    0x130E8
// Slot symbol:     off_130E8
// Target type:     <no type info>
// ============================================================

void .free_idcv(/* see target signature */)
{
    // Tail-call to free_idcv via GOT/IAT indirection
    return free_idcv(/* forwarded args */);
}

