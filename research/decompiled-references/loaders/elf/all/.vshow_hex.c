// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9260
// Name:            .vshow_hex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9260 jmp     cs:off_89118
//
// Resolved target: vshow_hex
// Target address:  0x8C418
// GOT/IAT slot:    0x89118
// Slot symbol:     off_89118
// Target type:     <no type info>
// ============================================================

void .vshow_hex(/* see target signature */)
{
    // Tail-call to vshow_hex via GOT/IAT indirection
    return vshow_hex(/* forwarded args */);
}

