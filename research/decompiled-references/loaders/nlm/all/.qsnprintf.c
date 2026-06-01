// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_80A8
//
// Resolved target: qsnprintf
// Target address:  0x8788
// GOT/IAT slot:    0x80A8
// Slot symbol:     off_80A8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

