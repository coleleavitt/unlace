// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19790
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19790 jmp     cs:off_753B0
//
// Resolved target: get_default_reftype
// Target address:  0x75C00
// GOT/IAT slot:    0x753B0
// Slot symbol:     off_753B0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

