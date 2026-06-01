// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20750
// Name:            .invalidate_regfinder_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20750 jmp     cs:off_95390
//
// Resolved target: invalidate_regfinder_cache
// Target address:  0x95DC8
// GOT/IAT slot:    0x95390
// Slot symbol:     off_95390
// Target type:     <no type info>
// ============================================================

void .invalidate_regfinder_cache(/* see target signature */)
{
    // Tail-call to invalidate_regfinder_cache via GOT/IAT indirection
    return invalidate_regfinder_cache(/* forwarded args */);
}

