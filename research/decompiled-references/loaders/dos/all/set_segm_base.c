// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB7C0
// Name:     set_segm_base
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_segm_base are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_segm_base(/* see import library declaration */);

