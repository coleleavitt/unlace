// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB4E8
// Name:     make_name_auto
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to make_name_auto are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void make_name_auto(/* see import library declaration */);

