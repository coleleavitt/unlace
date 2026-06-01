// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5090
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5090 jmp     cs:off_15030
//
// Resolved target: check_spoiled_jpt
// Target address:  0x160C0
// GOT/IAT slot:    0x15030
// Slot symbol:     off_15030
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

