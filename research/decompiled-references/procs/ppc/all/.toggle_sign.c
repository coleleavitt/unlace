// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20240
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20240 jmp     cs:off_95108
//
// Resolved target: toggle_sign
// Target address:  0x95B40
// GOT/IAT slot:    0x95108
// Slot symbol:     off_95108
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

