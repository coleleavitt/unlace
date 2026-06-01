// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_131A0
//
// Resolved target: demangle_name
// Target address:  0x13520
// GOT/IAT slot:    0x131A0
// Slot symbol:     off_131A0
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

