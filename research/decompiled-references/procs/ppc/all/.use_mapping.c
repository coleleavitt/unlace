// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20440
// Name:            .use_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20440 jmp     cs:off_95208
//
// Resolved target: use_mapping
// Target address:  0x95C40
// GOT/IAT slot:    0x95208
// Slot symbol:     off_95208
// Target type:     <no type info>
// ============================================================

void .use_mapping(/* see target signature */)
{
    // Tail-call to use_mapping via GOT/IAT indirection
    return use_mapping(/* forwarded args */);
}

