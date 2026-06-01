__int64 __fastcall sub_FB60(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7)
{
  __int64 v7; // r13
  __m128i v8; // xmm0
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v22; // r12
  __int64 i; // rbx
  size_t v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rbx
  const __m128i *v30; // rcx
  __m128i v31; // xmm0
  const __m128i *v32; // r15
  size_t v33; // r14
  void *v34; // rax
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const char *v40; // r14
  const char *v41; // rsi
  const char *v42; // rdx
  const char *v45; // [rsp+40h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+48h] [rbp-A8h]
  const char *v47; // [rsp+60h] [rbp-90h] BYREF
  __int64 v48; // [rsp+68h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-70h] BYREF
  __int128 v50; // [rsp+88h] [rbp-68h]
  __m128i v51; // [rsp+98h] [rbp-58h]
  __int64 v52; // [rsp+A8h] [rbp-48h]
  int v53; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-38h]

  v7 = *(_QWORD *)(a2 + 8);
  v54 = __readfsqword(0x28u);
  v49 = 0;
  v50 = 0;
  if ( v7 )
  {
    v22 = 0;
    *((_QWORD *)&v50 + 1) = v7;
    v49 = qalloc_or_throw(144 * v7);
    for ( i = v49; ; i = v49 )
    {
      v29 = 144 * v22 + i;
      v30 = (const __m128i *)(*(_QWORD *)a2 + 144 * v22);
      v31 = _mm_loadu_si128(v30);
      *(_QWORD *)(v29 + 16) = 0;
      v32 = v30;
      *(_OWORD *)(v29 + 24) = 0;
      *(__m128i *)v29 = v31;
      v33 = v30[1].m128i_u64[1];
      if ( v33 )
      {
        v34 = (void *)qalloc_or_throw(v30[1].m128i_i64[1]);
        *(_QWORD *)(v29 + 32) = v33;
        *(_QWORD *)(v29 + 16) = v34;
        memcpy(v34, (const void *)v32[1].m128i_i64[0], v33);
        *(_QWORD *)(v29 + 24) = v33;
      }
      *(_QWORD *)(v29 + 40) = 0;
      *(_OWORD *)(v29 + 48) = 0;
      v24 = v32[3].m128i_u64[0];
      if ( v24 )
      {
        v35 = (void *)qalloc_or_throw(v32[3].m128i_i64[0]);
        *(_QWORD *)(v29 + 40) = v35;
        *(_QWORD *)(v29 + 56) = v24;
        memcpy(v35, (const void *)v32[2].m128i_i64[1], v24);
        *(_QWORD *)(v29 + 48) = v24;
      }
      *(_QWORD *)(v29 + 64) = 0;
      copy_tinfo_t(v29 + 64, &v32[4]);
      v25 = v32[7].m128i_i64[1];
      ++v22;
      v26 = v32[8].m128i_i64[0];
      *(__m128i *)(v29 + 72) = _mm_loadu_si128((const __m128i *)((char *)v32 + 72));
      v27 = _mm_loadu_si128((const __m128i *)((char *)v32 + 88));
      *(_QWORD *)(v29 + 120) = v25;
      LOBYTE(v25) = v32[8].m128i_i8[8];
      *(__m128i *)(v29 + 88) = v27;
      v28 = _mm_loadu_si128((const __m128i *)((char *)v32 + 104));
      *(_QWORD *)(v29 + 128) = v26;
      *(_BYTE *)(v29 + 136) = v25;
      *(__m128i *)(v29 + 104) = v28;
      if ( v7 == v22 )
        break;
    }
    *(_QWORD *)&v50 = v7;
  }
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v52 = *(_QWORD *)(a2 + 40);
  v9 = *(_DWORD *)(a2 + 48);
  v51 = v8;
  v53 = v9;
  v14 = create_tinfo(a1, a3, 13, &v49);
  if ( (_BYTE)v14 )
  {
    if ( (*(_BYTE *)(a4 + 108) & 0x10) != 0 )
    {
      v46 = 0;
      v45 = nullptr;
      if ( !(unsigned __int8)sub_F6A0(a1, (_QWORD *)a2, &v49, (__int64 *)&v45) )
      {
        v40 = s1;
        if ( (_QWORD)v46 )
          v40 = v45;
        sub_E8A0((__int64)&v47, a2, v36, v37, v38, v39, (__int128)_mm_loadu_si128((const __m128i *)&a7));
        v41 = s1;
        if ( v48 )
          v41 = v47;
        sub_7470((__int64)"warning: udt validation failed for %s: %s\n", v41, v40);
        if ( v47 )
        {
          v48 = 0;
          qfree(v47);
        }
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
    }
  }
  else
  {
    sub_E8A0((__int64)&v47, a3, v10, v11, v12, v13, (__int128)_mm_loadu_si128((const __m128i *)&a7));
    v42 = s1;
    if ( v48 )
      v42 = v47;
    sub_67C0((__int64 *)(a4 + 80), (__int64)"failed to create udt for %s", v42);
    if ( v47 )
    {
      v48 = 0;
      qfree(v47);
    }
    ++*(_QWORD *)(a4 + 136);
  }
  v15 = v49;
  if ( v49 )
  {
    v16 = v50;
    if ( (_QWORD)v50 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 144 * v17);
        clear_tinfo_t(v18 + 8);
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        v15 = v49;
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v15);
  }
  return v14;
}
