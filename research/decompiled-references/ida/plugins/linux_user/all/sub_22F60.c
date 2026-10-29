unsigned __int64 __fastcall sub_22F60(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        __m128 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        size_t a10)
{
  __m128i v10; // xmm0
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  const char *v14; // r12
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // ebp
  const char *v18; // rdi
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  const char *v24; // rbx
  __int64 v25; // r15
  int v26; // r13d
  __int64 v27; // rax
  const char *v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  size_t v32; // r14
  void *v33; // rbp
  void *v34; // r12
  size_t v35; // r10
  __int64 v36; // rax
  size_t v37; // r11
  unsigned __int64 v38; // rax
  __m128i v39; // xmm0
  size_t v40; // rax
  size_t v41; // r14
  __int64 v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // r15
  __int64 v45; // r12
  _QWORD *v46; // r13
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rbx
  __int64 v51; // r12
  unsigned __int64 v52; // r15
  _QWORD *v53; // rax
  unsigned __int64 *v54; // r12
  unsigned __int64 v55; // rdx
  int v56; // r9d
  const char *v57; // r8
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rbp
  _QWORD *v61; // rbx
  void *v63; // rdi
  void *v64; // rdx
  unsigned __int64 *v66; // [rsp+8h] [rbp-138h]
  size_t v67; // [rsp+8h] [rbp-138h]
  size_t v68; // [rsp+8h] [rbp-138h]
  size_t v69; // [rsp+8h] [rbp-138h]
  size_t v70; // [rsp+8h] [rbp-138h]
  size_t v71; // [rsp+10h] [rbp-130h]
  __int64 v72; // [rsp+10h] [rbp-130h]
  size_t v73; // [rsp+10h] [rbp-130h]
  __int64 v74; // [rsp+10h] [rbp-130h]
  __m128i n; // [rsp+18h] [rbp-128h] BYREF
  _QWORD *v76; // [rsp+28h] [rbp-118h]
  size_t v77; // [rsp+30h] [rbp-110h]
  int v78; // [rsp+3Ch] [rbp-104h]
  size_t v79; // [rsp+40h] [rbp-100h]
  __int64 v80; // [rsp+48h] [rbp-F8h] BYREF
  __int128 v81; // [rsp+50h] [rbp-F0h]
  const char *v82; // [rsp+68h] [rbp-D8h] BYREF
  __int128 v83; // [rsp+70h] [rbp-D0h]
  __int64 (__fastcall **v84)(); // [rsp+88h] [rbp-B8h] BYREF
  int v85; // [rsp+90h] [rbp-B0h]
  const char **v86; // [rsp+98h] [rbp-A8h]
  __int64 v87; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-90h]
  __int64 v89; // [rsp+B8h] [rbp-88h]
  void *dest[2]; // [rsp+C0h] [rbp-80h]
  __int128 v91; // [rsp+D0h] [rbp-70h]
  __int128 v92; // [rsp+E0h] [rbp-60h]
  int v93; // [rsp+FCh] [rbp-44h] BYREF
  unsigned __int64 v94; // [rsp+100h] [rbp-40h]

  v10.m128i_i64[0] = 0;
  v76 = (_QWORD *)a2;
  v94 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a2 + 8);
  v81 = 0;
  v80 = 0;
  n.m128i_i64[1] = v11;
  if ( !v11 )
  {
    v12 = 0;
    v23 = *(_QWORD *)(a1 + 1184);
    v67 = a1 + 1168;
    v72 = v23;
    if ( a1 + 1168 != v23 )
      goto LABEL_22;
    goto LABEL_89;
  }
  v12 = 0;
  a10 = 0;
  do
  {
    v13 = *v76 + 80 * a10;
    n.m128i_i64[0] = *(_QWORD *)(v13 + 24);
    if ( !n.m128i_i64[0] )
    {
      v14 = s;
      if ( v12 )
      {
LABEL_5:
        v66 = (unsigned __int64 *)v13;
        v15 = v80;
        v16 = 0;
        v71 = a10;
        v17 = 0;
        while ( 1 )
        {
          v18 = s;
          v19 = (unsigned __int64 *)(v15 + 80 * v16);
          if ( v19[3] )
            v18 = (const char *)v19[2];
          if ( !strcmp(v18, v14) )
            break;
          v16 = ++v17;
          if ( v17 >= v12 )
          {
            v13 = (__int64)v66;
            a10 = v71;
            v20 = *v66;
            goto LABEL_39;
          }
        }
        v13 = (__int64)v66;
        a10 = v71;
        v20 = *v66;
        if ( v19 )
        {
          v21 = *v19;
          if ( v20 < *v19 )
          {
            *v19 = v20;
            v21 = v20;
          }
          a2 = v19[1];
          if ( a2 < v20 )
          {
            v19[1] = v20;
            a2 = v20;
          }
          v22 = v66[1];
          if ( v22 < v21 )
            *v19 = v22;
          if ( a2 < v22 )
            v19[1] = v22;
          v12 = v81;
          goto LABEL_20;
        }
LABEL_39:
        v33 = nullptr;
        v31 = *(_QWORD *)(v13 + 8);
        if ( n.m128i_i64[0] )
          goto LABEL_36;
      }
      else
      {
        v20 = *(_QWORD *)v13;
        v31 = *(_QWORD *)(v13 + 8);
        v33 = nullptr;
      }
      v35 = *(_QWORD *)(v13 + 48);
      v34 = nullptr;
      if ( !v35 )
        goto LABEL_41;
      goto LABEL_37;
    }
    v14 = *(const char **)(v13 + 16);
    if ( v12 )
      goto LABEL_5;
    v20 = *(_QWORD *)v13;
    v31 = *(_QWORD *)(v13 + 8);
LABEL_36:
    v32 = n.m128i_i64[0];
    v73 = a10;
    v68 = v13;
    v33 = (void *)qalloc_or_throw();
    v34 = nullptr;
    memcpy(v33, *(const void **)(v68 + 16), v32);
    v13 = v68;
    a10 = v73;
    v35 = *(_QWORD *)(v68 + 48);
    if ( !v35 )
      goto LABEL_41;
LABEL_37:
    v77 = a10;
    v74 = v13;
    v69 = v35;
    v34 = (void *)qalloc_or_throw();
    memcpy(v34, *(const void **)(v74 + 40), v69);
    a10 = v77;
    v13 = v74;
    v35 = v69;
LABEL_41:
    v36 = v81;
    v37 = *(_QWORD *)(v13 + 64);
    LODWORD(a9) = *(unsigned __int16 *)(v13 + 72);
    a2 = v80;
    a3 = v81 + 1;
    if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
    {
      v79 = v35;
      v78 = a9;
      v77 = v37;
      v70 = a10;
      v80 = qvector_reserve();
      a2 = v80;
      v35 = v79;
      v36 = v81;
      LODWORD(a9) = v78;
      v37 = v77;
      a10 = v70;
    }
    a6 = (__m128)v31;
    v38 = a2 + 80 * v36;
    *(__m128i *)v38 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v31);
    v39 = _mm_loadl_epi64(&n);
    *(_QWORD *)(v38 + 16) = v33;
    *(_QWORD *)(v38 + 40) = v34;
    *(__m128i *)(v38 + 24) = _mm_unpacklo_epi64(v39, v39);
    v10 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
    *(_QWORD *)(v38 + 64) = v37;
    *(_WORD *)(v38 + 72) = a9;
    *(__m128i *)(v38 + 48) = v10;
    v12 = v81 + 1;
    *(_QWORD *)&v81 = v81 + 1;
LABEL_20:
    ++a10;
  }
  while ( n.m128i_i64[1] != a10 );
  v23 = *(_QWORD *)(a1 + 1184);
  v67 = a1 + 1168;
  v72 = v23;
  if ( v23 != a1 + 1168 )
  {
    while ( 1 )
    {
LABEL_22:
      v24 = s;
      if ( *(_QWORD *)(v72 + 64) )
        v24 = *(const char **)(v72 + 56);
      v25 = v80;
      if ( v12 )
      {
        while ( 1 )
        {
          v26 = 0;
          v27 = 0;
          while ( 1 )
          {
            v28 = s;
            v29 = v25 + 80 * v27;
            if ( *(_QWORD *)(v29 + 24) )
              v28 = *(const char **)(v29 + 16);
            a2 = (unsigned __int64)v24;
            if ( !strcmp(v28, v24) )
              break;
            v27 = ++v26;
            if ( v26 >= v12 )
              goto LABEL_45;
          }
          if ( !v29 )
            break;
          v30 = std::_Rb_tree_increment();
          LODWORD(v23) = v67;
          if ( v30 == v67 )
            goto LABEL_66;
          v24 = s;
          if ( *(_QWORD *)(v30 + 64) )
            v24 = *(const char **)(v30 + 56);
        }
      }
LABEL_45:
      if ( !(unsigned __int8)sub_22E00((_QWORD *)a1, 8u, v24, *(double *)v10.m128i_i64, *(double *)a5.m128i_i64, a6, a7) )
      {
        *(_OWORD *)dest = 0;
        v87 = 0xFFFFFFFFLL;
        v88 = -1;
        v89 = 0;
        v91 = 0;
        v92 = 0;
        set_debug_event_code();
        if ( (HIDWORD(v89) & 0xFFFFFFFu) - 9 > 1 && (HIDWORD(v89) & 0xFFFFFFF) != 3 )
          sub_10280();
        if ( v24 && (v40 = strlen(v24), (v41 = v40) != 0) )
        {
          v63 = dest[0];
          v64 = (void *)(v40 + 1);
          if ( (unsigned __int64)v91 < v40 + 1 )
          {
            n.m128i_i64[0] = v40 + 1;
            dest[0] = (void *)qvector_reserve();
            v64 = (void *)n.m128i_i64[0];
            v63 = dest[0];
          }
          dest[1] = v64;
          memmove(v63, v24, v41);
          *((_BYTE *)dest[0] + v41) = 0;
        }
        else
        {
          dest[1] = nullptr;
        }
        v88 = -1;
        LOBYTE(v89) = 1;
        a5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
        n.m128i_i32[0] = *(_DWORD *)(a1 + 1340);
        v10.m128i_i64[0] = _mm_shuffle_epi32(a5, 224).m128i_u64[0];
        v87 = v10.m128i_i64[0];
        sub_1EAB0(a1, (__int64)&v87, 0);
        free_debug_event();
      }
      v42 = std::_Rb_tree_increment();
      v43 = std::_Rb_tree_rebalance_for_erase();
      v44 = (_QWORD *)v43;
      if ( *(_QWORD *)(v43 + 176) )
      {
        *(_QWORD *)(v43 + 184) = 0;
        qfree();
      }
      if ( v44[19] )
      {
        v44[20] = 0;
        qfree();
      }
      v45 = v44[15];
      while ( v45 )
      {
        v46 = (_QWORD *)v45;
        sub_122F0(*(_QWORD **)(v45 + 24));
        v47 = *(_QWORD *)(v45 + 40);
        v45 = *(_QWORD *)(v45 + 16);
        if ( v47 )
        {
          v46[6] = 0;
          qfree();
        }
        operator delete(v46, 0x40u);
      }
      if ( v44[10] )
      {
        v44[11] = 0;
        qfree();
      }
      if ( v44[7] )
      {
        v44[8] = 0;
        qfree();
      }
      a2 = 208;
      operator delete(v44, 0xD0u);
      v12 = v81;
      --*(_QWORD *)(a1 + 1200);
      if ( v42 == v67 )
        break;
      v72 = v42;
    }
  }
LABEL_66:
  if ( (int)v12 > 0 )
  {
    v48 = (unsigned int)(v12 - 1);
    v49 = 0;
    v50 = 16 * (5 * v48 + 5);
    do
    {
      v51 = v49 + v80;
      if ( *(_QWORD *)(v49 + v80 + 24) > 1u )
      {
        if ( *(_BYTE *)(a1 + 861) )
          goto LABEL_73;
        a2 = (unsigned __int64)s;
        if ( *(_QWORD *)(a1 + 592) )
          a2 = *(_QWORD *)(a1 + 584);
        if ( strcmp(*(const char **)(v51 + 16), (const char *)a2) )
        {
LABEL_73:
          v52 = *(_QWORD *)v51;
          v53 = *(_QWORD **)(a1 + 1176);
          if ( !v53 )
            goto LABEL_80;
          a2 = v67;
          do
          {
            while ( 1 )
            {
              v23 = v53[2];
              a3 = v53[3];
              if ( v53[4] < v52 )
                break;
              a2 = (unsigned __int64)v53;
              v53 = (_QWORD *)v53[2];
              if ( !v23 )
                goto LABEL_78;
            }
            v53 = (_QWORD *)v53[3];
          }
          while ( a3 );
LABEL_78:
          if ( a2 == v67 || v52 < *(_QWORD *)(a2 + 32) )
          {
LABEL_80:
            a2 = 0xFFFFFFFFLL;
            if ( (unsigned int)sub_1F860(a1, 0xFFFFFFFF, *(_QWORD *)v51, (unsigned __int64 *)&v93, 4, 0) == 4
              && v93 == 1179403647 )
            {
              v10.m128i_i64[0] = 0;
              v82 = nullptr;
              v54 = (unsigned __int64 *)s;
              v83 = 0;
              if ( *(_QWORD *)(v49 + v80 + 24) )
                v54 = *(unsigned __int64 **)(v49 + v80 + 16);
              v84 = off_44E58;
              v86 = &v82;
              v85 = 4;
              sub_2DD30(v54, &v84, 0, v23, a9, a10);
              v55 = sub_17410(a1, &v80, (unsigned __int64 *)(v49 + v80));
              v57 = s;
              if ( (_QWORD)v83 )
                v57 = v82;
              a2 = v52;
              sub_1DF80(a1, v52, v55, v54, v57, v56);
              if ( v82 )
              {
                *(_QWORD *)&v83 = 0;
                qfree();
              }
            }
          }
        }
      }
      v49 += 80;
    }
    while ( v49 != v50 );
  }
LABEL_89:
  sub_1FFD0(a1, a2, a3, v23, a9, a10, *(double *)v10.m128i_i64);
  v58 = v80;
  if ( v80 )
  {
    v59 = v81;
    if ( (_QWORD)v81 )
    {
      v60 = 0;
      do
      {
        v61 = (_QWORD *)(v58 + 80 * v60);
        if ( v61[5] )
        {
          v61[6] = 0;
          qfree();
        }
        if ( v61[2] )
        {
          v61[3] = 0;
          qfree();
        }
        ++v60;
        v58 = v80;
      }
      while ( v59 != v60 );
    }
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  return v94 - __readfsqword(0x28u);
}

