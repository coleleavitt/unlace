// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .get_func_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_130B8
//
// Resolved target: get_func_num
// Target address:  0x13350
// GOT/IAT slot:    0x130B8
// Slot symbol:     off_130B8
// Target type:     <no type info>
// ============================================================

void .get_func_num(/* see target signature */)
{
    // Tail-call to get_func_num via GOT/IAT indirection
    return get_func_num(/* forwarded args */);
}

