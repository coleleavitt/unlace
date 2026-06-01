__int64 __fastcall sub_2CF90(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  __int64 v4; // r15
  size_t v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rax
  void *v13; // rbp
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  void *v21; // [rsp+10h] [rbp-58h] BYREF
  __m128i v22; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v21 = nullptr;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v21 = (void *)qvector_reserve();
    v22.m128i_i64[0] = v4;
    memmove(v21, a2, v5);
    *((_BYTE *)v21 + v5) = 0;
  }
  v6 = a1[2];
  v7 = a1[1];
  v8 = a1[3];
  v9 = v6 + 1;
  if ( (unsigned __int64)&v21 >= v7 && (unsigned __int64)&v21 < v7 + 24 * v8 )
  {
    v13 = v21;
    v14 = _mm_loadl_epi64(&v22);
    v21 = nullptr;
    v15 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
    v22 = 0;
    if ( v8 < v9 )
    {
      v20.m128i_i64[1] = v15.m128i_i64[0];
      v20.m128i_i64[0] = v14.m128i_i64[0];
      v19 = qvector_reserve();
      a1[1] = v19;
      v7 = v19;
      v6 = a1[2];
      v15 = _mm_loadl_epi64((const __m128i *)&v20.m128i_u64[1]);
      v14 = _mm_loadl_epi64(&v20);
    }
    v16 = v7 + 24 * v6;
    *(_QWORD *)v16 = v13;
    v17 = v21;
    *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v14, v15);
    ++a1[2];
    if ( v17 )
    {
      v22.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    if ( v8 < v9 )
    {
      v18 = qvector_reserve();
      a1[1] = v18;
      v7 = v18;
      v6 = a1[2];
    }
    v10 = _mm_loadu_si128(&v22);
    v11 = v7 + 24 * v6;
    *(_QWORD *)v11 = v21;
    *(__m128i *)(v11 + 8) = v10;
    ++a1[2];
  }
  return 0;
}

