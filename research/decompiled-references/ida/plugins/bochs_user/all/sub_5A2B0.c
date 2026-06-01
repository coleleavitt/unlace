__int64 __fastcall sub_5A2B0(_QWORD *a1, __int64 a2, __int64 a3, const char *a4, const char *a5)
{
  const char *i; // r13
  char *v8; // rax
  char *v9; // rbp
  size_t v10; // r14
  const char *v11; // rbp
  size_t v12; // r13
  size_t v13; // r14
  void *v14; // rax
  size_t v15; // r14
  const char *v16; // r15
  _BYTE *v17; // r13
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // r8
  size_t v21; // r9
  __int64 v22; // rdx
  char *v23; // rax
  char *v24; // rbp
  size_t v25; // r9
  __int64 v26; // r8
  size_t v27; // r10
  __int64 v28; // rdx
  const char *v29; // rax
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rbp
  __int64 v36; // r13
  void *v37; // rdi
  __m128i v38; // xmm0
  _QWORD *v39; // r14
  const char *v40; // r13
  _QWORD *v41; // rbx
  const char *v42; // rdi
  char *v43; // rdi
  __int64 v44; // rbp
  size_t v45; // rax
  size_t v46; // r14
  size_t v47; // r8
  __int64 v48; // rdx
  void *v49; // rax
  void *v50; // r15
  void *v51; // rax
  const char *v52; // rsi
  const char *v53; // rdi
  __int64 v55; // [rsp+8h] [rbp-100h]
  __int64 v56; // [rsp+8h] [rbp-100h]
  __int64 v57; // [rsp+8h] [rbp-100h]
  size_t v58; // [rsp+10h] [rbp-F8h]
  const char *v59; // [rsp+10h] [rbp-F8h]
  size_t v60; // [rsp+10h] [rbp-F8h]
  size_t v61; // [rsp+10h] [rbp-F8h]
  size_t v62; // [rsp+18h] [rbp-F0h]
  __int64 v63; // [rsp+18h] [rbp-F0h]
  char *haystack; // [rsp+20h] [rbp-E8h]
  unsigned int v66; // [rsp+44h] [rbp-C4h]
  size_t v67; // [rsp+48h] [rbp-C0h]
  char *s2; // [rsp+70h] [rbp-98h]
  size_t n; // [rsp+78h] [rbp-90h]
  void *src; // [rsp+90h] [rbp-78h] BYREF
  __m128i v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+B0h] [rbp-58h]
  __m128i v73; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+C8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v66 = 0;
  if ( *(_QWORD *)(a2 + 8) > 1u )
  {
    for ( i = (const char *)qstrtok(); i; i = (const char *)qstrtok() )
    {
      v8 = strchr(i, 61);
      v9 = v8;
      if ( v8 )
      {
        s2 = nullptr;
        n = 0;
        v10 = v8 - i;
        if ( v8 == i )
        {
          v11 = v8 + 1;
          v71 = 0;
          src = nullptr;
          v12 = strlen(v8 + 1);
          v13 = v12 + 1;
        }
        else
        {
          v43 = nullptr;
          if ( v10 != -1 )
          {
            s2 = (char *)qvector_reserve();
            v43 = s2;
          }
          n = v10 + 1;
          v11 = v9 + 1;
          memmove(v43, i, v10);
          s2[v10] = 0;
          src = nullptr;
          v71 = 0;
          v12 = strlen(v11);
          v13 = v12 + 1;
        }
        v14 = (void *)qvector_reserve();
        v71.m128i_i64[0] = v13;
        src = v14;
        memmove(v14, v11, v12);
        *((_BYTE *)src + v12) = 0;
        v72 = 0;
        v73 = 0;
        haystack = (char *)s1;
        v15 = strlen(a4);
        if ( v71.m128i_i64[0] )
          haystack = (char *)src;
        v16 = haystack;
        v17 = nullptr;
        while ( 1 )
        {
          v23 = strstr(v16, a4);
          v24 = v23;
          if ( !v23 )
            break;
          v25 = v23 - v16;
          if ( v23 != v16 )
          {
            v26 = v73.m128i_i64[0];
            v27 = v23 - v16;
            if ( v73.m128i_i64[0] )
            {
              v26 = v73.m128i_i64[0] - 1;
              v27 = v25 + v73.m128i_i64[0] - 1;
            }
            v28 = v27 + 1;
            if ( v73.m128i_i64[1] < v27 + 1 )
            {
              v67 = v27;
              v63 = v26;
              v60 = v23 - v16;
              v56 = v27 + 1;
              v72 = qvector_reserve();
              v27 = v67;
              v17 = (_BYTE *)v72;
              v26 = v63;
              v25 = v60;
              v28 = v56;
            }
            v73.m128i_i64[0] = v28;
            v17[v27] = 0;
            memmove((void *)(v26 + v72), v16, v25);
            v17 = (_BYTE *)v72;
          }
          if ( a5 )
          {
            v18 = strlen(a5);
            v19 = v73.m128i_i64[0];
            v20 = v18;
            v21 = v18;
            if ( v73.m128i_i64[0] )
            {
              v19 = v73.m128i_i64[0] - 1;
              v21 = v18 + v73.m128i_i64[0] - 1;
            }
            v22 = v21 + 1;
            if ( v73.m128i_i64[1] < v21 + 1 )
            {
              v62 = v18;
              v58 = v21;
              v55 = v21 + 1;
              v72 = qvector_reserve();
              v20 = v62;
              v17 = (_BYTE *)v72;
              v21 = v58;
              v22 = v55;
            }
            v73.m128i_i64[0] = v22;
            v17[v21] = 0;
            memmove((void *)(v19 + v72), a5, v20);
            v17 = (_BYTE *)v72;
          }
          v16 = &v24[v15];
        }
        if ( v16 == haystack )
        {
          v37 = v17;
        }
        else
        {
          if ( *v16 && v16 )
          {
            v44 = v73.m128i_i64[0];
            v45 = strlen(v16);
            v46 = v45;
            v47 = v45;
            if ( v44 )
            {
              --v44;
              v47 = v45 + v44;
            }
            v48 = v47 + 1;
            if ( v73.m128i_i64[1] < v47 + 1 )
            {
              v61 = v47;
              v57 = v47 + 1;
              v72 = qvector_reserve();
              v47 = v61;
              v17 = (_BYTE *)v72;
              v48 = v57;
            }
            v73.m128i_i64[0] = v48;
            v17[v47] = 0;
            memmove((void *)(v44 + v72), v16, v46);
            v17 = (_BYTE *)v72;
          }
          v37 = src;
          src = v17;
          v38 = _mm_loadu_si128(&v73);
          v72 = (__int64)v37;
          v73.m128i_i64[1] = v71.m128i_i64[1];
          v71 = v38;
        }
        if ( v37 )
        {
          v73.m128i_i64[0] = 0;
          qfree();
        }
        v39 = a1 + 1;
        v35 = a1 + 1;
        if ( !a1[2] )
          goto LABEL_30;
        v40 = s1;
        v59 = a5;
        v41 = (_QWORD *)a1[2];
        if ( n )
          v40 = s2;
        do
        {
          v42 = s1;
          if ( v41[5] )
            v42 = (const char *)v41[4];
          if ( strcasecmp(v42, v40) < 0 )
          {
            v41 = (_QWORD *)v41[3];
          }
          else
          {
            v35 = v41;
            v41 = (_QWORD *)v41[2];
          }
        }
        while ( v41 );
        a5 = v59;
        v29 = s2;
        if ( v39 == v35 )
          goto LABEL_30;
        v30 = s1;
        if ( v35[5] )
          v30 = (const char *)v35[4];
        if ( !n )
          v29 = s1;
        if ( strcasecmp(v29, v30) < 0 )
        {
LABEL_30:
          v31 = operator new(0x50u);
          *(_QWORD *)(v31 + 32) = 0;
          v32 = v31;
          *(_OWORD *)(v31 + 40) = 0;
          if ( n )
          {
            v49 = (void *)qalloc_or_throw();
            *(_QWORD *)(v32 + 32) = v49;
            *(_QWORD *)(v32 + 48) = n;
            memcpy(v49, s2, n);
            *(_QWORD *)(v32 + 40) = n;
          }
          *(_QWORD *)(v32 + 56) = 0;
          *(_OWORD *)(v32 + 64) = 0;
          v33 = sub_5A0F0(a1, v35, v32 + 32);
          v35 = (_QWORD *)v33;
          if ( v34 )
          {
            if ( v39 != (_QWORD *)v34 && !v33 )
            {
              v52 = s1;
              if ( *(_QWORD *)(v34 + 40) )
                v52 = *(const char **)(v34 + 32);
              v53 = s1;
              if ( *(_QWORD *)(v32 + 40) )
                v53 = *(const char **)(v32 + 32);
              strcasecmp(v53, v52);
            }
            v35 = (_QWORD *)v32;
            std::_Rb_tree_insert_and_rebalance();
            ++a1[5];
          }
          else if ( v32 )
          {
            if ( *(_QWORD *)(v32 + 32) )
            {
              *(_QWORD *)(v32 + 40) = 0;
              qfree();
            }
            operator delete((void *)v32, 0x50u);
          }
        }
        if ( v35 + 7 != &src )
        {
          v36 = v71.m128i_i64[0];
          if ( v71.m128i_i64[0] > 1uLL )
          {
            v50 = src;
            v51 = (void *)v35[7];
            if ( v35[9] < v71.m128i_i64[0] )
            {
              v51 = (void *)qvector_reserve();
              v35[7] = v51;
            }
            v35[8] = v36;
            memmove(v51, v50, v36 - 1);
            *(_BYTE *)(v35[7] + v36 - 1) = 0;
          }
          else
          {
            v35[8] = 0;
          }
        }
        ++v66;
        if ( src )
        {
          v71.m128i_i64[0] = 0;
          qfree();
        }
        if ( s2 )
          qfree();
      }
    }
  }
  return v66;
}

