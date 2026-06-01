// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8570
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8570 jmp     cs:off_2A2A0
//
// Resolved target: pack_dw
// Target address:  0x2A818
// GOT/IAT slot:    0x2A2A0
// Slot symbol:     off_2A2A0
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

