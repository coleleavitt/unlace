// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30F0
// Name:            .qregerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30F0 jmp     cs:off_20060
//
// Resolved target: qregerror
// Target address:  0x21970
// GOT/IAT slot:    0x20060
// Slot symbol:     off_20060
// Target type:     <no type info>
// ============================================================

void .qregerror(/* see target signature */)
{
    // Tail-call to qregerror via GOT/IAT indirection
    return qregerror(/* forwarded args */);
}

