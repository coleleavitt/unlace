// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .qisabspath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_A0F8
//
// Resolved target: qisabspath
// Target address:  0xA328
// GOT/IAT slot:    0xA0F8
// Slot symbol:     off_A0F8
// Target type:     <no type info>
// ============================================================

void .qisabspath(/* see target signature */)
{
    // Tail-call to qisabspath via GOT/IAT indirection
    return qisabspath(/* forwarded args */);
}

