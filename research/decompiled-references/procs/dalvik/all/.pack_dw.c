// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53E0
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53E0 jmp     cs:off_1A1D8
//
// Resolved target: pack_dw
// Target address:  0x1A568
// GOT/IAT slot:    0x1A1D8
// Slot symbol:     off_1A1D8
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

