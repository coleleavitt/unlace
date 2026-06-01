// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA150
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA150 jmp     cs:off_35090
//
// Resolved target: get_spd
// Target address:  0x356E0
// GOT/IAT slot:    0x35090
// Slot symbol:     off_35090
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

