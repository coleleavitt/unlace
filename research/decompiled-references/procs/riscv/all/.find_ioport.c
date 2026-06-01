// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA780
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA780 jmp     cs:off_353A8
//
// Resolved target: find_ioport
// Target address:  0x35A00
// GOT/IAT slot:    0x353A8
// Slot symbol:     off_353A8
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

