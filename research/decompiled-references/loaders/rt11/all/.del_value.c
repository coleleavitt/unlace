// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .del_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: del_value
// Target address:  0x5288
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .del_value(/* see target signature */)
{
    // Tail-call to del_value via GOT/IAT indirection
    return del_value(/* forwarded args */);
}

