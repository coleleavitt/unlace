// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x160F8
// Name:     set_sreg_at_next_code
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_sreg_at_next_code are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_sreg_at_next_code(/* see import library declaration */);

