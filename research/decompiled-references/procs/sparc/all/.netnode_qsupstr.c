// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7160
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7160 jmp     cs:off_19098
//
// Resolved target: netnode_qsupstr
// Target address:  0x195C8
// GOT/IAT slot:    0x19098
// Slot symbol:     off_19098
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

