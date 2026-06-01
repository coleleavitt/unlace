// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x19638
// Name:     register_custom_fixup
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to register_custom_fixup are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void register_custom_fixup(/* see import library declaration */);

