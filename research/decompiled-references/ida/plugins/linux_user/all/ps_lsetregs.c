_BOOL8 __fastcall ps_lsetregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_SETREGS, a2, 0, a3) != 0;
}

