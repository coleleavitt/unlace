// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4450
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4450 jmp     cs:off_23210
//
// Resolved target: get_default_reftype
// Target address:  0x23630
// GOT/IAT slot:    0x23210
// Slot symbol:     off_23210
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

