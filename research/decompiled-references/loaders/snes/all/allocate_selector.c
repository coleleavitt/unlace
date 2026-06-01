// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x7100
// Name:     allocate_selector
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to allocate_selector are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void allocate_selector(/* see import library declaration */);

