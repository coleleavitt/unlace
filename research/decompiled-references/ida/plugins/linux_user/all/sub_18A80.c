unsigned __int64 __fastcall sub_18A80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        int a6,
        char *s)
{
  size_t v10; // r14
  void *v11; // rax
  size_t v12; // r14
  void *v13; // rax
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // rbp
  void *v17; // rax
  const char *i; // r15
  void *v19; // rbp
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // rax
  __int64 v25; // r13
  size_t v26; // rbp
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  __m128i v37; // [rsp+18h] [rbp-1088h] BYREF
  void *v38; // [rsp+38h] [rbp-1068h] BYREF
  __m128i v39; // [rsp+40h] [rbp-1060h] BYREF
  unsigned __int64 v40; // [rsp+1060h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_44D78;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1064) = 0;
  if ( a4 )
  {
    v10 = strlen(a4);
    v11 = (void *)qvector_reserve();
    *(_QWORD *)(a1 + 1056) = v11;
    *(_QWORD *)(a1 + 1064) = v10 + 1;
    memmove(v11, a4, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 1056) + v10) = 0;
  }
  *(_QWORD *)(a1 + 1080) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  if ( a5 )
  {
    v12 = strlen(a5);
    v13 = (void *)qvector_reserve();
    *(_QWORD *)(a1 + 1080) = v13;
    *(_QWORD *)(a1 + 1088) = v12 + 1;
    memmove(v13, a5, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 1080) + v12) = 0;
  }
  *(_QWORD *)(a1 + 1104) = 0;
  *(_OWORD *)(a1 + 1112) = 0;
  if ( s )
  {
    v14 = strlen(s);
    v15 = v14 + 1;
    v16 = v14;
    v17 = (void *)qvector_reserve();
    *(_QWORD *)(a1 + 1104) = v17;
    *(_QWORD *)(a1 + 1112) = v15;
    memmove(v17, s, v16);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + v16) = 0;
  }
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 1128) = a6;
  qstrncpy();
  for ( i = (const char *)qstrtok(); i; i = (const char *)qstrtok() )
  {
    v38 = nullptr;
    v39 = 0;
    v24 = strlen(i);
    v25 = v24 + 1;
    v26 = v24;
    v38 = (void *)qvector_reserve();
    v39.m128i_i64[0] = v25;
    memmove(v38, i, v26);
    *((_BYTE *)v38 + v26) = 0;
    v35 = *(_QWORD *)(a1 + 1040);
    v34 = *(_QWORD *)(a1 + 1032);
    v27 = *(_QWORD *)(a1 + 1048);
    v28 = v35 + 1;
    if ( (unsigned __int64)&v38 < v34 || (unsigned __int64)&v38 >= v34 + 24 * v27 )
    {
      if ( v27 < v28 )
      {
        v31 = qvector_reserve();
        *(_QWORD *)(a1 + 1032) = v31;
        v34 = v31;
        v35 = *(_QWORD *)(a1 + 1040);
      }
      v29 = _mm_loadu_si128(&v39);
      v30 = v34 + 24 * v35;
      *(_QWORD *)v30 = v38;
      *(__m128i *)(v30 + 8) = v29;
      ++*(_QWORD *)(a1 + 1040);
    }
    else
    {
      v19 = v38;
      v20 = _mm_loadl_epi64(&v39);
      v38 = nullptr;
      v21 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
      v39 = 0;
      if ( v27 < v28 )
      {
        v37.m128i_i64[1] = v21.m128i_i64[0];
        v37.m128i_i64[0] = v20.m128i_i64[0];
        v33 = qvector_reserve();
        *(_QWORD *)(a1 + 1032) = v33;
        v34 = v33;
        v21 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
        v35 = *(_QWORD *)(a1 + 1040);
        v20 = _mm_loadl_epi64(&v37);
      }
      v22 = v34 + 24 * v35;
      *(_QWORD *)v22 = v19;
      v23 = v38;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
      ++*(_QWORD *)(a1 + 1040);
      if ( v23 )
      {
        v39.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}

