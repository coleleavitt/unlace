// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8430
// Name:            .set_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8430 jmp     cs:off_2A200
//
// Resolved target: set_opinfo
// Target address:  0x2BC10
// GOT/IAT slot:    0x2A200
// Slot symbol:     off_2A200
// Target type:     <no type info>
// ============================================================

void .set_opinfo(/* see target signature */)
{
    // Tail-call to set_opinfo via GOT/IAT indirection
    return set_opinfo(/* forwarded args */);
}

