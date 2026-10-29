// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9200
// Name:            .append_disp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9200 jmp     cs:off_890E8
//
// Resolved target: append_disp
// Target address:  0x8C3E8
// GOT/IAT slot:    0x890E8
// Slot symbol:     off_890E8
// Target type:     <no type info>
// ============================================================

void .append_disp(/* see target signature */)
{
    // Tail-call to append_disp via GOT/IAT indirection
    return append_disp(/* forwarded args */);
}

