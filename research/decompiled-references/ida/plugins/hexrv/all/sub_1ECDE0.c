unsigned __int64 __fastcall sub_1ECDE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned __int64 result; // rax
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v7; // rbp

  *(_QWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v2 = *(_QWORD *)(a1 + 72);
  if ( !v2 )
    goto LABEL_6;
  if ( *(_BYTE *)v2 != 15 )
  {
    if ( !under_debugger )
      sub_37DDE0(52932);
    BUG();
  }
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 > 0 )
    result = sub_1BEB30(*(_QWORD *)(v2 + 8), a1, v3, *(_QWORD *)(a2 + 1440), 0);
  else
LABEL_6:
    result = sub_1BED00(*(_QWORD *)(a2 + 432) + 104LL * *(int *)(a1 + 80), a2, a1, 0);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = *(_QWORD *)(a1 + 40) + 40 * i;
      if ( *(_QWORD *)(v7 + 16) )
      {
        *(_QWORD *)(v7 + 24) = 0;
        qfree();
      }
      result = qfree();
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}

