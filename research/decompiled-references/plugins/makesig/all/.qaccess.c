// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .qaccess
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_20260
//
// Resolved target: qaccess
// Target address:  0x21B90
// GOT/IAT slot:    0x20260
// Slot symbol:     off_20260
// Target type:     <no type info>
// ============================================================

void .qaccess(/* see target signature */)
{
    // Tail-call to qaccess via GOT/IAT indirection
    return qaccess(/* forwarded args */);
}

