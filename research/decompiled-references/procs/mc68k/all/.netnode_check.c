// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64C0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64C0 jmp     cs:off_1D248
//
// Resolved target: netnode_check
// Target address:  0x1D740
// GOT/IAT slot:    0x1D248
// Slot symbol:     off_1D248
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

