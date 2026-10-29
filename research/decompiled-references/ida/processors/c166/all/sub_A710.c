__int64 __fastcall sub_A710(__int64 a1, __int64 *a2, const char *a3, const void *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r12
  const char *v17; // rdi
  unsigned __int64 v18; // r13
  size_t v19; // rax
  size_t v20; // r12
  size_t v21; // rax
  size_t v22; // rbp
  void *v24; // rdi
  size_t v25; // r12
  void *v26; // rdi
  size_t v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 *v31; // r13
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+18h] [rbp-40h]
  __int64 v46; // [rsp+18h] [rbp-40h]

  v7 = *a2;
  if ( v7 > 0x1FF || (v7 & 3) != 0 )
    sub_A660((__int64)"%a %s: bad entry address", v7, (__int64)a3, (__int64)a4, a5, a6, v42);
  if ( !(unsigned __int8)is_ident() )
    sub_A660((__int64)"%a %s: bad entry name", *a2, (__int64)a3, v8, v9, v10, v42);
  v11 = *(_QWORD **)(a1 + 96);
  v13 = v11[30];
  v45 = v11[31];
  v12 = v45;
  v14 = v13 + 56 * v45;
  if ( v14 != v13 )
  {
    v15 = v11[30];
    v16 = *a2;
    do
    {
      if ( *(_DWORD *)(v15 + 48) == v16 )
        sub_A660((__int64)"%a %s: duplicate entry address", v16, (__int64)a3, v12, v9, v10, v42);
      v17 = s1;
      if ( *(_QWORD *)(v15 + 8) )
        v17 = *(const char **)v15;
      if ( !strcmp(v17, a3) )
        sub_A660((__int64)"%a %s: duplicate entry name", v16, (__int64)a3, v12, v9, v10, v42);
      v15 += 56;
    }
    while ( v14 != v15 );
  }
  v18 = v11[32];
  if ( v18 < v45 + 1 )
  {
    v28 = qvector_reserve();
    v29 = v11[31];
    v30 = v11[32];
    v11[32] = v18;
    v46 = v28;
    v31 = (__int64 *)v11[30];
    v32 = v29 - 1;
    if ( v32 >= 0 )
    {
      v33 = v28;
      do
      {
        v34 = *v31;
        v35 = _mm_loadu_si128((const __m128i *)(v31 + 1));
        *v31 = 0;
        *(_OWORD *)(v31 + 1) = 0;
        *(_QWORD *)v33 = v34;
        *(__m128i *)(v33 + 8) = v35;
        v36 = v31[3];
        v37 = _mm_loadu_si128((const __m128i *)v31 + 2);
        v31[3] = 0;
        *(_QWORD *)(v33 + 24) = v36;
        *(__m128i *)(v33 + 32) = v37;
        LODWORD(v36) = *((_DWORD *)v31 + 12);
        v31[5] = 0;
        *(_DWORD *)(v33 + 48) = v36;
        if ( v31[3] )
        {
          v31[4] = 0;
          qfree();
        }
        if ( *v31 )
        {
          v31[1] = 0;
          qfree();
        }
        v31 += 7;
        v33 += 56;
      }
      while ( v32-- != 0 );
    }
    qfree();
    v39 = v11[31];
    v11[32] = v30;
    v11[30] = v46;
    v14 = v46 + 56 * v39;
  }
  *(_QWORD *)v14 = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_OWORD *)(v14 + 8) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  ++v11[31];
  *(_DWORD *)(v14 + 48) = *a2;
  if ( a3 && (v19 = strlen(a3), (v20 = v19) != 0) )
  {
    v26 = *(void **)v14;
    v27 = v19 + 1;
    if ( *(_QWORD *)(v14 + 16) < v19 + 1 )
    {
      v40 = qvector_reserve();
      *(_QWORD *)v14 = v40;
      v26 = (void *)v40;
    }
    *(_QWORD *)(v14 + 8) = v27;
    memmove(v26, a3, v20);
    *(_BYTE *)(*(_QWORD *)v14 + v20) = 0;
  }
  else
  {
    *(_QWORD *)(v14 + 8) = 0;
  }
  if ( a4 && (v21 = strlen((const char *)a4), (v22 = v21) != 0) )
  {
    v24 = *(void **)(v14 + 24);
    v25 = v21 + 1;
    if ( *(_QWORD *)(v14 + 40) < v21 + 1 )
    {
      v41 = qvector_reserve();
      *(_QWORD *)(v14 + 24) = v41;
      v24 = (void *)v41;
    }
    *(_QWORD *)(v14 + 32) = v25;
    memmove(v24, a4, v22);
    *(_BYTE *)(*(_QWORD *)(v14 + 24) + v22) = 0;
  }
  else
  {
    *(_QWORD *)(v14 + 32) = 0;
  }
  return 1;
}

