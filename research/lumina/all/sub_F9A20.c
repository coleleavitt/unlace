__int64 __fastcall sub_F9A20(__int64 a1, char *a2, double a3)
{
  int *v3; // rbp
  int i; // ebx
  unsigned __int8 *v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax

  v3 = *(int **)(a1 + 40);
  if ( *v3 > 0 )
  {
    for ( i = 0; *v3 > i; ++i )
    {
      v5 = *(unsigned __int8 **)&v3[6 * i + 2];
      if ( (int)sub_F80F0(0, a2, (__int64)v5, 0xFFFFFFFF, a3) <= 1 )
      {
        v6 = *(_QWORD *)a1;
        v7 = sub_F3950(*(_QWORD *)a1, v5, a3);
        if ( !v7 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)v6 + 16LL);
          if ( !v7 )
            return 1;
        }
        if ( *(int (__fastcall **)(__int64, int, const void *, int, const void *))(v7 + 24) == sub_C7E20 )
          return 1;
      }
    }
  }
  if ( (a2[5] & 8) == 0 )
    return sub_CE7B0(a1, (__int64)a2);
  *(_WORD *)(a1 + 36) = 0;
  return 2;
}
