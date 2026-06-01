// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_28128
//
// Resolved target: append_cmt
// Target address:  0x285D8
// GOT/IAT slot:    0x28128
// Slot symbol:     off_28128
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

