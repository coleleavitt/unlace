__int64 __fastcall sub_259A0(
        __int64 a1,
        unsigned int a2,
        double a3,
        __m128i a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        char a8)
{
  char v8; // al

  *(_BYTE *)(a1 + 861) = a8;
  *(_BYTE *)(a1 + 861) &= 1u;
  if ( !(unsigned __int8)qgetenv() && !ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
    if ( !ptrace(PTRACE_INTERRUPT, a2, 0, 0) )
    {
      *(_BYTE *)(a1 + 1350) = 1;
      goto LABEL_4;
    }
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  *(_BYTE *)(a1 + 1350) = 0;
  if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
    return 0xFFFFFFFFLL;
LABEL_4:
  sub_23EE0(a1, a2);
  if ( !v8 )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return 0xFFFFFFFFLL;
  }
  sub_24AD0((_QWORD *)a1, a3, a4, a5, a6);
  return 1;
}

