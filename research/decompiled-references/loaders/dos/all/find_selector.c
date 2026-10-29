// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB710
// Name:     find_selector
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to find_selector are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void find_selector(/* see import library declaration */);

