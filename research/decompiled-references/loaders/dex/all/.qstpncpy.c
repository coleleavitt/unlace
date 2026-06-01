// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_28240
//
// Resolved target: qstpncpy
// Target address:  0x286F0
// GOT/IAT slot:    0x28240
// Slot symbol:     off_28240
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

