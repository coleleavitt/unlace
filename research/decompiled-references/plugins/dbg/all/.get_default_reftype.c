// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_131C8
//
// Resolved target: get_default_reftype
// Target address:  0x13548
// GOT/IAT slot:    0x131C8
// Slot symbol:     off_131C8
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

