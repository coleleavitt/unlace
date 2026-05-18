// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E20
// Name:            .crc32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E20 jmp     cs:off_23E6F8
//
// Resolved target: crc32
// Target address:  0x2442C8
// GOT/IAT slot:    0x23E6F8
// Slot symbol:     off_23E6F8
// Target type:     <no type info>
// ============================================================

void .crc32(/* see target signature */)
{
    // Tail-call to crc32 via GOT/IAT indirection
    return crc32(/* forwarded args */);
}

