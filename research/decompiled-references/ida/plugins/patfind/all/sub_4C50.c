__int64 __fastcall sub_4C50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // r13
  size_t v6; // r12
  size_t v7; // rbp
  void *v8; // r14
  unsigned __int64 v9; // r8
  void *v10; // r15
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v33; // [rsp+18h] [rbp-70h]
  int na; // [rsp+20h] [rbp-68h]
  __int64 n; // [rsp+20h] [rbp-68h]
  unsigned __int64 v36; // [rsp+28h] [rbp-60h]
  unsigned __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  __int128 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v3 = a2[1];
  v40 = __readfsqword(0x28u);
  v4 = *a2;
  v33 = *a2 + 80 * v3;
  if ( v33 == *a2 )
    return -1;
  while ( 1 )
  {
    v38 = 0;
    v5 = nullptr;
    v39 = 0;
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
    {
      v5 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 8));
      v8 = nullptr;
      memcpy(v5, *(const void **)v4, v6);
      v7 = *(_QWORD *)(v4 + 32);
      if ( !v7 )
        goto LABEL_4;
    }
    else
    {
      v7 = *(_QWORD *)(v4 + 32);
      v8 = nullptr;
      if ( !v7 )
        goto LABEL_4;
    }
    v8 = (void *)qalloc_or_throw(v7);
    memcpy(v8, *(const void **)(v4 + 24), v7);
LABEL_4:
    v9 = *(_QWORD *)(v4 + 56);
    v10 = nullptr;
    if ( v9 )
    {
      v37 = *(_QWORD *)(v4 + 56);
      n = 16 * v9;
      v10 = (void *)qalloc_or_throw(16 * v9);
      memcpy(v10, *(const void **)(v4 + 48), n);
      v9 = v37;
    }
    v11 = v39;
    v12 = *(_DWORD *)(v4 + 72);
    v13 = v38;
    if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
    {
      v36 = v9;
      na = *(_DWORD *)(v4 + 72);
      v38 = qvector_reserve(&v38, v38, v39 + 1, 80);
      v13 = v38;
      v9 = v36;
      v11 = v39;
      v12 = na;
    }
    v14 = 80 * v11 + v13;
    *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)v14 = v5;
    v15 = v38;
    *(__m128i *)(v14 + 32) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    *(_QWORD *)(v14 + 24) = v8;
    *(_QWORD *)(v14 + 48) = v10;
    *(_DWORD *)(v14 + 72) = v12;
    *(__m128i *)(v14 + 56) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    *(_QWORD *)&v39 = v39 + 1;
    v16 = bin_search(a3 - *(_QWORD *)(v15 + 8), a3, &v38, 32, 0);
    v17 = v38;
    v18 = v16;
    if ( v16 != -1 )
      break;
    if ( v38 )
    {
      v19 = v39;
      if ( (_QWORD)v39 )
      {
        v20 = 0;
        do
        {
          v21 = (__int64 *)(v17 + 80 * v20);
          v22 = v21[6];
          if ( v22 )
          {
            v21[7] = 0;
            qfree(v22);
          }
          v23 = v21[3];
          if ( v23 )
          {
            v21[4] = 0;
            qfree(v23);
          }
          v24 = *v21;
          if ( *v21 )
          {
            v21[1] = 0;
            qfree(v24);
          }
          ++v20;
          v17 = v38;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v39 = 0;
      qfree(v17);
    }
    v4 += 80;
    if ( v33 == v4 )
      return -1;
  }
  if ( v38 )
  {
    v26 = v39;
    if ( (_QWORD)v39 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v17 + 80 * v27);
        v29 = v28[6];
        if ( v29 )
        {
          v28[7] = 0;
          qfree(v29);
        }
        v30 = v28[3];
        if ( v30 )
        {
          v28[4] = 0;
          qfree(v30);
        }
        v31 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v31);
        }
        ++v27;
        v17 = v38;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v17);
  }
  return v18;
}

