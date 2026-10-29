// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2510
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2510 jmp     cs:off_B270
//
// Resolved target: create_filename_cmt
// Target address:  0xB718
// GOT/IAT slot:    0xB270
// Slot symbol:     off_B270
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

