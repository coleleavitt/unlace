// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6110
// Name:            .choose_ioport_device2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6110 jmp     cs:off_24070
//
// Resolved target: choose_ioport_device2
// Target address:  0x25E40
// GOT/IAT slot:    0x24070
// Slot symbol:     off_24070
// Target type:     <no type info>
// ============================================================

void .choose_ioport_device2(/* see target signature */)
{
    // Tail-call to choose_ioport_device2 via GOT/IAT indirection
    return choose_ioport_device2(/* forwarded args */);
}

