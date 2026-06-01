unsigned __int64 __fastcall sub_F240(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  __int64 flags; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // r9
  void *v13; // rax
  const void *v14; // rsi
  size_t v15; // rdx
  __int64 *v16; // rbx
  char *v18; // r12
  char *v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // r8
  void *v22; // r14
  __m128i v23; // xmm0
  __int64 v24; // rax
  size_t v25; // r9
  size_t v26; // r15
  __m128i v27; // xmm0
  __int64 v28; // r8
  void *v29; // r14
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  int v32; // edx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rdx
  __int64 range; // rax
  __int64 v36; // r13
  void *v37; // rax
  const void *v38; // rsi
  __int64 v39; // rdi
  __int64 *v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-270h]
  size_t v43[2]; // [rsp+10h] [rbp-268h] BYREF
  size_t v44[2]; // [rsp+20h] [rbp-258h] BYREF
  size_t n; // [rsp+30h] [rbp-248h]
  __int64 v46; // [rsp+38h] [rbp-240h]
  __int64 v47; // [rsp+48h] [rbp-230h] BYREF
  __int128 v48; // [rsp+50h] [rbp-228h] BYREF
  __int64 v49; // [rsp+60h] [rbp-218h]
  __int128 v50; // [rsp+68h] [rbp-210h]
  __int64 v51; // [rsp+78h] [rbp-200h]
  __m128i si128; // [rsp+80h] [rbp-1F8h]
  __int128 v53; // [rsp+90h] [rbp-1E8h]
  __int64 v54; // [rsp+A0h] [rbp-1D8h]
  __int128 v55; // [rsp+A8h] [rbp-1D0h]
  __int128 v56; // [rsp+C0h] [rbp-1B8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-1A8h]
  __int128 v58; // [rsp+D8h] [rbp-1A0h]
  __int64 v59; // [rsp+E8h] [rbp-190h]
  __int128 v60; // [rsp+F0h] [rbp-188h]
  int v61; // [rsp+100h] [rbp-178h]
  __int64 v62; // [rsp+108h] [rbp-170h]
  __int128 v63; // [rsp+110h] [rbp-168h]
  __int64 v64; // [rsp+120h] [rbp-158h]
  __int128 v65; // [rsp+128h] [rbp-150h]
  void *v66; // [rsp+140h] [rbp-138h] BYREF
  __m128i v67; // [rsp+148h] [rbp-130h]
  __int64 v68; // [rsp+158h] [rbp-120h] BYREF
  int v69; // [rsp+160h] [rbp-118h]
  __int64 v70; // [rsp+168h] [rbp-110h]
  _BYTE v71[168]; // [rsp+170h] [rbp-108h] BYREF
  _BYTE v72[24]; // [rsp+218h] [rbp-60h] BYREF
  char v73; // [rsp+230h] [rbp-48h] BYREF
  unsigned __int64 v74; // [rsp+238h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( a3 == a2 )
    return v74 - __readfsqword(0x28u);
  v4 = a3;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    return v74 - __readfsqword(0x28u);
  v43[0] = getseg();
  if ( !v43[0] )
    return v74 - __readfsqword(0x28u);
  v5 = getseg();
  if ( !v5 )
    return v74 - __readfsqword(0x28u);
  v51 = a1;
  v57 = 0;
  v59 = a1;
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v49 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = -1;
  v63 = 0;
  v65 = 0;
  v48 = 0;
  v50 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
  v53 = -1;
  v55 = 0;
  flags = get_flags_ex();
  v7 = *(_QWORD *)(a1 + 128);
  if ( (~BYTE1(flags) & 6) != 0 )
  {
    v46 = a1 + 120;
    if ( !v7 )
    {
LABEL_7:
      v66 = 0;
      v67 = 0;
      goto LABEL_8;
    }
    range = rangeset_t_find_range();
    v36 = *(_QWORD *)(a1 + 128);
    if ( !range )
    {
LABEL_67:
      v66 = 0;
      v67 = 0;
      if ( v36 )
      {
        v37 = (void *)qalloc_or_throw();
        v38 = *(const void **)(a1 + 120);
        v66 = v37;
        v67.m128i_i64[1] = v36;
        memcpy(v37, v38, 16 * v36);
        v67.m128i_i64[0] = v36;
      }
LABEL_8:
      v8 = *(_QWORD *)(a1 + 160);
      v9 = a1 + 168;
      v68 = 0;
      v10 = 7;
      v69 = -1;
      v70 = v8;
      v44[0] = (size_t)v71;
      v11 = v71;
      do
      {
        v12 = *(_QWORD *)(v9 + 8);
        *(_QWORD *)v11 = 0;
        *(_OWORD *)(v11 + 8) = 0;
        if ( v12 )
        {
          v42 = v12;
          n = 8 * v12;
          v13 = (void *)qalloc_or_throw();
          v14 = *(const void **)v9;
          *(_QWORD *)v11 = v13;
          v15 = n;
          *((_QWORD *)v11 + 2) = v42;
          memcpy(v13, v14, v15);
          *((_QWORD *)v11 + 1) = v42;
        }
        v11 += 24;
        --v10;
        v9 += 24;
      }
      while ( v11 != &v73 );
      v73 = *(_BYTE *)(a1 + 360);
      v30 = a2 - *(_QWORD *)v43[0];
      if ( v30 >= *(_QWORD *)(a1 + 368) )
      {
        if ( sub_B6C0(a1, 0, v4) )
        {
          v34 = a2 - *(_QWORD *)(a1 + 368);
          if ( v67.m128i_i64[0] )
          {
            if ( rangeset_t_find_range() )
              goto LABEL_14;
            v34 = a2 - *(_QWORD *)(a1 + 368);
          }
          if ( (unsigned __int8)sub_CC60(&v56, (__int64)&v66, v34, 0) )
            sub_CC60(&v56, v46, a2 - *(_QWORD *)(a1 + 368), 0x30u);
          goto LABEL_14;
        }
        if ( (unsigned __int8)sub_CC60(&v56, (__int64)&v66, v4, 0) )
        {
          v31 = *(_QWORD *)(a1 + 368);
          v32 = v61 & 0xA;
          if ( (v61 & 0xA) != 0 )
            v31 *= 2LL;
          if ( v30 < v31 )
            goto LABEL_14;
          v33 = a2 - v31;
          if ( !*(_QWORD *)(a1 + 128) )
            goto LABEL_54;
          if ( !rangeset_t_find_range() )
          {
            v32 = v61 & 0xA;
LABEL_54:
            if ( (unsigned __int8)sub_DA90((__int64 *)&v48, (__int64)&v66, v33, 0, v32 != 0) )
              sub_DA90((__int64 *)&v48, v46, v33, 0x30u, (v61 & 0xA) != 0);
          }
LABEL_14:
          v16 = (__int64 *)v72;
          do
          {
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
            }
            v16 -= 3;
          }
          while ( v16 != &v68 );
          if ( v66 )
          {
            v67.m128i_i64[0] = 0;
            qfree();
          }
          goto LABEL_20;
        }
      }
      if ( !*(_QWORD *)(a1 + 128) || !rangeset_t_find_range() )
        sub_E800(a1, v4);
      goto LABEL_14;
    }
    if ( !v36 )
      goto LABEL_7;
    if ( !rangeset_t_find_range() )
    {
      v36 = *(_QWORD *)(a1 + 128);
      goto LABEL_67;
    }
LABEL_20:
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree();
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    return v74 - __readfsqword(0x28u);
  }
  n = a1 + 120;
  if ( v7 && rangeset_t_find_range() )
    goto LABEL_20;
  v66 = 0;
  v18 = &v73;
  v19 = v71;
  v68 = 0;
  v69 = -1;
  v70 = 0;
  v44[0] = (size_t)v71;
  v67 = 0;
  do
  {
    *(_QWORD *)v19 = 0;
    v19 += 24;
    *((_OWORD *)v19 - 1) = 0;
  }
  while ( v19 != &v73 );
  v73 = 0;
  sub_E300(a1, v4);
  if ( *(_QWORD *)(a1 + 128) && rangeset_t_find_range()
    || (sub_E800(a1, v4), *(_QWORD *)(a1 + 128)) && rangeset_t_find_range() )
  {
    do
    {
      v39 = *((_QWORD *)v18 - 3);
      v18 -= 24;
      if ( v39 )
      {
        *((_QWORD *)v18 + 1) = 0;
        qfree();
      }
    }
    while ( v18 != (char *)v44[0] );
    if ( v66 )
    {
      v67.m128i_i64[0] = 0;
      qfree();
    }
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(v5 + 8) - v4;
  if ( v20 >= *(_QWORD *)(a1 + 368) )
  {
    v21 = *(_QWORD *)(a1 + 128);
    v22 = 0;
    if ( v21 )
    {
      v46 = *(_QWORD *)(a1 + 128);
      v43[0] = 16 * v21;
      v22 = (void *)qalloc_or_throw();
      memcpy(v22, *(const void **)(a1 + 120), v43[0]);
      v21 = v46;
    }
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( v66 )
    {
      *(__m128i *)v43 = v23;
      v67.m128i_i64[0] = 0;
      qfree();
      v23 = _mm_load_si128((const __m128i *)v43);
    }
    v24 = *(_QWORD *)(a1 + 160);
    v66 = v22;
    v25 = a1 + 168;
    v26 = v44[0];
    v67 = v23;
    v68 = 0;
    v70 = v24;
    do
    {
      v28 = *(_QWORD *)(v25 + 8);
      v29 = 0;
      if ( v28 )
      {
        v43[0] = v25;
        v46 = v28;
        v44[0] = 8 * v28;
        v29 = (void *)qalloc_or_throw();
        memcpy(v29, *(const void **)v43[0], v44[0]);
        v28 = v46;
        v25 = v43[0];
      }
      v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
      if ( *(_QWORD *)v26 )
      {
        *(_QWORD *)(v26 + 8) = 0;
        v43[0] = v25;
        *(__m128i *)v44 = v27;
        qfree();
        v27 = _mm_load_si128((const __m128i *)v44);
        v25 = v43[0];
      }
      *(_QWORD *)v26 = v29;
      v26 += 24LL;
      v25 += 24LL;
      *(__m128i *)(v26 - 16) = v27;
    }
    while ( (char *)v26 != &v73 );
    v73 = *(_BYTE *)(a1 + 360);
    if ( (unsigned __int8)sub_CC60(&v56, (__int64)&v66, v4, 0) )
    {
      sub_CC60(&v56, n, v4, 0x30u);
    }
    else if ( v20 >= *(_QWORD *)(a1 + 368) )
    {
      do
      {
        if ( !(unsigned __int8)sub_BB70(a1, &v47, v4) )
          break;
        if ( !v47 )
          break;
        if ( !(unsigned __int8)is_loaded() )
          break;
        if ( (unsigned __int8)sub_B650(v47) )
          break;
        if ( !(unsigned __int8)sub_E300(a1, v47) )
          break;
        sub_10380(a1, v4, 4, "", 0);
        v41 = *(_QWORD *)(a1 + 368);
        v20 -= v41;
        v4 += v41;
      }
      while ( v20 >= v41 );
    }
  }
  v40 = (__int64 *)v72;
  do
  {
    if ( *v40 )
    {
      v40[1] = 0;
      qfree();
    }
    v40 -= 3;
  }
  while ( &v68 != v40 );
  if ( v66 )
  {
    v67.m128i_i64[0] = 0;
    qfree();
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  return v74 - __readfsqword(0x28u);
}
