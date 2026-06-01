// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7460
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7460 jmp     cs:off_19218
//
// Resolved target: get_default_reftype
// Target address:  0x19748
// GOT/IAT slot:    0x19218
// Slot symbol:     off_19218
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

