__m128i *__fastcall sub_3AFCD0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *result; // rax
  __m128i *v7; // r14
  __int64 v9; // rbp
  __int32 v10; // r8d
  __int32 v11; // edx
  __int32 v12; // edi
  const __m128i *v13; // rbx
  __m128i *v14; // rsi
  __int32 v15; // eax
  __int32 v16; // ecx
  __int32 v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i *i; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rdx
  int v25; // edx
  __int32 v26; // esi
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __m128i v34; // [rsp+30h] [rbp-58h]
  __m128i v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+50h] [rbp-38h]

  result = (__m128i *)((char *)a2 - a1);
  if ( (__int64)a2->m128i_i64 - a1 > 640 )
  {
    v7 = a2;
    v9 = a3;
    while ( v9 )
    {
      v10 = *(_DWORD *)(a1 + 60);
      v11 = v7[-2].m128i_i32[2];
      --v9;
      v12 = v7[-2].m128i_i32[3];
      v13 = (const __m128i *)(a1 + 40);
      v14 = (__m128i *)(a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * ((__int64)result >> 3)) >> 1));
      v15 = *(_DWORD *)(a1 + 56);
      v16 = v14[1].m128i_i32[0];
      v17 = v14[1].m128i_i32[1];
      if ( v15 < v16 )
      {
        if ( v11 <= v16 && (v11 != v16 || v17 >= v12) )
        {
          if ( v11 > v15 )
            goto LABEL_36;
LABEL_33:
          if ( v11 == v15 && v10 < v12 )
          {
LABEL_36:
            sub_3AFCA0((__m128i *)a1, (__m128i *)((char *)v7 - 40));
            goto LABEL_13;
          }
LABEL_35:
          sub_3AFCA0((__m128i *)a1, (__m128i *)(a1 + 40));
          goto LABEL_13;
        }
      }
      else if ( v15 == v16 && v10 < v17 )
      {
        if ( v11 <= v16 && (v17 >= v12 || v11 != v16) )
          goto LABEL_33;
      }
      else
      {
        if ( v11 > v15 || v10 < v12 && v11 == v15 )
          goto LABEL_35;
        if ( v11 > v16 || v11 == v16 && v17 < v12 )
          goto LABEL_36;
      }
      sub_3AFCA0((__m128i *)a1, v14);
LABEL_13:
      for ( i = v7; ; i[1] = v23 )
      {
        v25 = *(_DWORD *)(a1 + 16);
        v26 = *(_DWORD *)(a1 + 20);
        while ( 1 )
        {
          v27 = v13[1].m128i_i32[0];
          if ( v27 >= v25 && (v13[1].m128i_i32[1] >= v26 || v27 != v25) )
            break;
          v13 = (const __m128i *)((char *)v13 + 40);
        }
        do
        {
          do
          {
            v21 = i[-2].m128i_u32[2];
            i = (__m128i *)((char *)i - 40);
          }
          while ( v25 < (int)v21 );
        }
        while ( v26 < i[1].m128i_i32[1] && v25 == (_DWORD)v21 );
        if ( v13 >= i )
          break;
        v22 = _mm_loadu_si128(v13);
        v13 = (const __m128i *)((char *)v13 + 40);
        v23 = _mm_loadu_si128((const __m128i *)((char *)v13 - 24));
        v24 = v13[-1].m128i_i64[1];
        *(const __m128i *)((char *)&v13[-3] + 8) = _mm_loadu_si128(i);
        v36 = v24;
        *(const __m128i *)((char *)&v13[-2] + 8) = _mm_loadu_si128(i + 1);
        v34 = v22;
        v13[-1].m128i_i8[8] = i[2].m128i_i8[0];
        i[2].m128i_i8[0] = v24;
        v35 = v23;
        *i = v22;
      }
      sub_3AFCD0(
        v13,
        v7,
        v9,
        v21,
        v18,
        v19,
        v34.m128i_i64[0],
        v34.m128i_i64[1],
        v35.m128i_i64[0],
        v35.m128i_i64[1],
        v36);
      result = (__m128i *)((char *)v13 - a1);
      if ( (__int64)v13->m128i_i64 - a1 <= 640 )
        return result;
      v7 = (__m128i *)v13;
    }
    sub_3AC7C0((const __m128i *)a1, v7, (unsigned __int64)v7, a4, a5, a6);
    for ( result = (__m128i *)((char *)v7 - a1);
          (__int64)v7->m128i_i64 - a1 > 40;
          result = sub_3A4C20(
                     a1,
                     0,
                     0xCCCCCCCCCCCCCCCDLL * (((__int64)v7->m128i_i64 - a1) >> 3),
                     v28,
                     v29,
                     v30,
                     v32,
                     v33,
                     v31) )
    {
      v7 = (__m128i *)((char *)v7 - 40);
      v31 = v7[2].m128i_i64[0];
      v32 = (__int128)_mm_loadu_si128(v7);
      *v7 = _mm_loadu_si128((const __m128i *)a1);
      v33 = (__int128)_mm_loadu_si128(v7 + 1);
      v7[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v7[2].m128i_i8[0] = *(_BYTE *)(a1 + 32);
    }
  }
  return result;
}

