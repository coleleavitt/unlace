__int64 __fastcall sub_447C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // r12
  char v4; // al
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 i; // rbx
  __m128i v10; // xmm3
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 k; // rbp
  __int64 v15; // rax
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 j; // rbp
  __int64 *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int128 v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  __m128i v31; // xmm0
  int v32; // eax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  size_t v39; // r15
  void *v40; // rax
  __m128i v41; // [rsp+0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+10h] [rbp-58h]
  unsigned __int64 v43; // [rsp+18h] [rbp-50h]
  unsigned __int64 v44; // [rsp+20h] [rbp-48h]
  __int64 v45; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(char **)(v2 + 16);
  if ( v3 == *(char **)(v2 + 48) )
    return 0;
  if ( a2 )
  {
    v4 = *v3;
    v42 = 0;
    *(_BYTE *)a2 = v4;
    v5 = *((_QWORD *)v3 + 2);
    v41 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( v5 )
    {
      v43 = v5;
      v22 = qalloc_or_throw();
      v23 = v43;
      v24 = 0;
      v25 = 0;
      v42 = v22;
      v26 = v22;
      v27 = 0;
      do
      {
        v30 = v24 + *((_QWORD *)v3 + 1);
        v31 = _mm_loadu_si128((const __m128i *)(v30 + 16));
        *(_BYTE *)v26 = *(_BYTE *)v30;
        v32 = *(_DWORD *)(v30 + 4);
        *(__m128i *)(v26 + 16) = v31;
        v33 = _mm_loadu_si128((const __m128i *)(v30 + 32));
        *(_DWORD *)(v26 + 4) = v32;
        v34 = *(_QWORD *)(v30 + 8);
        *(__m128i *)(v26 + 32) = v33;
        v35 = _mm_loadu_si128((const __m128i *)(v30 + 48));
        *(_QWORD *)(v26 + 8) = v34;
        LOBYTE(v34) = *(_BYTE *)(v30 + 96);
        *(__m128i *)(v26 + 48) = v35;
        v36 = _mm_loadu_si128((const __m128i *)(v30 + 64));
        *(_BYTE *)(v26 + 96) = v34;
        v37 = *(_QWORD *)(v30 + 104);
        *(__m128i *)(v26 + 64) = v36;
        v38 = _mm_loadu_si128((const __m128i *)(v30 + 80));
        *(_QWORD *)(v26 + 104) = v37;
        *(_QWORD *)(v26 + 112) = 0;
        *(__m128i *)(v26 + 80) = v38;
        *(_OWORD *)(v26 + 120) = v27;
        v39 = *(_QWORD *)(v30 + 120);
        if ( v39 )
        {
          v45 = v25;
          v44 = v23;
          v43 = v24;
          v40 = (void *)qalloc_or_throw();
          *(_QWORD *)(v26 + 128) = v39;
          *(_QWORD *)(v26 + 112) = v40;
          memcpy(v40, *(const void **)(v30 + 112), v39);
          *(_QWORD *)(v26 + 120) = v39;
          v25 = v45;
          v27 = 0;
          v23 = v44;
          v24 = v43;
        }
        v28 = _mm_loadu_si128((const __m128i *)(v30 + 152));
        ++v25;
        v24 += 184LL;
        v26 += 184;
        *(_DWORD *)(v26 - 48) = *(_DWORD *)(v30 + 136);
        v29 = *(_QWORD *)(v30 + 144);
        *(__m128i *)(v26 - 32) = v28;
        *(_QWORD *)(v26 - 40) = v29;
        *(_QWORD *)(v26 - 16) = *(_QWORD *)(v30 + 168);
        *(_BYTE *)(v26 - 8) = *(_BYTE *)(v30 + 176);
      }
      while ( v23 != v25 );
    }
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 16);
      if ( v7 )
      {
        v8 = 0;
        for ( i = 0; i != v7; ++i )
        {
          if ( *(_QWORD *)(v6 + v8 + 112) )
          {
            *(_QWORD *)(v6 + v8 + 120) = 0;
            qfree();
            v6 = *(_QWORD *)(a2 + 8);
          }
          v8 += 184;
        }
      }
      *(_QWORD *)(a2 + 16) = 0;
      qfree();
    }
    v10 = _mm_load_si128(&v41);
    *(_QWORD *)(a2 + 8) = v42;
    *(__m128i *)(a2 + 16) = v10;
    v2 = *(_QWORD *)(a1 + 144);
    v3 = *(char **)(v2 + 16);
  }
  v11 = *((_QWORD *)v3 + 1);
  if ( v3 == (char *)(*(_QWORD *)(v2 + 32) - 32LL) )
  {
    if ( v11 )
    {
      v17 = *((_QWORD *)v3 + 2);
      if ( v17 )
      {
        v18 = 0;
        for ( j = 0; j != v17; ++j )
        {
          if ( *(_QWORD *)(v11 + v18 + 112) )
          {
            *(_QWORD *)(v11 + v18 + 120) = 0;
            qfree();
            v11 = *((_QWORD *)v3 + 1);
          }
          v18 += 184;
        }
      }
      *((_QWORD *)v3 + 2) = 0;
      qfree();
    }
    operator delete(*(void **)(v2 + 24), 0x200u);
    v20 = (__int64 *)(*(_QWORD *)(v2 + 40) + 8LL);
    *(_QWORD *)(v2 + 40) = v20;
    v15 = *v20;
    v21 = *v20 + 512;
    *(_QWORD *)(v2 + 24) = v15;
    *(_QWORD *)(v2 + 32) = v21;
  }
  else
  {
    if ( v11 )
    {
      v12 = *((_QWORD *)v3 + 2);
      if ( v12 )
      {
        v13 = 0;
        for ( k = 0; k != v12; ++k )
        {
          if ( *(_QWORD *)(v11 + v13 + 112) )
          {
            *(_QWORD *)(v11 + v13 + 120) = 0;
            qfree();
            v11 = *((_QWORD *)v3 + 1);
          }
          v13 += 184;
        }
      }
      *((_QWORD *)v3 + 2) = 0;
      qfree();
    }
    v15 = *(_QWORD *)(v2 + 16) + 32LL;
  }
  *(_QWORD *)(v2 + 16) = v15;
  return 1;
}

