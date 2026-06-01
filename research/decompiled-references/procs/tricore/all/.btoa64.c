// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6310
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6310 jmp     cs:off_24170
//
// Resolved target: btoa64
// Target address:  0x25F40
// GOT/IAT slot:    0x24170
// Slot symbol:     off_24170
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

