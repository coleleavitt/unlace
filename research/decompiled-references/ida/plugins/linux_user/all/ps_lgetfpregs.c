_BOOL8 __fastcall ps_lgetfpregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_GETFPREGS, a2, 0, a3) != 0;
}

