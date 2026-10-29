// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3510
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3510 jmp     cs:off_14270
//
// Resolved target: create_filename_cmt
// Target address:  0x14878
// GOT/IAT slot:    0x14270
// Slot symbol:     off_14270
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

