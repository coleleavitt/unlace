// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .qveprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_20038
//
// Resolved target: qveprintf
// Target address:  0x21948
// GOT/IAT slot:    0x20038
// Slot symbol:     off_20038
// Target type:     <no type info>
// ============================================================

void .qveprintf(/* see target signature */)
{
    // Tail-call to qveprintf via GOT/IAT indirection
    return qveprintf(/* forwarded args */);
}

