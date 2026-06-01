// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA240
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA240 jmp     cs:off_35108
//
// Resolved target: netnode_qsupstr
// Target address:  0x35758
// GOT/IAT slot:    0x35108
// Slot symbol:     off_35108
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

