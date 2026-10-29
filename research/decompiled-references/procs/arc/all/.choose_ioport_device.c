// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8080
// Name:            .choose_ioport_device
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8080 jmp     cs:off_2A028
//
// Resolved target: choose_ioport_device
// Target address:  0x2BA38
// GOT/IAT slot:    0x2A028
// Slot symbol:     off_2A028
// Target type:     <no type info>
// ============================================================

void .choose_ioport_device(/* see target signature */)
{
    // Tail-call to choose_ioport_device via GOT/IAT indirection
    return choose_ioport_device(/* forwarded args */);
}

