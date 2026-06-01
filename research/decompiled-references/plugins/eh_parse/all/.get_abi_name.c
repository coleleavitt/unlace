// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6340
// Name:            .get_abi_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6340 jmp     cs:off_2F188
//
// Resolved target: get_abi_name
// Target address:  0x2F7F8
// GOT/IAT slot:    0x2F188
// Slot symbol:     off_2F188
// Target type:     <no type info>
// ============================================================

void .get_abi_name(/* see target signature */)
{
    // Tail-call to get_abi_name via GOT/IAT indirection
    return get_abi_name(/* forwarded args */);
}

