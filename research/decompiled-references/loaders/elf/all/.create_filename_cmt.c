// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9850
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9850 jmp     cs:off_89410
//
// Resolved target: create_filename_cmt
// Target address:  0x8C730
// GOT/IAT slot:    0x89410
// Slot symbol:     off_89410
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

