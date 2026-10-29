// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70A0
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70A0 jmp     cs:off_26038
//
// Resolved target: qstrdup
// Target address:  0x262F0
// GOT/IAT slot:    0x26038
// Slot symbol:     off_26038
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

