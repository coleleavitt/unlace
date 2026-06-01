// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4D0
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4D0 jmp     cs:off_35250
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x358A0
// GOT/IAT slot:    0x35250
// Slot symbol:     off_35250
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

