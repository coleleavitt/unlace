__int64 __fastcall sub_313DC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __m128i *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1[1];
  v12[1] = __readfsqword(0x28u);
  if ( v2 == 1 )
  {
    if ( !*(_QWORD *)*a1 && !*(_QWORD *)(*a1 + 8) )
      return 1;
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      return 1;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      return 1;
    if ( !v2 )
      return 0;
  }
  v5 = *(__m128i **)a2;
  if ( v4 != 1 )
  {
    v6 = *a1;
    v12[0] = *a1;
    if ( 16 * v4 )
      goto LABEL_6;
    return 1;
  }
  if ( v5->m128i_i64[0] || v5->m128i_i64[1] )
  {
    v6 = *a1;
    v12[0] = *a1;
LABEL_6:
    v7 = v6;
    while ( v6 != v7 + 16 * v2 )
    {
      if ( !(unsigned __int8)sub_313C70(a1, v12, v5) )
        return 0;
      v6 = v12[0];
      v8 = v5->m128i_i64[0];
      v9 = *(_QWORD *)(v12[0] + 8);
      v10 = *(_QWORD *)v12[0];
      if ( !v9 || v8 < v10 || v10 + v9 - 1 < v5->m128i_i64[1] + v8 - 1 )
        return 0;
      if ( ++v5 == (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) )
        return 1;
      v7 = *a1;
      v2 = a1[1];
    }
    return 1;
  }
  return 0;
}

