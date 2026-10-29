// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42C0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42C0 jmp     cs:off_1F148
//
// Resolved target: qunlink
// Target address:  0x1F3F8
// GOT/IAT slot:    0x1F148
// Slot symbol:     off_1F148
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

