// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6090
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6090 jmp     cs:off_1D030
//
// Resolved target: check_spoiled_jpt
// Target address:  0x1D520
// GOT/IAT slot:    0x1D030
// Slot symbol:     off_1D030
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

