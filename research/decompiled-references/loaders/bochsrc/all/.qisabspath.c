// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qisabspath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_4060
//
// Resolved target: qisabspath
// Target address:  0x51A0
// GOT/IAT slot:    0x4060
// Slot symbol:     off_4060
// Target type:     <no type info>
// ============================================================

void .qisabspath(/* see target signature */)
{
    // Tail-call to qisabspath via GOT/IAT indirection
    return qisabspath(/* forwarded args */);
}

