// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35B0
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35B0 jmp     cs:off_282C0
//
// Resolved target: qfclose
// Target address:  0x28778
// GOT/IAT slot:    0x282C0
// Slot symbol:     off_282C0
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

