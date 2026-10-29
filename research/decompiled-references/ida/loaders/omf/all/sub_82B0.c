unsigned __int64 __fastcall sub_82B0(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128 v5; // xmm0
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  size_t v11; // r14
  _BYTE *v12; // rbp
  void *v13; // rbp
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rdi
  bool v27; // cf
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+18h] [rbp-A0h]
  __int64 v39; // [rsp+20h] [rbp-98h] BYREF
  __int64 v40; // [rsp+28h] [rbp-90h]
  void *src; // [rsp+30h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-80h]
  void *v43; // [rsp+50h] [rbp-68h] BYREF
  __m128i v44; // [rsp+58h] [rbp-60h] BYREF
  char v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  while ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(a1 + 8) )
  {
    v6 = sub_7530(a1, 0xFFFFFFFFFFFFFFFFLL);
    src = nullptr;
    v7 = v6;
    *(_OWORD *)n = 0;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8 + 1;
      v10 = v8;
      src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
      n[0] = v9;
      memmove(src, v7, v10);
      *((_BYTE *)src + v10) = 0;
      v11 = n[0];
      if ( n[0] > 1 )
      {
        v12 = src;
        if ( dummy_name_ea(src) != -1 )
          *v12 = toupper((unsigned __int8)*v12);
        v11 = n[0];
      }
      v43 = nullptr;
      v44 = 0;
      if ( v11 )
      {
        v43 = (void *)qalloc_or_throw(v11);
        v44.m128i_i64[1] = v11;
        v13 = v43;
        memcpy(v43, src, v11);
        v44.m128i_i64[0] = v11;
        goto LABEL_16;
      }
    }
    else
    {
      v43 = nullptr;
      v44 = 0;
    }
    v13 = nullptr;
LABEL_16:
    v14 = qword_14590;
    v15 = *((_QWORD *)&xmmword_14598 + 1);
    v45 = a2;
    v16 = xmmword_14598;
    v17 = xmmword_14598 + 1;
    if ( (unsigned __int64)&v43 < qword_14590
      || (unsigned __int64)&v43 >= qword_14590 + 32LL * *((_QWORD *)&xmmword_14598 + 1) )
    {
      if ( *((_QWORD *)&xmmword_14598 + 1) < v17 )
      {
        v14 = qvector_reserve(&qword_14590, 0, v17, 32);
        v20 = *((_QWORD *)&xmmword_14598 + 1);
        *((_QWORD *)&xmmword_14598 + 1) = v15;
        v21 = qword_14590;
        v38 = v20;
        v22 = xmmword_14598 - 1;
        if ( (__int64)xmmword_14598 - 1 >= 0 )
        {
          v23 = v14;
          do
          {
            v24 = *(_QWORD *)v21;
            v25 = _mm_loadu_si128((const __m128i *)(v21 + 8));
            *(_QWORD *)v21 = 0;
            *(_QWORD *)(v21 + 16) = 0;
            *(_QWORD *)v23 = v24;
            *(__m128i *)(v23 + 8) = v25;
            *(_BYTE *)(v23 + 24) = *(_BYTE *)(v21 + 24);
            v26 = *(_QWORD *)v21;
            if ( *(_QWORD *)v21 )
            {
              *(_QWORD *)(v21 + 8) = 0;
              v36 = v22;
              qfree(v26);
              v22 = v36;
            }
            v21 += 32;
            v23 += 32;
            v27 = v22-- == 0;
          }
          while ( !v27 );
          v21 = qword_14590;
        }
        qfree(v21);
        qword_14590 = v14;
        *((_QWORD *)&xmmword_14598 + 1) = v38;
        v16 = xmmword_14598;
      }
      v18 = _mm_loadu_si128(&v44);
      v19 = v14 + 32 * v16;
      *(_QWORD *)v19 = v13;
      *(_BYTE *)(v19 + 24) = a2;
      *(__m128i *)(v19 + 8) = v18;
    }
    else
    {
      v43 = nullptr;
      v3 = v44.m128i_i64[1];
      v44 = 0;
      v39 = v3;
      if ( *((_QWORD *)&xmmword_14598 + 1) < v17 )
      {
        v14 = qvector_reserve(&qword_14590, 0, v17, 32);
        v29 = *((_QWORD *)&xmmword_14598 + 1);
        *((_QWORD *)&xmmword_14598 + 1) = v15;
        v30 = qword_14590;
        v40 = v29;
        v31 = xmmword_14598 - 1;
        if ( (__int64)xmmword_14598 - 1 >= 0 )
        {
          v32 = v14;
          do
          {
            v33 = *(_QWORD *)v30;
            v34 = _mm_loadu_si128((const __m128i *)(v30 + 8));
            *(_QWORD *)v30 = 0;
            *(_QWORD *)(v30 + 16) = 0;
            *(_QWORD *)v32 = v33;
            *(__m128i *)(v32 + 8) = v34;
            *(_BYTE *)(v32 + 24) = *(_BYTE *)(v30 + 24);
            v35 = *(_QWORD *)v30;
            if ( *(_QWORD *)v30 )
            {
              *(_QWORD *)(v30 + 8) = 0;
              qfree(v35);
            }
            v30 += 32;
            v32 += 32;
            v27 = v31-- == 0;
          }
          while ( !v27 );
          v30 = qword_14590;
        }
        qfree(v30);
        qword_14590 = v14;
        *((_QWORD *)&xmmword_14598 + 1) = v40;
        v16 = xmmword_14598;
      }
      v4 = v14 + 32 * v16;
      *(_QWORD *)v4 = v13;
      v5 = _mm_loadh_ps((const double *)&v39);
      *(_BYTE *)(v4 + 24) = a2;
      *(__m128 *)(v4 + 8) = v5;
    }
    *(_QWORD *)&xmmword_14598 = xmmword_14598 + 1;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return v46 - __readfsqword(0x28u);
}

