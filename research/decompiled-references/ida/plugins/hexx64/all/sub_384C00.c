__int64 __fastcall sub_384C00(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v1 = a1 + 24;
  v3 = a1[24];
  if ( v3 )
  {
    a1[25] = 0;
    qfree(v3);
    a1[24] = 0;
    a1[26] = 0;
  }
  v4 = a1[23];
  v5 = *(_QWORD *)(v4 + 432);
  if ( 104LL * *(_QWORD *)(v4 + 440) )
  {
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 176LL))(a1, v5) )
      {
        v6 = a1[25];
        v7 = a1[24];
        if ( a1[26] < (unsigned __int64)(v6 + 1) )
        {
          v8 = qvector_reserve((__int64)v1, v7, v6 + 1, 8);
          a1[24] = v8;
          v7 = v8;
          v6 = a1[25];
        }
        *(_QWORD *)(v7 + 8 * v6) = v5;
        ++a1[25];
      }
      v5 += 104;
    }
    while ( v5 != *(_QWORD *)(a1[23] + 432LL) + 104LL * *(_QWORD *)(a1[23] + 440LL) );
  }
  return 1;
}

