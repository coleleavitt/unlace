// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA20
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA20 jmp     cs:off_354F8
//
// Resolved target: is_cvt64
// Target address:  0x35B68
// GOT/IAT slot:    0x354F8
// Slot symbol:     off_354F8
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

