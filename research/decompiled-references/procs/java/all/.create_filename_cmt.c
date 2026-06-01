// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66B0
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66B0 jmp     cs:off_2D340
//
// Resolved target: create_filename_cmt
// Target address:  0x2D850
// GOT/IAT slot:    0x2D340
// Slot symbol:     off_2D340
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

