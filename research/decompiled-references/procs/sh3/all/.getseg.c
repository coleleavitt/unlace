// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52D0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52D0 jmp     cs:off_15150
//
// Resolved target: getseg
// Target address:  0x161E0
// GOT/IAT slot:    0x15150
// Slot symbol:     off_15150
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

