// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F30
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F30 jmp     cs:off_95780
//
// Resolved target: is_cvt64
// Target address:  0x961D8
// GOT/IAT slot:    0x95780
// Slot symbol:     off_95780
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

