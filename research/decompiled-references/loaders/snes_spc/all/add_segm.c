// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4100
// Name:     add_segm
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_segm are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_segm(/* see import library declaration */);

