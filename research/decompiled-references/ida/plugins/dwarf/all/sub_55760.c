__m128i *__fastcall sub_55760(__m128i *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __int32 v4; // r12d
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int32 v11; // eax
  __m128i v12; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v2 = _mm_loadu_si128(a2);
  v3 = a2[1].m128i_i64[0];
  v19 = __readfsqword(0x28u);
  v4 = a2->m128i_i32[0];
  v5 = a2->m128i_i64[1];
  v6 = nullptr;
  v15 = v2;
  v16 = v3;
  v17 = 0;
  v18 = 0;
  if ( v4 != 1 )
  {
    v15.m128i_i32[0] = v4;
    v15.m128i_i64[1] = v5;
    v14 = _mm_load_si128(&v15);
    a1[1].m128i_i64[0] = v3;
    *a1 = v14;
    return a1;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v5 + 272) != 1 )
      goto LABEL_13;
    if ( *(_DWORD *)(v5 + 384) != 5 )
    {
      v15.m128i_i32[0] = 1;
      goto LABEL_14;
    }
    v7 = &v6[v18];
    if ( v6 != v7 )
    {
      v8 = v6;
      while ( *v8 != v5 )
      {
        if ( v7 == ++v8 )
          goto LABEL_9;
      }
      if ( v7 != v8 )
        break;
    }
LABEL_9:
    if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
    {
      v17 = qvector_reserve(&v17, v6, v18 + 1, 8);
      v7 = (__int64 *)(v17 + 8 * v18);
    }
    *v7 = v5;
    v9 = *(_QWORD *)(v5 + 408);
    v10 = _mm_loadu_si128((const __m128i *)(v5 + 392));
    *(_QWORD *)&v18 = v18 + 1;
    v16 = v9;
    v11 = *(_DWORD *)(v5 + 392);
    v6 = (__int64 *)v17;
    v5 = *(_QWORD *)(v5 + 400);
    v15 = v10;
    if ( v11 != 1 )
    {
      v4 = v11;
LABEL_13:
      v15.m128i_i32[0] = v4;
LABEL_14:
      v15.m128i_i64[1] = v5;
      v12 = _mm_load_si128(&v15);
      a1[1].m128i_i64[0] = v16;
      *a1 = v12;
      goto LABEL_15;
    }
  }
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
LABEL_15:
  if ( v6 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v6);
  }
  return a1;
}

