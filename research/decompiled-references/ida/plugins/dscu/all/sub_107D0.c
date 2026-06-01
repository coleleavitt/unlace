__int64 __fastcall sub_107D0(_QWORD *a1, unsigned __int64 a2, char a3, double a4, __m128i a5, __m128 si128, __m128 a7)
{
  __int64 v8; // rdi
  _QWORD *v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 *v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  __m128i v21; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v25; // rdi
  __int64 v26; // rbp
  size_t v27; // r14
  __int64 v28; // rbp
  void *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  const char *v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rbp
  __int64 *v38; // r13
  __int64 v39; // r14
  __int64 v40; // r9
  _QWORD *v41; // r8
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __m128i *v47; // rsi
  __int64 v48; // r13
  unsigned __int64 v49; // rdi
  __m128i v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int64 v56; // r14
  unsigned __int64 v57; // rdi
  __m128i v58; // xmm0
  __int64 v59; // rax
  unsigned __int64 *v60; // rbp
  unsigned __int64 *v61; // r14
  unsigned __int64 v62; // r8
  _OWORD *v63; // r9
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __int64 *v66; // [rsp+8h] [rbp-300h]
  unsigned __int8 v67; // [rsp+8h] [rbp-300h]
  __m128i v68; // [rsp+10h] [rbp-2F8h] BYREF
  _OWORD *v69; // [rsp+20h] [rbp-2E8h]
  __int64 v70; // [rsp+28h] [rbp-2E0h]
  __m128i v71; // [rsp+30h] [rbp-2D8h] BYREF
  char v72; // [rsp+4Fh] [rbp-2B9h] BYREF
  __m128i v73; // [rsp+50h] [rbp-2B8h] BYREF
  __m128i v74; // [rsp+60h] [rbp-2A8h] BYREF
  _OWORD v75[2]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v76; // [rsp+90h] [rbp-278h] BYREF
  __int128 v77; // [rsp+98h] [rbp-270h]
  __int64 v78; // [rsp+A8h] [rbp-260h]
  int v79; // [rsp+B0h] [rbp-258h]
  __m128i v80[2]; // [rsp+C0h] [rbp-248h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-228h]
  int v82; // [rsp+E8h] [rbp-220h]
  char v83; // [rsp+ECh] [rbp-21Ch]
  __int64 v84; // [rsp+F0h] [rbp-218h]
  char v85; // [rsp+F8h] [rbp-210h]
  __int64 v86; // [rsp+108h] [rbp-200h]
  __int128 v87; // [rsp+110h] [rbp-1F8h]
  __m128 v88; // [rsp+120h] [rbp-1E8h]
  char v89; // [rsp+130h] [rbp-1D8h]
  __m128i v90; // [rsp+138h] [rbp-1D0h]
  __int64 v91; // [rsp+148h] [rbp-1C0h]
  __int128 v92; // [rsp+150h] [rbp-1B8h]
  __int16 v93; // [rsp+160h] [rbp-1A8h]
  __int64 v94; // [rsp+188h] [rbp-180h]
  __int128 v95; // [rsp+190h] [rbp-178h]
  __int64 v96; // [rsp+1A0h] [rbp-168h]
  __int128 v97; // [rsp+1A8h] [rbp-160h]
  __int64 v98; // [rsp+1B8h] [rbp-150h]
  __int128 v99; // [rsp+1C0h] [rbp-148h]
  __int64 v100; // [rsp+1D0h] [rbp-138h]
  __int128 v101; // [rsp+1D8h] [rbp-130h]
  __int64 v102; // [rsp+1E8h] [rbp-120h]
  __int128 v103; // [rsp+1F0h] [rbp-118h]
  __int64 v104; // [rsp+200h] [rbp-108h]
  __int128 v105; // [rsp+208h] [rbp-100h]
  __int64 v106; // [rsp+218h] [rbp-F0h]
  __int128 v107; // [rsp+220h] [rbp-E8h]
  __int64 v108; // [rsp+230h] [rbp-D8h]
  __int128 v109; // [rsp+238h] [rbp-D0h]
  __int64 v110; // [rsp+248h] [rbp-C0h]
  __int128 v111; // [rsp+250h] [rbp-B8h]
  __int64 v112; // [rsp+260h] [rbp-A8h]
  __int128 v113; // [rsp+268h] [rbp-A0h]
  __int16 v114; // [rsp+278h] [rbp-90h]
  char v115; // [rsp+27Ah] [rbp-8Eh]
  int v116; // [rsp+27Ch] [rbp-8Ch]
  __int128 v117; // [rsp+280h] [rbp-88h]
  __int64 v118; // [rsp+290h] [rbp-78h]
  __int64 v119; // [rsp+298h] [rbp-70h]
  int v120; // [rsp+2A0h] [rbp-68h]
  __int64 v121; // [rsp+2A8h] [rbp-60h]
  __int128 v122; // [rsp+2B0h] [rbp-58h]
  __int64 v123; // [rsp+2C0h] [rbp-48h]
  unsigned __int64 v124; // [rsp+2C8h] [rbp-40h]

  v8 = a1[13];
  v124 = __readfsqword(0x28u);
  if ( netnode_supfirst(v8, 114) != -1 && !a3 )
    return 1;
  sub_5CB0((__int64)"DSCU: %s");
  v10 = (_QWORD *)a1[14];
  v11.m128i_i64[0] = 0;
  v72 = 1;
  v76 = 0;
  v12 = v10[67];
  v77 = 0;
  v78 = 0;
  v79 = -1;
  if ( (int)v12 > 0 )
  {
    v13 = 0;
    v14 = 32 * ((unsigned int)(v12 - 1) + 1LL);
    do
    {
      a2 = (unsigned __int64)&v73;
      v15 = _mm_loadu_si128((const __m128i *)(v10[66] + v13));
      a5 = _mm_add_epi64(_mm_srli_si128(v15, 8), v15);
      v11 = _mm_unpacklo_epi64(v15, a5);
      v73 = v11;
      rangeset_t_add(&v76, &v73);
      v13 += 32;
    }
    while ( v13 != v14 );
    v10 = (_QWORD *)a1[14];
  }
  v16 = (__int64 *)v10[98];
  v68.m128i_i64[0] = (__int64)&v16[v10[99]];
  if ( (__int64 *)v68.m128i_i64[0] != v16 )
  {
    v66 = v16;
    do
    {
      v17 = *v66;
      v18 = *(_QWORD *)(*v66 + 536);
      if ( (int)v18 > 0 )
      {
        v19 = 0;
        v20 = 32 * ((unsigned int)(v18 - 1) + 1LL);
        do
        {
          a2 = (unsigned __int64)v75;
          v21 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v17 + 528) + v19));
          a5 = _mm_add_epi64(_mm_srli_si128(v21, 8), v21);
          v11 = _mm_unpacklo_epi64(v21, a5);
          v75[0] = v11;
          rangeset_t_add(&v76, v75);
          v19 += 32;
        }
        while ( v20 != v19 );
      }
      ++v66;
    }
    while ( (__int64 *)v68.m128i_i64[0] != v66 );
    v10 = (_QWORD *)a1[14];
  }
  v22 = v10[70];
  if ( (int)v22 > 0 )
  {
    v23 = 0;
    v68.m128i_i64[0] = (unsigned int)(v22 - 1);
    v69 = &callui;
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))v69)(27, a2) )
        goto LABEL_17;
      v25 = a1[14];
      v26 = *(_QWORD *)(v25 + 600) + 24 * v23;
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        v29 = (void *)qalloc_or_throw(*(_QWORD *)(v26 + 8));
        memcpy(v29, *(const void **)v26, v27);
        v28 = sub_9D00(a1[14], v23);
        if ( !v28 )
        {
          a2 = (unsigned int)v23;
          sub_CA10((__int64)"Warning: failed to open subfile %d (%s)\n", v23, (const char *)v29);
          goto LABEL_35;
        }
      }
      else
      {
        v28 = sub_9D00(v25, v23);
        v29 = nullptr;
        if ( !v28 )
        {
          a2 = (unsigned int)v23;
          sub_CA10((__int64)"Warning: failed to open subfile %d (%s)\n", v23, byte_190C8);
LABEL_30:
          v34 = v23 + 1;
          if ( v68.m128i_i64[0] == v23 )
            goto LABEL_37;
          goto LABEL_31;
        }
      }
      v30 = a1[14];
      v31 = a1[3];
      v11.m128i_i64[0] = 0;
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_19120);
      a7 = (__m128)_mm_load_si128((const __m128i *)&xmmword_19130);
      v32 = *(_QWORD *)(v30 + 696);
      v93 = 0;
      a5.m128i_i64[0] = -1;
      v80[0].m128i_i64[0] = (__int64)&off_1E278;
      v80[0].m128i_i64[1] = v31;
      v81 = -1;
      v82 = 8;
      v83 = 1;
      v84 = v28;
      v85 = 0;
      v86 = 0;
      v89 = 0;
      v91 = 0;
      v94 = 0;
      v96 = 0;
      v98 = 0;
      v100 = 0;
      v102 = 0;
      v80[1] = (__m128i)si128;
      v87 = 0;
      v88 = a7;
      v90 = _mm_load_si128((const __m128i *)&xmmword_19140);
      v92 = 0;
      v95 = 0;
      v97 = 0;
      v99 = 0;
      v101 = 0;
      v103 = 0;
      v104 = 0;
      v106 = 0;
      v108 = 0;
      v110 = 0;
      v112 = 0;
      v114 = 0;
      v115 = 0;
      v116 = 0;
      v118 = 0;
      v119 = v32;
      v120 = 2;
      v121 = 0;
      v123 = v30;
      v105 = 0;
      v107 = 0;
      v109 = 0;
      v111 = 0;
      v113 = 0;
      v117 = -1;
      v122 = 0;
      if ( sub_D760((__int64)v80) )
      {
        v33 = qlsize(v28);
        if ( sub_DA70((__int64)v80, 0, v33, 1) )
        {
          a2 = (unsigned __int64)&v76;
          if ( !(unsigned __int8)sub_FEC0((__int64)a1, (__m128i *)&v76, (__int64)v80, 0, (unsigned int)v23, &v72) )
          {
            sub_6B00((__int64)v80);
            close_linput(v28);
            if ( v29 )
              qfree(v29);
            goto LABEL_17;
          }
          sub_6B00((__int64)v80);
          close_linput(v28);
          if ( v29 )
            qfree(v29);
          goto LABEL_30;
        }
      }
      v35 = byte_190C8;
      a2 = (unsigned int)v23;
      if ( v27 )
        v35 = (const char *)v29;
      sub_CA10((__int64)"Warning: failed to parse header for module %d (%s)\n", (unsigned int)v23, v35);
      sub_6B00((__int64)v80);
      close_linput(v28);
LABEL_35:
      if ( !v29 )
        goto LABEL_30;
      qfree(v29);
      v34 = v23 + 1;
      if ( v68.m128i_i64[0] == v23 )
      {
LABEL_37:
        v10 = (_QWORD *)a1[14];
        break;
      }
LABEL_31:
      v23 = v34;
    }
  }
  v67 = sub_10440((__int64)a1, (__m128i *)&v76, (__int64)v10, &v72);
  if ( !v67 )
    goto LABEL_17;
  sub_BE90((__int64)a1, (__int64)&v76, (_QWORD *)a1[14]);
  v36 = a1[14];
  v37 = *(__int64 **)(v36 + 784);
  v38 = &v37[*(_QWORD *)(v36 + 792)];
  if ( v38 == v37 )
  {
LABEL_50:
    sub_C0E0(
      (__int64)a1,
      (__int64)&v76,
      &v72,
      *(double *)v11.m128i_i64,
      *(double *)a5.m128i_i64,
      *(double *)si128.m128_u64,
      a7);
    v41 = (_QWORD *)a1[14];
    memset(v75, 0, 24);
    v42 = v41[67];
    if ( (int)v42 <= 0 )
    {
      v52 = v41[98];
      v47 = nullptr;
      v70 = v52 + 8LL * v41[99];
      v45 = 0;
      if ( v52 == v70 )
        goto LABEL_18;
    }
    else
    {
      v43 = (unsigned int)(v42 - 1);
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v40 = 32 * v43;
      v47 = nullptr;
      v48 = v40;
      while ( 1 )
      {
        v49 = v45 + 1;
        v50 = _mm_loadu_si128((const __m128i *)(v41[66] + v44));
        v65 = _mm_unpacklo_epi64(v50, _mm_add_epi64(_mm_srli_si128(v50, 8), v50));
        v74 = v65;
        if ( &v74 < v47 || &v74 >= &v47[v46] )
        {
          if ( v46 < v49 )
          {
            v68.m128i_i64[0] = (__int64)v41;
            *(_QWORD *)&v75[0] = qvector_reserve(v75, v47, v45 + 1, 16, v41, v40);
            v47 = *(__m128i **)&v75[0];
            v41 = (_QWORD *)v68.m128i_i64[0];
            v45 = *((_QWORD *)&v75[0] + 1);
          }
          v47[v45] = _mm_load_si128(&v74);
        }
        else
        {
          if ( v46 < v49 )
          {
            v69 = v41;
            v68 = v65;
            *(_QWORD *)&v75[0] = qvector_reserve(v75, v47, v49, 16, v41, v40);
            v47 = *(__m128i **)&v75[0];
            v41 = v69;
            v45 = *((_QWORD *)&v75[0] + 1);
            v65 = _mm_load_si128(&v68);
          }
          v47[v45] = v65;
        }
        v47 = *(__m128i **)&v75[0];
        v45 = ++*((_QWORD *)&v75[0] + 1);
        if ( v48 == v44 )
          break;
        v46 = *(_QWORD *)&v75[1];
        v44 += 32;
      }
      v51 = a1[14];
      v52 = *(_QWORD *)(v51 + 784);
      v70 = v52 + 8LL * *(_QWORD *)(v51 + 792);
      if ( v70 == v52 )
        goto LABEL_78;
    }
    v68.m128i_i64[0] = v52;
    v69 = v75;
    do
    {
      v53 = *(_QWORD *)v68.m128i_i64[0];
      v54 = *(_QWORD *)(*(_QWORD *)v68.m128i_i64[0] + 536LL);
      if ( (int)v54 > 0 )
      {
        v55 = 0;
        v56 = 32 * ((unsigned int)(v54 - 1) + 1LL);
        do
        {
          v57 = v45 + 1;
          v58 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v53 + 528) + v55));
          v64 = _mm_unpacklo_epi64(v58, _mm_add_epi64(_mm_srli_si128(v58, 8), v58));
          v80[0] = v64;
          if ( v80 < v47 || v80 >= &v47[*(_QWORD *)&v75[1]] )
          {
            if ( *(_QWORD *)&v75[1] < v57 )
            {
              *(_QWORD *)&v75[0] = qvector_reserve(v69, v47, v45 + 1, 16, v41, v40);
              v45 = *((_QWORD *)&v75[0] + 1);
              v47 = *(__m128i **)&v75[0];
            }
            v47[v45] = _mm_load_si128(v80);
          }
          else
          {
            if ( *(_QWORD *)&v75[1] < v57 )
            {
              v71 = v64;
              *(_QWORD *)&v75[0] = qvector_reserve(v69, v47, v45 + 1, 16, v41, v40);
              v47 = *(__m128i **)&v75[0];
              v64 = _mm_load_si128(&v71);
              v45 = *((_QWORD *)&v75[0] + 1);
            }
            v47[v45] = v64;
          }
          v55 += 32;
          v47 = *(__m128i **)&v75[0];
          v45 = ++*((_QWORD *)&v75[0] + 1);
        }
        while ( v55 != v56 );
      }
      v68.m128i_i64[0] += 8;
    }
    while ( v70 != v68.m128i_i64[0] );
LABEL_78:
    v59 = v45;
    v60 = (unsigned __int64 *)&v47[v59];
    if ( &v47[v59] != v47 )
    {
      v61 = (unsigned __int64 *)v47;
      do
      {
        memset(v80, 0, sizeof(v80));
        v62 = *v61;
        v63 = (_OWORD *)v61[1];
        LODWORD(v81) = -1;
        if ( v62 < (unsigned __int64)v63 )
        {
          v69 = v63;
          v68.m128i_i64[0] = v62;
          v80[0].m128i_i64[0] = qvector_reserve(v80, 0, 1, 16, v62, v63);
          *(__m128i *)(v80[0].m128i_i64[0] + 16 * v80[0].m128i_i64[1]++) = _mm_unpacklo_epi64(
                                                                             (__m128i)v68.m128i_u64[0],
                                                                             (__m128i)(unsigned __int64)v69);
        }
        rangeset_t_intersect(v80, &v76);
        sub_C020((__int64)a1, (__int64)v80);
        if ( v80[0].m128i_i64[0] )
        {
          v80[0].m128i_i64[1] = 0;
          qfree(v80[0].m128i_i64[0]);
        }
        v61 += 2;
      }
      while ( v60 != v61 );
      v47 = *(__m128i **)&v75[0];
    }
    if ( v47 )
    {
      *((_QWORD *)&v75[0] + 1) = 0;
      qfree(v47);
    }
    goto LABEL_18;
  }
  v69 = &callui;
  while ( 1 )
  {
    v39 = *v37;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))v69)(27)
      || !(unsigned __int8)sub_10440((__int64)a1, (__m128i *)&v76, v39, &v72) )
    {
      break;
    }
    sub_BE90((__int64)a1, (__int64)&v76, (_QWORD *)v39);
    if ( *(_BYTE *)(v39 + 860) )
      sub_BF70((__int64)a1, (__int64)&v76, v39, *(double *)v11.m128i_i64, *(double *)a5.m128i_i64, si128);
    if ( v38 == ++v37 )
      goto LABEL_50;
  }
LABEL_17:
  v67 = 0;
LABEL_18:
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  if ( v72 )
    callui(24, 10, 0);
  return v67;
}

