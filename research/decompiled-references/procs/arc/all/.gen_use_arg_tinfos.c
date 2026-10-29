// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81F0
// Name:            .gen_use_arg_tinfos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81F0 jmp     cs:off_2A0E0
//
// Resolved target: gen_use_arg_tinfos
// Target address:  0x2BAF0
// GOT/IAT slot:    0x2A0E0
// Slot symbol:     off_2A0E0
// Target type:     <no type info>
// ============================================================

void .gen_use_arg_tinfos(/* see target signature */)
{
    // Tail-call to gen_use_arg_tinfos via GOT/IAT indirection
    return gen_use_arg_tinfos(/* forwarded args */);
}

