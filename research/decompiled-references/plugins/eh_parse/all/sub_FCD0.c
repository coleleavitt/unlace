__int64 __fastcall sub_FCD0(int a1, char *a2)
{
  __int64 v2; // rsi
  const char *i; // rax
  void *v4; // rbx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  unsigned __int64 v7; // rax
  void *v8; // rdi
  const char *v9; // r15
  size_t v10; // rax
  __int64 v11; // r14
  size_t v12; // rbx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  char *v19; // rbp
  const char *v20; // rbx
  char v21; // al
  size_t v22; // r14
  char v23; // al
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 *v30; // rdx
  __int64 v31; // rax
  void *v32; // r12
  char *v33; // rdi
  char *v34; // rbx
  char *v35; // rdi
  unsigned int v37; // [rsp+4h] [rbp-F4h]
  __m128i v38; // [rsp+10h] [rbp-E8h] BYREF
  char *s2; // [rsp+20h] [rbp-D8h]
  size_t n; // [rsp+28h] [rbp-D0h]
  char v41[8]; // [rsp+38h] [rbp-C0h] BYREF
  char *s1; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+48h] [rbp-B0h]
  void *src; // [rsp+60h] [rbp-98h] BYREF
  __int128 v45; // [rsp+68h] [rbp-90h]
  unsigned __int64 v46; // [rsp+80h] [rbp-78h] BYREF
  __int128 v47; // [rsp+88h] [rbp-70h]
  void *v48; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v49; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+B8h] [rbp-40h]

  s2 = a2;
  v50 = __readfsqword(0x28u);
  if ( a1 >= -1 )
  {
    v37 = a1 + 1;
    n = strlen(a2);
    while ( 1 )
    {
      v2 = getnseg(v37);
      if ( !v2 )
        return (unsigned int)-2;
      s1 = nullptr;
      src = nullptr;
      v43 = 0;
      v45 = 0;
      if ( get_segm_name(&src, v2, 0) <= 0 )
      {
        if ( src )
        {
          *(_QWORD *)&v45 = 0;
          qfree(src);
        }
        v19 = s1;
        goto LABEL_30;
      }
      v46 = 0;
      v47 = 0;
      for ( i = (const char *)qstrtok(src, ":", v41); ; i = (const char *)qstrtok(0, ":", v41) )
      {
        v9 = i;
        if ( !i )
          break;
        v48 = nullptr;
        v49 = 0;
        v10 = strlen(i);
        v11 = v10 + 1;
        v12 = v10;
        v48 = (void *)qvector_reserve(&v48, 0, v10 + 1, 1);
        v49.m128i_i64[0] = v11;
        memmove(v48, v9, v12);
        *((_BYTE *)v48 + v12) = 0;
        v25 = v47;
        v24 = v46;
        v13 = v47 + 1;
        if ( (unsigned __int64)&v48 < v46 || (unsigned __int64)&v48 >= v46 + 24LL * *((_QWORD *)&v47 + 1) )
        {
          if ( *((_QWORD *)&v47 + 1) < v13 )
          {
            v46 = qvector_reserve(&v46, v46, v47 + 1, 24);
            v24 = v46;
            v25 = v47;
          }
          v14 = _mm_loadu_si128(&v49);
          v15 = v24 + 24 * v25;
          *(_QWORD *)v15 = v48;
          *(__m128i *)(v15 + 8) = v14;
          *(_QWORD *)&v47 = v47 + 1;
        }
        else
        {
          v4 = v48;
          v5 = _mm_loadl_epi64(&v49);
          v48 = nullptr;
          v6 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
          v49 = 0;
          if ( *((_QWORD *)&v47 + 1) < v13 )
          {
            v38.m128i_i64[1] = v6.m128i_i64[0];
            v38.m128i_i64[0] = v5.m128i_i64[0];
            v46 = qvector_reserve(&v46, v46, v47 + 1, 24);
            v24 = v46;
            v6 = _mm_loadl_epi64((const __m128i *)&v38.m128i_u64[1]);
            v25 = v47;
            v5 = _mm_loadl_epi64(&v38);
          }
          v7 = v24 + 24 * v25;
          *(_QWORD *)v7 = v4;
          v8 = v48;
          *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v5, v6);
          *(_QWORD *)&v47 = v47 + 1;
          if ( v8 )
          {
            v49.m128i_i64[0] = 0;
            qfree(v8);
          }
        }
      }
      v16 = v47;
      if ( (_QWORD)v47 )
      {
        v26 = v46;
        v27 = v46 + 8 * (3 * v47 - 3);
        if ( (char **)v27 == &s1 )
          goto LABEL_38;
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 <= 1 )
        {
          *(_QWORD *)&v43 = 0;
LABEL_38:
          if ( !v46 )
            goto LABEL_20;
LABEL_39:
          v29 = 0;
          do
          {
            v30 = (__int64 *)(v26 + 24 * v29);
            v31 = *v30;
            if ( *v30 )
            {
              v30[1] = 0;
              qfree(v31);
              v26 = v46;
            }
            ++v29;
            v18 = v26;
          }
          while ( v16 != v29 );
LABEL_43:
          *(_QWORD *)&v47 = 0;
          qfree(v18);
          goto LABEL_20;
        }
        v34 = *(char **)v27;
        v35 = s1;
        if ( *((_QWORD *)&v43 + 1) < v28 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, *(_QWORD *)(v27 + 8), 1);
          v35 = s1;
        }
        *(_QWORD *)&v43 = v28;
        memmove(v35, v34, v28 - 1);
        s1[v28 - 1] = 0;
        v26 = v46;
        v18 = v46;
      }
      else
      {
        v17 = v45;
        if ( (unsigned __int64)v45 <= 1 )
        {
          v18 = v46;
          *(_QWORD *)&v43 = 0;
          if ( !v46 )
            goto LABEL_20;
          goto LABEL_43;
        }
        v32 = src;
        v33 = s1;
        if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)v45 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, v45, 1);
          v33 = s1;
        }
        *(_QWORD *)&v43 = v17;
        memmove(v33, v32, v17 - 1);
        s1[v17 - 1] = 0;
        v26 = v46;
        v18 = v46;
      }
      if ( v26 )
      {
        v16 = v47;
        if ( (_QWORD)v47 )
          goto LABEL_39;
        goto LABEL_43;
      }
LABEL_20:
      if ( src )
      {
        *(_QWORD *)&v45 = 0;
        qfree(src);
      }
      v19 = s1;
      v20 = ::s1;
      if ( (_QWORD)v43 )
      {
        if ( !strncmp(s1, "stdcpp_", 7u) )
        {
          v21 = v19[7];
          v20 = v19 + 7;
        }
        else
        {
          v21 = *v19;
          if ( *v19 == 46 )
          {
            v21 = v19[1];
            v20 = v19 + 1;
          }
          else
          {
            v20 = v19;
          }
        }
        if ( v21 == 95 )
        {
          do
            ++v20;
          while ( *v20 == 95 );
        }
      }
      v22 = n;
      if ( !strncmp(v20, s2, n) )
      {
        v23 = v20[v22];
        if ( !v23 || v23 == 46 )
        {
          if ( v19 )
          {
            *(_QWORD *)&v43 = 0;
            qfree(v19);
          }
          return v37;
        }
      }
LABEL_30:
      ++v37;
      if ( v19 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v19);
      }
    }
  }
  return (unsigned int)-2;
}
