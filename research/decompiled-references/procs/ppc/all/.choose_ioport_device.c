// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x200B0
// Name:            .choose_ioport_device
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x200B0 jmp     cs:off_95040
//
// Resolved target: choose_ioport_device
// Target address:  0x95A70
// GOT/IAT slot:    0x95040
// Slot symbol:     off_95040
// Target type:     <no type info>
// ============================================================

void .choose_ioport_device(/* see target signature */)
{
    // Tail-call to choose_ioport_device via GOT/IAT indirection
    return choose_ioport_device(/* forwarded args */);
}

