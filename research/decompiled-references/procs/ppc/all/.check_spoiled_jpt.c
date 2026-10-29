// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20100
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20100 jmp     cs:off_95068
//
// Resolved target: check_spoiled_jpt
// Target address:  0x95A98
// GOT/IAT slot:    0x95068
// Slot symbol:     off_95068
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

