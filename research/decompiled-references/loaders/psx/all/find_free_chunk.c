// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xA380
// Name:     find_free_chunk
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to find_free_chunk are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void find_free_chunk(/* see import library declaration */);

