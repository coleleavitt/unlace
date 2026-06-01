// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A00
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A00 jmp     cs:off_754E8
//
// Resolved target: find_ioport
// Target address:  0x75D40
// GOT/IAT slot:    0x754E8
// Slot symbol:     off_754E8
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

