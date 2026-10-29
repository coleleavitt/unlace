// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5B0
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5B0 jmp     cs:off_352C0
//
// Resolved target: netnode_setblob
// Target address:  0x35910
// GOT/IAT slot:    0x352C0
// Slot symbol:     off_352C0
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

