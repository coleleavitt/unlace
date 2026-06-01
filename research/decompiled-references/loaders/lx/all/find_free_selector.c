// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB490
// Name:     find_free_selector
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to find_free_selector are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void find_free_selector(/* see import library declaration */);

