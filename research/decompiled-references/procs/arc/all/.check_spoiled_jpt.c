// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80E0
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80E0 jmp     cs:off_2A058
//
// Resolved target: check_spoiled_jpt
// Target address:  0x2BA68
// GOT/IAT slot:    0x2A058
// Slot symbol:     off_2A058
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

