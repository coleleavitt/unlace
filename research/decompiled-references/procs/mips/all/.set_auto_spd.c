// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197C0
// Name:            .set_auto_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197C0 jmp     cs:off_753C8
//
// Resolved target: set_auto_spd
// Target address:  0x75C18
// GOT/IAT slot:    0x753C8
// Slot symbol:     off_753C8
// Target type:     <no type info>
// ============================================================

void .set_auto_spd(/* see target signature */)
{
    // Tail-call to set_auto_spd via GOT/IAT indirection
    return set_auto_spd(/* forwarded args */);
}

