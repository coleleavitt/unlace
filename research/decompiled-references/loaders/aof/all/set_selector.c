// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x72B8
// Name:     set_selector
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_selector are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_selector(/* see import library declaration */);

