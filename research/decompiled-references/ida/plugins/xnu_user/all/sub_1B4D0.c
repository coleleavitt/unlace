__int64 __fastcall sub_1B4D0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 i; // r12
  _QWORD *v10; // rbx

  sub_2FA70(a1 + 1704);
  v2 = *(_QWORD *)(a1 + 2000);
  *(_QWORD *)(a1 + 2072) = -1;
  *(_OWORD *)(a1 + 2040) = -1;
  *(_OWORD *)(a1 + 2056) = -1;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_1B210(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree();
    }
    operator delete(v3, 0x48u);
  }
  v5 = *(_QWORD *)(a1 + 1960);
  result = a1 + 1992;
  *(_QWORD *)(a1 + 2000) = 0;
  *(_OWORD *)(a1 + 2024) = 0;
  *(_QWORD *)(a1 + 2008) = a1 + 1992;
  *(_QWORD *)(a1 + 2016) = a1 + 1992;
  *(_QWORD *)(a1 + 2096) = -1;
  *(_QWORD *)(a1 + 1896) = -1;
  *(_QWORD *)(a1 + 1952) = -1;
  *(_OWORD *)(a1 + 2080) = -1;
  *(_OWORD *)(a1 + 1928) = -1;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 1968);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = (_QWORD *)(v5 + v8);
        if ( *(_QWORD *)(v5 + v8 + 72) )
        {
          v10[10] = 0;
          qfree();
        }
        if ( v10[5] )
        {
          v10[6] = 0;
          qfree();
        }
        if ( v10[2] )
        {
          v10[3] = 0;
          qfree();
        }
        v5 = *(_QWORD *)(a1 + 1960);
        v8 += 104;
      }
    }
    *(_QWORD *)(a1 + 1968) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 1960) = 0;
    *(_QWORD *)(a1 + 1976) = 0;
  }
  *(_BYTE *)(a1 + 2145) = 0;
  *(_OWORD *)(a1 + 2128) = 0;
  return result;
}

