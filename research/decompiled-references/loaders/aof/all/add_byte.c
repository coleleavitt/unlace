// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x7220
// Name:     add_byte
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_byte are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_byte(/* see import library declaration */);

