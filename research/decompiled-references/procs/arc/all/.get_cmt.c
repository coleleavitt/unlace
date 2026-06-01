// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84A0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84A0 jmp     cs:off_2A238
//
// Resolved target: get_cmt
// Target address:  0x2BC48
// GOT/IAT slot:    0x2A238
// Slot symbol:     off_2A238
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

