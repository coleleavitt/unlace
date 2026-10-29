unsigned __int64 __fastcall sub_1F19E0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  unsigned __int64 result; // rax
  __int64 v9; // r13
  __int64 i; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rdi

  *(_QWORD *)(a1 + 8) = 0;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v6 = *(_QWORD *)(a1 + 72);
  if ( !v6 )
    goto LABEL_6;
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( !under_debugger )
      sub_383060(0xCEC4u, a3);
    BUG();
  }
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 > 0 )
    result = sub_1C31B0(*(_QWORD *)(v6 + 8), a1, v7, *(_QWORD *)(a2 + 1440), 0, a3, a4);
  else
LABEL_6:
    result = sub_1C3380(*(_QWORD *)(a2 + 432) + 104LL * *(int *)(a1 + 80), a2, a1, 0, a3, a4);
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v11 = (__int64 *)(*(_QWORD *)(a1 + 40) + 40 * i);
      v12 = v11[2];
      if ( v12 )
      {
        v11[3] = 0;
        qfree(v12);
      }
      result = qfree(*v11);
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}

