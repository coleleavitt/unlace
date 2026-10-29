// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99F0
// Name:            .get_elf_debug_file_directory
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99F0 jmp     cs:off_894E0
//
// Resolved target: get_elf_debug_file_directory
// Target address:  0x8C810
// GOT/IAT slot:    0x894E0
// Slot symbol:     off_894E0
// Target type:     <no type info>
// ============================================================

void .get_elf_debug_file_directory(/* see target signature */)
{
    // Tail-call to get_elf_debug_file_directory via GOT/IAT indirection
    return get_elf_debug_file_directory(/* forwarded args */);
}

