// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA650
// Name:            .reg_finder_emulate_mem_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA650 jmp     cs:off_35310
//
// Resolved target: reg_finder_emulate_mem_read
// Target address:  0x35960
// GOT/IAT slot:    0x35310
// Slot symbol:     off_35310
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_mem_read(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_mem_read via GOT/IAT indirection
    return reg_finder_emulate_mem_read(/* forwarded args */);
}

