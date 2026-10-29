__int64 __fastcall sub_1DEC0(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // r12
  const char *v5; // rax
  int v7; // eax

  if ( *(_BYTE *)(a1 + 1350) )
  {
    if ( (unsigned int)ptrace(PTRACE_SEIZE, a2, 0, 0) )
      goto LABEL_3;
    v7 = ptrace(PTRACE_INTERRUPT, (unsigned int)a2, 0, 0);
  }
  else
  {
    v7 = ptrace(PTRACE_ATTACH, a2, 0, 0);
  }
  if ( !v7 )
    return sub_1D860(a1, a2, a3, 0);
LABEL_3:
  v4 = __errno_location();
  v5 = (const char *)winerr();
  sub_143D0(a1, (__int64)"Attaching to %d thread: %s\n", a2, v5);
  if ( (*v4 & 0xFFFFFFFD) == 1 )
    return 0;
  if ( under_debugger )
    BUG();
  interr();
  return sub_1DF80(30197);
}

