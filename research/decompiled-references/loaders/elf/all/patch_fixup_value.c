// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8C518
// Name:     patch_fixup_value
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to patch_fixup_value are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void patch_fixup_value(/* see import library declaration */);

