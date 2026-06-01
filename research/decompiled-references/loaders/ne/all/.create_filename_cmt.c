// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2390
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2390 jmp     cs:off_B1B0
//
// Resolved target: create_filename_cmt
// Target address:  0xB458
// GOT/IAT slot:    0xB1B0
// Slot symbol:     off_B1B0
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

