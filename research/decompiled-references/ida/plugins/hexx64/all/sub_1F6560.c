__int64 __fastcall sub_1F6560(__int64 a1, __int64 a2, char a3, double a4)
{
  _QWORD *exception; // rdi
  __int64 v5; // r12
  const void *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rbp
  _QWORD *v21; // rsi
  int *v22; // rbx
  int v23; // eax
  __int64 v25; // rbp
  __int64 v26; // rsi
  void *v27; // rax
  void *v28; // rax
  const void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm1
  unsigned __int64 v33; // r12
  const char *v34; // rbx
  _BYTE *v35; // rax
  char v36; // dl
  bool s1; // [rsp+0h] [rbp-B8h]
  char *s1a; // [rsp+0h] [rbp-B8h]
  unsigned int v39; // [rsp+8h] [rbp-B0h]
  char v40; // [rsp+Fh] [rbp-A9h]
  __int64 v41[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+20h] [rbp-98h]
  int v43; // [rsp+28h] [rbp-90h]
  __int64 v44; // [rsp+30h] [rbp-88h]
  __m128i v45; // [rsp+38h] [rbp-80h] BYREF
  __int64 v46; // [rsp+48h] [rbp-70h]
  __m128i v47; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+60h] [rbp-58h]
  __int64 v49; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 440);
  v51 = __readfsqword(0x28u);
  v39 = v5;
  if ( a3
    && (*(_BYTE *)a1 & 1) != 0
    && !(unsigned __int8)sub_1EEA60((unsigned __int8 *)a1)
    && (*(_BYTE *)(a1 + 5) & 1) != 0
    && (int)v5 > 0 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = v25 + *(_QWORD *)(a1 + 432);
      if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(v26 + 16) )
      {
        s1 = sub_1C51E0(a2, v26, a4);
        if ( s1 )
          break;
      }
      v25 += 104;
      if ( 104 * ((unsigned int)(v5 - 1) + 1LL) == v25 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    s1 = 0;
  }
  v7 = (const void *)a2;
  LODWORD(v41[0]) = 0;
  copy_argloc();
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a2 + 40);
  v44 = 0;
  v42 = v10;
  LODWORD(v10) = *(_DWORD *)(a2 + 24);
  v45 = 0;
  v43 = v10;
  if ( v11 )
  {
    v27 = (void *)qalloc_or_throw(v11, a2, v8, v9);
    v7 = *(const void **)(a2 + 32);
    v44 = (__int64)v27;
    v45.m128i_i64[1] = v11;
    memcpy(v27, v7, v11);
    v45.m128i_i64[0] = v11;
  }
  v12 = *(_QWORD *)(a2 + 64);
  v46 = 0;
  v47 = 0;
  if ( v12 )
  {
    v28 = (void *)qalloc_or_throw(v12, (__int64)v7, v8, v9);
    v29 = *(const void **)(a2 + 56);
    v46 = (__int64)v28;
    v47.m128i_i64[1] = v12;
    memcpy(v28, v29, v12);
    v47.m128i_i64[0] = v12;
  }
  v48 = 0;
  copy_tinfo_t();
  v13 = *(_QWORD *)(a1 + 440);
  v14 = *(_QWORD *)(a1 + 432);
  v49 = *(_QWORD *)(a2 + 88);
  v50 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 448) < (unsigned __int64)(v13 + 1) )
  {
    v30 = qvector_reserve(a1 + 432, v14, v13 + 1, 104);
    *(_QWORD *)(a1 + 432) = v30;
    v13 = *(_QWORD *)(a1 + 440);
    v14 = v30;
  }
  v15 = v14 + 104 * v13;
  *(_DWORD *)v15 = 0;
  copy_argloc();
  *(_QWORD *)(v15 + 16) = v42;
  *(_DWORD *)(v15 + 24) = v43;
  v16 = v44;
  v44 = 0;
  v17 = _mm_loadu_si128(&v45);
  *(_QWORD *)(v15 + 32) = v16;
  *(__m128i *)(v15 + 40) = v17;
  v18 = v46;
  v19 = _mm_load_si128(&v47);
  v45 = 0;
  v46 = 0;
  v47 = 0;
  *(_QWORD *)(v15 + 56) = v18;
  *(_QWORD *)(v15 + 80) = 0;
  *(__m128i *)(v15 + 64) = v19;
  copy_tinfo_t();
  *(_QWORD *)(v15 + 88) = v49;
  *(_QWORD *)(v15 + 96) = v50;
  ++*(_QWORD *)(a1 + 440);
  clear_tinfo_t();
  if ( v46 )
  {
    v47.m128i_i64[0] = 0;
    qfree(v46);
  }
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    qfree(v44);
  }
  cleanup_argloc();
  v20 = *(_QWORD *)(a1 + 432) + 104LL * (int)v5;
  if ( s1 )
    *(_QWORD *)(v20 + 16) = sub_332AB0((_QWORD *)a1, *(_QWORD *)(v20 + 16));
  if ( *(_QWORD *)(a2 + 40) <= 1u )
  {
    sub_214580((_QWORD *)a1, v5);
    goto LABEL_20;
  }
  v21 = *(_QWORD **)(a1 + 872);
  v41[0] = a2 + 32;
  if ( !v21 )
  {
    v31 = qalloc();
    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    if ( !v31 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v31 + 16) = 0;
    *(_OWORD *)(v31 + 32) = 0;
    *(__m128i *)(v31 + 8) = v32;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 872) = v31;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 872) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872));
    **(_QWORD **)(a1 + 872) &= ~1uLL;
    **(_QWORD **)(a1 + 872) |= 2uLL;
    v21 = *(_QWORD **)(a1 + 872);
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a1 + 880) )
  {
LABEL_19:
    sub_1F6390((__m128i *)(a1 + 872), (__int64)v21, 1, v41);
    goto LABEL_20;
  }
  v33 = *v21 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v33 & 2) != 0 )
  {
    v36 = 1;
LABEL_49:
    sub_1F6390((__m128i *)(a1 + 872), (__int64)v21, v36, v41);
    goto LABEL_20;
  }
  v40 = 1;
  s1a = *(char **)(a2 + 32);
  while ( 1 )
  {
    v34 = ::s1;
    if ( *(_QWORD *)(v33 + 32) )
      v34 = *(const char **)(v33 + 24);
    if ( strcmp(s1a, v34) >= 0 )
      break;
    v40 = 1;
    v35 = *(_BYTE **)(v33 + 8);
LABEL_46:
    if ( (*v35 & 2) != 0 )
      goto LABEL_47;
    v33 = (unsigned __int64)v35;
  }
  if ( strcmp(v34, s1a) < 0 )
  {
    v40 = 0;
    v35 = *(_BYTE **)(v33 + 16);
    goto LABEL_46;
  }
  if ( !v33 )
  {
LABEL_47:
    v36 = v40;
    v21 = (_QWORD *)v33;
    goto LABEL_49;
  }
LABEL_20:
  v22 = *(int **)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_3307E0(v22, (int *)v20) )
    {
      v22 += 24;
      if ( v22 == (int *)(*(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264)) )
        goto LABEL_35;
    }
  }
  else
  {
LABEL_35:
    v22 = nullptr;
  }
  sub_1F0800(a1, v20, (__int64)v22, 0);
  if ( *(_BYTE *)(a1 + 320) )
  {
    v23 = *(_DWORD *)(v20 + 24);
    BYTE1(v23) &= 0x7Eu;
    *(_DWORD *)(v20 + 24) = v23 | 0x100000;
  }
  return v39;
}

