// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20AF0
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20AF0 jmp     cs:off_95560
//
// Resolved target: pack_dw
// Target address:  0x95FA0
// GOT/IAT slot:    0x95560
// Slot symbol:     off_95560
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

