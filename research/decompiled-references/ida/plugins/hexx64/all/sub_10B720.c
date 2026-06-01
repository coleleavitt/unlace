unsigned __int64 __fastcall sub_10B720(__m128i *a1, __int64 a2, int a3, double a4)
{
  __m128i *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __m128i *v10; // r12
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  int v16; // r15d
  __int64 v17; // rbp
  __int32 v18; // r14d
  int v20; // eax
  __int64 v21; // rbx
  unsigned __int32 v22; // r9d
  __int64 v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  unsigned __int32 v26; // [rsp+Ch] [rbp-CCh]
  __int64 v27[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+60h] [rbp-78h]
  __m128i v32; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+80h] [rbp-58h]
  __m128i v34; // [rsp+88h] [rbp-50h]
  unsigned __int64 v35; // [rsp+98h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_64000(v27, a2, a4);
  v7 = *(_QWORD *)(a2 + 24);
  v28 = 0;
  v29 = 0;
  if ( v7 )
  {
    v24 = (void *)qalloc_or_throw(16 * v7, a2, (__int64)v5, v6);
    v25 = *(const void **)(a2 + 16);
    v28 = (__int64)v24;
    *((_QWORD *)&v29 + 1) = v7;
    memcpy(v24, v25, 16 * v7);
    *(_QWORD *)&v29 = v7;
  }
  sub_3180C0(&v28, a1->m128i_i64[1] + 208, v5, v6);
  v8 = (_QWORD *)a1->m128i_i64[1];
  v9 = _mm_cvtsi32_si128(a1[7].m128i_u32[3]);
  v31 = a3;
  v30[0] = &off_4DD3E8;
  v10 = a1 + 6;
  v11 = v8[188];
  v30[2] = a1 + 6;
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 80));
  v30[1] = v11;
  v13 = v8[16];
  v14 = v8[180];
  v33 = v30;
  v30[3] = _mm_unpacklo_epi32(v9, v12).m128i_u64[0];
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD4D8), (__m128i)(unsigned __int64)&off_4DD260);
  v15 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)(v14 + v13));
  v34 = v15;
  if ( !(unsigned int)sub_64E60(v27, (__int64)&v32, 0) )
    sub_317450(&v28, (__int64 (__fastcall ***)(_QWORD, __int64))&v32.m128i_i64[1]);
  v16 = a1[7].m128i_i32[3];
  if ( !v16 )
  {
    v17 = a1->m128i_i64[1];
    v18 = a1[8].m128i_i32[0];
    if ( *(int *)(v17 + 464) > 0 )
    {
      do
      {
        v21 = sub_13D280((_QWORD *)v17, v16);
        if ( (unsigned int)(*(_DWORD *)v21 - 3) <= 1 )
        {
          v32 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
          v22 = *(_DWORD *)(v21 + 88);
          if ( *(_DWORD *)v21 == 4 )
          {
            v23 = *(unsigned __int16 *)(v21 + 10);
            v32.m128i_i8[8] = 1;
            v32.m128i_i64[0] = v23;
            v32.m128i_i32[3] = v22 >> 1;
            v26 = v22 >> 1;
            sub_10B640(v10, (_QWORD *)v17, (__int64)&v32, v18, *(double *)v15.m128i_i64);
            v20 = *(_DWORD *)(v21 + 8);
            v22 = v26;
            if ( *(_DWORD *)v21 == 4 )
              v20 = (unsigned __int16)v20;
          }
          else
          {
            v20 = *(_DWORD *)(v21 + 8);
          }
          v32.m128i_i8[8] = 1;
          v32.m128i_i64[0] = v20;
          v32.m128i_i32[3] = v22;
          sub_10B640(v10, (_QWORD *)v17, (__int64)&v32, v18, *(double *)v15.m128i_i64);
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(v17 + 464) );
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  qfree(v27[0]);
  return v35 - __readfsqword(0x28u);
}

