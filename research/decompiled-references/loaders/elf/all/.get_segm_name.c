// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9840
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9840 jmp     cs:off_89408
//
// Resolved target: get_segm_name
// Target address:  0x8C728
// GOT/IAT slot:    0x89408
// Slot symbol:     off_89408
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

