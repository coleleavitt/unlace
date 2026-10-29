unsigned __int64 __fastcall sub_5F760(_QWORD *a1, unsigned __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __m128i *v8; // rbx
  unsigned __int64 v9; // rdx
  __m128i *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __m128i *v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // r15
  __int32 v19; // r14d
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+18h] [rbp-60h]
  __m128i *v27; // [rsp+28h] [rbp-50h] BYREF
  __m128i *v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v26 = (_QWORD *)a4;
  v29 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_5F5F0(a4, &v27, &v28, a4, a5, a6) )
  {
    v7 = a1[18];
    if ( v7 )
    {
      v10 = v28;
      v23 = _mm_loadu_si128((const __m128i *)&v28->m128i_u64[1]);
      if ( -v7 < _mm_add_epi64(v23, _mm_srli_si128(v23, 8)).m128i_u64[0] )
        return v29 - __readfsqword(0x28u);
      v8 = v27;
      v9 = v27->m128i_u64[1];
    }
    else
    {
      v8 = v27;
      v9 = v27->m128i_u64[1];
      if ( *(_QWORD *)(a1[1] + 32LL) < v9 )
        return v29 - __readfsqword(0x28u);
      v10 = v28;
    }
    *a2 = v9;
    *a3 = v10->m128i_i64[1] + v10[1].m128i_i64[0] - v9;
    v11 = a1[3];
    v12 = a1[4];
    v13 = a1[2];
    v14 = v11 + 1;
    if ( v12 < v11 + 1 + (((char *)v10 - (char *)v8) >> 5) )
    {
      v24 = qvector_reserve();
      v12 = a1[4];
      a1[2] = v24;
      v13 = v24;
      v11 = a1[3];
      v14 = v11 + 1;
    }
    while ( 1 )
    {
      v17 = _mm_loadu_si128(v8);
      v18 = v8[1].m128i_i64[0];
      v19 = v8[1].m128i_i32[2];
      if ( v12 < v14 )
      {
        v25 = v17;
        v20 = qvector_reserve();
        v17 = _mm_load_si128(&v25);
        a1[2] = v20;
        v13 = v20;
        v11 = a1[3];
      }
      v15 = (__m128i *)(v13 + 32 * v11);
      v15[1].m128i_i64[0] = v18;
      v15[1].m128i_i32[2] = v19;
      *v15 = v17;
      v16 = a1[3];
      v11 = v16 + 1;
      a1[3] = v16 + 1;
      if ( v10 == v8 )
        break;
      v8 += 2;
      v12 = a1[4];
      v13 = a1[2];
      v14 = v16 + 2;
      v27 = v8;
    }
    v21 = v26;
    if ( *v26 )
    {
      v26[1] = 0;
      qfree();
      *v21 = 0;
      v21[2] = 0;
    }
  }
  return v29 - __readfsqword(0x28u);
}

