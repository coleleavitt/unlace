// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x204A0
// Name:            .set_func_name_if_jumpfunc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x204A0 jmp     cs:off_95238
//
// Resolved target: set_func_name_if_jumpfunc
// Target address:  0x95C70
// GOT/IAT slot:    0x95238
// Slot symbol:     off_95238
// Target type:     <no type info>
// ============================================================

void .set_func_name_if_jumpfunc(/* see target signature */)
{
    // Tail-call to set_func_name_if_jumpfunc via GOT/IAT indirection
    return set_func_name_if_jumpfunc(/* forwarded args */);
}

