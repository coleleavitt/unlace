// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x25E38
// Name:     invoke_callbacks
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to invoke_callbacks are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void invoke_callbacks(/* see import library declaration */);

