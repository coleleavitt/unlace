// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192C0
// Name:            .gen_use_arg_tinfos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192C0 jmp     cs:off_75148
//
// Resolved target: gen_use_arg_tinfos
// Target address:  0x75998
// GOT/IAT slot:    0x75148
// Slot symbol:     off_75148
// Target type:     <no type info>
// ============================================================

void .gen_use_arg_tinfos(/* see target signature */)
{
    // Tail-call to gen_use_arg_tinfos via GOT/IAT indirection
    return gen_use_arg_tinfos(/* forwarded args */);
}

