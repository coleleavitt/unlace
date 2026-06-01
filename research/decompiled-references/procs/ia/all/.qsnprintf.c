// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7230
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7230 jmp     cs:off_26100
//
// Resolved target: qsnprintf
// Target address:  0x263B8
// GOT/IAT slot:    0x26100
// Slot symbol:     off_26100
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

