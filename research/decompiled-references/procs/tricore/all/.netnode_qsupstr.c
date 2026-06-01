// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61E0
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61E0 jmp     cs:off_240D8
//
// Resolved target: netnode_qsupstr
// Target address:  0x25EA8
// GOT/IAT slot:    0x240D8
// Slot symbol:     off_240D8
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}

