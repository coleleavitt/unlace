// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA540
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA540 jmp     cs:off_35288
//
// Resolved target: is_off
// Target address:  0x358D8
// GOT/IAT slot:    0x35288
// Slot symbol:     off_35288
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

