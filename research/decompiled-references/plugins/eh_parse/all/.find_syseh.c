// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60C0
// Name:            .find_syseh
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60C0 jmp     cs:off_2F048
//
// Resolved target: find_syseh
// Target address:  0x2F6B8
// GOT/IAT slot:    0x2F048
// Slot symbol:     off_2F048
// Target type:     <no type info>
// ============================================================

void .find_syseh(/* see target signature */)
{
    // Tail-call to find_syseh via GOT/IAT indirection
    return find_syseh(/* forwarded args */);
}

