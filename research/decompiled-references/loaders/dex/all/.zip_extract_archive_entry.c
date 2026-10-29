// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32D0
// Name:            .zip_extract_archive_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32D0 jmp     cs:off_28150
//
// Resolved target: zip_extract_archive_entry
// Target address:  0x28600
// GOT/IAT slot:    0x28150
// Slot symbol:     off_28150
// Target type:     <no type info>
// ============================================================

void .zip_extract_archive_entry(/* see target signature */)
{
    // Tail-call to zip_extract_archive_entry via GOT/IAT indirection
    return zip_extract_archive_entry(/* forwarded args */);
}

