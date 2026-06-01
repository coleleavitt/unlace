// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3680
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3680 jmp     cs:off_28328
//
// Resolved target: qfwrite
// Target address:  0x287F0
// GOT/IAT slot:    0x28328
// Slot symbol:     off_28328
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

