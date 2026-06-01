unsigned __int64 __fastcall sub_216A20(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  char merge_state; // al
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  int *v9; // rbp
  unsigned __int64 v10; // rdx
  int *v11; // rdi
  __int64 *v12; // rdx
  int *v13; // r15
  __int64 v14; // r12
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  size_t v23; // r15
  size_t v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rsi
  __m128i *v27; // rax
  __m128i *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  unsigned __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rbp
  _QWORD *v37; // rbx
  unsigned __int64 v38; // rdx
  int *v39; // rdi
  int *v40; // r14
  int v41; // r12d
  int *i; // r15
  int *v43; // r13
  _QWORD *v45; // r15
  int *v46; // [rsp+0h] [rbp-208h]
  int v47; // [rsp+Ch] [rbp-1FCh]
  int v48; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v49; // [rsp+18h] [rbp-1F0h]
  int *v50; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v51; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v52; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v53; // [rsp+48h] [rbp-1C0h] BYREF
  void *v54; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v55; // [rsp+68h] [rbp-1A0h]
  __int64 v56; // [rsp+80h] [rbp-188h] BYREF
  __m128i si128; // [rsp+88h] [rbp-180h]
  __int64 v58; // [rsp+98h] [rbp-170h]
  void *src; // [rsp+A0h] [rbp-168h]
  size_t n[2]; // [rsp+A8h] [rbp-160h]
  void *v61; // [rsp+B8h] [rbp-150h]
  size_t v62[2]; // [rsp+C0h] [rbp-148h]
  __int64 v63; // [rsp+D0h] [rbp-138h]
  unsigned __int64 v64; // [rsp+D8h] [rbp-130h]
  __int64 v65; // [rsp+E0h] [rbp-128h]
  int v66[4]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v67; // [rsp+100h] [rbp-108h]
  int v68; // [rsp+108h] [rbp-100h]
  void *v69; // [rsp+110h] [rbp-F8h]
  __int128 v70; // [rsp+118h] [rbp-F0h]
  void *v71; // [rsp+128h] [rbp-E0h]
  __int128 v72; // [rsp+130h] [rbp-D8h]
  __int64 v73; // [rsp+140h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+148h] [rbp-C0h]
  __int64 v75; // [rsp+150h] [rbp-B8h]
  __m128i v76; // [rsp+160h] [rbp-A8h] BYREF
  __m128i v77; // [rsp+170h] [rbp-98h] BYREF
  __m128i v78; // [rsp+180h] [rbp-88h] BYREF
  __m128i v79; // [rsp+190h] [rbp-78h] BYREF
  __m128i v80; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v81; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v83; // [rsp+1C8h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  v48 = v1;
  if ( !(_DWORD)v1 )
    return v83 - __readfsqword(0x28u);
  v49 = (int)v1;
  v50 = (int *)qvector_reserve();
  memset(v50, 0, 4LL * (int)v1);
  v51 = (int)v1;
  v4 = 0;
  if ( (int)v1 > 0 )
  {
    do
    {
      v50[v4] = v4;
      v5 = v4++;
    }
    while ( (_DWORD)v1 - 1 != v5 );
  }
  merge_state = get_merge_state();
  v7 = (int)v1;
  v8 = 4LL * (int)v1;
  v9 = &v50[(unsigned __int64)v8 / 4];
  if ( (merge_state & 3) == 0 )
  {
    if ( !v8 )
    {
      v9 = v50;
      goto LABEL_20;
    }
    if ( v8 >> 2 )
    {
      _BitScanReverse64(&v38, v8 >> 2);
      sub_2167F0((__int64)v50, &v50[(int)v1], 2LL * (int)v38, (_QWORD *)a1);
      v39 = v50;
      if ( v8 > 64 )
      {
        v40 = v50 + 16;
        sub_2145C0(v50, v50 + 16, (_QWORD *)a1);
        do
        {
          v41 = *v40;
          for ( i = v40; ; i[1] = *i )
          {
            v43 = i;
            if ( !sub_211240((_QWORD *)a1, v41, *--i) )
              break;
          }
          ++v40;
          *v43 = v41;
        }
        while ( v9 != v40 );
        goto LABEL_19;
      }
    }
    else
    {
      sub_2167F0((__int64)v50, &v50[(int)v1], -2, (_QWORD *)a1);
      v39 = v50;
    }
    sub_2145C0(v39, v9, (_QWORD *)a1);
LABEL_19:
    v7 = v51;
    v9 = v50;
    goto LABEL_20;
  }
  if ( v50 != v9 )
  {
    if ( v8 >> 2 )
    {
      _BitScanReverse64(&v10, v8 >> 2);
      sub_216020((unsigned int *)v50, &v50[(int)v1], 2LL * (int)v10, (__int64 *)(a1 + 432));
      v11 = v50;
      v12 = (__int64 *)(a1 + 432);
      if ( v8 > 64 )
      {
        v46 = v50 + 16;
        sub_2143E0(v50, v50 + 16, v12);
        while ( 1 )
        {
          v13 = v46;
          v47 = *v46;
          v14 = 104LL * *v46;
          while ( 1 )
          {
            v17 = *(_QWORD *)(a1 + 432);
            v16 = *(v13 - 1);
            v18 = v17 + v14;
            v19 = v17 + 104LL * v16;
            v20 = *(_DWORD *)(v19 + 24) & 0x100;
            if ( (*(_BYTE *)(v17 + v14 + 25) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_15;
            }
            else if ( v20 )
            {
              break;
            }
            v15 = sub_1BE710((int *)v18, (int *)v19);
            if ( !v15 )
            {
              if ( *(_QWORD *)(v18 + 16) >= *(_QWORD *)(v19 + 16) )
                break;
              goto LABEL_14;
            }
            if ( v15 >= 0 )
              break;
LABEL_14:
            v16 = *(v13 - 1);
LABEL_15:
            *v13-- = v16;
          }
          ++v46;
          *v13 = v47;
          if ( v9 == v46 )
            goto LABEL_19;
        }
      }
    }
    else
    {
      sub_216020((unsigned int *)v50, &v50[(int)v1], -2, (__int64 *)(a1 + 432));
      v11 = v50;
      v12 = (__int64 *)(a1 + 432);
    }
    sub_2143E0(v11, v9, v12);
    goto LABEL_19;
  }
LABEL_20:
  if ( v7 )
  {
    v21 = 0;
    v22 = 0;
    while ( v9[v22] == v21 )
    {
      v22 = ++v21;
      if ( v21 >= v7 )
        goto LABEL_58;
    }
    v52 = 0;
    v53 = 0;
    v55 = 0;
    v54 = (void *)qvector_reserve();
    memset(v54, 0, 4 * v49);
    *(_QWORD *)&v55 = v49;
    if ( v49 )
    {
      v56 = 0;
      v58 = 1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
      src = nullptr;
      v61 = nullptr;
      v63 = 0;
      v64 = 0xFFFFFFFF00000000LL;
      v65 = 0;
      *(_OWORD *)n = 0;
      *(_OWORD *)v62 = 0;
      if ( v49 < v53.m128i_i64[0] )
      {
        v45 = (_QWORD *)(v52 + 104 * v49);
        clear_tinfo_t();
        if ( v45[7] )
        {
          v45[8] = 0;
          qfree();
        }
        if ( v45[4] )
        {
          v45[5] = 0;
          qfree();
        }
        cleanup_argloc();
        v53.m128i_i64[0] = v49;
      }
      else if ( (unsigned __int64)&v56 < v52 || (unsigned __int64)&v56 >= v52 + 104 * v53.m128i_i64[1] )
      {
        sub_84670((__int64 *)&v52, v49, (__int64)&v56);
      }
      else
      {
        v66[0] = 0;
        copy_argloc();
        v23 = n[0];
        v69 = nullptr;
        v70 = 0;
        v67 = si128.m128i_i64[1];
        v68 = v58;
        if ( n[0] )
        {
          v69 = (void *)qalloc_or_throw();
          *((_QWORD *)&v70 + 1) = v23;
          memcpy(v69, src, v23);
          *(_QWORD *)&v70 = v23;
        }
        v24 = v62[0];
        v71 = nullptr;
        v72 = 0;
        if ( v62[0] )
        {
          v71 = (void *)qalloc_or_throw();
          *((_QWORD *)&v72 + 1) = v24;
          memcpy(v71, v61, v24);
          *(_QWORD *)&v72 = v24;
        }
        v73 = 0;
        copy_tinfo_t();
        v74 = v64;
        v75 = v65;
        sub_84670((__int64 *)&v52, v49, (__int64)v66);
        clear_tinfo_t();
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree();
        }
        if ( v69 )
        {
          *(_QWORD *)&v70 = 0;
          qfree();
        }
        cleanup_argloc();
      }
      clear_tinfo_t();
      if ( v61 )
      {
        v62[0] = 0;
        qfree();
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    if ( v48 > 0 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = (__m128i *)(*(_QWORD *)(a1 + 432) + 104LL * v50[v26]);
        v28 = (__m128i *)(v25 + v52);
        v25 += 104;
        v76 = _mm_loadu_si128(v28);
        v77 = _mm_loadu_si128(v28 + 1);
        v78 = _mm_loadu_si128(v28 + 2);
        v79 = _mm_loadu_si128(v28 + 3);
        v80 = _mm_loadu_si128(v28 + 4);
        v81 = _mm_loadu_si128(v28 + 5);
        v82 = v28[6].m128i_i64[0];
        *v28 = _mm_loadu_si128(v27);
        v28[1] = _mm_loadu_si128(v27 + 1);
        v28[2] = _mm_loadu_si128(v27 + 2);
        v28[3] = _mm_loadu_si128(v27 + 3);
        v28[4] = _mm_loadu_si128(v27 + 4);
        v28[5] = _mm_loadu_si128(v27 + 5);
        v28[6].m128i_i64[0] = v27[6].m128i_i64[0];
        *v27 = _mm_load_si128(&v76);
        v27[1] = _mm_load_si128(&v77);
        v27[2] = _mm_load_si128(&v78);
        v27[3] = _mm_load_si128(&v79);
        v27[4] = _mm_load_si128(&v80);
        v27[5] = _mm_load_si128(&v81);
        v27[6].m128i_i64[0] = v82;
        *((_DWORD *)v54 + v50[v26]) = v26;
        v29 = v26++;
      }
      while ( v48 - 1 != v29 );
    }
    v30 = *(_QWORD *)(a1 + 432);
    v31 = _mm_loadu_si128(&v53);
    v32 = _mm_loadu_si128((const __m128i *)(a1 + 440));
    *(_QWORD *)(a1 + 432) = v52;
    v52 = v30;
    *(__m128i *)(a1 + 440) = v31;
    v53 = v32;
    sub_212580(a1, &v54, 1);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    v33 = v52;
    if ( v52 )
    {
      v34 = v53.m128i_i64[0];
      if ( v53.m128i_i64[0] )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          v37 = (_QWORD *)(v33 + v35);
          clear_tinfo_t();
          if ( *(_QWORD *)(v33 + v35 + 56) )
          {
            v37[8] = 0;
            qfree();
          }
          if ( v37[4] )
          {
            v37[5] = 0;
            qfree();
          }
          ++v36;
          v35 += 104;
          cleanup_argloc();
          v33 = v52;
        }
        while ( v34 != v36 );
      }
      v53.m128i_i64[0] = 0;
      qfree();
    }
    v9 = v50;
  }
LABEL_58:
  if ( v9 )
    qfree();
  return v83 - __readfsqword(0x28u);
}

