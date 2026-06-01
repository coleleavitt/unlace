// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9540
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9540 jmp     cs:off_2E288
//
// Resolved target: netnode_setblob
// Target address:  0x2E8F8
// GOT/IAT slot:    0x2E288
// Slot symbol:     off_2E288
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

