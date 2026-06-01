// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3760
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3760 jmp     cs:off_28398
//
// Resolved target: pack_dq
// Target address:  0x28860
// GOT/IAT slot:    0x28398
// Slot symbol:     off_28398
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

