// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_40B8
//
// Resolved target: create_filename_cmt
// Target address:  0x41D8
// GOT/IAT slot:    0x40B8
// Slot symbol:     off_40B8
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

