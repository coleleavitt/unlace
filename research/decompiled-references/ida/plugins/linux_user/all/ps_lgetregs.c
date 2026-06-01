_BOOL8 __fastcall ps_lgetregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_GETREGS, a2, 0, a3) != 0;
}

