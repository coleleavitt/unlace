__int64 __fastcall sub_1CF3A0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  __int64 result; // rax
  __m128i v10; // xmm3
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r15
  int v16; // eax
  void *v17; // rax
  size_t v18; // r8
  void *v19; // rax
  size_t v20; // r8
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v21.m128i_i64[0] = a2;
  v22 = 0;
  if ( v3 )
  {
    v11 = 0;
    v12 = 0;
    v22 = qalloc_or_throw();
    v13 = v22;
    do
    {
      v14 = *(_QWORD *)v21.m128i_i64[0];
      *(_DWORD *)v13 = 0;
      v15 = v11 + v14;
      copy_argloc();
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(v15 + 16);
      v16 = *(_DWORD *)(v15 + 24);
      *(_QWORD *)(v13 + 32) = 0;
      *(_DWORD *)(v13 + 24) = v16;
      *(_OWORD *)(v13 + 40) = 0;
      if ( *(_QWORD *)(v15 + 40) )
      {
        n = *(_QWORD *)(v15 + 40);
        v19 = (void *)qalloc_or_throw();
        v20 = n;
        *(_QWORD *)(v13 + 32) = v19;
        *(_QWORD *)(v13 + 48) = v20;
        memcpy(v19, *(const void **)(v15 + 32), v20);
        *(_QWORD *)(v13 + 40) = n;
      }
      *(_QWORD *)(v13 + 56) = 0;
      *(_OWORD *)(v13 + 64) = 0;
      if ( *(_QWORD *)(v15 + 64) )
      {
        n = *(_QWORD *)(v15 + 64);
        v17 = (void *)qalloc_or_throw();
        v18 = n;
        *(_QWORD *)(v13 + 56) = v17;
        *(_QWORD *)(v13 + 72) = v18;
        memcpy(v17, *(const void **)(v15 + 56), v18);
        *(_QWORD *)(v13 + 64) = n;
      }
      *(_QWORD *)(v13 + 80) = 0;
      copy_tinfo_t();
      ++v12;
      v11 += 104;
      v13 += 104;
      *(_QWORD *)(v13 - 16) = *(_QWORD *)(v15 + 88);
      *(_QWORD *)(v13 - 8) = *(_QWORD *)(v15 + 96);
    }
    while ( v3 != v12 );
  }
  v4 = *a1;
  v21 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v4 + v6);
        clear_tinfo_t();
        if ( *(_QWORD *)(v4 + v6 + 56) )
        {
          v8[8] = 0;
          qfree();
        }
        if ( v8[4] )
        {
          v8[5] = 0;
          qfree();
        }
        ++v7;
        v6 += 104;
        cleanup_argloc();
        v4 = *a1;
      }
      while ( v5 != v7 );
    }
    a1[1] = 0;
    qfree();
  }
  result = v22;
  v10 = _mm_load_si128(&v21);
  *a1 = v22;
  *(__m128i *)(a1 + 1) = v10;
  return result;
}

