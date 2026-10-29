// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB3C8
// Name:     create_data
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to create_data are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void create_data(/* see import library declaration */);

