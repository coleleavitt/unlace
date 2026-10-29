// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x82A0
// Name:     set_target_assembler
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_target_assembler are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_target_assembler(/* see import library declaration */);

