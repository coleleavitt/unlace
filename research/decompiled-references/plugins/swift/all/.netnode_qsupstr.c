// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4230
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4230 jmp     cs:off_28100
//
// Resolved target: netnode_qsupstr
// Target address:  0x29A98
// GOT/IAT slot:    0x28100
// Slot symbol:     off_28100
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

