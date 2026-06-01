// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9780
// Name:            .del_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9780 jmp     cs:off_2E3A8
//
// Resolved target: del_func
// Target address:  0x2EA28
// GOT/IAT slot:    0x2E3A8
// Slot symbol:     off_2E3A8
// Target type:     <no type info>
// ============================================================

void .del_func(/* see target signature */)
{
    // Tail-call to del_func via GOT/IAT indirection
    return del_func(/* forwarded args */);
}

