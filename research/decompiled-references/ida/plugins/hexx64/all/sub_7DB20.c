__int64 __fastcall sub_7DB20(__int64 a1, __int64 a2, __m128i a3)
{
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  __m128i *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __m128i *v9; // r12
  __int64 v10; // r14
  __int64 v11; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
    sub_7A510(*(double *)a3.m128i_i64);
  v3 = unpack_dd();
  v4 = v3;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 >= (unsigned __int64)v3 && v3 >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(__m128i **)a2;
    if ( v5 != v3 )
    {
      a3.m128i_i64[0] = 0;
      v16 = 0;
      if ( v3 >= v5 )
      {
        v7 = *(_QWORD *)(a2 + 16);
        if ( &v16 < v6 || &v16 >= &v6[v7] )
        {
          if ( v7 < v4 )
          {
            v14 = qvector_reserve(a2, (__int64)v6, v4, 16);
            v5 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v14;
            v6 = (__m128i *)v14;
          }
          if ( v5 < v4 )
          {
            a3 = _mm_load_si128(&v16);
            do
            {
              v8 = v5++;
              v6[v8] = a3;
              v6 = *(__m128i **)a2;
            }
            while ( v4 != v5 );
          }
        }
        else
        {
          if ( v7 < v4 )
          {
            v15 = qvector_reserve(a2, (__int64)v6, v4, 16);
            v5 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v15;
            v6 = (__m128i *)v15;
          }
          if ( v5 < v4 )
          {
            a3.m128i_i64[0] = 0;
            do
            {
              v13 = v5++;
              v6[v13] = 0;
              v6 = *(__m128i **)a2;
            }
            while ( v4 != v5 );
          }
        }
      }
      *(_QWORD *)(a2 + 8) = v4;
    }
    v9 = &v6[v4];
    if ( v9 == v6 )
      return 1;
    while ( 1 )
    {
      while ( *(_DWORD *)(a1 + 48) <= 3u )
      {
        if ( (unsigned __int8)is_cvt64() )
          v10 = (int)sub_7CD20((_QWORD *)a1, *(double *)a3.m128i_i64);
        else
          v10 = sub_7CD40(a1, *(double *)a3.m128i_i64);
        v6->m128i_i64[0] = v10;
        if ( !(unsigned __int8)is_cvt64() )
          goto LABEL_22;
LABEL_18:
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        {
          if ( !under_debugger )
            sub_383060(0xC597u, *(double *)a3.m128i_i64);
          BUG();
        }
        ++v6;
        v6[-1].m128i_i64[1] = v10 + (int)unpack_dd();
        if ( v9 == v6 )
          return 1;
      }
      v11 = *(_QWORD *)(a1 + 32);
      v10 = sub_7CF00((_QWORD *)a1, *(double *)a3.m128i_i64) + v11;
      v6->m128i_i64[0] = v10;
      if ( (unsigned __int8)is_cvt64() )
        goto LABEL_18;
LABEL_22:
      ++v6;
      v6[-1].m128i_i64[1] = v10 + sub_7CD40(a1, *(double *)a3.m128i_i64);
      if ( v9 == v6 )
        return 1;
    }
  }
  return 0;
}

