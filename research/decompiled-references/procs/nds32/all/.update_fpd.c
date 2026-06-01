// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8720
// Name:            .update_fpd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8720 jmp     cs:off_2A378
//
// Resolved target: update_fpd
// Target address:  0x2A900
// GOT/IAT slot:    0x2A378
// Slot symbol:     off_2A378
// Target type:     <no type info>
// ============================================================

void .update_fpd(/* see target signature */)
{
    // Tail-call to update_fpd via GOT/IAT indirection
    return update_fpd(/* forwarded args */);
}

