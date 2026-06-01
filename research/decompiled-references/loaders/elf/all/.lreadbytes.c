// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9990
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9990 jmp     cs:off_894B0
//
// Resolved target: lreadbytes
// Target address:  0x8C7E0
// GOT/IAT slot:    0x894B0
// Slot symbol:     off_894B0
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

