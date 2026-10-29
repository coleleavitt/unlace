// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5430
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5430 jmp     cs:off_1A200
//
// Resolved target: netnode_suplast
// Target address:  0x1A598
// GOT/IAT slot:    0x1A200
// Slot symbol:     off_1A200
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

