// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C20
// Name:            .del_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C20 jmp     cs:off_955F8
//
// Resolved target: del_func
// Target address:  0x96040
// GOT/IAT slot:    0x955F8
// Slot symbol:     off_955F8
// Target type:     <no type info>
// ============================================================

void .del_func(/* see target signature */)
{
    // Tail-call to del_func via GOT/IAT indirection
    return del_func(/* forwarded args */);
}

