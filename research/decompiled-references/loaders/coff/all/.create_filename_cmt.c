// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4670
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4670 jmp     cs:off_23320
//
// Resolved target: create_filename_cmt
// Target address:  0x23750
// GOT/IAT slot:    0x23320
// Slot symbol:     off_23320
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

