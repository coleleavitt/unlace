// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195F0
// Name:            .invalidate_regfinder_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195F0 jmp     cs:off_752E0
//
// Resolved target: invalidate_regfinder_cache
// Target address:  0x75B30
// GOT/IAT slot:    0x752E0
// Slot symbol:     off_752E0
// Target type:     <no type info>
// ============================================================

void .invalidate_regfinder_cache(/* see target signature */)
{
    // Tail-call to invalidate_regfinder_cache via GOT/IAT indirection
    return invalidate_regfinder_cache(/* forwarded args */);
}

