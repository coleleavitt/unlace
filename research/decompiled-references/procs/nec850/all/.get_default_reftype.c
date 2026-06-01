// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9570
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9570 jmp     cs:off_2E2A0
//
// Resolved target: get_default_reftype
// Target address:  0x2E910
// GOT/IAT slot:    0x2E2A0
// Slot symbol:     off_2E2A0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

