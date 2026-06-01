// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x146C0
// Name:     make_name_public
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to make_name_public are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void make_name_public(/* see import library declaration */);

