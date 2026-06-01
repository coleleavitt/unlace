// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA620
// Name:            .set_auto_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA620 jmp     cs:off_352F8
//
// Resolved target: set_auto_spd
// Target address:  0x35948
// GOT/IAT slot:    0x352F8
// Slot symbol:     off_352F8
// Target type:     <no type info>
// ============================================================

void .set_auto_spd(/* see target signature */)
{
    // Tail-call to set_auto_spd via GOT/IAT indirection
    return set_auto_spd(/* forwarded args */);
}

