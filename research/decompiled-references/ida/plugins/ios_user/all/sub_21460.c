unsigned __int64 __fastcall sub_21460(__int64 a1, unsigned __int64 a2, size_t a3, const char *a4, __int64 a5)
{
  size_t v9; // r14
  size_t v10; // r15
  void *v11; // r14
  size_t v12; // r12
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r8
  void *v16; // rbp
  void *v17; // r13
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v23; // al
  __int64 v24; // r8
  void *v25; // rbx
  __m128i v26; // xmm0
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v30; // [rsp+0h] [rbp-148h]
  __int64 v31; // [rsp+0h] [rbp-148h]
  _QWORD *v32; // [rsp+0h] [rbp-148h]
  _QWORD *v33; // [rsp+0h] [rbp-148h]
  __int64 v34; // [rsp+0h] [rbp-148h]
  __int64 v35; // [rsp+0h] [rbp-148h]
  void *src; // [rsp+8h] [rbp-140h]
  __m128i v37; // [rsp+10h] [rbp-138h] BYREF
  unsigned __int64 v38; // [rsp+20h] [rbp-128h]
  size_t v39; // [rsp+28h] [rbp-120h]
  size_t v40; // [rsp+40h] [rbp-108h]
  size_t v41; // [rsp+58h] [rbp-F0h]
  __int64 v42; // [rsp+60h] [rbp-E8h]
  __int64 v43; // [rsp+68h] [rbp-E0h]
  __int128 v44; // [rsp+70h] [rbp-D8h]
  int v45; // [rsp+80h] [rbp-C8h]
  size_t n[3]; // [rsp+90h] [rbp-B8h] BYREF
  void *v47; // [rsp+A8h] [rbp-A0h]
  __int128 v48; // [rsp+B0h] [rbp-98h]
  void *v49; // [rsp+C0h] [rbp-88h]
  __int128 v50; // [rsp+C8h] [rbp-80h]
  __int64 v51; // [rsp+D8h] [rbp-70h]
  __int64 v52; // [rsp+E0h] [rbp-68h]
  __int128 v53; // [rsp+E8h] [rbp-60h]
  int v54; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+108h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  memset(n, 0, sizeof(n));
  if ( a4 )
  {
    v9 = strlen(a4);
    n[1] = v9 + 1;
    n[0] = qvector_reserve();
    memmove((void *)n[0], a4, v9);
    v38 = a2;
    v39 = a3;
    *(_BYTE *)(n[0] + v9) = 0;
    v10 = n[1];
    v40 = 0;
    if ( n[1] )
    {
      src = (void *)qalloc_or_throw();
      v40 = n[1];
      memcpy(src, (const void *)n[0], n[1]);
      goto LABEL_4;
    }
  }
  else
  {
    v38 = a2;
    v39 = a3;
    v40 = 0;
  }
  src = nullptr;
  v10 = 0;
LABEL_4:
  v41 = 0;
  v11 = nullptr;
  v12 = *(_QWORD *)(a5 + 8);
  if ( v12 )
  {
    v11 = (void *)qalloc_or_throw();
    v41 = v12;
    memcpy(v11, *(const void **)a5, v12);
  }
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v44 = 0;
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  v13 = *(_QWORD **)(a1 + 8);
  v14 = v13[187];
  if ( v14 == -1 || !v13[188] || v13[190] <= 1u )
  {
    v23 = sub_29150(v13 + 213, a2);
    v24 = *(_QWORD *)(a1 + 8);
    if ( v23 )
    {
      *(_QWORD *)(v24 + 1496) = a2;
      *(_QWORD *)(v24 + 1504) = a3;
      if ( v10 > 1 )
      {
        v27 = *(void **)(v24 + 1512);
        if ( *(_QWORD *)(v24 + 1528) < v10 )
        {
          v35 = v24;
          v28 = qvector_reserve();
          v24 = v35;
          v27 = (void *)v28;
          *(_QWORD *)(v35 + 1512) = v28;
        }
        *(_QWORD *)(v24 + 1520) = v10;
        v31 = v24;
        memmove(v27, src, v10 - 1);
        v24 = v31;
        *(_BYTE *)(*(_QWORD *)(v31 + 1512) + v10 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v24 + 1520) = 0;
      }
      v25 = nullptr;
      if ( v12 )
      {
        v34 = v24;
        v25 = (void *)qalloc_or_throw();
        memcpy(v25, v11, v12);
        v24 = v34;
      }
      v26 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      if ( *(_QWORD *)(v24 + 1536) )
      {
        *(_QWORD *)(v24 + 1544) = 0;
        v30 = v24;
        v37 = v26;
        qfree();
        v26 = _mm_load_si128(&v37);
        v24 = v30;
      }
      *(_QWORD *)(v24 + 1536) = v25;
      *(_QWORD *)(v24 + 1560) = 0;
      *(_QWORD *)(v24 + 1576) = 0;
      *(_DWORD *)(v24 + 1592) = 0;
      *(__m128i *)(v24 + 1544) = v26;
      goto LABEL_29;
    }
    v14 = *(_QWORD *)(v24 + 1496);
  }
  if ( a2 != v14 )
  {
    v15 = *(_QWORD **)(a1 + 16);
    n[2] = a3;
    v16 = nullptr;
    *(__m128i *)n = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
    v48 = 0;
    if ( v10 )
    {
      v33 = v15;
      v16 = (void *)qalloc_or_throw();
      *((_QWORD *)&v48 + 1) = v10;
      memcpy(v16, src, v10);
      *(_QWORD *)&v48 = v10;
      v15 = v33;
    }
    v17 = nullptr;
    v50 = 0;
    if ( v12 )
    {
      v32 = v15;
      v17 = (void *)qalloc_or_throw();
      *((_QWORD *)&v50 + 1) = v12;
      memcpy(v17, v11, v12);
      *(_QWORD *)&v50 = v12;
      v15 = v32;
    }
    v51 = 0;
    v54 = 0;
    v18 = v15 + 1;
    v53 = 0;
    v19 = (_QWORD *)v15[2];
    if ( !v19 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v20 = v19[2];
        v21 = v19[3];
        if ( v19[4] < a2 )
          break;
        v18 = v19;
        v19 = (_QWORD *)v19[2];
        if ( !v20 )
          goto LABEL_21;
      }
      v19 = (_QWORD *)v19[3];
    }
    while ( v21 );
LABEL_21:
    if ( v18 == v15 + 1 || a2 < v18[4] )
    {
LABEL_23:
      v47 = v16;
      v49 = v17;
      v52 = 0;
      sub_211F0(v15, v18, (__int64)n);
      v16 = v47;
      v17 = v49;
      if ( v52 )
        qfree();
    }
    if ( v17 )
      qfree();
    if ( v16 )
      qfree();
  }
LABEL_29:
  if ( v11 )
    qfree();
  if ( src )
    qfree();
  return v55 - __readfsqword(0x28u);
}

