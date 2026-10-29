// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1200
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1200 jmp     cs:off_60E8
//
// Resolved target: create_filename_cmt
// Target address:  0x6278
// GOT/IAT slot:    0x60E8
// Slot symbol:     off_60E8
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

