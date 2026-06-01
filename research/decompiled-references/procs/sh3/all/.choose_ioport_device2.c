// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50E0
// Name:            .choose_ioport_device2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50E0 jmp     cs:off_15058
//
// Resolved target: choose_ioport_device2
// Target address:  0x160E8
// GOT/IAT slot:    0x15058
// Slot symbol:     off_15058
// Target type:     <no type info>
// ============================================================

void .choose_ioport_device2(/* see target signature */)
{
    // Tail-call to choose_ioport_device2 via GOT/IAT indirection
    return choose_ioport_device2(/* forwarded args */);
}

