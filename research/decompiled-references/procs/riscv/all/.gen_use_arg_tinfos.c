// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA230
// Name:            .gen_use_arg_tinfos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA230 jmp     cs:off_35100
//
// Resolved target: gen_use_arg_tinfos
// Target address:  0x35750
// GOT/IAT slot:    0x35100
// Slot symbol:     off_35100
// Target type:     <no type info>
// ============================================================

void .gen_use_arg_tinfos(/* see target signature */)
{
    // Tail-call to gen_use_arg_tinfos via GOT/IAT indirection
    return gen_use_arg_tinfos(/* forwarded args */);
}

