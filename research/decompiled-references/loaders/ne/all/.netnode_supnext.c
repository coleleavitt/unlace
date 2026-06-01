// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_B0C0
//
// Resolved target: netnode_supnext
// Target address:  0xB358
// GOT/IAT slot:    0xB0C0
// Slot symbol:     off_B0C0
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

