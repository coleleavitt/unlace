// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60A0
// Name:            .create_nodeval_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60A0 jmp     cs:off_1D038
//
// Resolved target: create_nodeval_merge_handler
// Target address:  0x1D528
// GOT/IAT slot:    0x1D038
// Slot symbol:     off_1D038
// Target type:     <no type info>
// ============================================================

void .create_nodeval_merge_handler(/* see target signature */)
{
    // Tail-call to create_nodeval_merge_handler via GOT/IAT indirection
    return create_nodeval_merge_handler(/* forwarded args */);
}

