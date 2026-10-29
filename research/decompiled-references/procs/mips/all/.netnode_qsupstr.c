// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192D0
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192D0 jmp     cs:off_75150
//
// Resolved target: netnode_qsupstr
// Target address:  0x759A0
// GOT/IAT slot:    0x75150
// Slot symbol:     off_75150
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

