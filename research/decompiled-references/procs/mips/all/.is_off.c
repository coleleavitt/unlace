// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19670
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19670 jmp     cs:off_75320
//
// Resolved target: is_off
// Target address:  0x75B70
// GOT/IAT slot:    0x75320
// Slot symbol:     off_75320
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

