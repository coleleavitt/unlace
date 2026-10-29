__int64 __fastcall sub_317210(__int64 *a1, __int64 a2, __m128i *a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  __m128i v14; // xmm0
  const __m128i *v15; // rbp
  unsigned int v16; // r15d
  __m128i v17; // xmm1
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // xmm1_8
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __m128i *v25; // [rsp+8h] [rbp-60h] BYREF
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = a3->m128i_i64[0];
  v26[3] = __readfsqword(0x28u);
  if ( __PAIR128__(a3->m128i_i64[1], v8) == 0 )
    return sub_316CB0(a1, (const void **)a2, (__int64)a3, a4);
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 == 1 )
  {
    v13 = *(_QWORD **)a2;
    if ( !**(_QWORD **)a2 && !v13[1] )
      return sub_316BB0(a1, a3, a5, a6);
    if ( a1[1] != 1 || *(_QWORD *)*a1 || *(_QWORD *)(*a1 + 8) )
    {
      v24 = a3->m128i_i64[1];
      if ( v24 )
      {
        v15 = *(const __m128i **)a2;
        v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v24);
        v25 = (__m128i *)*a1;
LABEL_9:
        v16 = 0;
        while ( 1 )
        {
          v17 = _mm_loadu_si128(v15);
          v18 = v14.m128i_i64[0];
          v19 = v17.m128i_i64[0];
          v20 = v14.m128i_i64[0] < (unsigned __int64)v17.m128i_i64[0];
          v21 = _mm_add_epi64(v17, _mm_srli_si128(v17, 8)).m128i_u64[0];
          if ( v20 )
            v18 = v19;
          v22 = _mm_add_epi64(v14, _mm_srli_si128(v14, 8)).m128i_u64[0];
          if ( v22 > v21 )
            v22 = v21;
          if ( v18 < v22 )
          {
            v26[0] = v18;
            v26[1] = v22 - v18;
            v23 = sub_3168F0(a1, &v25, v26);
            v11 = *(_QWORD *)(a2 + 8);
            v13 = *(_QWORD **)a2;
            v16 |= v23;
          }
          if ( ++v15 == (const __m128i *)&v13[2 * v11] )
            break;
          v14 = _mm_loadu_si128(a3);
        }
        return v16;
      }
    }
  }
  else if ( a1[1] != 1 || *(_QWORD *)*a1 || *(_QWORD *)(*a1 + 8) )
  {
    if ( v11 )
    {
      v12 = a3->m128i_i64[1];
      if ( v12 )
      {
        v25 = (__m128i *)*a1;
        if ( 16 * v11 )
        {
          v13 = *(_QWORD **)a2;
          v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v12);
          v15 = *(const __m128i **)a2;
          goto LABEL_9;
        }
      }
    }
  }
  return 0;
}

