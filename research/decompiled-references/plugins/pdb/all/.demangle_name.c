// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D5E0
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D5E0 jmp     cs:off_B32D8
//
// Resolved target: demangle_name
// Target address:  0xB3A78
// GOT/IAT slot:    0xB32D8
// Slot symbol:     off_B32D8
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

