// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x200A0
// Name:            .auto_is_ok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x200A0 jmp     cs:off_95038
//
// Resolved target: auto_is_ok
// Target address:  0x95A68
// GOT/IAT slot:    0x95038
// Slot symbol:     off_95038
// Target type:     <no type info>
// ============================================================

void .auto_is_ok(/* see target signature */)
{
    // Tail-call to auto_is_ok via GOT/IAT indirection
    return auto_is_ok(/* forwarded args */);
}

