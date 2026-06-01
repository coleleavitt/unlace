// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_1A058
//
// Resolved target: netnode_qsupstr
// Target address:  0x1A310
// GOT/IAT slot:    0x1A058
// Slot symbol:     off_1A058
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

