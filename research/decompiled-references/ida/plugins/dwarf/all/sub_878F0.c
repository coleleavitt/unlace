_QWORD *__fastcall sub_878F0(_QWORD *a1)
{
  _QWORD *v2; // r14
  int v3; // eax
  __int64 v4; // rbp
  void *v5; // r15
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rax
  void *v9; // rdi
  const char *v10; // r12
  size_t v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  char v24[8]; // [rsp+28h] [rbp-60h] BYREF
  void *v25; // [rsp+30h] [rbp-58h] BYREF
  __m128i v26; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = a1 + 19;
  if ( (*((_BYTE *)a1 + 213) & 0x40) == 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, char *))(a1[32] + 328LL))(
           *(_QWORD *)(*a1 + 24LL),
           &v22,
           &v23,
           v24);
    if ( v3 != -1 )
    {
      if ( !v3 )
      {
        v4 = 0;
        v2 = a1 + 19;
        while ( v23 > v4 )
        {
          v10 = *(const char **)(v22 + 8LL * (int)v4);
          v26 = 0;
          v25 = nullptr;
          if ( v10 )
          {
            v11 = strlen(v10);
            v21.m128i_i64[0] = v11 + 1;
            v25 = (void *)qvector_reserve(&v25, 0, v11 + 1, 1);
            v26.m128i_i64[0] = v21.m128i_i64[0];
            memmove(v25, v10, v11);
            *((_BYTE *)v25 + v11) = 0;
          }
          v20 = a1[20];
          v19 = a1[19];
          v12 = a1[21];
          v13 = v20 + 1;
          if ( (unsigned __int64)&v25 < v19 || (unsigned __int64)&v25 >= v19 + 24 * v12 )
          {
            if ( v12 < v13 )
            {
              v17 = qvector_reserve(a1 + 19, v19, v20 + 1, 24);
              a1[19] = v17;
              v19 = v17;
              v20 = a1[20];
            }
            v14 = _mm_loadu_si128(&v26);
            v15 = v19 + 24 * v20;
            *(_QWORD *)v15 = v25;
            *(__m128i *)(v15 + 8) = v14;
            ++a1[20];
          }
          else
          {
            v5 = v25;
            v6 = _mm_loadl_epi64(&v26);
            v25 = nullptr;
            v7 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
            v26 = 0;
            if ( v12 < v13 )
            {
              v21.m128i_i64[1] = v7.m128i_i64[0];
              v21.m128i_i64[0] = v6.m128i_i64[0];
              v18 = qvector_reserve(a1 + 19, v19, v20 + 1, 24);
              a1[19] = v18;
              v19 = v18;
              v7 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
              v20 = a1[20];
              v6 = _mm_loadl_epi64(&v21);
            }
            v8 = v19 + 24 * v20;
            *(_QWORD *)v8 = v5;
            v9 = v25;
            *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
            ++a1[20];
            if ( v9 )
            {
              v26.m128i_i64[0] = 0;
              qfree(v9);
            }
          }
          ++v4;
          (*(void (__fastcall **)(_QWORD, const char *, __int64))(a1[32] + 480LL))(
            *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 160LL),
            v10,
            1);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(a1[32] + 480LL))(
          *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 160LL),
          v22,
          15);
        goto LABEL_20;
      }
      sub_1D740((__int64)"Failed to retrieve source files.\n");
    }
    v2 = a1 + 19;
LABEL_20:
    *((_DWORD *)a1 + 53) |= 0x4000u;
  }
  return v2;
}

