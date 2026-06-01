__int64 __fastcall sub_36FA0(__int64 a1, int *a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  int v6; // edx
  _DWORD *v7; // r13
  unsigned int v8; // r12d
  size_t v9; // rbp
  const void *v10; // r14
  size_t v11; // rbx
  size_t v12; // r8
  char *v13; // rsi
  size_t v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  bool v17; // zf
  int v18; // eax
  int v19; // ebx
  size_t v20; // r12
  const void *v21; // r8
  size_t v22; // rbp
  size_t v23; // r14
  char *v24; // rsi
  unsigned __int64 v25; // rdx
  __m128i *i; // rax
  __m128i *v27; // rbx
  __m128i *v28; // rdi
  __int64 v30; // rbx
  __int64 v31; // rbp
  void *v32; // r10
  int v33; // r14d
  size_t v34; // r9
  size_t v35; // r8
  size_t v36; // r11
  char *v37; // rsi
  size_t v38; // rdx
  const char *v39; // r8
  size_t v40; // r14
  unsigned __int64 v41; // r14
  int v42; // eax
  __int64 v43; // rax
  __int64 *v44; // rdx
  size_t v45; // r8
  size_t v46; // r10
  size_t v47; // r14
  const void *v48; // r9
  char *v49; // rsi
  size_t v50; // rdx
  __int64 v51; // [rsp+0h] [rbp-188h]
  size_t v52; // [rsp+0h] [rbp-188h]
  const void *v53; // [rsp+8h] [rbp-180h]
  size_t v54; // [rsp+8h] [rbp-180h]
  size_t v55; // [rsp+18h] [rbp-170h]
  size_t v56; // [rsp+18h] [rbp-170h]
  const char *v57; // [rsp+20h] [rbp-168h]
  void *v58; // [rsp+20h] [rbp-168h]
  void *v59; // [rsp+20h] [rbp-168h]
  size_t v60; // [rsp+28h] [rbp-160h]
  const void *v61; // [rsp+28h] [rbp-160h]
  size_t v62; // [rsp+30h] [rbp-158h]
  size_t v63; // [rsp+30h] [rbp-158h]
  size_t v64; // [rsp+38h] [rbp-150h]
  unsigned int v66; // [rsp+58h] [rbp-130h]
  unsigned int v67; // [rsp+5Ch] [rbp-12Ch]
  void *v70; // [rsp+70h] [rbp-118h]
  void *v71; // [rsp+90h] [rbp-F8h]
  void *v72; // [rsp+B0h] [rbp-D8h]
  char *v73; // [rsp+D0h] [rbp-B8h]
  size_t v74; // [rsp+D8h] [rbp-B0h]
  size_t v75; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v76; // [rsp+D8h] [rbp-B0h]
  char *src; // [rsp+F0h] [rbp-98h]
  size_t n; // [rsp+F8h] [rbp-90h]
  __m128i v79; // [rsp+110h] [rbp-78h] BYREF
  __int64 v80; // [rsp+120h] [rbp-68h]
  void *v81; // [rsp+130h] [rbp-58h]
  size_t v82[2]; // [rsp+138h] [rbp-50h]
  unsigned __int64 v83; // [rsp+148h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 700);
  v6 = *a2;
  v83 = __readfsqword(0x28u);
  v74 = 0;
  n = 0;
  v70 = nullptr;
  v71 = nullptr;
  v72 = nullptr;
  v73 = nullptr;
  src = nullptr;
  v66 = 4 * v5;
  a4[1] = 0;
  v67 = 2 * v5;
  v79 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v79, (__m128i)(unsigned __int64)&v79);
  v80 = 0;
  v51 = (unsigned int)v5;
  *(__m128i *)(a3 + 24) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v6 + 40)),
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(v6 + 4 * (int)v5 + 2 * (int)v5 + 40),
                              _mm_cvtsi32_si128(v6 + 4 * (int)v5 + 40)));
  if ( (_DWORD)v5 )
  {
    v72 = (void *)qvector_reserve();
    memset(v72, 0, 2 * v51);
    if ( v51 )
    {
      v71 = (void *)qvector_reserve();
      memset(v71, 0, 4 * v51);
    }
    v7 = nullptr;
    if ( v51 )
    {
      v70 = (void *)qvector_reserve();
      memset(v70, 0, 4 * v51);
      v7 = v70;
    }
    v30 = 0;
    v31 = *(_QWORD *)(a1 + 684);
    v8 = *(_DWORD *)(a1 + 764) + v66;
    do
    {
      v39 = s1;
      if ( *(_QWORD *)(v31 + 40) )
        v39 = *(const char **)(v31 + 32);
      v81 = nullptr;
      *(_OWORD *)v82 = 0;
      if ( v39 )
      {
        v57 = v39;
        v40 = strlen(v39);
        v81 = (void *)qvector_reserve();
        v82[0] = v40 + 1;
        memmove(v81, v57, v40);
        *((_BYTE *)v81 + v40) = 0;
      }
      v41 = *(_QWORD *)(v31 + 64);
      if ( v41 <= 1 )
      {
        v7[v30] = *(_DWORD *)(v31 + 80);
      }
      else
      {
        v42 = 0;
        if ( n )
          v42 = n - 1;
        v7[v30] = v42;
        v43 = qalloc_or_throw();
        *(_QWORD *)v43 = &v79;
        v44 = (__int64 *)v79.m128i_i64[1];
        v45 = (unsigned int)v41;
        *(_DWORD *)(v43 + 16) = v30;
        v46 = (unsigned int)v41;
        *(_QWORD *)(v43 + 8) = v44;
        *v44 = v43;
        v47 = n;
        ++v80;
        v48 = *(const void **)(v31 + 56);
        v79.m128i_i64[1] = v43;
        if ( n )
        {
          v47 = n - 1;
          v46 = v45 + n - 1;
        }
        v49 = src;
        v50 = v46 + 1;
        if ( v46 != -1 )
        {
          v63 = v46;
          v61 = v48;
          v59 = (void *)v45;
          v56 = v46 + 1;
          src = (char *)qvector_reserve();
          v46 = v63;
          v49 = src;
          v48 = v61;
          v45 = (size_t)v59;
          v50 = v56;
        }
        n = v50;
        v49[v46] = 0;
        memmove(&src[v47], v48, v45);
      }
      if ( v82[0] )
      {
        v32 = v81;
        v33 = v82[0];
        v34 = LODWORD(v82[0]);
      }
      else
      {
        v33 = 1;
        v34 = 1;
        v32 = &unk_61EBE;
      }
      v35 = v74;
      v36 = v34;
      if ( v74 )
      {
        v35 = v74 - 1;
        v36 = v34 + v74 - 1;
      }
      v37 = v73;
      v38 = v36 + 1;
      if ( v36 != -1 )
      {
        v64 = v35;
        v62 = v36;
        v60 = v34;
        v58 = v32;
        v55 = v36 + 1;
        v73 = (char *)qvector_reserve();
        v35 = v64;
        v37 = v73;
        v36 = v62;
        v34 = v60;
        v32 = v58;
        v38 = v55;
      }
      v74 = v38;
      v37[v36] = 0;
      memmove(&v73[v35], v32, v34);
      *((_WORD *)v72 + v30) = v30;
      *((_DWORD *)v71 + v30) = v8;
      v8 += v33;
      if ( v81 )
      {
        v82[0] = 0;
        qfree();
      }
      ++v30;
      v31 = std::_Rb_tree_increment();
    }
    while ( v30 != v51 );
  }
  else
  {
    v7 = nullptr;
    v8 = *(_DWORD *)(a1 + 764);
  }
  *(_DWORD *)(a3 + 12) = v8;
  v9 = *(_QWORD *)(a1 + 836);
  if ( v9 )
  {
    v10 = *(const void **)(a1 + 828);
  }
  else
  {
    v9 = 1;
    v10 = &unk_61EBE;
  }
  v11 = v74;
  v12 = v9;
  if ( v74 )
  {
    v11 = v74 - 1;
    v12 = v9 + v74 - 1;
  }
  v13 = v73;
  v14 = v12 + 1;
  if ( v12 != -1 )
  {
    v54 = v12;
    v52 = v12 + 1;
    v73 = (char *)qvector_reserve();
    v12 = v54;
    v13 = v73;
    v14 = v52;
  }
  v75 = v14;
  v13[v12] = 0;
  memmove(&v73[v11], v10, v9);
  v15 = *(_QWORD *)(a1 + 836);
  v16 = v15 - 1;
  v17 = v15 == 0;
  v18 = 0;
  if ( !v17 )
    v18 = v16;
  v19 = v8 + v18 + 1;
  v20 = n;
  if ( n )
  {
    v21 = src;
  }
  else
  {
    v20 = 1;
    v21 = &unk_753F1;
  }
  v22 = v75;
  v23 = v20;
  if ( v75 )
  {
    v22 = v75 - 1;
    v23 = v20 + v75 - 1;
  }
  v24 = v73;
  v25 = v23 + 1;
  if ( v23 != -1 )
  {
    v53 = v21;
    v73 = (char *)qvector_reserve();
    v21 = v53;
    v24 = v73;
    v25 = v23 + 1;
  }
  v76 = v25;
  v24[v23] = 0;
  memmove(&v73[v22], v21, v20);
  for ( i = (__m128i *)v79.m128i_i64[0]; i != &v79; i = (__m128i *)i->m128i_i64[0] )
    v7[i[1].m128i_u32[0]] += v19;
  sub_346F0(a4, (const void *)(a1 + 732), 0x28u);
  if ( v66 )
  {
    sub_346F0(a4, v70, v66);
    if ( v67 )
      sub_346F0(a4, v72, v67);
    sub_346F0(a4, v71, v66);
  }
  else if ( v67 )
  {
    sub_346F0(a4, v72, v67);
  }
  if ( v76 >= 2 )
    sub_346F0(a4, v73, v76 - 1);
  v27 = (__m128i *)v79.m128i_i64[0];
  for ( a2[1] = a4[1]; v27 != &v79; --v80 )
  {
    v28 = v27;
    v27 = (__m128i *)v27->m128i_i64[0];
    *(_QWORD *)v28->m128i_i64[1] = v27;
    v27->m128i_i64[1] = v28->m128i_i64[1];
    qfree();
  }
  if ( src )
    qfree();
  if ( v73 )
    qfree();
  if ( v72 )
    qfree();
  if ( v71 )
    qfree();
  if ( v70 )
    qfree();
  return 0;
}

