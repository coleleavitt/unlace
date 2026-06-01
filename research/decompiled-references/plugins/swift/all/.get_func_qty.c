// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4670
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4670 jmp     cs:off_28320
//
// Resolved target: get_func_qty
// Target address:  0x29CC8
// GOT/IAT slot:    0x28320
// Slot symbol:     off_28320
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

