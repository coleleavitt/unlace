// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19880
// Name:            .reg_finder_may_modify_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19880 jmp     cs:off_75428
//
// Resolved target: reg_finder_may_modify_stkvar
// Target address:  0x75C78
// GOT/IAT slot:    0x75428
// Slot symbol:     off_75428
// Target type:     <no type info>
// ============================================================

void .reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar via GOT/IAT indirection
    return reg_finder_may_modify_stkvar(/* forwarded args */);
}

