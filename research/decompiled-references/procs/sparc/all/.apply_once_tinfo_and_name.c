// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73A0
// Name:            .apply_once_tinfo_and_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73A0 jmp     cs:off_191B8
//
// Resolved target: apply_once_tinfo_and_name
// Target address:  0x196E8
// GOT/IAT slot:    0x191B8
// Slot symbol:     off_191B8
// Target type:     <no type info>
// ============================================================

void .apply_once_tinfo_and_name(/* see target signature */)
{
    // Tail-call to apply_once_tinfo_and_name via GOT/IAT indirection
    return apply_once_tinfo_and_name(/* forwarded args */);
}

