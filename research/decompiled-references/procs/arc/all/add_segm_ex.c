// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x2BCE0
// Name:     add_segm_ex
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_segm_ex are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_segm_ex(/* see import library declaration */);

