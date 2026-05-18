// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x243FA0
// Name:     sem_wait
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to sem_wait are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void sem_wait(/* see import library declaration */);

