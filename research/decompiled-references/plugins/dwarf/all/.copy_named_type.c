// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA320
// Name:            .copy_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA320 jmp     cs:off_CA178
//
// Resolved target: copy_named_type
// Target address:  0xD0AA8
// GOT/IAT slot:    0xCA178
// Slot symbol:     off_CA178
// Target type:     <no type info>
// ============================================================

void .copy_named_type(/* see target signature */)
{
    // Tail-call to copy_named_type via GOT/IAT indirection
    return copy_named_type(/* forwarded args */);
}

