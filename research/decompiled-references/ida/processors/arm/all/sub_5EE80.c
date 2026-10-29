unsigned __int64 __fastcall sub_5EE80(__int64 *a1, const __m128i *a2, __int64 a3, __int32 a4, __m128i *a5)
{
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 *v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i *v26; // [rsp+8h] [rbp-60h]
  __m128i *v27; // [rsp+8h] [rbp-60h]
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  __m128i v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( a5[2].m128i_i32[0] != a4 )
  {
    v29.m128i_i32[0] = a4;
    v29.m128i_i64[1] = 0;
    a5 = sub_5ED60(a1 + 1, &v29);
  }
  v7 = *a1;
  if ( *a1 )
  {
    v8 = a2[2].m128i_i16[7];
    if ( v8 == 161 )
    {
      v9 = a5[2].m128i_i64[1];
      if ( a3 - v9 > 0 )
      {
        *(_BYTE *)(v7 + 312) = 1;
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 128);
        *(_QWORD *)(v7 + 128) = a3 - v9 + v10;
        if ( a3 != v9 )
        {
          v12 = *(_QWORD *)(v7 + 288);
          v13 = v9 - a3;
          v14 = *(_QWORD *)(v7 + 296);
          v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2 + 1), (__m128i)(unsigned __int64)(v9 - a3 - v10));
          if ( *(_QWORD *)(v7 + 304) < (unsigned __int64)(v14 + 1) )
          {
            v26 = a5;
            v28 = v15;
            v23 = qvector_reserve(v7 + 288, v12, v14 + 1, 32);
            v15 = _mm_load_si128(&v28);
            a5 = v26;
            *(_QWORD *)(v7 + 288) = v23;
            v12 = v23;
            v14 = *(_QWORD *)(v7 + 296);
          }
          v16 = (__m128i *)(32 * v14 + v12);
          v16[1].m128i_i64[0] = v13;
          v16[1].m128i_i32[2] = -1;
          *v16 = v15;
          v17 = *(_QWORD *)(v7 + 56);
          v18 = *(_QWORD *)(v7 + 64);
          ++*(_QWORD *)(v7 + 296);
          v19 = a2[1].m128i_i64[0];
          v20 = (__int64 *)(v17 + 8 * v18);
          if ( (__int64 *)v17 == v20 )
            goto LABEL_19;
          v21 = (__int64 *)v17;
          while ( v19 != *v21 )
          {
            if ( v20 == ++v21 )
              goto LABEL_19;
          }
          if ( v20 == v21 )
          {
LABEL_19:
            v22 = v18 + 1;
            if ( *(_QWORD *)(v7 + 72) < v22 )
            {
              v27 = a5;
              v24 = qvector_reserve(v7 + 56, v17, v22, 8);
              v25 = *(_QWORD *)(v7 + 64);
              a5 = v27;
              *(_QWORD *)(v7 + 56) = v24;
              v20 = (__int64 *)(v24 + 8 * v25);
            }
            *v20 = v19;
            ++*(_QWORD *)(v7 + 64);
          }
        }
      }
    }
    else if ( v8 == 158 && a3 == *(_QWORD *)(v7 + 136) && !*(_QWORD *)(v7 + 144) )
    {
      *(_QWORD *)(v7 + 144) = a3;
      *(_QWORD *)(v7 + 152) = a2[1].m128i_i64[0];
    }
  }
  a5[2].m128i_i64[1] = a3;
  return v30 - __readfsqword(0x28u);
}
